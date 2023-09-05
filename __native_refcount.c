#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *refcount___after_branch_decrefs_env_setup(PyTypeObject *type);
PyObject *CPyDef_refcount___after_branch_decrefs_env(void);

static PyObject *
refcount___after_branch_decrefs_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_refcount___after_branch_decrefs_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return refcount___after_branch_decrefs_env_setup(type);
}

static int
refcount___after_branch_decrefs_env_traverse(mypyc___transform___refcount___after_branch_decrefs_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_ordering);
    Py_VISIT(self->_label);
    Py_VISIT(self->_pre_live);
    Py_VISIT(self->_source_defined);
    Py_VISIT(self->_source_borrowed);
    Py_VISIT(self->_source_live_regs);
    Py_VISIT(self->_omitted);
    Py_VISIT(self->_target_pre_live);
    Py_VISIT(self->_decref);
    return 0;
}

static int
refcount___after_branch_decrefs_env_clear(mypyc___transform___refcount___after_branch_decrefs_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_ordering);
    Py_CLEAR(self->_label);
    Py_CLEAR(self->_pre_live);
    Py_CLEAR(self->_source_defined);
    Py_CLEAR(self->_source_borrowed);
    Py_CLEAR(self->_source_live_regs);
    Py_CLEAR(self->_omitted);
    Py_CLEAR(self->_target_pre_live);
    Py_CLEAR(self->_decref);
    return 0;
}

static void
refcount___after_branch_decrefs_env_dealloc(mypyc___transform___refcount___after_branch_decrefs_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, refcount___after_branch_decrefs_env_dealloc)
    refcount___after_branch_decrefs_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem refcount___after_branch_decrefs_env_vtable[1];
static bool
CPyDef_refcount___after_branch_decrefs_env_trait_vtable_setup(void)
{
    CPyVTableItem refcount___after_branch_decrefs_env_vtable_scratch[] = {
        NULL
    };
    memcpy(refcount___after_branch_decrefs_env_vtable, refcount___after_branch_decrefs_env_vtable_scratch, sizeof(refcount___after_branch_decrefs_env_vtable));
    return 1;
}

static PyMethodDef refcount___after_branch_decrefs_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_refcount___after_branch_decrefs_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "after_branch_decrefs_env",
    .tp_new = refcount___after_branch_decrefs_env_new,
    .tp_dealloc = (destructor)refcount___after_branch_decrefs_env_dealloc,
    .tp_traverse = (traverseproc)refcount___after_branch_decrefs_env_traverse,
    .tp_clear = (inquiry)refcount___after_branch_decrefs_env_clear,
    .tp_methods = refcount___after_branch_decrefs_env_methods,
    .tp_basicsize = sizeof(mypyc___transform___refcount___after_branch_decrefs_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_refcount___after_branch_decrefs_env_template = &CPyType_refcount___after_branch_decrefs_env_template_;

static PyObject *
refcount___after_branch_decrefs_env_setup(PyTypeObject *type)
{
    mypyc___transform___refcount___after_branch_decrefs_envObject *self;
    self = (mypyc___transform___refcount___after_branch_decrefs_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = refcount___after_branch_decrefs_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_refcount___after_branch_decrefs_env(void)
{
    PyObject *self = refcount___after_branch_decrefs_env_setup(CPyType_refcount___after_branch_decrefs_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__refcount_____mypyc_lambda__0_after_branch_decrefs_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__(self, instance, owner);
}
PyMemberDef refcount_____mypyc_lambda__0_after_branch_decrefs_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *refcount_____mypyc_lambda__0_after_branch_decrefs_obj_setup(PyTypeObject *type);
PyObject *CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj(void);

static PyObject *
refcount_____mypyc_lambda__0_after_branch_decrefs_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return refcount_____mypyc_lambda__0_after_branch_decrefs_obj_setup(type);
}

static int
refcount_____mypyc_lambda__0_after_branch_decrefs_obj_traverse(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject))));
    return 0;
}

static int
refcount_____mypyc_lambda__0_after_branch_decrefs_obj_clear(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject))));
    return 0;
}

static void
refcount_____mypyc_lambda__0_after_branch_decrefs_obj_dealloc(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, refcount_____mypyc_lambda__0_after_branch_decrefs_obj_dealloc)
    refcount_____mypyc_lambda__0_after_branch_decrefs_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable[2];
static bool
CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_trait_vtable_setup(void)
{
    CPyVTableItem refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__,
        (CPyVTableItem)CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__,
    };
    memcpy(refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable, refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable_scratch, sizeof(refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable));
    return 1;
}

static PyMethodDef refcount_____mypyc_lambda__0_after_branch_decrefs_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_after_branch_decrefs_obj",
    .tp_new = refcount_____mypyc_lambda__0_after_branch_decrefs_obj_new,
    .tp_dealloc = (destructor)refcount_____mypyc_lambda__0_after_branch_decrefs_obj_dealloc,
    .tp_traverse = (traverseproc)refcount_____mypyc_lambda__0_after_branch_decrefs_obj_traverse,
    .tp_clear = (inquiry)refcount_____mypyc_lambda__0_after_branch_decrefs_obj_clear,
    .tp_methods = refcount_____mypyc_lambda__0_after_branch_decrefs_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__refcount_____mypyc_lambda__0_after_branch_decrefs_obj,
    .tp_members = refcount_____mypyc_lambda__0_after_branch_decrefs_obj_members,
    .tp_basicsize = sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject),
    .tp_weaklistoffset = sizeof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_template = &CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_template_;

static PyObject *
refcount_____mypyc_lambda__0_after_branch_decrefs_obj_setup(PyTypeObject *type)
{
    mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *self;
    self = (mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = refcount_____mypyc_lambda__0_after_branch_decrefs_obj_vtable;
    self->vectorcall = CPyPy_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj(void)
{
    PyObject *self = refcount_____mypyc_lambda__0_after_branch_decrefs_obj_setup(CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *refcount___after_branch_increfs_env_setup(PyTypeObject *type);
PyObject *CPyDef_refcount___after_branch_increfs_env(void);

static PyObject *
refcount___after_branch_increfs_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_refcount___after_branch_increfs_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return refcount___after_branch_increfs_env_setup(type);
}

static int
refcount___after_branch_increfs_env_traverse(mypyc___transform___refcount___after_branch_increfs_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_ordering);
    Py_VISIT(self->_label);
    Py_VISIT(self->_pre_live);
    Py_VISIT(self->_pre_borrow);
    Py_VISIT(self->_source_borrowed);
    Py_VISIT(self->_target_pre_live);
    Py_VISIT(self->_target_borrowed);
    Py_VISIT(self->_incref);
    return 0;
}

static int
refcount___after_branch_increfs_env_clear(mypyc___transform___refcount___after_branch_increfs_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_ordering);
    Py_CLEAR(self->_label);
    Py_CLEAR(self->_pre_live);
    Py_CLEAR(self->_pre_borrow);
    Py_CLEAR(self->_source_borrowed);
    Py_CLEAR(self->_target_pre_live);
    Py_CLEAR(self->_target_borrowed);
    Py_CLEAR(self->_incref);
    return 0;
}

static void
refcount___after_branch_increfs_env_dealloc(mypyc___transform___refcount___after_branch_increfs_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, refcount___after_branch_increfs_env_dealloc)
    refcount___after_branch_increfs_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem refcount___after_branch_increfs_env_vtable[1];
static bool
CPyDef_refcount___after_branch_increfs_env_trait_vtable_setup(void)
{
    CPyVTableItem refcount___after_branch_increfs_env_vtable_scratch[] = {
        NULL
    };
    memcpy(refcount___after_branch_increfs_env_vtable, refcount___after_branch_increfs_env_vtable_scratch, sizeof(refcount___after_branch_increfs_env_vtable));
    return 1;
}

static PyMethodDef refcount___after_branch_increfs_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_refcount___after_branch_increfs_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "after_branch_increfs_env",
    .tp_new = refcount___after_branch_increfs_env_new,
    .tp_dealloc = (destructor)refcount___after_branch_increfs_env_dealloc,
    .tp_traverse = (traverseproc)refcount___after_branch_increfs_env_traverse,
    .tp_clear = (inquiry)refcount___after_branch_increfs_env_clear,
    .tp_methods = refcount___after_branch_increfs_env_methods,
    .tp_basicsize = sizeof(mypyc___transform___refcount___after_branch_increfs_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_refcount___after_branch_increfs_env_template = &CPyType_refcount___after_branch_increfs_env_template_;

static PyObject *
refcount___after_branch_increfs_env_setup(PyTypeObject *type)
{
    mypyc___transform___refcount___after_branch_increfs_envObject *self;
    self = (mypyc___transform___refcount___after_branch_increfs_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = refcount___after_branch_increfs_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_refcount___after_branch_increfs_env(void)
{
    PyObject *self = refcount___after_branch_increfs_env_setup(CPyType_refcount___after_branch_increfs_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__refcount_____mypyc_lambda__1_after_branch_increfs_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__(self, instance, owner);
}
PyMemberDef refcount_____mypyc_lambda__1_after_branch_increfs_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *refcount_____mypyc_lambda__1_after_branch_increfs_obj_setup(PyTypeObject *type);
PyObject *CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj(void);

static PyObject *
refcount_____mypyc_lambda__1_after_branch_increfs_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return refcount_____mypyc_lambda__1_after_branch_increfs_obj_setup(type);
}

static int
refcount_____mypyc_lambda__1_after_branch_increfs_obj_traverse(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject))));
    return 0;
}

static int
refcount_____mypyc_lambda__1_after_branch_increfs_obj_clear(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject))));
    return 0;
}

static void
refcount_____mypyc_lambda__1_after_branch_increfs_obj_dealloc(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, refcount_____mypyc_lambda__1_after_branch_increfs_obj_dealloc)
    refcount_____mypyc_lambda__1_after_branch_increfs_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable[2];
static bool
CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_trait_vtable_setup(void)
{
    CPyVTableItem refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__,
        (CPyVTableItem)CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__,
    };
    memcpy(refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable, refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable_scratch, sizeof(refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable));
    return 1;
}

static PyMethodDef refcount_____mypyc_lambda__1_after_branch_increfs_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_after_branch_increfs_obj",
    .tp_new = refcount_____mypyc_lambda__1_after_branch_increfs_obj_new,
    .tp_dealloc = (destructor)refcount_____mypyc_lambda__1_after_branch_increfs_obj_dealloc,
    .tp_traverse = (traverseproc)refcount_____mypyc_lambda__1_after_branch_increfs_obj_traverse,
    .tp_clear = (inquiry)refcount_____mypyc_lambda__1_after_branch_increfs_obj_clear,
    .tp_methods = refcount_____mypyc_lambda__1_after_branch_increfs_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__refcount_____mypyc_lambda__1_after_branch_increfs_obj,
    .tp_members = refcount_____mypyc_lambda__1_after_branch_increfs_obj_members,
    .tp_basicsize = sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject),
    .tp_weaklistoffset = sizeof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj_template = &CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj_template_;

static PyObject *
refcount_____mypyc_lambda__1_after_branch_increfs_obj_setup(PyTypeObject *type)
{
    mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *self;
    self = (mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = refcount_____mypyc_lambda__1_after_branch_increfs_obj_vtable;
    self->vectorcall = CPyPy_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj(void)
{
    PyObject *self = refcount_____mypyc_lambda__1_after_branch_increfs_obj_setup(CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef refcountmodule_methods[] = {
    {"insert_ref_count_opcodes", (PyCFunction)CPyPy_refcount___insert_ref_count_opcodes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_maybe_undefined", (PyCFunction)CPyPy_refcount___is_maybe_undefined, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"maybe_append_dec_ref", (PyCFunction)CPyPy_refcount___maybe_append_dec_ref, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"maybe_append_inc_ref", (PyCFunction)CPyPy_refcount___maybe_append_inc_ref, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_block", (PyCFunction)CPyPy_refcount___transform_block, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"insert_branch_inc_and_decrefs", (PyCFunction)CPyPy_refcount___insert_branch_inc_and_decrefs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"after_branch_decrefs", (PyCFunction)CPyPy_refcount___after_branch_decrefs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"after_branch_increfs", (PyCFunction)CPyPy_refcount___after_branch_increfs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_block", (PyCFunction)CPyPy_refcount___add_block, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_value_ordering", (PyCFunction)CPyPy_refcount___make_value_ordering, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef refcountmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.transform.refcount",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    refcountmodule_methods
};

PyObject *CPyInit_mypyc___transform___refcount(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___transform___refcount_internal) {
        Py_INCREF(CPyModule_mypyc___transform___refcount_internal);
        return CPyModule_mypyc___transform___refcount_internal;
    }
    CPyModule_mypyc___transform___refcount_internal = PyModule_Create(&refcountmodule);
    if (unlikely(CPyModule_mypyc___transform___refcount_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___transform___refcount_internal, "__name__");
    CPyStatic_refcount___globals = PyModule_GetDict(CPyModule_mypyc___transform___refcount_internal);
    if (unlikely(CPyStatic_refcount___globals == NULL))
        goto fail;
    CPyType_refcount___after_branch_decrefs_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_refcount___after_branch_decrefs_env_template, NULL, modname);
    if (unlikely(!CPyType_refcount___after_branch_decrefs_env))
        goto fail;
    CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_template, NULL, modname);
    if (unlikely(!CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj))
        goto fail;
    CPyType_refcount___after_branch_increfs_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_refcount___after_branch_increfs_env_template, NULL, modname);
    if (unlikely(!CPyType_refcount___after_branch_increfs_env))
        goto fail;
    CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj_template, NULL, modname);
    if (unlikely(!CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_refcount_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___transform___refcount_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___transform___refcount_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_refcount___after_branch_decrefs_env);
    Py_CLEAR(CPyType_refcount_____mypyc_lambda__0_after_branch_decrefs_obj);
    Py_CLEAR(CPyType_refcount___after_branch_increfs_env);
    Py_CLEAR(CPyType_refcount_____mypyc_lambda__1_after_branch_increfs_obj);
    return NULL;
}

char CPyDef_refcount___insert_ref_count_opcodes(PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cfg;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_value;
    char cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_borrowed;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_live;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_borrow;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_defined;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_ordering;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_dataflow___get_cfg(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 63, CPyStatic_refcount___globals);
        goto CPyL38;
    }
    cpy_r_cfg = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_func_ir___all_values(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 64, CPyStatic_refcount___globals);
        goto CPyL39;
    }
    cpy_r_values = cpy_r_r4;
    cpy_r_r5 = PySet_New(NULL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 66, CPyStatic_refcount___globals);
        goto CPyL40;
    }
    cpy_r_r6 = 0;
CPyL4: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_values, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_ops___Value)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 66, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL41;
    }
    cpy_r_value = cpy_r_r12;
    cpy_r_r13 = ((mypyc___ir___ops___ValueObject *)cpy_r_value)->_is_borrowed;
    if (!cpy_r_r13) goto CPyL42;
CPyL7: ;
    cpy_r_r14 = PySet_Add(cpy_r_r5, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 66, CPyStatic_refcount___globals);
        goto CPyL41;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r16;
    goto CPyL4;
CPyL9: ;
    cpy_r_borrowed = cpy_r_r5;
    cpy_r_r17 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = PySet_New(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 67, CPyStatic_refcount___globals);
        goto CPyL43;
    }
    cpy_r_args = cpy_r_r18;
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_dataflow___analyze_live_regs(cpy_r_r19, cpy_r_cfg);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 68, CPyStatic_refcount___globals);
        goto CPyL44;
    }
    cpy_r_live = cpy_r_r20;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_dataflow___analyze_borrowed_arguments(cpy_r_r21, cpy_r_cfg, cpy_r_borrowed);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_borrowed);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 69, CPyStatic_refcount___globals);
        goto CPyL45;
    }
    cpy_r_borrow = cpy_r_r22;
    cpy_r_r23 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_dataflow___analyze_must_defined_regs(cpy_r_r23, cpy_r_cfg, cpy_r_args, cpy_r_values, 1);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_cfg);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_values);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 70, CPyStatic_refcount___globals);
        goto CPyL46;
    }
    cpy_r_defined = cpy_r_r24;
    cpy_r_r25 = CPyDef_refcount___make_value_ordering(cpy_r_ir);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 71, CPyStatic_refcount___globals);
        goto CPyL47;
    }
    cpy_r_ordering = cpy_r_r25;
    cpy_r_r26 = PyDict_New();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 72, CPyStatic_refcount___globals);
        goto CPyL48;
    }
    cpy_r_cache = cpy_r_r26;
    cpy_r_r27 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 73, CPyStatic_refcount___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r27);
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 73, CPyStatic_refcount___globals, "list", cpy_r_r31);
        goto CPyL50;
    }
    cpy_r_r33 = 0;
CPyL18: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL51;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_ops___BasicBlock))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 73, CPyStatic_refcount___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r38);
        goto CPyL52;
    }
    cpy_r_block = cpy_r_r39;
    cpy_r_r40 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    cpy_r_r41 = CPyList_GetItemShortBorrow(cpy_r_r40, -2);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 74, CPyStatic_refcount___globals);
        goto CPyL53;
    }
    cpy_r_r42 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL23;
    cpy_r_r46 = cpy_r_r45;
    goto CPyL24;
CPyL23: ;
    cpy_r_r47 = (PyObject *)CPyType_ops___Goto;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    cpy_r_r46 = cpy_r_r50;
CPyL24: ;
    if (!cpy_r_r46) goto CPyL30;
    cpy_r_r51 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_live)->_before;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "before", 79, CPyStatic_refcount___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r52);
CPyL26: ;
    cpy_r_r53 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_borrow)->_before;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "before", 80, CPyStatic_refcount___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r53);
CPyL27: ;
    cpy_r_r54 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_borrow)->_after;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "after", 81, CPyStatic_refcount___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r54);
CPyL28: ;
    cpy_r_r55 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_defined)->_after;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "after", 82, CPyStatic_refcount___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r55);
CPyL29: ;
    cpy_r_r56 = CPyDef_refcount___insert_branch_inc_and_decrefs(cpy_r_block, cpy_r_cache, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_ordering);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 75, CPyStatic_refcount___globals);
        goto CPyL53;
    }
CPyL30: ;
    cpy_r_r57 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_live)->_before;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "before", 85, CPyStatic_refcount___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r57);
CPyL31: ;
    cpy_r_r58 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_live)->_after;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "after", 85, CPyStatic_refcount___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r58);
CPyL32: ;
    cpy_r_r59 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_borrow)->_before;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "before", 85, CPyStatic_refcount___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r59);
CPyL33: ;
    cpy_r_r60 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_defined)->_after;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "insert_ref_count_opcodes", "AnalysisResult", "after", 85, CPyStatic_refcount___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r60);
CPyL34: ;
    cpy_r_r61 = CPyDef_refcount___transform_block(cpy_r_block, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 85, CPyStatic_refcount___globals);
        goto CPyL52;
    }
    cpy_r_r62 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r62;
    goto CPyL18;
CPyL36: ;
    cpy_r_r63 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyDef_dataflow___cleanup_cfg(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 87, CPyStatic_refcount___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL39: ;
    CPy_DecRef(cpy_r_cfg);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_values);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r5);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL8;
CPyL43: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_borrowed);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_borrowed);
    CPy_DecRef(cpy_r_args);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_live);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r27);
    goto CPyL38;
CPyL50: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    goto CPyL38;
CPyL51: ;
    CPy_DECREF(cpy_r_live);
    CPy_DECREF(cpy_r_borrow);
    CPy_DECREF(cpy_r_defined);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_cache);
    CPy_DECREF(cpy_r_r32);
    goto CPyL36;
CPyL52: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    goto CPyL38;
CPyL54: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r51);
    goto CPyL38;
CPyL55: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL38;
CPyL56: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    goto CPyL38;
CPyL57: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL38;
CPyL58: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r57);
    goto CPyL38;
CPyL59: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    goto CPyL38;
CPyL60: ;
    CPy_DecRef(cpy_r_live);
    CPy_DecRef(cpy_r_borrow);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    goto CPyL38;
}

PyObject *CPyPy_refcount___insert_ref_count_opcodes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:insert_ref_count_opcodes", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_func_ir___FuncIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_refcount___insert_ref_count_opcodes(arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "insert_ref_count_opcodes", 58, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount___is_maybe_undefined(PyObject *cpy_r_post_must_defined, PyObject *cpy_r_src) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = (PyObject *)CPyType_ops___Register;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_src)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL5;
CPyL2: ;
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r5 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "is_maybe_undefined", 91, CPyStatic_refcount___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL6;
    }
    cpy_r_r6 = PySet_Contains(cpy_r_post_must_defined, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "is_maybe_undefined", 91, CPyStatic_refcount___globals);
        goto CPyL6;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r9 = cpy_r_r8 ^ 1;
    cpy_r_r4 = cpy_r_r9;
CPyL5: ;
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_refcount___is_maybe_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"post_must_defined", "src", 0};
    static CPyArg_Parser parser = {"OO:is_maybe_undefined", kwlist, 0};
    PyObject *obj_post_must_defined;
    PyObject *obj_src;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_post_must_defined, &obj_src)) {
        return NULL;
    }
    PyObject *arg_post_must_defined;
    if (likely(PySet_Check(obj_post_must_defined)))
        arg_post_must_defined = obj_post_must_defined;
    else {
        CPy_TypeError("set", obj_post_must_defined); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyObject_TypeCheck(obj_src, CPyType_ops___Value)))
        arg_src = obj_src;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_src); 
        goto fail;
    }
    char retval = CPyDef_refcount___is_maybe_undefined(arg_post_must_defined, arg_src);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "is_maybe_undefined", 90, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount___maybe_append_dec_ref(PyObject *cpy_r_ops, PyObject *cpy_r_dest, PyObject *cpy_r_defined, tuple_T2OI cpy_r_key) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_dest)->_type;
    cpy_r_r1 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r0)->_is_refcounted;
    if (!cpy_r_r1) goto CPyL7;
CPyL1: ;
    cpy_r_r2 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_dest)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) goto CPyL7;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10830 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp10830);
    PyObject *__tmp10831 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp10831);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_defined, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 98, CPyStatic_refcount___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 98, CPyStatic_refcount___globals, "set", cpy_r_r7);
        goto CPyL8;
    }
    cpy_r_r9 = CPyDef_refcount___is_maybe_undefined(cpy_r_r8, cpy_r_dest);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 98, CPyStatic_refcount___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_ops___DecRef(cpy_r_dest, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 98, CPyStatic_refcount___globals);
        goto CPyL8;
    }
    cpy_r_r12 = PyList_Append(cpy_r_ops, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 98, CPyStatic_refcount___globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_refcount___maybe_append_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ops", "dest", "defined", "key", 0};
    static CPyArg_Parser parser = {"OOOO:maybe_append_dec_ref", kwlist, 0};
    PyObject *obj_ops;
    PyObject *obj_dest;
    PyObject *obj_defined;
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ops, &obj_dest, &obj_defined, &obj_key)) {
        return NULL;
    }
    PyObject *arg_ops;
    if (likely(PyList_Check(obj_ops)))
        arg_ops = obj_ops;
    else {
        CPy_TypeError("list", obj_ops); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyObject_TypeCheck(obj_dest, CPyType_ops___Value)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_dest); 
        goto fail;
    }
    PyObject *arg_defined;
    if (likely(PyDict_Check(obj_defined)))
        arg_defined = obj_defined;
    else {
        CPy_TypeError("dict", obj_defined); 
        goto fail;
    }
    tuple_T2OI arg_key;
    PyObject *__tmp10832;
    if (unlikely(!(PyTuple_Check(obj_key) && PyTuple_GET_SIZE(obj_key) == 2))) {
        __tmp10832 = NULL;
        goto __LL10833;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(obj_key, 0)) == CPyType_ops___BasicBlock))
        __tmp10832 = PyTuple_GET_ITEM(obj_key, 0);
    else {
        __tmp10832 = NULL;
    }
    if (__tmp10832 == NULL) goto __LL10833;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_key, 1))))
        __tmp10832 = PyTuple_GET_ITEM(obj_key, 1);
    else {
        __tmp10832 = NULL;
    }
    if (__tmp10832 == NULL) goto __LL10833;
    __tmp10832 = obj_key;
__LL10833: ;
    if (unlikely(__tmp10832 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.ops.BasicBlock, int]", obj_key); goto fail;
    } else {
        PyObject *__tmp10834 = PyTuple_GET_ITEM(obj_key, 0);
        PyObject *__tmp10835;
        if (likely(Py_TYPE(__tmp10834) == CPyType_ops___BasicBlock))
            __tmp10835 = __tmp10834;
        else {
            CPy_TypeError("mypyc.ir.ops.BasicBlock", __tmp10834); 
            __tmp10835 = NULL;
        }
        arg_key.f0 = __tmp10835;
        PyObject *__tmp10836 = PyTuple_GET_ITEM(obj_key, 1);
        CPyTagged __tmp10837;
        if (likely(PyLong_Check(__tmp10836)))
            __tmp10837 = CPyTagged_BorrowFromObject(__tmp10836);
        else {
            CPy_TypeError("int", __tmp10836); goto fail;
        }
        arg_key.f1 = __tmp10837;
    }
    char retval = CPyDef_refcount___maybe_append_dec_ref(arg_ops, arg_dest, arg_defined, arg_key);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_dec_ref", 94, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount___maybe_append_inc_ref(PyObject *cpy_r_ops, PyObject *cpy_r_dest) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_dest)->_type;
    cpy_r_r1 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r0)->_is_refcounted;
    if (!cpy_r_r1) goto CPyL3;
CPyL1: ;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_ops___IncRef(cpy_r_dest, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_inc_ref", 103, CPyStatic_refcount___globals);
        goto CPyL4;
    }
    cpy_r_r4 = PyList_Append(cpy_r_ops, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_inc_ref", 103, CPyStatic_refcount___globals);
        goto CPyL4;
    }
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_refcount___maybe_append_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ops", "dest", 0};
    static CPyArg_Parser parser = {"OO:maybe_append_inc_ref", kwlist, 0};
    PyObject *obj_ops;
    PyObject *obj_dest;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ops, &obj_dest)) {
        return NULL;
    }
    PyObject *arg_ops;
    if (likely(PyList_Check(obj_ops)))
        arg_ops = obj_ops;
    else {
        CPy_TypeError("list", obj_ops); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyObject_TypeCheck(obj_dest, CPyType_ops___Value)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_dest); 
        goto fail;
    }
    char retval = CPyDef_refcount___maybe_append_inc_ref(arg_ops, arg_dest);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "maybe_append_inc_ref", 101, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount___transform_block(PyObject *cpy_r_block, PyObject *cpy_r_pre_live, PyObject *cpy_r_post_live, PyObject *cpy_r_pre_borrow, PyObject *cpy_r_post_must_defined) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_old_ops;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_ops;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_op;
    tuple_T2OI cpy_r_r10;
    tuple_T2OI cpy_r_key;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_stolen;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_j;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyPtr cpy_r_r84;
    int64_t cpy_r_r85;
    CPyTagged cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyTagged cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    cpy_r_r0 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r0);
    cpy_r_old_ops = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 114, CPyStatic_refcount___globals);
        goto CPyL75;
    }
    cpy_r_ops = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_i = 0;
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_old_ops)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL76;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_old_ops, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_ops___Op)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 115, CPyStatic_refcount___globals, "mypyc.ir.ops.Op", cpy_r_r8);
        goto CPyL77;
    }
    cpy_r_op = cpy_r_r9;
    cpy_r_r10.f0 = cpy_r_block;
    cpy_r_r10.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r10.f0);
    CPyTagged_INCREF(cpy_r_r10.f1);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_key = cpy_r_r10;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10838 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp10838);
    PyObject *__tmp10839 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10839);
    cpy_r_r12 = CPyDict_GetItem(cpy_r_pre_live, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 118, CPyStatic_refcount___globals);
        goto CPyL78;
    }
    if (likely(PySet_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 118, CPyStatic_refcount___globals, "set", cpy_r_r12);
        goto CPyL78;
    }
    cpy_r_r14 = PySet_Contains(cpy_r_r13, cpy_r_op);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 118, CPyStatic_refcount___globals);
        goto CPyL78;
    }
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = cpy_r_r16 ^ 1;
    if (cpy_r_r17) {
        goto CPyL10;
    } else
        goto CPyL79;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 118, CPyStatic_refcount___globals);
        goto CPyL74;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r19 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Assign))
        cpy_r_r23 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 119, CPyStatic_refcount___globals, "mypyc.ir.ops.Assign", cpy_r_op);
        goto CPyL78;
    }
    cpy_r_r24 = ((mypyc___ir___ops___AssignObject *)cpy_r_r23)->_dest;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL14;
CPyL13: ;
    CPy_INCREF(cpy_r_op);
    cpy_r_r25 = cpy_r_op;
CPyL14: ;
    cpy_r_dest = cpy_r_r25;
    cpy_r_r26 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 5, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* stolen */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 120, CPyStatic_refcount___globals);
        goto CPyL80;
    }
    cpy_r_stolen = cpy_r_r26;
    cpy_r_r27 = 0;
    cpy_r_j = 0;
    cpy_r_r28 = 0;
CPyL16: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_stolen)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL81;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_stolen, cpy_r_r28);
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_ops___Value)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 124, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL82;
    }
    cpy_r_src = cpy_r_r34;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10840 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp10840);
    PyObject *__tmp10841 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp10841);
    cpy_r_r36 = CPyDict_GetItem(cpy_r_post_live, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL83;
    }
    if (likely(PySet_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals, "set", cpy_r_r36);
        goto CPyL83;
    }
    cpy_r_r38 = PySet_Contains(cpy_r_r37, cpy_r_src);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL83;
    }
    cpy_r_r40 = cpy_r_r38;
    if (cpy_r_r40) goto CPyL84;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10842 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp10842);
    PyObject *__tmp10843 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp10843);
    cpy_r_r42 = CPyDict_GetItem(cpy_r_pre_borrow, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL83;
    }
    if (likely(PySet_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals, "set", cpy_r_r42);
        goto CPyL83;
    }
    cpy_r_r44 = PySet_Contains(cpy_r_r43, cpy_r_src);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL83;
    }
    cpy_r_r46 = cpy_r_r44;
    if (cpy_r_r46) goto CPyL84;
    cpy_r_r47 = CPyList_GetSlice(cpy_r_stolen, 0, cpy_r_j);
    CPyTagged_DECREF(cpy_r_j);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL85;
    }
    if (likely(PyList_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals, "list", cpy_r_r47);
        goto CPyL85;
    }
    cpy_r_r49 = PySequence_Contains(cpy_r_r48, cpy_r_src);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 125, CPyStatic_refcount___globals);
        goto CPyL85;
    }
    cpy_r_r51 = cpy_r_r49;
    if (!cpy_r_r51) goto CPyL86;
CPyL30: ;
    cpy_r_r52 = CPyDef_refcount___maybe_append_inc_ref(cpy_r_ops, cpy_r_src);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 126, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r53 = PyTuple_New(2);
    if (unlikely(cpy_r_r53 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10844 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r53, 0, __tmp10844);
    PyObject *__tmp10845 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r53, 1, __tmp10845);
    cpy_r_r54 = CPyDict_GetItem(cpy_r_pre_borrow, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    if (likely(PySet_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals, "set", cpy_r_r54);
        goto CPyL87;
    }
    cpy_r_r56 = PySet_Contains(cpy_r_r55, cpy_r_dest);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    cpy_r_r58 = cpy_r_r56;
    cpy_r_r59 = cpy_r_r58 ^ 1;
    if (!cpy_r_r59) goto CPyL43;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r60 = PyTuple_New(2);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10846 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp10846);
    PyObject *__tmp10847 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r60, 1, __tmp10847);
    cpy_r_r61 = CPyDict_GetItem(cpy_r_pre_live, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    if (likely(PySet_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals, "set", cpy_r_r61);
        goto CPyL87;
    }
    cpy_r_r63 = PySet_Contains(cpy_r_r62, cpy_r_dest);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 129, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    cpy_r_r65 = cpy_r_r63;
    if (!cpy_r_r65) goto CPyL43;
    cpy_r_r66 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (cpy_r_r69) {
        goto CPyL42;
    } else
        goto CPyL88;
CPyL40: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 130, CPyStatic_refcount___globals);
        goto CPyL74;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r71 = CPyDef_refcount___maybe_append_dec_ref(cpy_r_ops, cpy_r_dest, cpy_r_post_must_defined, cpy_r_key);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 131, CPyStatic_refcount___globals);
        goto CPyL87;
    }
CPyL43: ;
    cpy_r_r72 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r72;
    cpy_r_j = cpy_r_r72;
    cpy_r_r73 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r73;
    goto CPyL16;
CPyL44: ;
    cpy_r_r74 = (PyObject *)CPyType_ops___KeepAlive;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (cpy_r_r77) goto CPyL46;
    cpy_r_r78 = PyList_Append(cpy_r_ops, cpy_r_op);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 135, CPyStatic_refcount___globals);
        goto CPyL87;
    }
CPyL46: ;
    cpy_r_r80 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r81 = CPy_TypeCheck(cpy_r_op, cpy_r_r80);
    if (cpy_r_r81) goto CPyL89;
    cpy_r_r82 = CPyDef_ops___Op___unique_sources(cpy_r_op);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 142, CPyStatic_refcount___globals);
        goto CPyL87;
    }
    cpy_r_r83 = 0;
CPyL49: ;
    cpy_r_r84 = (CPyPtr)&((PyVarObject *)cpy_r_r82)->ob_size;
    cpy_r_r85 = *(int64_t *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 << 1;
    cpy_r_r87 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r86;
    if (!cpy_r_r87) goto CPyL90;
    cpy_r_r88 = CPyList_GetItemUnsafe(cpy_r_r82, cpy_r_r83);
    if (likely(PyObject_TypeCheck(cpy_r_r88, CPyType_ops___Value)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 142, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r88);
        goto CPyL91;
    }
    cpy_r_src = cpy_r_r89;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r90 = PyTuple_New(2);
    if (unlikely(cpy_r_r90 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10848 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r90, 0, __tmp10848);
    PyObject *__tmp10849 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r90, 1, __tmp10849);
    cpy_r_r91 = CPyDict_GetItem(cpy_r_post_live, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals);
        goto CPyL92;
    }
    if (likely(PySet_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals, "set", cpy_r_r91);
        goto CPyL92;
    }
    cpy_r_r93 = PySet_Contains(cpy_r_r92, cpy_r_src);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals);
        goto CPyL92;
    }
    cpy_r_r95 = cpy_r_r93;
    cpy_r_r96 = cpy_r_r95 ^ 1;
    if (!cpy_r_r96) goto CPyL93;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r97 = PyTuple_New(2);
    if (unlikely(cpy_r_r97 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10850 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r97, 0, __tmp10850);
    PyObject *__tmp10851 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r97, 1, __tmp10851);
    cpy_r_r98 = CPyDict_GetItem(cpy_r_pre_borrow, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals);
        goto CPyL92;
    }
    if (likely(PySet_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals, "set", cpy_r_r98);
        goto CPyL92;
    }
    cpy_r_r100 = PySet_Contains(cpy_r_r99, cpy_r_src);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals);
        goto CPyL92;
    }
    cpy_r_r102 = cpy_r_r100;
    cpy_r_r103 = cpy_r_r102 ^ 1;
    if (!cpy_r_r103) goto CPyL93;
    cpy_r_r104 = PySequence_Contains(cpy_r_stolen, cpy_r_src);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 144, CPyStatic_refcount___globals);
        goto CPyL92;
    }
    cpy_r_r106 = cpy_r_r104;
    cpy_r_r107 = cpy_r_r106 ^ 1;
    if (!cpy_r_r107) goto CPyL93;
    cpy_r_r108 = CPyDef_refcount___maybe_append_dec_ref(cpy_r_ops, cpy_r_src, cpy_r_post_must_defined, cpy_r_key);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 145, CPyStatic_refcount___globals);
        goto CPyL91;
    }
CPyL62: ;
    cpy_r_r109 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r109;
    goto CPyL49;
CPyL63: ;
    cpy_r_r110 = CPY_GET_ATTR(cpy_r_dest, CPyType_ops___Value, 0, mypyc___ir___ops___ValueObject, char); /* is_void */
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 149, CPyStatic_refcount___globals);
        goto CPyL80;
    }
CPyL64: ;
    if (cpy_r_r110) goto CPyL94;
CPyL65: ;
    CPy_INCREF(cpy_r_key.f0);
    CPyTagged_INCREF(cpy_r_key.f1);
    cpy_r_r111 = PyTuple_New(2);
    if (unlikely(cpy_r_r111 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10852 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r111, 0, __tmp10852);
    PyObject *__tmp10853 = CPyTagged_StealAsObject(cpy_r_key.f1);
    PyTuple_SET_ITEM(cpy_r_r111, 1, __tmp10853);
    cpy_r_r112 = CPyDict_GetItem(cpy_r_post_live, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 150, CPyStatic_refcount___globals);
        goto CPyL80;
    }
    if (likely(PySet_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "transform_block", 150, CPyStatic_refcount___globals, "set", cpy_r_r112);
        goto CPyL80;
    }
    cpy_r_r114 = PySet_Contains(cpy_r_r113, cpy_r_dest);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 150, CPyStatic_refcount___globals);
        goto CPyL80;
    }
    cpy_r_r116 = cpy_r_r114;
    cpy_r_r117 = cpy_r_r116 ^ 1;
    if (!cpy_r_r117) goto CPyL94;
    cpy_r_r118 = (PyObject *)CPyType_ops___RegisterOp;
    cpy_r_r119 = CPy_TypeCheck(cpy_r_op, cpy_r_r118);
    CPy_DECREF(cpy_r_op);
    if (!cpy_r_r119) goto CPyL71;
    cpy_r_r120 = ((mypyc___ir___ops___ValueObject *)cpy_r_dest)->_is_borrowed;
    if (cpy_r_r120) goto CPyL95;
CPyL71: ;
    cpy_r_r121 = CPyDef_refcount___maybe_append_dec_ref(cpy_r_ops, cpy_r_dest, cpy_r_post_must_defined, cpy_r_key);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 153, CPyStatic_refcount___globals);
        goto CPyL96;
    }
CPyL72: ;
    cpy_r_r122 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r122;
    cpy_r_i = cpy_r_r122;
    cpy_r_r123 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r123;
    goto CPyL2;
CPyL73: ;
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops = cpy_r_ops;
    return 1;
CPyL74: ;
    cpy_r_r125 = 2;
    return cpy_r_r125;
CPyL75: ;
    CPy_DecRef(cpy_r_old_ops);
    goto CPyL74;
CPyL76: ;
    CPy_DECREF(cpy_r_old_ops);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL73;
CPyL77: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL74;
CPyL78: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    goto CPyL74;
CPyL79: ;
    CPy_DECREF(cpy_r_old_ops);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    goto CPyL8;
CPyL80: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    goto CPyL74;
CPyL81: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL44;
CPyL82: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    CPyTagged_DecRef(cpy_r_j);
    goto CPyL74;
CPyL83: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_src);
    goto CPyL74;
CPyL84: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL30;
CPyL85: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    CPy_DecRef(cpy_r_src);
    goto CPyL74;
CPyL86: ;
    CPy_DECREF(cpy_r_src);
    goto CPyL43;
CPyL87: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    goto CPyL74;
CPyL88: ;
    CPy_DECREF(cpy_r_old_ops);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_stolen);
    goto CPyL40;
CPyL89: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_stolen);
    goto CPyL72;
CPyL90: ;
    CPy_DECREF(cpy_r_stolen);
    CPy_DECREF(cpy_r_r82);
    goto CPyL63;
CPyL91: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    CPy_DecRef(cpy_r_r82);
    goto CPyL74;
CPyL92: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_key.f0);
    CPyTagged_DecRef(cpy_r_key.f1);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_stolen);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r82);
    goto CPyL74;
CPyL93: ;
    CPy_DECREF(cpy_r_src);
    goto CPyL62;
CPyL94: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    CPy_DECREF(cpy_r_dest);
    goto CPyL72;
CPyL95: ;
    CPy_DECREF(cpy_r_key.f0);
    CPyTagged_DECREF(cpy_r_key.f1);
    CPy_DECREF(cpy_r_dest);
    goto CPyL72;
CPyL96: ;
    CPy_DecRef(cpy_r_old_ops);
    CPy_DecRef(cpy_r_ops);
    goto CPyL74;
}

PyObject *CPyPy_refcount___transform_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"block", "pre_live", "post_live", "pre_borrow", "post_must_defined", 0};
    static CPyArg_Parser parser = {"OOOOO:transform_block", kwlist, 0};
    PyObject *obj_block;
    PyObject *obj_pre_live;
    PyObject *obj_post_live;
    PyObject *obj_pre_borrow;
    PyObject *obj_post_must_defined;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_block, &obj_pre_live, &obj_post_live, &obj_pre_borrow, &obj_post_must_defined)) {
        return NULL;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_ops___BasicBlock))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_block); 
        goto fail;
    }
    PyObject *arg_pre_live;
    if (likely(PyDict_Check(obj_pre_live)))
        arg_pre_live = obj_pre_live;
    else {
        CPy_TypeError("dict", obj_pre_live); 
        goto fail;
    }
    PyObject *arg_post_live;
    if (likely(PyDict_Check(obj_post_live)))
        arg_post_live = obj_post_live;
    else {
        CPy_TypeError("dict", obj_post_live); 
        goto fail;
    }
    PyObject *arg_pre_borrow;
    if (likely(PyDict_Check(obj_pre_borrow)))
        arg_pre_borrow = obj_pre_borrow;
    else {
        CPy_TypeError("dict", obj_pre_borrow); 
        goto fail;
    }
    PyObject *arg_post_must_defined;
    if (likely(PyDict_Check(obj_post_must_defined)))
        arg_post_must_defined = obj_post_must_defined;
    else {
        CPy_TypeError("dict", obj_post_must_defined); 
        goto fail;
    }
    char retval = CPyDef_refcount___transform_block(arg_block, arg_pre_live, arg_post_live, arg_pre_borrow, arg_post_must_defined);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "transform_block", 106, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount___insert_branch_inc_and_decrefs(PyObject *cpy_r_block, PyObject *cpy_r_cache, PyObject *cpy_r_blocks, PyObject *cpy_r_pre_live, PyObject *cpy_r_pre_borrow, PyObject *cpy_r_post_borrow, PyObject *cpy_r_post_must_defined, PyObject *cpy_r_ordering) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    tuple_T2OI cpy_r_r5;
    tuple_T2OI cpy_r_prev_key;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_source_live_regs;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_source_borrowed;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_source_defined;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_term;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T1O cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_omitted;
    tuple_T0 cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_decs;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_incs;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
    cpy_r_r5.f0 = cpy_r_block;
    cpy_r_r5.f1 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f0);
    CPyTagged_INCREF(cpy_r_r5.f1);
    CPyTagged_DECREF(cpy_r_r4);
    cpy_r_prev_key = cpy_r_r5;
    CPy_INCREF(cpy_r_prev_key.f0);
    CPyTagged_INCREF(cpy_r_prev_key.f1);
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10854 = cpy_r_prev_key.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp10854);
    PyObject *__tmp10855 = CPyTagged_StealAsObject(cpy_r_prev_key.f1);
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp10855);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_pre_live, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 184, CPyStatic_refcount___globals);
        goto CPyL27;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 184, CPyStatic_refcount___globals, "set", cpy_r_r7);
        goto CPyL27;
    }
    cpy_r_source_live_regs = cpy_r_r8;
    CPy_INCREF(cpy_r_prev_key.f0);
    CPyTagged_INCREF(cpy_r_prev_key.f1);
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10856 = cpy_r_prev_key.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp10856);
    PyObject *__tmp10857 = CPyTagged_StealAsObject(cpy_r_prev_key.f1);
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp10857);
    cpy_r_r10 = CPyDict_GetItem(cpy_r_post_borrow, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 185, CPyStatic_refcount___globals);
        goto CPyL28;
    }
    if (likely(PySet_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 185, CPyStatic_refcount___globals, "set", cpy_r_r10);
        goto CPyL28;
    }
    cpy_r_source_borrowed = cpy_r_r11;
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10858 = cpy_r_prev_key.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp10858);
    PyObject *__tmp10859 = CPyTagged_StealAsObject(cpy_r_prev_key.f1);
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp10859);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_post_must_defined, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 186, CPyStatic_refcount___globals);
        goto CPyL29;
    }
    if (likely(PySet_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 186, CPyStatic_refcount___globals, "set", cpy_r_r13);
        goto CPyL29;
    }
    cpy_r_source_defined = cpy_r_r14;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 188, CPyStatic_refcount___globals);
        goto CPyL30;
    }
CPyL7: ;
    cpy_r_term = cpy_r_r15;
    cpy_r_r16 = 0;
    cpy_r_i = 0;
    cpy_r_r17 = CPY_GET_METHOD(cpy_r_term, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_term); /* targets */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 189, CPyStatic_refcount___globals);
        goto CPyL31;
    }
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 189, CPyStatic_refcount___globals);
        goto CPyL31;
    }
CPyL9: ;
    cpy_r_r19 = PyIter_Next(cpy_r_r18);
    if (cpy_r_r19 == NULL) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_ops___BasicBlock))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 189, CPyStatic_refcount___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r19);
        goto CPyL33;
    }
    cpy_r_target = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_term)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_term) == CPyType_ops___Branch))
        cpy_r_r25 = cpy_r_term;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 195, CPyStatic_refcount___globals, "mypyc.ir.ops.Branch", cpy_r_term);
        goto CPyL34;
    }
    cpy_r_r26 = ((mypyc___ir___ops___BranchObject *)cpy_r_r25)->_op;
    cpy_r_r27 = cpy_r_r26 == 202;
    if (!cpy_r_r27) goto CPyL17;
    cpy_r_r28 = cpy_r_i == 0;
    if (!cpy_r_r28) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_term) == CPyType_ops___Branch))
        cpy_r_r29 = cpy_r_term;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 196, CPyStatic_refcount___globals, "mypyc.ir.ops.Branch", cpy_r_term);
        goto CPyL34;
    }
    cpy_r_r30 = ((mypyc___ir___ops___BranchObject *)cpy_r_r29)->_value;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31.f0 = cpy_r_r30;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = PyTuple_New(1);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10860 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp10860);
    cpy_r_omitted = cpy_r_r32;
    goto CPyL18;
CPyL17: ;
    cpy_r_r33.empty_struct_error_flag = 0;
    cpy_r_r34 = PyTuple_New(0);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    cpy_r_omitted = cpy_r_r34;
CPyL18: ;
    if (likely(PyTuple_Check(cpy_r_omitted)))
        cpy_r_r35 = cpy_r_omitted;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 201, CPyStatic_refcount___globals, "tuple", cpy_r_omitted);
        goto CPyL34;
    }
    cpy_r_r36 = CPyDef_refcount___after_branch_decrefs(cpy_r_target, cpy_r_pre_live, cpy_r_source_defined, cpy_r_source_borrowed, cpy_r_source_live_regs, cpy_r_ordering, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 200, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    cpy_r_decs = cpy_r_r36;
    cpy_r_r37 = CPyDef_refcount___after_branch_increfs(cpy_r_target, cpy_r_pre_live, cpy_r_pre_borrow, cpy_r_source_borrowed, cpy_r_ordering);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 203, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    cpy_r_incs = cpy_r_r37;
    cpy_r_r38 = CPyDef_refcount___add_block(cpy_r_decs, cpy_r_incs, cpy_r_cache, cpy_r_blocks, cpy_r_target);
    CPy_DECREF(cpy_r_decs);
    CPy_DECREF(cpy_r_incs);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 204, CPyStatic_refcount___globals);
        goto CPyL33;
    }
    cpy_r_r39 = CPY_GET_METHOD(cpy_r_term, CPyType_ops___ControlOp, 10, mypyc___ir___ops___ControlOpObject, char (*)(PyObject *, CPyTagged, PyObject *))(cpy_r_term, cpy_r_i, cpy_r_r38); /* set_target */
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 204, CPyStatic_refcount___globals);
        goto CPyL36;
    }
    cpy_r_r40 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r40;
    cpy_r_i = cpy_r_r40;
    goto CPyL9;
CPyL24: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 189, CPyStatic_refcount___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL27: ;
    CPy_DecRef(cpy_r_prev_key.f0);
    CPyTagged_DecRef(cpy_r_prev_key.f1);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_prev_key.f0);
    CPyTagged_DecRef(cpy_r_prev_key.f1);
    CPy_DecRef(cpy_r_source_live_regs);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    CPy_DecRef(cpy_r_term);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL26;
CPyL32: ;
    CPy_DECREF(cpy_r_source_live_regs);
    CPy_DECREF(cpy_r_source_borrowed);
    CPy_DECREF(cpy_r_source_defined);
    CPy_DECREF(cpy_r_term);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r18);
    goto CPyL24;
CPyL33: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    CPy_DecRef(cpy_r_term);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r18);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    CPy_DecRef(cpy_r_term);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_target);
    goto CPyL26;
CPyL35: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    CPy_DecRef(cpy_r_term);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_decs);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_source_live_regs);
    CPy_DecRef(cpy_r_source_borrowed);
    CPy_DecRef(cpy_r_source_defined);
    CPy_DecRef(cpy_r_term);
    CPy_DecRef(cpy_r_r18);
    goto CPyL26;
}

PyObject *CPyPy_refcount___insert_branch_inc_and_decrefs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"block", "cache", "blocks", "pre_live", "pre_borrow", "post_borrow", "post_must_defined", "ordering", 0};
    static CPyArg_Parser parser = {"OOOOOOOO:insert_branch_inc_and_decrefs", kwlist, 0};
    PyObject *obj_block;
    PyObject *obj_cache;
    PyObject *obj_blocks;
    PyObject *obj_pre_live;
    PyObject *obj_pre_borrow;
    PyObject *obj_post_borrow;
    PyObject *obj_post_must_defined;
    PyObject *obj_ordering;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_block, &obj_cache, &obj_blocks, &obj_pre_live, &obj_pre_borrow, &obj_post_borrow, &obj_post_must_defined, &obj_ordering)) {
        return NULL;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_ops___BasicBlock))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_block); 
        goto fail;
    }
    PyObject *arg_cache;
    if (likely(PyDict_Check(obj_cache)))
        arg_cache = obj_cache;
    else {
        CPy_TypeError("dict", obj_cache); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_pre_live;
    if (likely(PyDict_Check(obj_pre_live)))
        arg_pre_live = obj_pre_live;
    else {
        CPy_TypeError("dict", obj_pre_live); 
        goto fail;
    }
    PyObject *arg_pre_borrow;
    if (likely(PyDict_Check(obj_pre_borrow)))
        arg_pre_borrow = obj_pre_borrow;
    else {
        CPy_TypeError("dict", obj_pre_borrow); 
        goto fail;
    }
    PyObject *arg_post_borrow;
    if (likely(PyDict_Check(obj_post_borrow)))
        arg_post_borrow = obj_post_borrow;
    else {
        CPy_TypeError("dict", obj_post_borrow); 
        goto fail;
    }
    PyObject *arg_post_must_defined;
    if (likely(PyDict_Check(obj_post_must_defined)))
        arg_post_must_defined = obj_post_must_defined;
    else {
        CPy_TypeError("dict", obj_post_must_defined); 
        goto fail;
    }
    PyObject *arg_ordering;
    if (likely(PyDict_Check(obj_ordering)))
        arg_ordering = obj_ordering;
    else {
        CPy_TypeError("dict", obj_ordering); 
        goto fail;
    }
    char retval = CPyDef_refcount___insert_branch_inc_and_decrefs(arg_block, arg_cache, arg_blocks, arg_pre_live, arg_pre_borrow, arg_post_borrow, arg_post_must_defined, arg_ordering);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "insert_branch_inc_and_decrefs", 157, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "__get__", -1, CPyStatic_refcount___globals);
    return NULL;
}

CPyTagged CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_r) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    cpy_r_r0 = ((mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "<lambda>", "__mypyc_lambda__0_after_branch_decrefs_obj", "__mypyc_env__", 221, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___transform___refcount___after_branch_decrefs_envObject *)cpy_r_r0)->_ordering;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ordering' of 'after_branch_decrefs_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 221, CPyStatic_refcount___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_r);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 221, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    if (likely(PyLong_Check(cpy_r_r2)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_r2);
    else {
        CPy_TypeError("int", cpy_r_r2); cpy_r_r3 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 221, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPY_INT_TAG;
    return cpy_r_r4;
}

PyObject *CPyPy_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"r", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_r;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_r)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_r;
    if (likely(PyObject_TypeCheck(obj_r, CPyType_ops___Value)))
        arg_r = obj_r;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_r); 
        goto fail;
    }
    CPyTagged retval = CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj_____call__(arg___mypyc_self__, arg_r);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 221, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount___after_branch_decrefs(PyObject *cpy_r_label, PyObject *cpy_r_pre_live, PyObject *cpy_r_source_defined, PyObject *cpy_r_source_borrowed, PyObject *cpy_r_source_live_regs, PyObject *cpy_r_ordering, PyObject *cpy_r_omitted) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    tuple_T2OI cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target_pre_live;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_decref;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    tuple_T2OC cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T0 cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = CPyDef_refcount___after_branch_decrefs_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 207, CPyStatic_refcount___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_ordering);
    if (((mypyc___transform___refcount___after_branch_decrefs_envObject *)cpy_r_r0)->_ordering != NULL) {
        CPy_DECREF(((mypyc___transform___refcount___after_branch_decrefs_envObject *)cpy_r_r0)->_ordering);
    }
    ((mypyc___transform___refcount___after_branch_decrefs_envObject *)cpy_r_r0)->_ordering = cpy_r_ordering;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 207, CPyStatic_refcount___globals);
        goto CPyL31;
    }
    cpy_r_r2.f0 = cpy_r_label;
    cpy_r_r2.f1 = 0;
    CPy_INCREF(cpy_r_r2.f0);
    CPyTagged_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10861 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp10861);
    PyObject *__tmp10862 = CPyTagged_StealAsObject(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp10862);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_pre_live, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 216, CPyStatic_refcount___globals);
        goto CPyL31;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 216, CPyStatic_refcount___globals, "set", cpy_r_r4);
        goto CPyL31;
    }
    cpy_r_target_pre_live = cpy_r_r5;
    cpy_r_r6 = PyNumber_Subtract(cpy_r_source_live_regs, cpy_r_target_pre_live);
    CPy_DECREF(cpy_r_target_pre_live);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 217, CPyStatic_refcount___globals);
        goto CPyL31;
    }
    if (likely(PySet_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 217, CPyStatic_refcount___globals, "set", cpy_r_r6);
        goto CPyL31;
    }
    cpy_r_r8 = PyNumber_Subtract(cpy_r_r7, cpy_r_source_borrowed);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 217, CPyStatic_refcount___globals);
        goto CPyL31;
    }
    if (likely(PySet_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 217, CPyStatic_refcount___globals, "set", cpy_r_r8);
        goto CPyL31;
    }
    cpy_r_decref = cpy_r_r9;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_decref);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 217, CPyStatic_refcount___globals);
        goto CPyL32;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL33;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 219, CPyStatic_refcount___globals);
        goto CPyL32;
    }
    cpy_r_r14 = CPyDef_refcount_____mypyc_lambda__0_after_branch_decrefs_obj();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 221, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    if (((mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *)cpy_r_r14)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *)cpy_r_r14)->___mypyc_env__);
    }
    ((mypyc___transform___refcount_____mypyc_lambda__0_after_branch_decrefs_objObject *)cpy_r_r14)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 221, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 221, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r19[2] = {cpy_r_decref, cpy_r_r14};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, cpy_r_r21);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 221, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_decref);
    CPy_DECREF(cpy_r_r14);
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 221, CPyStatic_refcount___globals, "list", cpy_r_r22);
        goto CPyL36;
    }
    cpy_r_r24 = 0;
CPyL17: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL37;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r23, cpy_r_r24);
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_ops___Value)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 219, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r29);
        goto CPyL38;
    }
    cpy_r_reg = cpy_r_r30;
    cpy_r_r31 = ((mypyc___ir___ops___ValueObject *)cpy_r_reg)->_type;
    cpy_r_r32 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r31)->_is_refcounted;
    if (cpy_r_r32) goto CPyL21;
CPyL20: ;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL23;
CPyL21: ;
    cpy_r_r34 = PySequence_Contains(cpy_r_omitted, cpy_r_reg);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 222, CPyStatic_refcount___globals);
        goto CPyL39;
    }
    cpy_r_r36 = cpy_r_r34;
    cpy_r_r37 = cpy_r_r36 ^ 1;
    cpy_r_r33 = cpy_r_r37;
CPyL23: ;
    if (!cpy_r_r33) goto CPyL40;
    cpy_r_r38 = CPyDef_refcount___is_maybe_undefined(cpy_r_source_defined, cpy_r_reg);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 220, CPyStatic_refcount___globals);
        goto CPyL39;
    }
    cpy_r_r39.f0 = cpy_r_reg;
    cpy_r_r39.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_DECREF(cpy_r_reg);
    cpy_r_r40 = PyTuple_New(2);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10863 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp10863);
    PyObject *__tmp10864 = cpy_r_r39.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp10864);
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp10864);
    cpy_r_r41 = PyList_Append(cpy_r_r13, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 219, CPyStatic_refcount___globals);
        goto CPyL38;
    }
CPyL26: ;
    cpy_r_r43 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r43;
    goto CPyL17;
CPyL27: ;
    cpy_r_r44 = PyList_AsTuple(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 219, CPyStatic_refcount___globals);
        goto CPyL30;
    }
    return cpy_r_r44;
CPyL29: ;
    cpy_r_r45.empty_struct_error_flag = 0;
    cpy_r_r46 = PyTuple_New(0);
    if (unlikely(cpy_r_r46 == NULL))
        CPyError_OutOfMemory();
    return cpy_r_r46;
CPyL30: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_decref);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_decref);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_decref);
    CPy_DecRef(cpy_r_r13);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_decref);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL30;
CPyL36: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL30;
CPyL37: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r23);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_reg);
    goto CPyL30;
CPyL40: ;
    CPy_DECREF(cpy_r_reg);
    goto CPyL26;
}

PyObject *CPyPy_refcount___after_branch_decrefs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"label", "pre_live", "source_defined", "source_borrowed", "source_live_regs", "ordering", "omitted", 0};
    static CPyArg_Parser parser = {"OOOOOOO:after_branch_decrefs", kwlist, 0};
    PyObject *obj_label;
    PyObject *obj_pre_live;
    PyObject *obj_source_defined;
    PyObject *obj_source_borrowed;
    PyObject *obj_source_live_regs;
    PyObject *obj_ordering;
    PyObject *obj_omitted;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_label, &obj_pre_live, &obj_source_defined, &obj_source_borrowed, &obj_source_live_regs, &obj_ordering, &obj_omitted)) {
        return NULL;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *arg_pre_live;
    if (likely(PyDict_Check(obj_pre_live)))
        arg_pre_live = obj_pre_live;
    else {
        CPy_TypeError("dict", obj_pre_live); 
        goto fail;
    }
    PyObject *arg_source_defined;
    if (likely(PySet_Check(obj_source_defined)))
        arg_source_defined = obj_source_defined;
    else {
        CPy_TypeError("set", obj_source_defined); 
        goto fail;
    }
    PyObject *arg_source_borrowed;
    if (likely(PySet_Check(obj_source_borrowed)))
        arg_source_borrowed = obj_source_borrowed;
    else {
        CPy_TypeError("set", obj_source_borrowed); 
        goto fail;
    }
    PyObject *arg_source_live_regs;
    if (likely(PySet_Check(obj_source_live_regs)))
        arg_source_live_regs = obj_source_live_regs;
    else {
        CPy_TypeError("set", obj_source_live_regs); 
        goto fail;
    }
    PyObject *arg_ordering;
    if (likely(PyDict_Check(obj_ordering)))
        arg_ordering = obj_ordering;
    else {
        CPy_TypeError("dict", obj_ordering); 
        goto fail;
    }
    PyObject *arg_omitted = obj_omitted;
    PyObject *retval = CPyDef_refcount___after_branch_decrefs(arg_label, arg_pre_live, arg_source_defined, arg_source_borrowed, arg_source_live_regs, arg_ordering, arg_omitted);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_decrefs", 207, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "__get__", -1, CPyStatic_refcount___globals);
    return NULL;
}

CPyTagged CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_r) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    cpy_r_r0 = ((mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/transform/refcount.py", "<lambda>", "__mypyc_lambda__1_after_branch_increfs_obj", "__mypyc_env__", 239, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___transform___refcount___after_branch_increfs_envObject *)cpy_r_r0)->_ordering;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ordering' of 'after_branch_increfs_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 239, CPyStatic_refcount___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_r);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 239, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    if (likely(PyLong_Check(cpy_r_r2)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_r2);
    else {
        CPy_TypeError("int", cpy_r_r2); cpy_r_r3 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 239, CPyStatic_refcount___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPY_INT_TAG;
    return cpy_r_r4;
}

PyObject *CPyPy_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"r", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_r;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_r)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_r;
    if (likely(PyObject_TypeCheck(obj_r, CPyType_ops___Value)))
        arg_r = obj_r;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_r); 
        goto fail;
    }
    CPyTagged retval = CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj_____call__(arg___mypyc_self__, arg_r);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "<lambda>", 239, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount___after_branch_increfs(PyObject *cpy_r_label, PyObject *cpy_r_pre_live, PyObject *cpy_r_pre_borrow, PyObject *cpy_r_source_borrowed, PyObject *cpy_r_ordering) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    tuple_T2OI cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target_pre_live;
    tuple_T2OI cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_target_borrowed;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_incref;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T0 cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = CPyDef_refcount___after_branch_increfs_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 227, CPyStatic_refcount___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_ordering);
    if (((mypyc___transform___refcount___after_branch_increfs_envObject *)cpy_r_r0)->_ordering != NULL) {
        CPy_DECREF(((mypyc___transform___refcount___after_branch_increfs_envObject *)cpy_r_r0)->_ordering);
    }
    ((mypyc___transform___refcount___after_branch_increfs_envObject *)cpy_r_r0)->_ordering = cpy_r_ordering;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 227, CPyStatic_refcount___globals);
        goto CPyL28;
    }
    cpy_r_r2.f0 = cpy_r_label;
    cpy_r_r2.f1 = 0;
    CPy_INCREF(cpy_r_r2.f0);
    CPyTagged_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10865 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp10865);
    PyObject *__tmp10866 = CPyTagged_StealAsObject(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp10866);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_pre_live, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 234, CPyStatic_refcount___globals);
        goto CPyL28;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 234, CPyStatic_refcount___globals, "set", cpy_r_r4);
        goto CPyL28;
    }
    cpy_r_target_pre_live = cpy_r_r5;
    cpy_r_r6.f0 = cpy_r_label;
    cpy_r_r6.f1 = 0;
    CPy_INCREF(cpy_r_r6.f0);
    CPyTagged_INCREF(cpy_r_r6.f1);
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10867 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp10867);
    PyObject *__tmp10868 = CPyTagged_StealAsObject(cpy_r_r6.f1);
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp10868);
    cpy_r_r8 = CPyDict_GetItem(cpy_r_pre_borrow, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 235, CPyStatic_refcount___globals);
        goto CPyL29;
    }
    if (likely(PySet_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 235, CPyStatic_refcount___globals, "set", cpy_r_r8);
        goto CPyL29;
    }
    cpy_r_target_borrowed = cpy_r_r9;
    cpy_r_r10 = PyNumber_Subtract(cpy_r_source_borrowed, cpy_r_target_borrowed);
    CPy_DECREF(cpy_r_target_borrowed);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 236, CPyStatic_refcount___globals);
        goto CPyL29;
    }
    if (likely(PySet_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 236, CPyStatic_refcount___globals, "set", cpy_r_r10);
        goto CPyL29;
    }
    cpy_r_r12 = PyNumber_And(cpy_r_r11, cpy_r_target_pre_live);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_target_pre_live);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 236, CPyStatic_refcount___globals);
        goto CPyL28;
    }
    if (likely(PySet_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 236, CPyStatic_refcount___globals, "set", cpy_r_r12);
        goto CPyL28;
    }
    cpy_r_incref = cpy_r_r13;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_incref);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 236, CPyStatic_refcount___globals);
        goto CPyL30;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL31;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 238, CPyStatic_refcount___globals);
        goto CPyL30;
    }
    cpy_r_r18 = CPyDef_refcount_____mypyc_lambda__1_after_branch_increfs_obj();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 239, CPyStatic_refcount___globals);
        goto CPyL32;
    }
    if (((mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *)cpy_r_r18)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *)cpy_r_r18)->___mypyc_env__);
    }
    ((mypyc___transform___refcount_____mypyc_lambda__1_after_branch_increfs_objObject *)cpy_r_r18)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 239, CPyStatic_refcount___globals);
        goto CPyL33;
    }
    cpy_r_r20 = CPyModule_builtins;
    cpy_r_r21 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 239, CPyStatic_refcount___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r23[2] = {cpy_r_incref, cpy_r_r18};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, cpy_r_r25);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 239, CPyStatic_refcount___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_incref);
    CPy_DECREF(cpy_r_r18);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 239, CPyStatic_refcount___globals, "list", cpy_r_r26);
        goto CPyL34;
    }
    cpy_r_r28 = 0;
CPyL19: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL35;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r27, cpy_r_r28);
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_ops___Value)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 238, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL36;
    }
    cpy_r_reg = cpy_r_r34;
    cpy_r_r35 = ((mypyc___ir___ops___ValueObject *)cpy_r_reg)->_type;
    cpy_r_r36 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r35)->_is_refcounted;
    if (!cpy_r_r36) goto CPyL37;
CPyL22: ;
    cpy_r_r37 = PyList_Append(cpy_r_r17, cpy_r_reg);
    CPy_DECREF(cpy_r_reg);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 238, CPyStatic_refcount___globals);
        goto CPyL36;
    }
CPyL23: ;
    cpy_r_r39 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r39;
    goto CPyL19;
CPyL24: ;
    cpy_r_r40 = PyList_AsTuple(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 238, CPyStatic_refcount___globals);
        goto CPyL27;
    }
    return cpy_r_r40;
CPyL26: ;
    cpy_r_r41.empty_struct_error_flag = 0;
    cpy_r_r42 = PyTuple_New(0);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    return cpy_r_r42;
CPyL27: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_target_pre_live);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_incref);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_incref);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_incref);
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_incref);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL35: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL24;
CPyL36: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r27);
    goto CPyL27;
CPyL37: ;
    CPy_DECREF(cpy_r_reg);
    goto CPyL23;
}

PyObject *CPyPy_refcount___after_branch_increfs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"label", "pre_live", "pre_borrow", "source_borrowed", "ordering", 0};
    static CPyArg_Parser parser = {"OOOOO:after_branch_increfs", kwlist, 0};
    PyObject *obj_label;
    PyObject *obj_pre_live;
    PyObject *obj_pre_borrow;
    PyObject *obj_source_borrowed;
    PyObject *obj_ordering;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_label, &obj_pre_live, &obj_pre_borrow, &obj_source_borrowed, &obj_ordering)) {
        return NULL;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *arg_pre_live;
    if (likely(PyDict_Check(obj_pre_live)))
        arg_pre_live = obj_pre_live;
    else {
        CPy_TypeError("dict", obj_pre_live); 
        goto fail;
    }
    PyObject *arg_pre_borrow;
    if (likely(PyDict_Check(obj_pre_borrow)))
        arg_pre_borrow = obj_pre_borrow;
    else {
        CPy_TypeError("dict", obj_pre_borrow); 
        goto fail;
    }
    PyObject *arg_source_borrowed;
    if (likely(PySet_Check(obj_source_borrowed)))
        arg_source_borrowed = obj_source_borrowed;
    else {
        CPy_TypeError("set", obj_source_borrowed); 
        goto fail;
    }
    PyObject *arg_ordering;
    if (likely(PyDict_Check(obj_ordering)))
        arg_ordering = obj_ordering;
    else {
        CPy_TypeError("dict", obj_ordering); 
        goto fail;
    }
    PyObject *retval = CPyDef_refcount___after_branch_increfs(arg_label, arg_pre_live, arg_pre_borrow, arg_source_borrowed, arg_ordering);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "after_branch_increfs", 227, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount___add_block(PyObject *cpy_r_decs, PyObject *cpy_r_incs, PyObject *cpy_r_cache, PyObject *cpy_r_blocks, PyObject *cpy_r_label) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    tuple_T3OOO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_block;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OC cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_reg;
    char cpy_r_r31;
    char cpy_r_xdec;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_reg_2;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = PyObject_IsTrue(cpy_r_decs);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 245, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    cpy_r_r2 = cpy_r_r0;
    if (cpy_r_r2) goto CPyL5;
    cpy_r_r3 = PyObject_IsTrue(cpy_r_incs);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 245, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) goto CPyL5;
    CPy_INCREF(cpy_r_label);
    return cpy_r_label;
CPyL5: ;
    cpy_r_r6.f0 = cpy_r_label;
    cpy_r_r6.f1 = cpy_r_decs;
    cpy_r_r6.f2 = cpy_r_incs;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_INCREF(cpy_r_r6.f2);
    cpy_r_r7 = PyTuple_New(3);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10869 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp10869);
    PyObject *__tmp10870 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp10870);
    PyObject *__tmp10871 = cpy_r_r6.f2;
    PyTuple_SET_ITEM(cpy_r_r7, 2, __tmp10871);
    cpy_r_r8 = PyDict_Contains(cpy_r_cache, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 251, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11.f0 = cpy_r_label;
    cpy_r_r11.f1 = cpy_r_decs;
    cpy_r_r11.f2 = cpy_r_incs;
    CPy_INCREF(cpy_r_r11.f0);
    CPy_INCREF(cpy_r_r11.f1);
    CPy_INCREF(cpy_r_r11.f2);
    cpy_r_r12 = PyTuple_New(3);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10872 = cpy_r_r11.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp10872);
    PyObject *__tmp10873 = cpy_r_r11.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp10873);
    PyObject *__tmp10874 = cpy_r_r11.f2;
    PyTuple_SET_ITEM(cpy_r_r12, 2, __tmp10874);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_cache, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 252, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_ops___BasicBlock))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "add_block", 252, CPyStatic_refcount___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r13);
        goto CPyL34;
    }
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_ops___BasicBlock(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 254, CPyStatic_refcount___globals);
        goto CPyL34;
    }
    cpy_r_block = cpy_r_r16;
    cpy_r_r17 = PyList_Append(cpy_r_blocks, cpy_r_block);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 255, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    cpy_r_r19 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_decs)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = PyList_New(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL36;
    }
    cpy_r_r23 = 0;
CPyL14: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_decs)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL20;
    cpy_r_r28 = CPySequenceTuple_GetItem(cpy_r_decs, cpy_r_r23);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL37;
    }
    PyObject *__tmp10875;
    if (unlikely(!(PyTuple_Check(cpy_r_r28) && PyTuple_GET_SIZE(cpy_r_r28) == 2))) {
        __tmp10875 = NULL;
        goto __LL10876;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r28, 0), CPyType_ops___Value)))
        __tmp10875 = PyTuple_GET_ITEM(cpy_r_r28, 0);
    else {
        __tmp10875 = NULL;
    }
    if (__tmp10875 == NULL) goto __LL10876;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r28, 1))))
        __tmp10875 = PyTuple_GET_ITEM(cpy_r_r28, 1);
    else {
        __tmp10875 = NULL;
    }
    if (__tmp10875 == NULL) goto __LL10876;
    __tmp10875 = cpy_r_r28;
__LL10876: ;
    if (unlikely(__tmp10875 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.ops.Value, bool]", cpy_r_r28); cpy_r_r29 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp10877 = PyTuple_GET_ITEM(cpy_r_r28, 0);
        CPy_INCREF(__tmp10877);
        PyObject *__tmp10878;
        if (likely(PyObject_TypeCheck(__tmp10877, CPyType_ops___Value)))
            __tmp10878 = __tmp10877;
        else {
            CPy_TypeError("mypyc.ir.ops.Value", __tmp10877); 
            __tmp10878 = NULL;
        }
        cpy_r_r29.f0 = __tmp10878;
        PyObject *__tmp10879 = PyTuple_GET_ITEM(cpy_r_r28, 1);
        char __tmp10880;
        if (unlikely(!PyBool_Check(__tmp10879))) {
            CPy_TypeError("bool", __tmp10879); __tmp10880 = 2;
        } else
            __tmp10880 = __tmp10879 == Py_True;
        cpy_r_r29.f1 = __tmp10880;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL37;
    }
    cpy_r_r30 = cpy_r_r29.f0;
    CPy_INCREF(cpy_r_r30);
    cpy_r_reg = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f1;
    CPy_DECREF(cpy_r_r29.f0);
    cpy_r_xdec = cpy_r_r31;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = CPyDef_ops___DecRef(cpy_r_reg, cpy_r_xdec, cpy_r_r32);
    CPy_DECREF(cpy_r_reg);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL37;
    }
    cpy_r_r34 = CPyList_SetItemUnsafe(cpy_r_r22, cpy_r_r23, cpy_r_r33);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL37;
    }
    cpy_r_r35 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r35;
    goto CPyL14;
CPyL20: ;
    cpy_r_r36 = CPyList_Extend(cpy_r_r19, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 256, CPyStatic_refcount___globals);
        goto CPyL35;
    } else
        goto CPyL38;
CPyL21: ;
    cpy_r_r37 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_incs)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = PyList_New(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals);
        goto CPyL39;
    }
    cpy_r_r41 = 0;
CPyL23: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_incs)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL29;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_incs, cpy_r_r41);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_ops___Value)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals, "mypyc.ir.ops.Value", cpy_r_r46);
        goto CPyL40;
    }
    cpy_r_reg_2 = cpy_r_r47;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_ops___IncRef(cpy_r_reg_2, cpy_r_r48);
    CPy_DECREF(cpy_r_reg_2);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals);
        goto CPyL40;
    }
    cpy_r_r50 = CPyList_SetItemUnsafe(cpy_r_r40, cpy_r_r41, cpy_r_r49);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals);
        goto CPyL40;
    }
    cpy_r_r51 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r51;
    goto CPyL23;
CPyL29: ;
    cpy_r_r52 = CPyList_Extend(cpy_r_r37, cpy_r_r40);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 257, CPyStatic_refcount___globals);
        goto CPyL35;
    } else
        goto CPyL41;
CPyL30: ;
    cpy_r_r53 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPyDef_ops___Goto(cpy_r_label, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 258, CPyStatic_refcount___globals);
        goto CPyL42;
    }
    cpy_r_r56 = PyList_Append(cpy_r_r53, cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 258, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    cpy_r_r58.f0 = cpy_r_label;
    cpy_r_r58.f1 = cpy_r_decs;
    cpy_r_r58.f2 = cpy_r_incs;
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_INCREF(cpy_r_r58.f2);
    cpy_r_r59 = PyTuple_New(3);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10881 = cpy_r_r58.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp10881);
    PyObject *__tmp10882 = cpy_r_r58.f1;
    PyTuple_SET_ITEM(cpy_r_r59, 1, __tmp10882);
    PyObject *__tmp10883 = cpy_r_r58.f2;
    PyTuple_SET_ITEM(cpy_r_r59, 2, __tmp10883);
    cpy_r_r60 = CPyDict_SetItem(cpy_r_cache, cpy_r_r59, cpy_r_block);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 259, CPyStatic_refcount___globals);
        goto CPyL35;
    }
    return cpy_r_block;
CPyL34: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL35: ;
    CPy_DecRef(cpy_r_block);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r19);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL34;
CPyL38: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r37);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL34;
CPyL41: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r53);
    goto CPyL34;
}

PyObject *CPyPy_refcount___add_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"decs", "incs", "cache", "blocks", "label", 0};
    static CPyArg_Parser parser = {"OOOOO:add_block", kwlist, 0};
    PyObject *obj_decs;
    PyObject *obj_incs;
    PyObject *obj_cache;
    PyObject *obj_blocks;
    PyObject *obj_label;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_decs, &obj_incs, &obj_cache, &obj_blocks, &obj_label)) {
        return NULL;
    }
    PyObject * arg_decs;
    if (likely(PyTuple_Check(obj_decs)))
        arg_decs = obj_decs;
    else {
        CPy_TypeError("tuple", obj_decs); 
        goto fail;
    }
    PyObject * arg_incs;
    if (likely(PyTuple_Check(obj_incs)))
        arg_incs = obj_incs;
    else {
        CPy_TypeError("tuple", obj_incs); 
        goto fail;
    }
    PyObject *arg_cache;
    if (likely(PyDict_Check(obj_cache)))
        arg_cache = obj_cache;
    else {
        CPy_TypeError("dict", obj_cache); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *retval = CPyDef_refcount___add_block(arg_decs, arg_incs, arg_cache, arg_blocks, arg_label);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "add_block", 244, CPyStatic_refcount___globals);
    return NULL;
}

PyObject *CPyDef_refcount___make_value_ordering(PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 269, CPyStatic_refcount___globals);
        goto CPyL38;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_n = 0;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL39;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___Register))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 272, CPyStatic_refcount___globals, "mypyc.ir.ops.Register", cpy_r_r7);
        goto CPyL40;
    }
    cpy_r_arg = cpy_r_r8;
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r10 = CPyDict_SetItem(cpy_r_result, cpy_r_arg, cpy_r_r9);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 273, CPyStatic_refcount___globals);
        goto CPyL40;
    }
    cpy_r_r12 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r12;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_r14 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL41;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_ops___BasicBlock))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 276, CPyStatic_refcount___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r20);
        goto CPyL42;
    }
    cpy_r_block = cpy_r_r21;
    cpy_r_r22 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_block);
    cpy_r_r23 = 0;
CPyL11: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL43;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r22, cpy_r_r23);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_ops___Op)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 277, CPyStatic_refcount___globals, "mypyc.ir.ops.Op", cpy_r_r28);
        goto CPyL44;
    }
    cpy_r_op = cpy_r_r29;
    cpy_r_r30 = (PyObject *)CPyType_ops___LoadAddress;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r34 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 280, CPyStatic_refcount___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL45;
    }
    cpy_r_r35 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r34)->_src;
    cpy_r_r36 = (PyObject *)CPyType_ops___Register;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r35)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r40 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 281, CPyStatic_refcount___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL45;
    }
    cpy_r_r41 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r40)->_src;
    CPy_INCREF(cpy_r_r41);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_ops___Register))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 281, CPyStatic_refcount___globals, "mypyc.ir.ops.Register", cpy_r_r41);
        goto CPyL45;
    }
    cpy_r_r43 = PyDict_Contains(cpy_r_result, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 281, CPyStatic_refcount___globals);
        goto CPyL45;
    }
    cpy_r_r45 = cpy_r_r43;
    cpy_r_r46 = cpy_r_r45 ^ 1;
    if (!cpy_r_r46) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r47 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 284, CPyStatic_refcount___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL45;
    }
    cpy_r_r48 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r47)->_src;
    CPy_INCREF(cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_ops___Register))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 284, CPyStatic_refcount___globals, "mypyc.ir.ops.Register", cpy_r_r48);
        goto CPyL45;
    }
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r51 = CPyDict_SetItem(cpy_r_result, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 284, CPyStatic_refcount___globals);
        goto CPyL45;
    }
    cpy_r_r53 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r53;
CPyL24: ;
    cpy_r_r54 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r55 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r56 = *(PyObject * *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 == cpy_r_r54;
    if (!cpy_r_r57) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Assign))
        cpy_r_r58 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 287, CPyStatic_refcount___globals, "mypyc.ir.ops.Assign", cpy_r_op);
        goto CPyL45;
    }
    cpy_r_r59 = ((mypyc___ir___ops___AssignObject *)cpy_r_r58)->_dest;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = PyDict_Contains(cpy_r_result, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 287, CPyStatic_refcount___globals);
        goto CPyL45;
    }
    cpy_r_r62 = cpy_r_r60;
    cpy_r_r63 = cpy_r_r62 ^ 1;
    if (!cpy_r_r63) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Assign))
        cpy_r_r64 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/refcount.py", "make_value_ordering", 288, CPyStatic_refcount___globals, "mypyc.ir.ops.Assign", cpy_r_op);
        goto CPyL45;
    }
    cpy_r_r65 = ((mypyc___ir___ops___AssignObject *)cpy_r_r64)->_dest;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_op);
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r67 = CPyDict_SetItem(cpy_r_result, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 288, CPyStatic_refcount___globals);
        goto CPyL44;
    }
    cpy_r_r69 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r69;
    goto CPyL35;
CPyL31: ;
    cpy_r_r70 = PyDict_Contains(cpy_r_result, cpy_r_op);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 290, CPyStatic_refcount___globals);
        goto CPyL45;
    }
    cpy_r_r72 = cpy_r_r70;
    cpy_r_r73 = cpy_r_r72 ^ 1;
    if (!cpy_r_r73) goto CPyL46;
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r74 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r75 = CPyDict_SetItem(cpy_r_result, cpy_r_op, cpy_r_r74);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 291, CPyStatic_refcount___globals);
        goto CPyL44;
    }
    cpy_r_r77 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r77;
CPyL35: ;
    cpy_r_r78 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r78;
    goto CPyL11;
CPyL36: ;
    cpy_r_r79 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r79;
    goto CPyL8;
CPyL37: ;
    return cpy_r_result;
CPyL38: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL39: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL40: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r1);
    goto CPyL38;
CPyL41: ;
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_r14);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r14);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r22);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_op);
    goto CPyL38;
CPyL46: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL35;
}

PyObject *CPyPy_refcount___make_value_ordering(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:make_value_ordering", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_func_ir___FuncIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_ir); 
        goto fail;
    }
    PyObject *retval = CPyDef_refcount___make_value_ordering(arg_ir);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/refcount.py", "make_value_ordering", 263, CPyStatic_refcount___globals);
    return NULL;
}

char CPyDef_refcount_____top_level__(void) {
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
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T2OO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
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
    tuple_T3OOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2OO cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", -1, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_refcount___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 19, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10293]; /* ('Dict', 'Iterable', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_refcount___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 21, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10294]; /* ('AnalysisDict', 'analyze_borrowed_arguments',
                                      'analyze_live_regs', 'analyze_must_defined_regs',
                                      'cleanup_cfg', 'get_cfg') */
    cpy_r_r14 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r15 = CPyStatic_refcount___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 23, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___analysis___dataflow = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___analysis___dataflow);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10295]; /* ('FuncIR', 'all_values') */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_refcount___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 31, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10296]; /* ('Assign', 'BasicBlock', 'Branch', 'ControlOp',
                                      'DecRef', 'Goto', 'IncRef', 'Integer', 'KeepAlive',
                                      'LoadAddress', 'Op', 'Register', 'RegisterOp',
                                      'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_refcount___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 32, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatic_refcount___globals;
    cpy_r_r26 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 49, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r28 = CPyStatic_refcount___globals;
    cpy_r_r29 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 49, CPyStatic_refcount___globals);
        goto CPyL25;
    }
    cpy_r_r31 = (PyObject *)CPyType_ops___Value;
    cpy_r_r32 = (PyObject *)&PyBool_Type;
    cpy_r_r33.f0 = cpy_r_r31;
    cpy_r_r33.f1 = cpy_r_r32;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1);
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10884 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp10884);
    PyObject *__tmp10885 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp10885);
    cpy_r_r35 = PyObject_GetItem(cpy_r_r30, cpy_r_r34);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 49, CPyStatic_refcount___globals);
        goto CPyL25;
    }
    cpy_r_r36 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r37.f0 = cpy_r_r35;
    cpy_r_r37.f1 = cpy_r_r36;
    CPy_INCREF(cpy_r_r37.f0);
    CPy_INCREF(cpy_r_r37.f1);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10886 = cpy_r_r37.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp10886);
    PyObject *__tmp10887 = cpy_r_r37.f1;
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp10887);
    cpy_r_r39 = PyObject_GetItem(cpy_r_r27, cpy_r_r38);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 49, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r40 = CPyStatic_refcount___globals;
    cpy_r_r41 = CPyStatics[9003]; /* 'Decs' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 49, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r44 = CPyStatic_refcount___globals;
    cpy_r_r45 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 50, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r47 = (PyObject *)CPyType_ops___Value;
    cpy_r_r48 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r49.f0 = cpy_r_r47;
    cpy_r_r49.f1 = cpy_r_r48;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10888 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp10888);
    PyObject *__tmp10889 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp10889);
    cpy_r_r51 = PyObject_GetItem(cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 50, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r52 = CPyStatic_refcount___globals;
    cpy_r_r53 = CPyStatics[9004]; /* 'Incs' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 50, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r56 = CPyStatic_refcount___globals;
    cpy_r_r57 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r59 = CPyStatic_refcount___globals;
    cpy_r_r60 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL26;
    }
    cpy_r_r62 = (PyObject *)CPyType_ops___BasicBlock;
    cpy_r_r63 = CPyStatic_refcount___globals;
    cpy_r_r64 = CPyStatics[9003]; /* 'Decs' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL27;
    }
    cpy_r_r66 = CPyStatic_refcount___globals;
    cpy_r_r67 = CPyStatics[9004]; /* 'Incs' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL28;
    }
    cpy_r_r69.f0 = cpy_r_r62;
    cpy_r_r69.f1 = cpy_r_r65;
    cpy_r_r69.f2 = cpy_r_r68;
    CPy_INCREF(cpy_r_r69.f0);
    CPy_INCREF(cpy_r_r69.f1);
    CPy_INCREF(cpy_r_r69.f2);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = PyTuple_New(3);
    if (unlikely(cpy_r_r70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10890 = cpy_r_r69.f0;
    PyTuple_SET_ITEM(cpy_r_r70, 0, __tmp10890);
    PyObject *__tmp10891 = cpy_r_r69.f1;
    PyTuple_SET_ITEM(cpy_r_r70, 1, __tmp10891);
    PyObject *__tmp10892 = cpy_r_r69.f2;
    PyTuple_SET_ITEM(cpy_r_r70, 2, __tmp10892);
    cpy_r_r71 = PyObject_GetItem(cpy_r_r61, cpy_r_r70);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL26;
    }
    cpy_r_r72 = (PyObject *)CPyType_ops___BasicBlock;
    cpy_r_r73.f0 = cpy_r_r71;
    cpy_r_r73.f1 = cpy_r_r72;
    CPy_INCREF(cpy_r_r73.f0);
    CPy_INCREF(cpy_r_r73.f1);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r74 = PyTuple_New(2);
    if (unlikely(cpy_r_r74 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10893 = cpy_r_r73.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp10893);
    PyObject *__tmp10894 = cpy_r_r73.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp10894);
    cpy_r_r75 = PyObject_GetItem(cpy_r_r58, cpy_r_r74);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    cpy_r_r76 = CPyStatic_refcount___globals;
    cpy_r_r77 = CPyStatics[9005]; /* 'BlockCache' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/transform/refcount.py", "<module>", 55, CPyStatic_refcount___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r80 = 2;
    return cpy_r_r80;
CPyL25: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r65);
    goto CPyL24;
}
