#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *CPyDunder___get__emitclass_____mypyc_lambda__0_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass_____mypyc_lambda__0_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass_____mypyc_lambda__0_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass_____mypyc_lambda__0_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass_____mypyc_lambda__0_obj(void);

static PyObject *
emitclass_____mypyc_lambda__0_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass_____mypyc_lambda__0_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass_____mypyc_lambda__0_obj_setup(type);
}

static int
emitclass_____mypyc_lambda__0_obj_traverse(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject))));
    return 0;
}

static int
emitclass_____mypyc_lambda__0_obj_clear(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject))));
    return 0;
}

static void
emitclass_____mypyc_lambda__0_obj_dealloc(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass_____mypyc_lambda__0_obj_dealloc)
    emitclass_____mypyc_lambda__0_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass_____mypyc_lambda__0_obj_vtable[2];
static bool
CPyDef_emitclass_____mypyc_lambda__0_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass_____mypyc_lambda__0_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__0_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__0_obj_____get__,
    };
    memcpy(emitclass_____mypyc_lambda__0_obj_vtable, emitclass_____mypyc_lambda__0_obj_vtable_scratch, sizeof(emitclass_____mypyc_lambda__0_obj_vtable));
    return 1;
}

static PyMethodDef emitclass_____mypyc_lambda__0_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__0_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__0_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass_____mypyc_lambda__0_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_obj",
    .tp_new = emitclass_____mypyc_lambda__0_obj_new,
    .tp_dealloc = (destructor)emitclass_____mypyc_lambda__0_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass_____mypyc_lambda__0_obj_traverse,
    .tp_clear = (inquiry)emitclass_____mypyc_lambda__0_obj_clear,
    .tp_methods = emitclass_____mypyc_lambda__0_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass_____mypyc_lambda__0_obj,
    .tp_members = emitclass_____mypyc_lambda__0_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass_____mypyc_lambda__0_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass_____mypyc_lambda__0_obj_template = &CPyType_emitclass_____mypyc_lambda__0_obj_template_;

static PyObject *
emitclass_____mypyc_lambda__0_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass_____mypyc_lambda__0_objObject *self;
    self = (mypyc___codegen___emitclass_____mypyc_lambda__0_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass_____mypyc_lambda__0_obj_vtable;
    self->vectorcall = CPyPy_emitclass_____mypyc_lambda__0_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__0_obj(void)
{
    PyObject *self = emitclass_____mypyc_lambda__0_obj_setup(CPyType_emitclass_____mypyc_lambda__0_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitclass_____mypyc_lambda__1_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass_____mypyc_lambda__1_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass_____mypyc_lambda__1_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass_____mypyc_lambda__1_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass_____mypyc_lambda__1_obj(void);

static PyObject *
emitclass_____mypyc_lambda__1_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass_____mypyc_lambda__1_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass_____mypyc_lambda__1_obj_setup(type);
}

static int
emitclass_____mypyc_lambda__1_obj_traverse(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject))));
    return 0;
}

static int
emitclass_____mypyc_lambda__1_obj_clear(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject))));
    return 0;
}

static void
emitclass_____mypyc_lambda__1_obj_dealloc(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass_____mypyc_lambda__1_obj_dealloc)
    emitclass_____mypyc_lambda__1_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass_____mypyc_lambda__1_obj_vtable[2];
static bool
CPyDef_emitclass_____mypyc_lambda__1_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass_____mypyc_lambda__1_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__1_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__1_obj_____get__,
    };
    memcpy(emitclass_____mypyc_lambda__1_obj_vtable, emitclass_____mypyc_lambda__1_obj_vtable_scratch, sizeof(emitclass_____mypyc_lambda__1_obj_vtable));
    return 1;
}

static PyMethodDef emitclass_____mypyc_lambda__1_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__1_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__1_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass_____mypyc_lambda__1_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_obj",
    .tp_new = emitclass_____mypyc_lambda__1_obj_new,
    .tp_dealloc = (destructor)emitclass_____mypyc_lambda__1_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass_____mypyc_lambda__1_obj_traverse,
    .tp_clear = (inquiry)emitclass_____mypyc_lambda__1_obj_clear,
    .tp_methods = emitclass_____mypyc_lambda__1_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass_____mypyc_lambda__1_obj,
    .tp_members = emitclass_____mypyc_lambda__1_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass_____mypyc_lambda__1_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass_____mypyc_lambda__1_obj_template = &CPyType_emitclass_____mypyc_lambda__1_obj_template_;

static PyObject *
emitclass_____mypyc_lambda__1_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass_____mypyc_lambda__1_objObject *self;
    self = (mypyc___codegen___emitclass_____mypyc_lambda__1_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass_____mypyc_lambda__1_obj_vtable;
    self->vectorcall = CPyPy_emitclass_____mypyc_lambda__1_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__1_obj(void)
{
    PyObject *self = emitclass_____mypyc_lambda__1_obj_setup(CPyType_emitclass_____mypyc_lambda__1_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *emitclass___generate_slots_env_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___generate_slots_env(void);

static PyObject *
emitclass___generate_slots_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___generate_slots_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___generate_slots_env_setup(type);
}

static int
emitclass___generate_slots_env_traverse(mypyc___codegen___emitclass___generate_slots_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_cl);
    Py_VISIT(self->_table);
    Py_VISIT(self->_emitter);
    Py_VISIT(self->_fields);
    Py_VISIT(self->_generated);
    return 0;
}

static int
emitclass___generate_slots_env_clear(mypyc___codegen___emitclass___generate_slots_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_cl);
    Py_CLEAR(self->_table);
    Py_CLEAR(self->_emitter);
    Py_CLEAR(self->_fields);
    Py_CLEAR(self->_generated);
    return 0;
}

static void
emitclass___generate_slots_env_dealloc(mypyc___codegen___emitclass___generate_slots_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___generate_slots_env_dealloc)
    emitclass___generate_slots_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___generate_slots_env_vtable[1];
static bool
CPyDef_emitclass___generate_slots_env_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___generate_slots_env_vtable_scratch[] = {
        NULL
    };
    memcpy(emitclass___generate_slots_env_vtable, emitclass___generate_slots_env_vtable_scratch, sizeof(emitclass___generate_slots_env_vtable));
    return 1;
}

static PyMethodDef emitclass___generate_slots_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___generate_slots_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "generate_slots_env",
    .tp_new = emitclass___generate_slots_env_new,
    .tp_dealloc = (destructor)emitclass___generate_slots_env_dealloc,
    .tp_traverse = (traverseproc)emitclass___generate_slots_env_traverse,
    .tp_clear = (inquiry)emitclass___generate_slots_env_clear,
    .tp_methods = emitclass___generate_slots_env_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___generate_slots_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitclass___generate_slots_env_template = &CPyType_emitclass___generate_slots_env_template_;

static PyObject *
emitclass___generate_slots_env_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___generate_slots_envObject *self;
    self = (mypyc___codegen___emitclass___generate_slots_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___generate_slots_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___generate_slots_env(void)
{
    PyObject *self = emitclass___generate_slots_env_setup(CPyType_emitclass___generate_slots_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitclass_____mypyc_lambda__2_generate_slots_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass_____mypyc_lambda__2_generate_slots_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass_____mypyc_lambda__2_generate_slots_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj(void);

static PyObject *
emitclass_____mypyc_lambda__2_generate_slots_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass_____mypyc_lambda__2_generate_slots_obj_setup(type);
}

static int
emitclass_____mypyc_lambda__2_generate_slots_obj_traverse(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject))));
    return 0;
}

static int
emitclass_____mypyc_lambda__2_generate_slots_obj_clear(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject))));
    return 0;
}

static void
emitclass_____mypyc_lambda__2_generate_slots_obj_dealloc(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass_____mypyc_lambda__2_generate_slots_obj_dealloc)
    emitclass_____mypyc_lambda__2_generate_slots_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass_____mypyc_lambda__2_generate_slots_obj_vtable[2];
static bool
CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass_____mypyc_lambda__2_generate_slots_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__,
    };
    memcpy(emitclass_____mypyc_lambda__2_generate_slots_obj_vtable, emitclass_____mypyc_lambda__2_generate_slots_obj_vtable_scratch, sizeof(emitclass_____mypyc_lambda__2_generate_slots_obj_vtable));
    return 1;
}

static PyMethodDef emitclass_____mypyc_lambda__2_generate_slots_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__2_generate_slots_obj",
    .tp_new = emitclass_____mypyc_lambda__2_generate_slots_obj_new,
    .tp_dealloc = (destructor)emitclass_____mypyc_lambda__2_generate_slots_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass_____mypyc_lambda__2_generate_slots_obj_traverse,
    .tp_clear = (inquiry)emitclass_____mypyc_lambda__2_generate_slots_obj_clear,
    .tp_methods = emitclass_____mypyc_lambda__2_generate_slots_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass_____mypyc_lambda__2_generate_slots_obj,
    .tp_members = emitclass_____mypyc_lambda__2_generate_slots_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj_template = &CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj_template_;

static PyObject *
emitclass_____mypyc_lambda__2_generate_slots_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *self;
    self = (mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass_____mypyc_lambda__2_generate_slots_obj_vtable;
    self->vectorcall = CPyPy_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj(void)
{
    PyObject *self = emitclass_____mypyc_lambda__2_generate_slots_obj_setup(CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *emitclass___generate_class_env_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___generate_class_env(void);

static PyObject *
emitclass___generate_class_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___generate_class_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___generate_class_env_setup(type);
}

static int
emitclass___generate_class_env_traverse(mypyc___codegen___emitclass___generate_class_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_emitter);
    Py_VISIT(self->_emit_line);
    Py_VISIT(self->_cl);
    Py_VISIT(self->_module);
    Py_VISIT(self->_name);
    Py_VISIT(self->_name_prefix);
    Py_VISIT(self->_setup_name);
    Py_VISIT(self->_new_name);
    Py_VISIT(self->_members_name);
    Py_VISIT(self->_getseters_name);
    Py_VISIT(self->_vtable_name);
    Py_VISIT(self->_traverse_name);
    Py_VISIT(self->_clear_name);
    Py_VISIT(self->_dealloc_name);
    Py_VISIT(self->_methods_name);
    Py_VISIT(self->_vtable_setup_name);
    Py_VISIT(self->_fields);
    return 0;
}

static int
emitclass___generate_class_env_clear(mypyc___codegen___emitclass___generate_class_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_emitter);
    Py_CLEAR(self->_emit_line);
    Py_CLEAR(self->_cl);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_name_prefix);
    Py_CLEAR(self->_setup_name);
    Py_CLEAR(self->_new_name);
    Py_CLEAR(self->_members_name);
    Py_CLEAR(self->_getseters_name);
    Py_CLEAR(self->_vtable_name);
    Py_CLEAR(self->_traverse_name);
    Py_CLEAR(self->_clear_name);
    Py_CLEAR(self->_dealloc_name);
    Py_CLEAR(self->_methods_name);
    Py_CLEAR(self->_vtable_setup_name);
    Py_CLEAR(self->_fields);
    return 0;
}

static void
emitclass___generate_class_env_dealloc(mypyc___codegen___emitclass___generate_class_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___generate_class_env_dealloc)
    emitclass___generate_class_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___generate_class_env_vtable[1];
static bool
CPyDef_emitclass___generate_class_env_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___generate_class_env_vtable_scratch[] = {
        NULL
    };
    memcpy(emitclass___generate_class_env_vtable, emitclass___generate_class_env_vtable_scratch, sizeof(emitclass___generate_class_env_vtable));
    return 1;
}

static PyMethodDef emitclass___generate_class_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___generate_class_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "generate_class_env",
    .tp_new = emitclass___generate_class_env_new,
    .tp_dealloc = (destructor)emitclass___generate_class_env_dealloc,
    .tp_traverse = (traverseproc)emitclass___generate_class_env_traverse,
    .tp_clear = (inquiry)emitclass___generate_class_env_clear,
    .tp_methods = emitclass___generate_class_env_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___generate_class_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitclass___generate_class_env_template = &CPyType_emitclass___generate_class_env_template_;

static PyObject *
emitclass___generate_class_env_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___generate_class_envObject *self;
    self = (mypyc___codegen___emitclass___generate_class_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___generate_class_env_vtable;
    self->_generate_full = 2;
    self->_needs_getseters = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___generate_class_env(void)
{
    PyObject *self = emitclass___generate_class_env_setup(CPyType_emitclass___generate_class_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitclass___emit_line_generate_class_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass___emit_line_generate_class_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass___emit_line_generate_class_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass___emit_line_generate_class_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___emit_line_generate_class_obj(void);

static PyObject *
emitclass___emit_line_generate_class_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___emit_line_generate_class_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___emit_line_generate_class_obj_setup(type);
}

static int
emitclass___emit_line_generate_class_obj_traverse(mypyc___codegen___emitclass___emit_line_generate_class_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject))));
    return 0;
}

static int
emitclass___emit_line_generate_class_obj_clear(mypyc___codegen___emitclass___emit_line_generate_class_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject))));
    return 0;
}

static void
emitclass___emit_line_generate_class_obj_dealloc(mypyc___codegen___emitclass___emit_line_generate_class_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___emit_line_generate_class_obj_dealloc)
    emitclass___emit_line_generate_class_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___emit_line_generate_class_obj_vtable[2];
static bool
CPyDef_emitclass___emit_line_generate_class_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___emit_line_generate_class_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass___emit_line_generate_class_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass___emit_line_generate_class_obj_____get__,
    };
    memcpy(emitclass___emit_line_generate_class_obj_vtable, emitclass___emit_line_generate_class_obj_vtable_scratch, sizeof(emitclass___emit_line_generate_class_obj_vtable));
    return 1;
}

static PyMethodDef emitclass___emit_line_generate_class_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass___emit_line_generate_class_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass___emit_line_generate_class_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___emit_line_generate_class_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "emit_line_generate_class_obj",
    .tp_new = emitclass___emit_line_generate_class_obj_new,
    .tp_dealloc = (destructor)emitclass___emit_line_generate_class_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass___emit_line_generate_class_obj_traverse,
    .tp_clear = (inquiry)emitclass___emit_line_generate_class_obj_clear,
    .tp_methods = emitclass___emit_line_generate_class_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass___emit_line_generate_class_obj,
    .tp_members = emitclass___emit_line_generate_class_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass___emit_line_generate_class_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass___emit_line_generate_class_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass___emit_line_generate_class_obj_template = &CPyType_emitclass___emit_line_generate_class_obj_template_;

static PyObject *
emitclass___emit_line_generate_class_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___emit_line_generate_class_objObject *self;
    self = (mypyc___codegen___emitclass___emit_line_generate_class_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___emit_line_generate_class_obj_vtable;
    self->vectorcall = CPyPy_emitclass___emit_line_generate_class_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___emit_line_generate_class_obj(void)
{
    PyObject *self = emitclass___emit_line_generate_class_obj_setup(CPyType_emitclass___emit_line_generate_class_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *emitclass___generate_vtables_env_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___generate_vtables_env(void);

static PyObject *
emitclass___generate_vtables_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___generate_vtables_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___generate_vtables_env_setup(type);
}

static int
emitclass___generate_vtables_env_traverse(mypyc___codegen___emitclass___generate_vtables_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_base);
    Py_VISIT(self->_emitter);
    Py_VISIT(self->_trait_vtable_name);
    Py_VISIT(self->_trait_offset_table_name);
    Py_VISIT(self->_vtable_setup_name);
    Py_VISIT(self->_vtable_name);
    return 0;
}

static int
emitclass___generate_vtables_env_clear(mypyc___codegen___emitclass___generate_vtables_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_base);
    Py_CLEAR(self->_emitter);
    Py_CLEAR(self->_trait_vtable_name);
    Py_CLEAR(self->_trait_offset_table_name);
    Py_CLEAR(self->_vtable_setup_name);
    Py_CLEAR(self->_vtable_name);
    return 0;
}

static void
emitclass___generate_vtables_env_dealloc(mypyc___codegen___emitclass___generate_vtables_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___generate_vtables_env_dealloc)
    emitclass___generate_vtables_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___generate_vtables_env_vtable[1];
static bool
CPyDef_emitclass___generate_vtables_env_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___generate_vtables_env_vtable_scratch[] = {
        NULL
    };
    memcpy(emitclass___generate_vtables_env_vtable, emitclass___generate_vtables_env_vtable_scratch, sizeof(emitclass___generate_vtables_env_vtable));
    return 1;
}

static PyMethodDef emitclass___generate_vtables_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___generate_vtables_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "generate_vtables_env",
    .tp_new = emitclass___generate_vtables_env_new,
    .tp_dealloc = (destructor)emitclass___generate_vtables_env_dealloc,
    .tp_traverse = (traverseproc)emitclass___generate_vtables_env_traverse,
    .tp_clear = (inquiry)emitclass___generate_vtables_env_clear,
    .tp_methods = emitclass___generate_vtables_env_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___generate_vtables_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitclass___generate_vtables_env_template = &CPyType_emitclass___generate_vtables_env_template_;

static PyObject *
emitclass___generate_vtables_env_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___generate_vtables_envObject *self;
    self = (mypyc___codegen___emitclass___generate_vtables_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___generate_vtables_env_vtable;
    self->_shadow = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___generate_vtables_env(void)
{
    PyObject *self = emitclass___generate_vtables_env_setup(CPyType_emitclass___generate_vtables_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitclass___trait_vtable_name_generate_vtables_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass___trait_vtable_name_generate_vtables_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass___trait_vtable_name_generate_vtables_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___trait_vtable_name_generate_vtables_obj(void);

static PyObject *
emitclass___trait_vtable_name_generate_vtables_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___trait_vtable_name_generate_vtables_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___trait_vtable_name_generate_vtables_obj_setup(type);
}

static int
emitclass___trait_vtable_name_generate_vtables_obj_traverse(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject))));
    return 0;
}

static int
emitclass___trait_vtable_name_generate_vtables_obj_clear(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject))));
    return 0;
}

static void
emitclass___trait_vtable_name_generate_vtables_obj_dealloc(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___trait_vtable_name_generate_vtables_obj_dealloc)
    emitclass___trait_vtable_name_generate_vtables_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___trait_vtable_name_generate_vtables_obj_vtable[2];
static bool
CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___trait_vtable_name_generate_vtables_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____get__,
    };
    memcpy(emitclass___trait_vtable_name_generate_vtables_obj_vtable, emitclass___trait_vtable_name_generate_vtables_obj_vtable_scratch, sizeof(emitclass___trait_vtable_name_generate_vtables_obj_vtable));
    return 1;
}

static PyMethodDef emitclass___trait_vtable_name_generate_vtables_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass___trait_vtable_name_generate_vtables_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass___trait_vtable_name_generate_vtables_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___trait_vtable_name_generate_vtables_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "trait_vtable_name_generate_vtables_obj",
    .tp_new = emitclass___trait_vtable_name_generate_vtables_obj_new,
    .tp_dealloc = (destructor)emitclass___trait_vtable_name_generate_vtables_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass___trait_vtable_name_generate_vtables_obj_traverse,
    .tp_clear = (inquiry)emitclass___trait_vtable_name_generate_vtables_obj_clear,
    .tp_methods = emitclass___trait_vtable_name_generate_vtables_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass___trait_vtable_name_generate_vtables_obj,
    .tp_members = emitclass___trait_vtable_name_generate_vtables_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass___trait_vtable_name_generate_vtables_obj_template = &CPyType_emitclass___trait_vtable_name_generate_vtables_obj_template_;

static PyObject *
emitclass___trait_vtable_name_generate_vtables_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *self;
    self = (mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___trait_vtable_name_generate_vtables_obj_vtable;
    self->vectorcall = CPyPy_emitclass___trait_vtable_name_generate_vtables_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___trait_vtable_name_generate_vtables_obj(void)
{
    PyObject *self = emitclass___trait_vtable_name_generate_vtables_obj_setup(CPyType_emitclass___trait_vtable_name_generate_vtables_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitclass___trait_offset_table_name_generate_vtables_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____get__(self, instance, owner);
}
PyMemberDef emitclass___trait_offset_table_name_generate_vtables_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitclass___trait_offset_table_name_generate_vtables_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj(void);

static PyObject *
emitclass___trait_offset_table_name_generate_vtables_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitclass___trait_offset_table_name_generate_vtables_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitclass___trait_offset_table_name_generate_vtables_obj_setup(type);
}

static int
emitclass___trait_offset_table_name_generate_vtables_obj_traverse(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject))));
    return 0;
}

static int
emitclass___trait_offset_table_name_generate_vtables_obj_clear(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject))));
    return 0;
}

static void
emitclass___trait_offset_table_name_generate_vtables_obj_dealloc(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitclass___trait_offset_table_name_generate_vtables_obj_dealloc)
    emitclass___trait_offset_table_name_generate_vtables_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitclass___trait_offset_table_name_generate_vtables_obj_vtable[2];
static bool
CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitclass___trait_offset_table_name_generate_vtables_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____call__,
        (CPyVTableItem)CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____get__,
    };
    memcpy(emitclass___trait_offset_table_name_generate_vtables_obj_vtable, emitclass___trait_offset_table_name_generate_vtables_obj_vtable_scratch, sizeof(emitclass___trait_offset_table_name_generate_vtables_obj_vtable));
    return 1;
}

static PyMethodDef emitclass___trait_offset_table_name_generate_vtables_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitclass___trait_offset_table_name_generate_vtables_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitclass___trait_offset_table_name_generate_vtables_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitclass___trait_offset_table_name_generate_vtables_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "trait_offset_table_name_generate_vtables_obj",
    .tp_new = emitclass___trait_offset_table_name_generate_vtables_obj_new,
    .tp_dealloc = (destructor)emitclass___trait_offset_table_name_generate_vtables_obj_dealloc,
    .tp_traverse = (traverseproc)emitclass___trait_offset_table_name_generate_vtables_obj_traverse,
    .tp_clear = (inquiry)emitclass___trait_offset_table_name_generate_vtables_obj_clear,
    .tp_methods = emitclass___trait_offset_table_name_generate_vtables_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitclass___trait_offset_table_name_generate_vtables_obj,
    .tp_members = emitclass___trait_offset_table_name_generate_vtables_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitclass___trait_offset_table_name_generate_vtables_obj_template = &CPyType_emitclass___trait_offset_table_name_generate_vtables_obj_template_;

static PyObject *
emitclass___trait_offset_table_name_generate_vtables_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *self;
    self = (mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitclass___trait_offset_table_name_generate_vtables_obj_vtable;
    self->vectorcall = CPyPy_emitclass___trait_offset_table_name_generate_vtables_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj(void)
{
    PyObject *self = emitclass___trait_offset_table_name_generate_vtables_obj_setup(CPyType_emitclass___trait_offset_table_name_generate_vtables_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef emitclassmodule_methods[] = {
    {"native_slot", (PyCFunction)CPyPy_emitclass___native_slot, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"wrapper_slot", (PyCFunction)CPyPy_emitclass___wrapper_slot, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_call_wrapper", (PyCFunction)CPyPy_emitclass___generate_call_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"slot_key", (PyCFunction)CPyPy_emitclass___slot_key, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_slots", (PyCFunction)CPyPy_emitclass___generate_slots, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_class_type_decl", (PyCFunction)CPyPy_emitclass___generate_class_type_decl, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_class", (PyCFunction)CPyPy_emitclass___generate_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"getter_name", (PyCFunction)CPyPy_emitclass___getter_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setter_name", (PyCFunction)CPyPy_emitclass___setter_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_object_struct", (PyCFunction)CPyPy_emitclass___generate_object_struct, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_vtables", (PyCFunction)CPyPy_emitclass___generate_vtables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_offset_table", (PyCFunction)CPyPy_emitclass___generate_offset_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_vtable", (PyCFunction)CPyPy_emitclass___generate_vtable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_setup_for_class", (PyCFunction)CPyPy_emitclass___generate_setup_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_constructor_for_class", (PyCFunction)CPyPy_emitclass___generate_constructor_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_init_for_class", (PyCFunction)CPyPy_emitclass___generate_init_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_new_for_class", (PyCFunction)CPyPy_emitclass___generate_new_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_new_for_trait", (PyCFunction)CPyPy_emitclass___generate_new_for_trait, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_traverse_for_class", (PyCFunction)CPyPy_emitclass___generate_traverse_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_clear_for_class", (PyCFunction)CPyPy_emitclass___generate_clear_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_dealloc_for_class", (PyCFunction)CPyPy_emitclass___generate_dealloc_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_methods_table", (PyCFunction)CPyPy_emitclass___generate_methods_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_side_table_for_class", (PyCFunction)CPyPy_emitclass___generate_side_table_for_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_getseter_declarations", (PyCFunction)CPyPy_emitclass___generate_getseter_declarations, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_getseters_table", (PyCFunction)CPyPy_emitclass___generate_getseters_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_getseters", (PyCFunction)CPyPy_emitclass___generate_getseters, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_getter", (PyCFunction)CPyPy_emitclass___generate_getter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_setter", (PyCFunction)CPyPy_emitclass___generate_setter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_readonly_getter", (PyCFunction)CPyPy_emitclass___generate_readonly_getter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_property_setter", (PyCFunction)CPyPy_emitclass___generate_property_setter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"has_managed_dict", (PyCFunction)CPyPy_emitclass___has_managed_dict, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef emitclassmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.emitclass",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    emitclassmodule_methods
};

PyObject *CPyInit_mypyc___codegen___emitclass(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___emitclass_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___emitclass_internal);
        return CPyModule_mypyc___codegen___emitclass_internal;
    }
    CPyModule_mypyc___codegen___emitclass_internal = PyModule_Create(&emitclassmodule);
    if (unlikely(CPyModule_mypyc___codegen___emitclass_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___emitclass_internal, "__name__");
    CPyStatic_emitclass___globals = PyModule_GetDict(CPyModule_mypyc___codegen___emitclass_internal);
    if (unlikely(CPyStatic_emitclass___globals == NULL))
        goto fail;
    CPyType_emitclass_____mypyc_lambda__0_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass_____mypyc_lambda__0_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass_____mypyc_lambda__0_obj))
        goto fail;
    CPyType_emitclass_____mypyc_lambda__1_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass_____mypyc_lambda__1_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass_____mypyc_lambda__1_obj))
        goto fail;
    CPyType_emitclass___generate_slots_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___generate_slots_env_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___generate_slots_env))
        goto fail;
    CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj))
        goto fail;
    CPyType_emitclass___generate_class_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___generate_class_env_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___generate_class_env))
        goto fail;
    CPyType_emitclass___emit_line_generate_class_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___emit_line_generate_class_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___emit_line_generate_class_obj))
        goto fail;
    CPyType_emitclass___generate_vtables_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___generate_vtables_env_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___generate_vtables_env))
        goto fail;
    CPyType_emitclass___trait_vtable_name_generate_vtables_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___trait_vtable_name_generate_vtables_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___trait_vtable_name_generate_vtables_obj))
        goto fail;
    CPyType_emitclass___trait_offset_table_name_generate_vtables_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitclass___trait_offset_table_name_generate_vtables_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitclass___trait_offset_table_name_generate_vtables_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_emitclass_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___emitclass_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___emitclass_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_emitclass_____mypyc_lambda__0_obj);
    Py_CLEAR(CPyType_emitclass_____mypyc_lambda__1_obj);
    Py_CLEAR(CPyType_emitclass___generate_slots_env);
    Py_CLEAR(CPyType_emitclass_____mypyc_lambda__2_generate_slots_obj);
    Py_CLEAR(CPyType_emitclass___generate_class_env);
    Py_CLEAR(CPyType_emitclass___emit_line_generate_class_obj);
    Py_CLEAR(CPyType_emitclass___generate_vtables_env);
    Py_CLEAR(CPyType_emitclass___trait_vtable_name_generate_vtables_obj);
    Py_CLEAR(CPyType_emitclass___trait_offset_table_name_generate_vtables_obj);
    return NULL;
}

PyObject *CPyDef_emitclass___native_slot(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "native_slot", 30, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "native_slot", 30, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_emitclass___native_slot(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:native_slot", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___native_slot(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "native_slot", 29, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___wrapper_slot(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "wrapper_slot", 34, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "wrapper_slot", 34, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_emitclass___wrapper_slot(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:wrapper_slot", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___wrapper_slot(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "wrapper_slot", 33, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__0_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass_____mypyc_lambda__0_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__0_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__0_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_c, PyObject *cpy_r_t, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_emitclass___generate_init_for_class(cpy_r_c, cpy_r_t, cpy_r_e);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 45, CPyStatic_emitclass___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_emitclass_____mypyc_lambda__0_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"c", "t", "e", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_c;
    PyObject *obj_t;
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_c, &obj_t, &obj_e)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_c;
    if (likely(Py_TYPE(obj_c) == CPyType_class_ir___ClassIR))
        arg_c = obj_c;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_c); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_func_ir___FuncIR))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_t); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_emit___Emitter))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__0_obj_____call__(arg___mypyc_self__, arg_c, arg_t, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 45, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__1_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass_____mypyc_lambda__1_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__1_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__1_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_c, PyObject *cpy_r_t, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_emitclass___generate_call_wrapper(cpy_r_c, cpy_r_t, cpy_r_e);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 46, CPyStatic_emitclass___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_emitclass_____mypyc_lambda__1_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"c", "t", "e", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_c;
    PyObject *obj_t;
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_c, &obj_t, &obj_e)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_c;
    if (likely(Py_TYPE(obj_c) == CPyType_class_ir___ClassIR))
        arg_c = obj_c;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_c); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_func_ir___FuncIR))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_t); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_emit___Emitter))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__1_obj_____call__(arg___mypyc_self__, arg_c, arg_t, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 46, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___generate_call_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_emit___Emitter___use_vectorcall(cpy_r_emitter);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_call_wrapper", 139, CPyStatic_emitclass___globals);
        goto CPyL5;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = CPyStatics[7070]; /* 'PyVectorcall_Call' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = CPyDef_emitclass___wrapper_slot(cpy_r_cl, cpy_r_fn, cpy_r_emitter);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_call_wrapper", 144, CPyStatic_emitclass___globals);
        goto CPyL5;
    }
    return cpy_r_r2;
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_emitclass___generate_call_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_call_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___generate_call_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_call_wrapper", 138, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___slot_key(PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[3390]; /* '__r' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_attr, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL5;
    cpy_r_r2 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r3 = PyUnicode_Compare(cpy_r_attr, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 == -1;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = PyErr_Occurred();
    cpy_r_r6 = cpy_r_r5 != NULL;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "slot_key", 152, CPyStatic_emitclass___globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r8 = cpy_r_r3 != 0;
    if (cpy_r_r8) goto CPyL9;
CPyL5: ;
    cpy_r_r9 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_attr, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "slot_key", 152, CPyStatic_emitclass___globals);
        goto CPyL12;
    }
CPyL8: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL11;
CPyL9: ;
    cpy_r_r16 = CPyStatics[280]; /* 'x' */
    cpy_r_r17 = PyUnicode_Concat(cpy_r_r16, cpy_r_attr);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "slot_key", 153, CPyStatic_emitclass___globals);
        goto CPyL12;
    }
    return cpy_r_r17;
CPyL11: ;
    CPy_INCREF(cpy_r_attr);
    return cpy_r_attr;
CPyL12: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
}

PyObject *CPyPy_emitclass___slot_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"attr", 0};
    static CPyArg_Parser parser = {"O:slot_key", kwlist, 0};
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_attr)) {
        return NULL;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___slot_key(arg_attr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "slot_key", 147, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T2OT2OO cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "<lambda>", "__mypyc_lambda__2_generate_slots_obj", "__mypyc_env__", 161, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    cpy_r_r1 = cpy_r_x.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitclass___slot_key(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 161, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T2OT2OO arg_x;
    PyObject *__tmp9225;
    if (unlikely(!(PyTuple_Check(obj_x) && PyTuple_GET_SIZE(obj_x) == 2))) {
        __tmp9225 = NULL;
        goto __LL9226;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_x, 0))))
        __tmp9225 = PyTuple_GET_ITEM(obj_x, 0);
    else {
        __tmp9225 = NULL;
    }
    if (__tmp9225 == NULL) goto __LL9226;
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(obj_x, 1)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(obj_x, 1)) == 2))) {
        __tmp9225 = NULL;
        goto __LL9227;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(obj_x, 1), 0))))
        __tmp9225 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(obj_x, 1), 0);
    else {
        __tmp9225 = NULL;
    }
    if (__tmp9225 == NULL) goto __LL9227;
    __tmp9225 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(obj_x, 1), 1);
    if (__tmp9225 == NULL) goto __LL9227;
    __tmp9225 = PyTuple_GET_ITEM(obj_x, 1);
__LL9227: ;
    if (__tmp9225 == NULL) goto __LL9226;
    __tmp9225 = obj_x;
__LL9226: ;
    if (unlikely(__tmp9225 == NULL)) {
        CPy_TypeError("tuple[str, tuple[str, object]]", obj_x); goto fail;
    } else {
        PyObject *__tmp9228 = PyTuple_GET_ITEM(obj_x, 0);
        PyObject *__tmp9229;
        if (likely(PyUnicode_Check(__tmp9228)))
            __tmp9229 = __tmp9228;
        else {
            CPy_TypeError("str", __tmp9228); 
            __tmp9229 = NULL;
        }
        arg_x.f0 = __tmp9229;
        PyObject *__tmp9230 = PyTuple_GET_ITEM(obj_x, 1);
        tuple_T2OO __tmp9231;
        PyObject *__tmp9232;
        if (unlikely(!(PyTuple_Check(__tmp9230) && PyTuple_GET_SIZE(__tmp9230) == 2))) {
            __tmp9232 = NULL;
            goto __LL9233;
        }
        if (likely(PyUnicode_Check(PyTuple_GET_ITEM(__tmp9230, 0))))
            __tmp9232 = PyTuple_GET_ITEM(__tmp9230, 0);
        else {
            __tmp9232 = NULL;
        }
        if (__tmp9232 == NULL) goto __LL9233;
        __tmp9232 = PyTuple_GET_ITEM(__tmp9230, 1);
        if (__tmp9232 == NULL) goto __LL9233;
        __tmp9232 = __tmp9230;
__LL9233: ;
        if (unlikely(__tmp9232 == NULL)) {
            CPy_TypeError("tuple[str, object]", __tmp9230); goto fail;
        } else {
            PyObject *__tmp9234 = PyTuple_GET_ITEM(__tmp9230, 0);
            PyObject *__tmp9235;
            if (likely(PyUnicode_Check(__tmp9234)))
                __tmp9235 = __tmp9234;
            else {
                CPy_TypeError("str", __tmp9234); 
                __tmp9235 = NULL;
            }
            __tmp9231.f0 = __tmp9235;
            PyObject *__tmp9236 = PyTuple_GET_ITEM(__tmp9230, 1);
            PyObject *__tmp9237;
            __tmp9237 = __tmp9236;
            __tmp9231.f1 = __tmp9237;
        }
        arg_x.f1 = __tmp9231;
    }
    PyObject *retval = CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "<lambda>", 161, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___generate_slots(PyObject *cpy_r_cl, PyObject *cpy_r_table, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_generated;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2OT2OO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_name;
    tuple_T2OO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_slot;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_generator;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_method_cls;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    tuple_T2OO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    cpy_r_r0 = CPyDef_emitclass___generate_slots_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 157, CPyStatic_emitclass___globals);
        goto CPyL35;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 158, CPyStatic_emitclass___globals);
        goto CPyL36;
    }
    cpy_r_fields = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 159, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    cpy_r_generated = cpy_r_r2;
    cpy_r_r3 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r4[1] = {cpy_r_table};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    cpy_r_r7 = CPyDef_emitclass_____mypyc_lambda__2_generate_slots_obj();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    if (((mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *)cpy_r_r7)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *)cpy_r_r7)->___mypyc_env__);
    }
    ((mypyc___codegen___emitclass_____mypyc_lambda__2_generate_slots_objObject *)cpy_r_r7)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r12[2] = {cpy_r_r6, cpy_r_r7};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, cpy_r_r14);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals, "list", cpy_r_r15);
        goto CPyL41;
    }
    cpy_r_r17 = 0;
CPyL10: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL42;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    PyObject *__tmp9238;
    if (unlikely(!(PyTuple_Check(cpy_r_r22) && PyTuple_GET_SIZE(cpy_r_r22) == 2))) {
        __tmp9238 = NULL;
        goto __LL9239;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 0))))
        __tmp9238 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp9238 = NULL;
    }
    if (__tmp9238 == NULL) goto __LL9239;
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r22, 1)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(cpy_r_r22, 1)) == 2))) {
        __tmp9238 = NULL;
        goto __LL9240;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r22, 1), 0))))
        __tmp9238 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r22, 1), 0);
    else {
        __tmp9238 = NULL;
    }
    if (__tmp9238 == NULL) goto __LL9240;
    __tmp9238 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r22, 1), 1);
    if (__tmp9238 == NULL) goto __LL9240;
    __tmp9238 = PyTuple_GET_ITEM(cpy_r_r22, 1);
__LL9240: ;
    if (__tmp9238 == NULL) goto __LL9239;
    __tmp9238 = cpy_r_r22;
__LL9239: ;
    if (unlikely(__tmp9238 == NULL)) {
        CPy_TypeError("tuple[str, tuple[str, object]]", cpy_r_r22); cpy_r_r23 = (tuple_T2OT2OO) { NULL, { NULL, NULL } };
    } else {
        PyObject *__tmp9241 = PyTuple_GET_ITEM(cpy_r_r22, 0);
        CPy_INCREF(__tmp9241);
        PyObject *__tmp9242;
        if (likely(PyUnicode_Check(__tmp9241)))
            __tmp9242 = __tmp9241;
        else {
            CPy_TypeError("str", __tmp9241); 
            __tmp9242 = NULL;
        }
        cpy_r_r23.f0 = __tmp9242;
        PyObject *__tmp9243 = PyTuple_GET_ITEM(cpy_r_r22, 1);
        tuple_T2OO __tmp9244;
        PyObject *__tmp9245;
        if (unlikely(!(PyTuple_Check(__tmp9243) && PyTuple_GET_SIZE(__tmp9243) == 2))) {
            __tmp9245 = NULL;
            goto __LL9246;
        }
        if (likely(PyUnicode_Check(PyTuple_GET_ITEM(__tmp9243, 0))))
            __tmp9245 = PyTuple_GET_ITEM(__tmp9243, 0);
        else {
            __tmp9245 = NULL;
        }
        if (__tmp9245 == NULL) goto __LL9246;
        __tmp9245 = PyTuple_GET_ITEM(__tmp9243, 1);
        if (__tmp9245 == NULL) goto __LL9246;
        __tmp9245 = __tmp9243;
__LL9246: ;
        if (unlikely(__tmp9245 == NULL)) {
            CPy_TypeError("tuple[str, object]", __tmp9243); __tmp9244 = (tuple_T2OO) { NULL, NULL };
        } else {
            PyObject *__tmp9247 = PyTuple_GET_ITEM(__tmp9243, 0);
            CPy_INCREF(__tmp9247);
            PyObject *__tmp9248;
            if (likely(PyUnicode_Check(__tmp9247)))
                __tmp9248 = __tmp9247;
            else {
                CPy_TypeError("str", __tmp9247); 
                __tmp9248 = NULL;
            }
            __tmp9244.f0 = __tmp9248;
            PyObject *__tmp9249 = PyTuple_GET_ITEM(__tmp9243, 1);
            CPy_INCREF(__tmp9249);
            PyObject *__tmp9250;
            __tmp9250 = __tmp9249;
            __tmp9244.f1 = __tmp9250;
        }
        cpy_r_r23.f1 = __tmp9244;
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 161, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_name = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25.f0);
    CPy_INCREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r23.f0);
    CPy_DECREF(cpy_r_r23.f1.f0);
    CPy_DECREF(cpy_r_r23.f1.f1);
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_slot = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r25.f0);
    CPy_DECREF(cpy_r_r25.f1);
    cpy_r_generator = cpy_r_r27;
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_class_ir___ClassIR___get_method_and_class(cpy_r_cl, cpy_r_name, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 162, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_method_cls = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_method_cls != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL45;
    PyObject *__tmp9251;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9251 = NULL;
        goto __LL9252;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9251 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9251 = NULL;
    }
    if (__tmp9251 == NULL) goto __LL9252;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9251 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9251 = NULL;
    }
    if (__tmp9251 == NULL) goto __LL9252;
    __tmp9251 = cpy_r_method_cls;
__LL9252: ;
    if (unlikely(__tmp9251 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r32 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9253 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9253);
        PyObject *__tmp9254;
        if (likely(Py_TYPE(__tmp9253) == CPyType_func_ir___FuncIR))
            __tmp9254 = __tmp9253;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9253); 
            __tmp9254 = NULL;
        }
        cpy_r_r32.f0 = __tmp9254;
        PyObject *__tmp9255 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9255);
        PyObject *__tmp9256;
        if (likely(Py_TYPE(__tmp9255) == CPyType_class_ir___ClassIR))
            __tmp9256 = __tmp9255;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9255); 
            __tmp9256 = NULL;
        }
        cpy_r_r32.f1 = __tmp9256;
    }
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 162, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r33 = PyTuple_New(2);
    if (unlikely(cpy_r_r33 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9257 = cpy_r_r32.f0;
    PyTuple_SET_ITEM(cpy_r_r33, 0, __tmp9257);
    PyObject *__tmp9258 = cpy_r_r32.f1;
    PyTuple_SET_ITEM(cpy_r_r33, 1, __tmp9258);
    cpy_r_r34 = PyObject_IsTrue(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 162, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL45;
    PyObject *__tmp9259;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9259 = NULL;
        goto __LL9260;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9259 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9259 = NULL;
    }
    if (__tmp9259 == NULL) goto __LL9260;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9259 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9259 = NULL;
    }
    if (__tmp9259 == NULL) goto __LL9260;
    __tmp9259 = cpy_r_method_cls;
__LL9260: ;
    if (unlikely(__tmp9259 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r37 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9261 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9261);
        PyObject *__tmp9262;
        if (likely(Py_TYPE(__tmp9261) == CPyType_func_ir___FuncIR))
            __tmp9262 = __tmp9261;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9261); 
            __tmp9262 = NULL;
        }
        cpy_r_r37.f0 = __tmp9262;
        PyObject *__tmp9263 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9263);
        PyObject *__tmp9264;
        if (likely(Py_TYPE(__tmp9263) == CPyType_class_ir___ClassIR))
            __tmp9264 = __tmp9263;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9263); 
            __tmp9264 = NULL;
        }
        cpy_r_r37.f1 = __tmp9264;
    }
    if (unlikely(cpy_r_r37.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 163, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r38 = cpy_r_r37.f1;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37.f0);
    CPy_DECREF(cpy_r_r37.f1);
    cpy_r_r39 = cpy_r_r38 == cpy_r_cl;
    CPy_DECREF(cpy_r_r38);
    if (cpy_r_r39) goto CPyL47;
    cpy_r_r40 = CPyStatic_emitclass___globals;
    cpy_r_r41 = CPyStatics[7071]; /* 'ALWAYS_FILL' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 163, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    if (likely(PySet_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_slots", 163, CPyStatic_emitclass___globals, "set", cpy_r_r42);
        goto CPyL46;
    }
    cpy_r_r44 = PySet_Contains(cpy_r_r43, cpy_r_name);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_name);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 163, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r46 = cpy_r_r44;
    if (!cpy_r_r46) goto CPyL49;
CPyL23: ;
    cpy_r_r47 = PyDict_Contains(cpy_r_generated, cpy_r_slot);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 164, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r49 = cpy_r_r47;
    if (cpy_r_r49) {
        goto CPyL50;
    } else
        goto CPyL28;
CPyL25: ;
    cpy_r_r50 = CPyDict_GetItem(cpy_r_generated, cpy_r_slot);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 166, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
    if (likely(PyUnicode_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_slots", 166, CPyStatic_emitclass___globals, "str", cpy_r_r50);
        goto CPyL51;
    }
    cpy_r_r52 = CPyDict_SetItem(cpy_r_fields, cpy_r_slot, cpy_r_r51);
    CPy_DECREF(cpy_r_slot);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 166, CPyStatic_emitclass___globals);
        goto CPyL43;
    } else
        goto CPyL33;
CPyL28: ;
    PyObject *__tmp9265;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9265 = NULL;
        goto __LL9266;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9265 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9265 = NULL;
    }
    if (__tmp9265 == NULL) goto __LL9266;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9265 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9265 = NULL;
    }
    if (__tmp9265 == NULL) goto __LL9266;
    __tmp9265 = cpy_r_method_cls;
__LL9266: ;
    if (unlikely(__tmp9265 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r54 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9267 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9267);
        PyObject *__tmp9268;
        if (likely(Py_TYPE(__tmp9267) == CPyType_func_ir___FuncIR))
            __tmp9268 = __tmp9267;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9267); 
            __tmp9268 = NULL;
        }
        cpy_r_r54.f0 = __tmp9268;
        PyObject *__tmp9269 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9269);
        PyObject *__tmp9270;
        if (likely(Py_TYPE(__tmp9269) == CPyType_class_ir___ClassIR))
            __tmp9270 = __tmp9269;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9269); 
            __tmp9270 = NULL;
        }
        cpy_r_r54.f1 = __tmp9270;
    }
    CPy_DECREF(cpy_r_method_cls);
    if (unlikely(cpy_r_r54.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 169, CPyStatic_emitclass___globals);
        goto CPyL52;
    }
    cpy_r_r55 = cpy_r_r54.f0;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54.f0);
    CPy_DECREF(cpy_r_r54.f1);
    PyObject *cpy_r_r56[3] = {cpy_r_cl, cpy_r_r55, cpy_r_emitter};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_generator, cpy_r_r57, 3, 0);
    CPy_DECREF(cpy_r_generator);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 169, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r55);
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_slots", 169, CPyStatic_emitclass___globals, "str", cpy_r_r58);
        goto CPyL51;
    }
    cpy_r_name = cpy_r_r59;
    cpy_r_r60 = CPyDict_SetItem(cpy_r_fields, cpy_r_slot, cpy_r_name);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 170, CPyStatic_emitclass___globals);
        goto CPyL54;
    }
    cpy_r_r62 = CPyDict_SetItem(cpy_r_generated, cpy_r_slot, cpy_r_name);
    CPy_DECREF(cpy_r_slot);
    CPy_DECREF(cpy_r_name);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 171, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
CPyL33: ;
    cpy_r_r64 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r64;
    goto CPyL10;
CPyL34: ;
    return cpy_r_fields;
CPyL35: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_fields);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r6);
    goto CPyL35;
CPyL40: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL35;
CPyL41: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    goto CPyL35;
CPyL42: ;
    CPy_DECREF(cpy_r_generated);
    CPy_DECREF(cpy_r_r16);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_slot);
    CPy_DecRef(cpy_r_generator);
    goto CPyL35;
CPyL45: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_slot);
    CPy_DECREF(cpy_r_generator);
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL33;
CPyL46: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_slot);
    CPy_DecRef(cpy_r_generator);
    CPy_DecRef(cpy_r_method_cls);
    goto CPyL35;
CPyL47: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL23;
CPyL48: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_slot);
    CPy_DecRef(cpy_r_generator);
    CPy_DecRef(cpy_r_method_cls);
    goto CPyL35;
CPyL49: ;
    CPy_DECREF(cpy_r_slot);
    CPy_DECREF(cpy_r_generator);
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL33;
CPyL50: ;
    CPy_DECREF(cpy_r_generator);
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL25;
CPyL51: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_slot);
    goto CPyL35;
CPyL52: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_slot);
    CPy_DecRef(cpy_r_generator);
    goto CPyL35;
CPyL53: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_slot);
    CPy_DecRef(cpy_r_r55);
    goto CPyL35;
CPyL54: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_generated);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_slot);
    goto CPyL35;
}

PyObject *CPyPy_emitclass___generate_slots(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "table", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_slots", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_table;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_table, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_table = obj_table;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___generate_slots(arg_cl, arg_table, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_slots", 157, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_class_type_decl(PyObject *cpy_r_cl, PyObject *cpy_r_c_emitter, PyObject *cpy_r_external_emitter, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_context;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_generate_full;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_c_emitter)->_context;
    CPy_INCREF(cpy_r_r0);
    cpy_r_context = cpy_r_r0;
    cpy_r_r1 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 180, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_name = cpy_r_r1;
    cpy_r_r2 = CPyStatics[7072]; /* 'PyTypeObject *' */
    cpy_r_r3 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 182, CPyStatic_emitclass___globals);
        goto CPyL23;
    }
    cpy_r_r4 = CPyStatics[6886]; /* ';' */
    cpy_r_r5 = CPyStr_Build(3, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 182, CPyStatic_emitclass___globals);
        goto CPyL23;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_emit___HeaderDeclaration(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, 1);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 181, CPyStatic_emitclass___globals);
        goto CPyL23;
    }
    cpy_r_r10 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_context)->_declarations;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r10, cpy_r_name, cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 181, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r13 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_ext_class;
    if (cpy_r_r13) {
        goto CPyL7;
    } else
        goto CPyL24;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r14 = CPyDef_emitclass___generate_object_struct(cpy_r_cl, cpy_r_external_emitter);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 189, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (cpy_r_r16) goto CPyL10;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL12;
CPyL10: ;
    cpy_r_r18 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyObject_Not(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 190, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r21 = cpy_r_r19;
    cpy_r_r17 = cpy_r_r21;
CPyL12: ;
    cpy_r_generate_full = cpy_r_r17;
    if (!cpy_r_generate_full) goto CPyL25;
    cpy_r_r22 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_ctor;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class_type_decl", "ClassIR", "ctor", 193, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r22);
CPyL14: ;
    cpy_r_r23 = CPyDef_emitfunc___native_function_header(cpy_r_r22, cpy_r_emitter);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 193, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r24 = CPyStatics[6886]; /* ';' */
    cpy_r_r25 = CPyStr_Build(2, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 193, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = NULL;
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_emit___HeaderDeclaration(cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, 1);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 192, CPyStatic_emitclass___globals);
        goto CPyL22;
    }
    cpy_r_r30 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_context)->_declarations;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_context);
    cpy_r_r31 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_ctor;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class_type_decl", "ClassIR", "ctor", 192, CPyStatic_emitclass___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r31);
CPyL18: ;
    cpy_r_r32 = CPyDef_emit___Emitter___native_function_name(cpy_r_emitter, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 192, CPyStatic_emitclass___globals);
        goto CPyL26;
    }
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r30, cpy_r_r32, cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 192, CPyStatic_emitclass___globals);
        goto CPyL21;
    }
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL22: ;
    CPy_DecRef(cpy_r_context);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_context);
    CPy_DecRef(cpy_r_name);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_context);
    goto CPyL6;
CPyL25: ;
    CPy_DECREF(cpy_r_context);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL21;
}

PyObject *CPyPy_emitclass___generate_class_type_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "c_emitter", "external_emitter", "emitter", 0};
    static CPyArg_Parser parser = {"OOOO:generate_class_type_decl", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_c_emitter;
    PyObject *obj_external_emitter;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_c_emitter, &obj_external_emitter, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_c_emitter;
    if (likely(Py_TYPE(obj_c_emitter) == CPyType_emit___Emitter))
        arg_c_emitter = obj_c_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_c_emitter); 
        goto fail;
    }
    PyObject *arg_external_emitter;
    if (likely(Py_TYPE(obj_external_emitter) == CPyType_emit___Emitter))
        arg_external_emitter = obj_external_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_external_emitter); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_class_type_decl(arg_cl, arg_c_emitter, arg_external_emitter, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class_type_decl", 176, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___emit_line_generate_class_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass___emit_line_generate_class_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass___emit_line_generate_class_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___emit_line_generate_class_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_emit_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___codegen___emitclass___emit_line_generate_class_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "emit_line", "emit_line_generate_class_obj", "__mypyc_env__", 233, CPyStatic_emitclass___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r0)->_emit_line;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "emit_line", "generate_class_env", "emit_line", -1, CPyStatic_emitclass___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_emit_line = cpy_r_r1;
    CPy_DECREF(cpy_r_emit_line);
    cpy_r_r2 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'emitter' of 'generate_class_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "emit_line", 234, CPyStatic_emitclass___globals);
        goto CPyL5;
    }
CPyL3: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emit___Emitter___emit_line(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "emit_line", 234, CPyStatic_emitclass___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_emitclass___emit_line_generate_class_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_emitclass___emit_line_generate_class_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "emit_line", 233, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_class(PyObject *cpy_r_cl, PyObject *cpy_r_module, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_shadow_vtable_name;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_name_prefix;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_setup_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_new_name;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_members_name;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_getseters_name;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_vtable_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_traverse_name;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_clear_name;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_dealloc_name;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_methods_name;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_vtable_setup_name;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_generate_full;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_needs_getseters;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_defaults_fn;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_init_fn;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyPtr cpy_r_r100;
    int64_t cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_table_name;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_slot_defs;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_slots;
    int64_t cpy_r_r111;
    CPyTagged cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_table_struct_name;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_richcompare_name;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_struct_name;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_base_size;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_weak_offset;
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
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    tuple_T2II cpy_r_r180;
    tuple_T2II cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
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
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    CPyPtr cpy_r_r267;
    CPyPtr cpy_r_r268;
    CPyPtr cpy_r_r269;
    CPyPtr cpy_r_r270;
    PyObject *cpy_r_flags;
    PyObject *cpy_r_r271;
    int32_t cpy_r_r272;
    char cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    int32_t cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    int32_t cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    int32_t cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    int32_t cpy_r_r304;
    char cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    int32_t cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    CPyTagged cpy_r_r323;
    int64_t cpy_r_r324;
    CPyTagged cpy_r_r325;
    PyObject *cpy_r_r326;
    tuple_T4CIOO cpy_r_r327;
    CPyTagged cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_field;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    char cpy_r_r340;
    char cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject **cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    char cpy_r_r364;
    char cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    char cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    char cpy_r_r379;
    cpy_r_r0 = NULL;
    cpy_r_shadow_vtable_name = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitclass___generate_class_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 197, CPyStatic_emitclass___globals);
        goto CPyL234;
    }
    CPy_INCREF(cpy_r_emitter);
    if (((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter);
    }
    ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter = cpy_r_emitter;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 197, CPyStatic_emitclass___globals);
        goto CPyL235;
    }
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 203, CPyStatic_emitclass___globals);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r4)->_names;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 203, CPyStatic_emitclass___globals);
        goto CPyL236;
    }
    cpy_r_name_prefix = cpy_r_r6;
    cpy_r_r7 = CPyStatics[7073]; /* '_setup' */
    cpy_r_r8 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 205, CPyStatic_emitclass___globals);
        goto CPyL237;
    }
    cpy_r_setup_name = cpy_r_r8;
    cpy_r_r9 = CPyStatics[7074]; /* '_new' */
    cpy_r_r10 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 206, CPyStatic_emitclass___globals);
        goto CPyL238;
    }
    cpy_r_new_name = cpy_r_r10;
    cpy_r_r11 = CPyStatics[7075]; /* '_members' */
    cpy_r_r12 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 207, CPyStatic_emitclass___globals);
        goto CPyL239;
    }
    cpy_r_members_name = cpy_r_r12;
    cpy_r_r13 = CPyStatics[7076]; /* '_getseters' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 208, CPyStatic_emitclass___globals);
        goto CPyL240;
    }
    cpy_r_getseters_name = cpy_r_r14;
    cpy_r_r15 = CPyStatics[7077]; /* '_vtable' */
    cpy_r_r16 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 209, CPyStatic_emitclass___globals);
        goto CPyL241;
    }
    cpy_r_vtable_name = cpy_r_r16;
    cpy_r_r17 = CPyStatics[7078]; /* '_traverse' */
    cpy_r_r18 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 210, CPyStatic_emitclass___globals);
        goto CPyL242;
    }
    cpy_r_traverse_name = cpy_r_r18;
    cpy_r_r19 = CPyStatics[7079]; /* '_clear' */
    cpy_r_r20 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 211, CPyStatic_emitclass___globals);
        goto CPyL243;
    }
    cpy_r_clear_name = cpy_r_r20;
    cpy_r_r21 = CPyStatics[7080]; /* '_dealloc' */
    cpy_r_r22 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 212, CPyStatic_emitclass___globals);
        goto CPyL244;
    }
    cpy_r_dealloc_name = cpy_r_r22;
    cpy_r_r23 = CPyStatics[7081]; /* '_methods' */
    cpy_r_r24 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 213, CPyStatic_emitclass___globals);
        goto CPyL245;
    }
    cpy_r_methods_name = cpy_r_r24;
    cpy_r_r25 = CPyStatics[7082]; /* '_trait_vtable_setup' */
    cpy_r_r26 = CPyStr_Build(2, cpy_r_name_prefix, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 214, CPyStatic_emitclass___globals);
        goto CPyL246;
    }
    cpy_r_vtable_setup_name = cpy_r_r26;
    cpy_r_r27 = PyDict_New();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 216, CPyStatic_emitclass___globals);
        goto CPyL247;
    }
    cpy_r_fields = cpy_r_r27;
    cpy_r_r28 = CPyStatics[178]; /* '"' */
    cpy_r_r29 = CPyStatics[178]; /* '"' */
    cpy_r_r30 = CPyStr_Build(3, cpy_r_r28, cpy_r_name, cpy_r_r29);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 217, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r31 = CPyStatics[7083]; /* 'tp_name' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_fields, cpy_r_r31, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 217, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r34 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    cpy_r_r35 = cpy_r_r34 ^ 1;
    if (cpy_r_r35) goto CPyL19;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL21;
CPyL19: ;
    cpy_r_r37 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = PyObject_Not(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 219, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r40 = cpy_r_r38;
    cpy_r_r36 = cpy_r_r40;
CPyL21: ;
    cpy_r_generate_full = cpy_r_r36;
    cpy_r_r41 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_needs_getseters;
    if (!cpy_r_r41) goto CPyL23;
CPyL22: ;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL24;
CPyL23: ;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_generated;
    cpy_r_r44 = cpy_r_r43 ^ 1;
    cpy_r_r42 = cpy_r_r44;
CPyL24: ;
    cpy_r_needs_getseters = cpy_r_r42;
    cpy_r_r45 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_r45 != cpy_r_r46;
    if (!cpy_r_r47) goto CPyL249;
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r48 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 222, CPyStatic_emitclass___globals, "str", cpy_r_r45);
        goto CPyL248;
    }
    cpy_r_r49 = CPyStr_IsTrue(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (cpy_r_r49) goto CPyL28;
CPyL27: ;
    cpy_r_r50 = CPyStatics[7084]; /* 'tp_new' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_fields, cpy_r_r50, cpy_r_new_name);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 223, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
CPyL28: ;
    if (!cpy_r_generate_full) goto CPyL250;
    cpy_r_r53 = CPyStatics[7085]; /* '(destructor)' */
    cpy_r_r54 = CPyStatics[7080]; /* '_dealloc' */
    cpy_r_r55 = CPyStr_Build(3, cpy_r_r53, cpy_r_name_prefix, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 226, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r56 = CPyStatics[7086]; /* 'tp_dealloc' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_fields, cpy_r_r56, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 226, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r59 = CPyStatics[7087]; /* '(traverseproc)' */
    cpy_r_r60 = CPyStatics[7078]; /* '_traverse' */
    cpy_r_r61 = CPyStr_Build(3, cpy_r_r59, cpy_r_name_prefix, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 227, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r62 = CPyStatics[7088]; /* 'tp_traverse' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_fields, cpy_r_r62, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 227, CPyStatic_emitclass___globals);
        goto CPyL248;
    }
    cpy_r_r65 = CPyStatics[7089]; /* '(inquiry)' */
    cpy_r_r66 = CPyStatics[7079]; /* '_clear' */
    cpy_r_r67 = CPyStr_Build(3, cpy_r_r65, cpy_r_name_prefix, cpy_r_r66);
    CPy_DECREF(cpy_r_name_prefix);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 228, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    cpy_r_r68 = CPyStatics[7090]; /* 'tp_clear' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_fields, cpy_r_r68, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 228, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
CPyL35: ;
    if (!cpy_r_needs_getseters) goto CPyL37;
    cpy_r_r71 = CPyStatics[7091]; /* 'tp_getset' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_fields, cpy_r_r71, cpy_r_getseters_name);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 230, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
CPyL37: ;
    cpy_r_r74 = CPyStatics[7092]; /* 'tp_methods' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_fields, cpy_r_r74, cpy_r_methods_name);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 231, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    cpy_r_r77 = CPyDef_emitclass___emit_line_generate_class_obj();
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 233, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r1);
    if (((mypyc___codegen___emitclass___emit_line_generate_class_objObject *)cpy_r_r77)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___emit_line_generate_class_objObject *)cpy_r_r77)->___mypyc_env__);
    }
    ((mypyc___codegen___emitclass___emit_line_generate_class_objObject *)cpy_r_r77)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r78 = 1;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 233, CPyStatic_emitclass___globals);
        goto CPyL252;
    }
    if (((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line);
    }
    ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line = cpy_r_r77;
    cpy_r_r79 = 1;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 233, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    cpy_r_r80 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 236, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r80);
CPyL42: ;
    cpy_r_r81 = _PyObject_Vectorcall(cpy_r_r80, 0, 0, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 236, CPyStatic_emitclass___globals);
        goto CPyL251;
    } else
        goto CPyL253;
CPyL43: ;
    cpy_r_r82 = CPyStatics[7093]; /* '__mypyc_defaults_setup' */
    cpy_r_r83 = 2;
    cpy_r_r84 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 240, CPyStatic_emitclass___globals);
        goto CPyL251;
    }
    cpy_r_defaults_fn = cpy_r_r84;
    cpy_r_r85 = CPyStatics[288]; /* '__init__' */
    cpy_r_r86 = 2;
    cpy_r_r87 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 243, CPyStatic_emitclass___globals);
        goto CPyL254;
    }
    cpy_r_init_fn = cpy_r_r87;
    cpy_r_r88 = CPyStatic_emitclass___globals;
    cpy_r_r89 = CPyStatics[7094]; /* 'SLOT_DEFS' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 246, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_r91 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 246, CPyStatic_emitclass___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r91);
CPyL47: ;
    cpy_r_r92 = CPyDef_emitclass___generate_slots(cpy_r_cl, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 246, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_r93 = CPyDict_Update(cpy_r_fields, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 246, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_r95 = CPyStatic_emitclass___globals;
    cpy_r_r96 = CPyStatics[7095]; /* 'SIDE_TABLES' */
    cpy_r_r97 = CPyDict_GetItem(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 249, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    if (likely(PyList_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 249, CPyStatic_emitclass___globals, "list", cpy_r_r97);
        goto CPyL255;
    }
    cpy_r_r99 = 0;
CPyL52: ;
    cpy_r_r100 = (CPyPtr)&((PyVarObject *)cpy_r_r98)->ob_size;
    cpy_r_r101 = *(int64_t *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 << 1;
    cpy_r_r103 = (Py_ssize_t)cpy_r_r99 < (Py_ssize_t)cpy_r_r102;
    if (!cpy_r_r103) goto CPyL257;
    cpy_r_r104 = CPyList_GetItemUnsafe(cpy_r_r98, cpy_r_r99);
    PyObject *__tmp9271;
    if (unlikely(!(PyTuple_Check(cpy_r_r104) && PyTuple_GET_SIZE(cpy_r_r104) == 3))) {
        __tmp9271 = NULL;
        goto __LL9272;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r104, 0))))
        __tmp9271 = PyTuple_GET_ITEM(cpy_r_r104, 0);
    else {
        __tmp9271 = NULL;
    }
    if (__tmp9271 == NULL) goto __LL9272;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r104, 1))))
        __tmp9271 = PyTuple_GET_ITEM(cpy_r_r104, 1);
    else {
        __tmp9271 = NULL;
    }
    if (__tmp9271 == NULL) goto __LL9272;
    __tmp9271 = PyTuple_GET_ITEM(cpy_r_r104, 2);
    if (__tmp9271 == NULL) goto __LL9272;
    __tmp9271 = cpy_r_r104;
__LL9272: ;
    if (unlikely(__tmp9271 == NULL)) {
        CPy_TypeError("tuple[str, str, object]", cpy_r_r104); cpy_r_r105 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp9273 = PyTuple_GET_ITEM(cpy_r_r104, 0);
        CPy_INCREF(__tmp9273);
        PyObject *__tmp9274;
        if (likely(PyUnicode_Check(__tmp9273)))
            __tmp9274 = __tmp9273;
        else {
            CPy_TypeError("str", __tmp9273); 
            __tmp9274 = NULL;
        }
        cpy_r_r105.f0 = __tmp9274;
        PyObject *__tmp9275 = PyTuple_GET_ITEM(cpy_r_r104, 1);
        CPy_INCREF(__tmp9275);
        PyObject *__tmp9276;
        if (likely(PyUnicode_Check(__tmp9275)))
            __tmp9276 = __tmp9275;
        else {
            CPy_TypeError("str", __tmp9275); 
            __tmp9276 = NULL;
        }
        cpy_r_r105.f1 = __tmp9276;
        PyObject *__tmp9277 = PyTuple_GET_ITEM(cpy_r_r104, 2);
        CPy_INCREF(__tmp9277);
        PyObject *__tmp9278;
        __tmp9278 = __tmp9277;
        cpy_r_r105.f2 = __tmp9278;
    }
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 249, CPyStatic_emitclass___globals);
        goto CPyL258;
    }
    cpy_r_r106 = cpy_r_r105.f0;
    CPy_INCREF(cpy_r_r106);
    cpy_r_table_name = cpy_r_r106;
    cpy_r_r107 = cpy_r_r105.f1;
    CPy_INCREF(cpy_r_r107);
    cpy_r_type = cpy_r_r107;
    cpy_r_r108 = cpy_r_r105.f2;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r105.f0);
    CPy_DECREF(cpy_r_r105.f1);
    CPy_DECREF(cpy_r_r105.f2);
    cpy_r_slot_defs = cpy_r_r108;
    cpy_r_r109 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 250, CPyStatic_emitclass___globals);
        goto CPyL259;
    }
    CPy_INCREF(cpy_r_r109);
CPyL55: ;
    cpy_r_r110 = CPyDef_emitclass___generate_slots(cpy_r_cl, cpy_r_slot_defs, cpy_r_r109);
    CPy_DECREF(cpy_r_slot_defs);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 250, CPyStatic_emitclass___globals);
        goto CPyL260;
    }
    cpy_r_slots = cpy_r_r110;
    cpy_r_r111 = PyDict_Size(cpy_r_slots);
    cpy_r_r112 = cpy_r_r111 << 1;
    cpy_r_r113 = cpy_r_r112 != 0;
    if (!cpy_r_r113) goto CPyL261;
    cpy_r_r114 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 252, CPyStatic_emitclass___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r114);
CPyL58: ;
    cpy_r_r115 = CPyDef_emitclass___generate_side_table_for_class(cpy_r_cl, cpy_r_table_name, cpy_r_type, cpy_r_slots, cpy_r_r114);
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_slots);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 252, CPyStatic_emitclass___globals);
        goto CPyL263;
    }
    cpy_r_table_struct_name = cpy_r_r115;
    cpy_r_r116 = CPyStatics[1596]; /* '&' */
    cpy_r_r117 = PyObject_Str(cpy_r_table_struct_name);
    CPy_DECREF(cpy_r_table_struct_name);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 253, CPyStatic_emitclass___globals);
        goto CPyL263;
    }
    cpy_r_r118 = CPyStr_Build(2, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 253, CPyStatic_emitclass___globals);
        goto CPyL263;
    }
    cpy_r_r119 = CPyStatics[7096]; /* 'tp_' */
    cpy_r_r120 = CPyStr_Build(2, cpy_r_r119, cpy_r_table_name);
    CPy_DECREF(cpy_r_table_name);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 253, CPyStatic_emitclass___globals);
        goto CPyL264;
    }
    cpy_r_r121 = CPyDict_SetItem(cpy_r_fields, cpy_r_r120, cpy_r_r118);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 253, CPyStatic_emitclass___globals);
        goto CPyL258;
    }
CPyL63: ;
    cpy_r_r123 = cpy_r_r99 + 2;
    cpy_r_r99 = cpy_r_r123;
    goto CPyL52;
CPyL64: ;
    cpy_r_r124 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 255, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    CPy_INCREF(cpy_r_r124);
CPyL65: ;
    cpy_r_r125 = CPyDef_emitwrapper___generate_richcompare_wrapper(cpy_r_cl, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 255, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_richcompare_name = cpy_r_r125;
    cpy_r_r126 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r127 = cpy_r_richcompare_name != cpy_r_r126;
    if (!cpy_r_r127) goto CPyL265;
    CPy_INCREF(cpy_r_richcompare_name);
    if (likely(cpy_r_richcompare_name != Py_None))
        cpy_r_r128 = cpy_r_richcompare_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 255, CPyStatic_emitclass___globals, "str", cpy_r_richcompare_name);
        goto CPyL266;
    }
    cpy_r_r129 = CPyStr_IsTrue(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (!cpy_r_r129) goto CPyL265;
    if (likely(cpy_r_richcompare_name != Py_None))
        cpy_r_r130 = cpy_r_richcompare_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 257, CPyStatic_emitclass___globals, "str", cpy_r_richcompare_name);
        goto CPyL255;
    }
    cpy_r_r131 = CPyStatics[7097]; /* 'tp_richcompare' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_fields, cpy_r_r131, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 257, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
CPyL71: ;
    cpy_r_r134 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 260, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    CPy_INCREF(cpy_r_r134);
CPyL72: ;
    cpy_r_r135 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r134)->_names;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 260, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_struct_name = cpy_r_r136;
    cpy_r_r137 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r139 = cpy_r_r137 != cpy_r_r138;
    if (!cpy_r_r139) goto CPyL267;
    if (likely(cpy_r_r137 != Py_None))
        cpy_r_r140 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 261, CPyStatic_emitclass___globals, "str", cpy_r_r137);
        goto CPyL268;
    }
    cpy_r_r141 = CPyStr_IsTrue(cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (cpy_r_r141) {
        goto CPyL269;
    } else
        goto CPyL79;
CPyL76: ;
    cpy_r_r142 = CPyStatics[7098]; /* 'sizeof(' */
    cpy_r_r143 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r143);
    if (likely(cpy_r_r143 != Py_None))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 262, CPyStatic_emitclass___globals, "str", cpy_r_r143);
        goto CPyL255;
    }
    cpy_r_r145 = CPyStatics[72]; /* ')' */
    cpy_r_r146 = CPyStr_Build(3, cpy_r_r142, cpy_r_r144, cpy_r_r145);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 262, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_base_size = cpy_r_r146;
    goto CPyL83;
CPyL79: ;
    cpy_r_r147 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r147) {
        goto CPyL270;
    } else
        goto CPyL81;
CPyL80: ;
    cpy_r_r148 = CPyStatics[7099]; /* 'sizeof(PyObject)' */
    CPy_INCREF(cpy_r_r148);
    cpy_r_base_size = cpy_r_r148;
    goto CPyL83;
CPyL81: ;
    cpy_r_r149 = CPyStatics[7098]; /* 'sizeof(' */
    cpy_r_r150 = CPyStatics[72]; /* ')' */
    cpy_r_r151 = CPyStr_Build(3, cpy_r_r149, cpy_r_struct_name, cpy_r_r150);
    CPy_DECREF(cpy_r_struct_name);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 266, CPyStatic_emitclass___globals);
        goto CPyL255;
    }
    cpy_r_base_size = cpy_r_r151;
CPyL83: ;
    cpy_r_r152 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_has_dict;
    if (!cpy_r_r152) goto CPyL271;
CPyL84: ;
    cpy_r_r153 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 273, CPyStatic_emitclass___globals);
        goto CPyL272;
    }
    CPy_INCREF(cpy_r_r153);
CPyL85: ;
    cpy_r_r154 = CPyDef_emitclass___has_managed_dict(cpy_r_cl, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 273, CPyStatic_emitclass___globals);
        goto CPyL272;
    }
    if (cpy_r_r154) goto CPyL271;
    cpy_r_r155 = CPyStatics[7100]; /* ' + sizeof(PyObject *)' */
    cpy_r_r156 = CPyStr_Build(2, cpy_r_base_size, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 276, CPyStatic_emitclass___globals);
        goto CPyL272;
    }
    cpy_r_weak_offset = cpy_r_r156;
    cpy_r_r157 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 277, CPyStatic_emitclass___globals);
        goto CPyL273;
    }
    CPy_INCREF(cpy_r_r157);
CPyL89: ;
    cpy_r_r158 = CPyStatics[7101]; /* 'PyMemberDef ' */
    cpy_r_r159 = CPyStatics[7102]; /* '[] = {' */
    cpy_r_r160 = CPyStr_Build(3, cpy_r_r158, cpy_r_members_name, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 278, CPyStatic_emitclass___globals);
        goto CPyL274;
    }
    cpy_r_r161 = CPyStatics[7103]; /* '{"__dict__", T_OBJECT_EX, ' */
    cpy_r_r162 = CPyStatics[7104]; /* ', 0, NULL},' */
    cpy_r_r163 = CPyStr_Build(3, cpy_r_r161, cpy_r_base_size, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 279, CPyStatic_emitclass___globals);
        goto CPyL275;
    }
    cpy_r_r164 = CPyStatics[7105]; /* '{"__weakref__", T_OBJECT_EX, ' */
    cpy_r_r165 = CPyStatics[7104]; /* ', 0, NULL},' */
    cpy_r_r166 = CPyStr_Build(3, cpy_r_r164, cpy_r_weak_offset, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 280, CPyStatic_emitclass___globals);
        goto CPyL276;
    }
    cpy_r_r167 = CPyStatics[7106]; /* '{0}' */
    cpy_r_r168 = CPyStatics[7107]; /* '};' */
    cpy_r_r169 = PyTuple_Pack(5, cpy_r_r160, cpy_r_r163, cpy_r_r166, cpy_r_r167, cpy_r_r168);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 277, CPyStatic_emitclass___globals);
        goto CPyL274;
    }
    cpy_r_r170 = CPyDef_emit___Emitter___emit_lines(cpy_r_r157, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r170 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 277, CPyStatic_emitclass___globals);
        goto CPyL273;
    }
    cpy_r_r171 = CPyStatics[7108]; /* 'tp_members' */
    cpy_r_r172 = CPyDict_SetItem(cpy_r_fields, cpy_r_r171, cpy_r_members_name);
    CPy_DECREF(cpy_r_members_name);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 285, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    cpy_r_r174 = CPyStatics[7109]; /* ' + 2*sizeof(PyObject *)' */
    cpy_r_r175 = CPyStr_Build(2, cpy_r_base_size, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 286, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    cpy_r_r176 = CPyStatics[7110]; /* 'tp_basicsize' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_fields, cpy_r_r176, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 286, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    cpy_r_r179 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 287, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    CPy_INCREF(cpy_r_r179);
CPyL98: ;
    cpy_r_r180 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r179)->_capi_version;
    CPyTagged_INCREF(cpy_r_r180.f0);
    CPyTagged_INCREF(cpy_r_r180.f1);
    CPy_DECREF(cpy_r_r179);
    cpy_r_r181.f0 = 6;
    cpy_r_r181.f1 = 24;
    CPyTagged_INCREF(cpy_r_r181.f0);
    CPyTagged_INCREF(cpy_r_r181.f1);
    cpy_r_r182 = PyTuple_New(2);
    if (unlikely(cpy_r_r182 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9279 = CPyTagged_StealAsObject(cpy_r_r180.f0);
    PyTuple_SET_ITEM(cpy_r_r182, 0, __tmp9279);
    PyObject *__tmp9280 = CPyTagged_StealAsObject(cpy_r_r180.f1);
    PyTuple_SET_ITEM(cpy_r_r182, 1, __tmp9280);
    cpy_r_r183 = PyTuple_New(2);
    if (unlikely(cpy_r_r183 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9281 = CPyTagged_StealAsObject(cpy_r_r181.f0);
    PyTuple_SET_ITEM(cpy_r_r183, 0, __tmp9281);
    PyObject *__tmp9282 = CPyTagged_StealAsObject(cpy_r_r181.f1);
    PyTuple_SET_ITEM(cpy_r_r183, 1, __tmp9282);
    cpy_r_r184 = PyObject_RichCompare(cpy_r_r182, cpy_r_r183, 0);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 287, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    if (unlikely(!PyBool_Check(cpy_r_r184))) {
        CPy_TypeError("bool", cpy_r_r184); cpy_r_r185 = 2;
    } else
        cpy_r_r185 = cpy_r_r184 == Py_True;
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 287, CPyStatic_emitclass___globals);
        goto CPyL277;
    }
    if (!cpy_r_r185) goto CPyL278;
    cpy_r_r186 = CPyStatics[7111]; /* 'tp_dictoffset' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_fields, cpy_r_r186, cpy_r_base_size);
    CPy_DECREF(cpy_r_base_size);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 288, CPyStatic_emitclass___globals);
        goto CPyL279;
    }
    cpy_r_r189 = CPyStatics[7112]; /* 'tp_weaklistoffset' */
    cpy_r_r190 = CPyDict_SetItem(cpy_r_fields, cpy_r_r189, cpy_r_weak_offset);
    CPy_DECREF(cpy_r_weak_offset);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 289, CPyStatic_emitclass___globals);
        goto CPyL280;
    } else
        goto CPyL104;
CPyL103: ;
    cpy_r_r192 = CPyStatics[7110]; /* 'tp_basicsize' */
    cpy_r_r193 = CPyDict_SetItem(cpy_r_fields, cpy_r_r192, cpy_r_base_size);
    CPy_DECREF(cpy_r_base_size);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 291, CPyStatic_emitclass___globals);
        goto CPyL280;
    }
CPyL104: ;
    if (cpy_r_generate_full) {
        goto CPyL281;
    } else
        goto CPyL282;
CPyL105: ;
    cpy_r_r195 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 297, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    CPy_INCREF(cpy_r_r195);
CPyL106: ;
    cpy_r_r196 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r197 = CPyStatics[7114]; /* '(PyTypeObject *type);' */
    cpy_r_r198 = CPyStr_Build(3, cpy_r_r196, cpy_r_setup_name, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 297, CPyStatic_emitclass___globals);
        goto CPyL284;
    }
    cpy_r_r199 = NULL;
    cpy_r_r200 = CPyDef_emit___Emitter___emit_line(cpy_r_r195, cpy_r_r198, cpy_r_r199);
    CPy_DECREF(cpy_r_r198);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r200 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 297, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    cpy_r_r201 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_ctor;
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "ClassIR", "ctor", 298, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
CPyL109: ;
    cpy_r_r202 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r203 = cpy_r_r201 != cpy_r_r202;
    if (cpy_r_r203) {
        goto CPyL112;
    } else
        goto CPyL285;
CPyL110: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r204 = 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 298, CPyStatic_emitclass___globals);
        goto CPyL233;
    }
    CPy_Unreachable();
CPyL112: ;
    cpy_r_r205 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 299, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    CPy_INCREF(cpy_r_r205);
CPyL113: ;
    cpy_r_r206 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_ctor;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "ClassIR", "ctor", 299, CPyStatic_emitclass___globals);
        goto CPyL286;
    }
    CPy_INCREF(cpy_r_r206);
CPyL114: ;
    cpy_r_r207 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 299, CPyStatic_emitclass___globals);
        goto CPyL287;
    }
    CPy_INCREF(cpy_r_r207);
CPyL115: ;
    cpy_r_r208 = CPyDef_emitfunc___native_function_header(cpy_r_r206, cpy_r_r207);
    CPy_DECREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 299, CPyStatic_emitclass___globals);
        goto CPyL286;
    }
    cpy_r_r209 = CPyStatics[6886]; /* ';' */
    cpy_r_r210 = PyUnicode_Concat(cpy_r_r208, cpy_r_r209);
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 299, CPyStatic_emitclass___globals);
        goto CPyL286;
    }
    cpy_r_r211 = NULL;
    cpy_r_r212 = CPyDef_emit___Emitter___emit_line(cpy_r_r205, cpy_r_r210, cpy_r_r211);
    CPy_DECREF(cpy_r_r210);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 299, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    cpy_r_r213 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 301, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    CPy_INCREF(cpy_r_r213);
CPyL119: ;
    cpy_r_r214 = _PyObject_Vectorcall(cpy_r_r213, 0, 0, 0);
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 301, CPyStatic_emitclass___globals);
        goto CPyL283;
    } else
        goto CPyL288;
CPyL120: ;
    cpy_r_r215 = CPyStatics[288]; /* '__init__' */
    cpy_r_r216 = 2;
    cpy_r_r217 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 302, CPyStatic_emitclass___globals);
        goto CPyL283;
    }
    cpy_r_init_fn = cpy_r_r217;
    cpy_r_r218 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 303, CPyStatic_emitclass___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r218);
CPyL122: ;
    cpy_r_r219 = CPyDef_emitclass___generate_new_for_class(cpy_r_cl, cpy_r_new_name, cpy_r_vtable_name, cpy_r_setup_name, cpy_r_init_fn, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r219 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 303, CPyStatic_emitclass___globals);
        goto CPyL289;
    }
    cpy_r_r220 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 304, CPyStatic_emitclass___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r220);
CPyL124: ;
    cpy_r_r221 = _PyObject_Vectorcall(cpy_r_r220, 0, 0, 0);
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 304, CPyStatic_emitclass___globals);
        goto CPyL289;
    } else
        goto CPyL290;
CPyL125: ;
    cpy_r_r222 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 305, CPyStatic_emitclass___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r222);
CPyL126: ;
    cpy_r_r223 = CPyDef_emitclass___generate_traverse_for_class(cpy_r_cl, cpy_r_traverse_name, cpy_r_r222);
    CPy_DECREF(cpy_r_traverse_name);
    CPy_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r223 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 305, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    cpy_r_r224 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 306, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r224);
CPyL128: ;
    cpy_r_r225 = _PyObject_Vectorcall(cpy_r_r224, 0, 0, 0);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 306, CPyStatic_emitclass___globals);
        goto CPyL291;
    } else
        goto CPyL292;
CPyL129: ;
    cpy_r_r226 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 307, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r226);
CPyL130: ;
    cpy_r_r227 = CPyDef_emitclass___generate_clear_for_class(cpy_r_cl, cpy_r_clear_name, cpy_r_r226);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r227 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 307, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    cpy_r_r228 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 308, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r228);
CPyL132: ;
    cpy_r_r229 = _PyObject_Vectorcall(cpy_r_r228, 0, 0, 0);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 308, CPyStatic_emitclass___globals);
        goto CPyL291;
    } else
        goto CPyL293;
CPyL133: ;
    cpy_r_r230 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 309, CPyStatic_emitclass___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r230);
CPyL134: ;
    cpy_r_r231 = CPyDef_emitclass___generate_dealloc_for_class(cpy_r_cl, cpy_r_dealloc_name, cpy_r_clear_name, cpy_r_r230);
    CPy_DECREF(cpy_r_dealloc_name);
    CPy_DECREF(cpy_r_clear_name);
    CPy_DECREF(cpy_r_r230);
    if (unlikely(cpy_r_r231 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 309, CPyStatic_emitclass___globals);
        goto CPyL294;
    }
    cpy_r_r232 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 310, CPyStatic_emitclass___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r232);
CPyL136: ;
    cpy_r_r233 = _PyObject_Vectorcall(cpy_r_r232, 0, 0, 0);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 310, CPyStatic_emitclass___globals);
        goto CPyL294;
    } else
        goto CPyL295;
CPyL137: ;
    cpy_r_r234 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_allow_interpreted_subclasses;
    if (!cpy_r_r234) goto CPyL144;
CPyL138: ;
    cpy_r_r235 = CPyStatics[7115]; /* '_shadow' */
    cpy_r_r236 = PyUnicode_Concat(cpy_r_vtable_setup_name, cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 314, CPyStatic_emitclass___globals);
        goto CPyL294;
    }
    cpy_r_r237 = CPyStatics[7115]; /* '_shadow' */
    cpy_r_r238 = PyUnicode_Concat(cpy_r_vtable_name, cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 314, CPyStatic_emitclass___globals);
        goto CPyL296;
    }
    cpy_r_r239 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 314, CPyStatic_emitclass___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r239);
CPyL141: ;
    cpy_r_r240 = CPyDef_emitclass___generate_vtables(cpy_r_cl, cpy_r_r236, cpy_r_r238, cpy_r_r239, 1);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r238);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 313, CPyStatic_emitclass___globals);
        goto CPyL294;
    }
    cpy_r_shadow_vtable_name = cpy_r_r240;
    cpy_r_r241 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 316, CPyStatic_emitclass___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r241);
CPyL143: ;
    cpy_r_r242 = _PyObject_Vectorcall(cpy_r_r241, 0, 0, 0);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 316, CPyStatic_emitclass___globals);
        goto CPyL298;
    } else
        goto CPyL299;
CPyL144: ;
    cpy_r_r243 = Py_None;
    CPy_INCREF(cpy_r_r243);
    cpy_r_shadow_vtable_name = cpy_r_r243;
CPyL145: ;
    cpy_r_r244 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 319, CPyStatic_emitclass___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r244);
CPyL146: ;
    cpy_r_r245 = CPyDef_emitclass___generate_vtables(cpy_r_cl, cpy_r_vtable_setup_name, cpy_r_vtable_name, cpy_r_r244, 0);
    CPy_DECREF(cpy_r_vtable_setup_name);
    CPy_DECREF(cpy_r_vtable_name);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 319, CPyStatic_emitclass___globals);
        goto CPyL300;
    }
    cpy_r_vtable_name = cpy_r_r245;
    cpy_r_r246 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 320, CPyStatic_emitclass___globals);
        goto CPyL301;
    }
    CPy_INCREF(cpy_r_r246);
CPyL148: ;
    cpy_r_r247 = _PyObject_Vectorcall(cpy_r_r246, 0, 0, 0);
    CPy_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 320, CPyStatic_emitclass___globals);
        goto CPyL301;
    } else
        goto CPyL302;
CPyL149: ;
    if (!cpy_r_needs_getseters) goto CPyL303;
    cpy_r_r248 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 322, CPyStatic_emitclass___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r248);
CPyL151: ;
    cpy_r_r249 = CPyDef_emitclass___generate_getseter_declarations(cpy_r_cl, cpy_r_r248);
    CPy_DECREF(cpy_r_r248);
    if (unlikely(cpy_r_r249 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 322, CPyStatic_emitclass___globals);
        goto CPyL304;
    }
    cpy_r_r250 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 323, CPyStatic_emitclass___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r250);
CPyL153: ;
    cpy_r_r251 = _PyObject_Vectorcall(cpy_r_r250, 0, 0, 0);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 323, CPyStatic_emitclass___globals);
        goto CPyL304;
    } else
        goto CPyL305;
CPyL154: ;
    cpy_r_r252 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 324, CPyStatic_emitclass___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r252);
CPyL155: ;
    cpy_r_r253 = CPyDef_emitclass___generate_getseters_table(cpy_r_cl, cpy_r_getseters_name, cpy_r_r252);
    CPy_DECREF(cpy_r_getseters_name);
    CPy_DECREF(cpy_r_r252);
    if (unlikely(cpy_r_r253 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 324, CPyStatic_emitclass___globals);
        goto CPyL306;
    }
    cpy_r_r254 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 325, CPyStatic_emitclass___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r254);
CPyL157: ;
    cpy_r_r255 = _PyObject_Vectorcall(cpy_r_r254, 0, 0, 0);
    CPy_DECREF(cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 325, CPyStatic_emitclass___globals);
        goto CPyL306;
    } else
        goto CPyL307;
CPyL158: ;
    cpy_r_r256 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (!cpy_r_r256) goto CPyL308;
CPyL159: ;
    cpy_r_r257 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 328, CPyStatic_emitclass___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r257);
CPyL160: ;
    cpy_r_r258 = CPyDef_emitclass___generate_new_for_trait(cpy_r_cl, cpy_r_new_name, cpy_r_r257);
    CPy_DECREF(cpy_r_new_name);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r258 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 328, CPyStatic_emitclass___globals);
        goto CPyL309;
    }
CPyL161: ;
    cpy_r_r259 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 330, CPyStatic_emitclass___globals);
        goto CPyL309;
    }
    CPy_INCREF(cpy_r_r259);
CPyL162: ;
    cpy_r_r260 = CPyDef_emitclass___generate_methods_table(cpy_r_cl, cpy_r_methods_name, cpy_r_r259);
    CPy_DECREF(cpy_r_methods_name);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r260 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 330, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r261 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emit_line;
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emit_line", 331, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    CPy_INCREF(cpy_r_r261);
CPyL164: ;
    cpy_r_r262 = _PyObject_Vectorcall(cpy_r_r261, 0, 0, 0);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 331, CPyStatic_emitclass___globals);
        goto CPyL310;
    } else
        goto CPyL311;
CPyL165: ;
    cpy_r_r263 = CPyStatics[7116]; /* 'Py_TPFLAGS_DEFAULT' */
    cpy_r_r264 = CPyStatics[7117]; /* 'Py_TPFLAGS_HEAPTYPE' */
    cpy_r_r265 = CPyStatics[7118]; /* 'Py_TPFLAGS_BASETYPE' */
    cpy_r_r266 = PyList_New(3);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 333, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r267 = (CPyPtr)&((PyListObject *)cpy_r_r266)->ob_item;
    cpy_r_r268 = *(CPyPtr *)cpy_r_r267;
    CPy_INCREF(cpy_r_r263);
    *(PyObject * *)cpy_r_r268 = cpy_r_r263;
    cpy_r_r269 = cpy_r_r268 + 8;
    CPy_INCREF(cpy_r_r264);
    *(PyObject * *)cpy_r_r269 = cpy_r_r264;
    cpy_r_r270 = cpy_r_r268 + 16;
    CPy_INCREF(cpy_r_r265);
    *(PyObject * *)cpy_r_r270 = cpy_r_r265;
    cpy_r_flags = cpy_r_r266;
    if (!cpy_r_generate_full) goto CPyL168;
    cpy_r_r271 = CPyStatics[7119]; /* 'Py_TPFLAGS_HAVE_GC' */
    cpy_r_r272 = PyList_Append(cpy_r_flags, cpy_r_r271);
    cpy_r_r273 = cpy_r_r272 >= 0;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 335, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
CPyL168: ;
    cpy_r_r274 = CPyStatics[706]; /* '__call__' */
    cpy_r_r275 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_r274);
    if (unlikely(cpy_r_r275 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 336, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    if (!cpy_r_r275) goto CPyL184;
    cpy_r_r276 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 336, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    CPy_INCREF(cpy_r_r276);
CPyL171: ;
    cpy_r_r277 = CPyDef_emit___Emitter___use_vectorcall(cpy_r_r276);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r277 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 336, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    if (!cpy_r_r277) goto CPyL184;
    cpy_r_r278 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 338, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    CPy_INCREF(cpy_r_r278);
CPyL174: ;
    cpy_r_r279 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r278)->_names;
    CPy_INCREF(cpy_r_r279);
    CPy_DECREF(cpy_r_r278);
    cpy_r_r280 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r279);
    CPy_DECREF(cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 338, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    cpy_r_r281 = CPyStatics[7120]; /* 'offsetof(' */
    cpy_r_r282 = CPyStatics[7121]; /* ', vectorcall)' */
    cpy_r_r283 = CPyStr_Build(3, cpy_r_r281, cpy_r_r280, cpy_r_r282);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 337, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    cpy_r_r284 = CPyStatics[7122]; /* 'tp_vectorcall_offset' */
    cpy_r_r285 = CPyDict_SetItem(cpy_r_fields, cpy_r_r284, cpy_r_r283);
    CPy_DECREF(cpy_r_r283);
    cpy_r_r286 = cpy_r_r285 >= 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 337, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    cpy_r_r287 = CPyStatics[7123]; /* '_Py_TPFLAGS_HAVE_VECTORCALL' */
    cpy_r_r288 = PyList_Append(cpy_r_flags, cpy_r_r287);
    cpy_r_r289 = cpy_r_r288 >= 0;
    if (unlikely(!cpy_r_r289)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 340, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    cpy_r_r290 = CPyStatics[7124]; /* 'tp_vectorcall' */
    cpy_r_r291 = CPyDict_GetWithNone(cpy_r_fields, cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 341, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    if (PyUnicode_Check(cpy_r_r291))
        cpy_r_r292 = cpy_r_r291;
    else {
        cpy_r_r292 = NULL;
    }
    if (cpy_r_r292 != NULL) goto __LL9283;
    if (cpy_r_r291 == Py_None)
        cpy_r_r292 = cpy_r_r291;
    else {
        cpy_r_r292 = NULL;
    }
    if (cpy_r_r292 != NULL) goto __LL9283;
    CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 341, CPyStatic_emitclass___globals, "str or None", cpy_r_r291);
    goto CPyL312;
__LL9283: ;
    cpy_r_r293 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r294 = cpy_r_r292 != cpy_r_r293;
    if (!cpy_r_r294) goto CPyL313;
    if (likely(cpy_r_r292 != Py_None))
        cpy_r_r295 = cpy_r_r292;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 341, CPyStatic_emitclass___globals, "str", cpy_r_r292);
        goto CPyL312;
    }
    cpy_r_r296 = CPyStr_IsTrue(cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    if (cpy_r_r296) goto CPyL184;
CPyL183: ;
    cpy_r_r297 = CPyStatics[7070]; /* 'PyVectorcall_Call' */
    cpy_r_r298 = CPyStatics[7125]; /* 'tp_call' */
    cpy_r_r299 = CPyDict_SetItem(cpy_r_fields, cpy_r_r298, cpy_r_r297);
    cpy_r_r300 = cpy_r_r299 >= 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 344, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
CPyL184: ;
    cpy_r_r301 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 345, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    CPy_INCREF(cpy_r_r301);
CPyL185: ;
    cpy_r_r302 = CPyDef_emitclass___has_managed_dict(cpy_r_cl, cpy_r_r301);
    CPy_DECREF(cpy_r_r301);
    if (unlikely(cpy_r_r302 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 345, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
    if (!cpy_r_r302) goto CPyL188;
    cpy_r_r303 = CPyStatics[7126]; /* 'Py_TPFLAGS_MANAGED_DICT' */
    cpy_r_r304 = PyList_Append(cpy_r_flags, cpy_r_r303);
    cpy_r_r305 = cpy_r_r304 >= 0;
    if (unlikely(!cpy_r_r305)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 346, CPyStatic_emitclass___globals);
        goto CPyL312;
    }
CPyL188: ;
    cpy_r_r306 = CPyStatics[3679]; /* ' | ' */
    cpy_r_r307 = PyUnicode_Join(cpy_r_r306, cpy_r_flags);
    CPy_DECREF(cpy_r_flags);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 347, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r308 = CPyStatics[7127]; /* 'tp_flags' */
    cpy_r_r309 = CPyDict_SetItem(cpy_r_fields, cpy_r_r308, cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    cpy_r_r310 = cpy_r_r309 >= 0;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 347, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r311 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 349, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    CPy_INCREF(cpy_r_r311);
CPyL191: ;
    cpy_r_r312 = CPyStatics[7128]; /* 'static PyTypeObject ' */
    cpy_r_r313 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 349, CPyStatic_emitclass___globals);
        goto CPyL314;
    }
    CPy_INCREF(cpy_r_r313);
CPyL192: ;
    cpy_r_r314 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r313, cpy_r_cl);
    CPy_DECREF(cpy_r_r313);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 349, CPyStatic_emitclass___globals);
        goto CPyL314;
    }
    cpy_r_r315 = CPyStatics[7129]; /* '_template_ = {' */
    cpy_r_r316 = CPyStr_Build(3, cpy_r_r312, cpy_r_r314, cpy_r_r315);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 349, CPyStatic_emitclass___globals);
        goto CPyL314;
    }
    cpy_r_r317 = NULL;
    cpy_r_r318 = CPyDef_emit___Emitter___emit_line(cpy_r_r311, cpy_r_r316, cpy_r_r317);
    CPy_DECREF(cpy_r_r316);
    CPy_DECREF(cpy_r_r311);
    if (unlikely(cpy_r_r318 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 349, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r319 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 350, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    CPy_INCREF(cpy_r_r319);
CPyL196: ;
    cpy_r_r320 = CPyStatics[7130]; /* 'PyVarObject_HEAD_INIT(NULL, 0)' */
    cpy_r_r321 = NULL;
    cpy_r_r322 = CPyDef_emit___Emitter___emit_line(cpy_r_r319, cpy_r_r320, cpy_r_r321);
    CPy_DECREF(cpy_r_r319);
    if (unlikely(cpy_r_r322 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 350, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
    cpy_r_r323 = 0;
    cpy_r_r324 = PyDict_Size(cpy_r_fields);
    cpy_r_r325 = cpy_r_r324 << 1;
    cpy_r_r326 = CPyDict_GetItemsIter(cpy_r_fields);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 351, CPyStatic_emitclass___globals);
        goto CPyL310;
    }
CPyL198: ;
    cpy_r_r327 = CPyDict_NextItem(cpy_r_r326, cpy_r_r323);
    cpy_r_r328 = cpy_r_r327.f1;
    cpy_r_r323 = cpy_r_r328;
    cpy_r_r329 = cpy_r_r327.f0;
    if (!cpy_r_r329) goto CPyL315;
    cpy_r_r330 = cpy_r_r327.f2;
    CPy_INCREF(cpy_r_r330);
    cpy_r_r331 = cpy_r_r327.f3;
    CPy_INCREF(cpy_r_r331);
    CPy_DECREF(cpy_r_r327.f2);
    CPy_DECREF(cpy_r_r327.f3);
    if (likely(PyUnicode_Check(cpy_r_r330)))
        cpy_r_r332 = cpy_r_r330;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 351, CPyStatic_emitclass___globals, "str", cpy_r_r330);
        goto CPyL316;
    }
    if (likely(PyUnicode_Check(cpy_r_r331)))
        cpy_r_r333 = cpy_r_r331;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 351, CPyStatic_emitclass___globals, "str", cpy_r_r331);
        goto CPyL317;
    }
    cpy_r_field = cpy_r_r332;
    cpy_r_value = cpy_r_r333;
    cpy_r_r334 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 352, CPyStatic_emitclass___globals);
        goto CPyL318;
    }
    CPy_INCREF(cpy_r_r334);
CPyL202: ;
    cpy_r_r335 = CPyStatics[224]; /* '.' */
    cpy_r_r336 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r337 = CPyStatics[242]; /* ',' */
    cpy_r_r338 = CPyStr_Build(5, cpy_r_r335, cpy_r_field, cpy_r_r336, cpy_r_value, cpy_r_r337);
    CPy_DECREF(cpy_r_field);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 352, CPyStatic_emitclass___globals);
        goto CPyL319;
    }
    cpy_r_r339 = NULL;
    cpy_r_r340 = CPyDef_emit___Emitter___emit_line(cpy_r_r334, cpy_r_r338, cpy_r_r339);
    CPy_DECREF(cpy_r_r338);
    CPy_DECREF(cpy_r_r334);
    if (unlikely(cpy_r_r340 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 352, CPyStatic_emitclass___globals);
        goto CPyL320;
    }
    cpy_r_r341 = CPyDict_CheckSize(cpy_r_fields, cpy_r_r325);
    if (unlikely(!cpy_r_r341)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 351, CPyStatic_emitclass___globals);
        goto CPyL320;
    } else
        goto CPyL198;
CPyL205: ;
    cpy_r_r342 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r342)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 351, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    cpy_r_r343 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 353, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    CPy_INCREF(cpy_r_r343);
CPyL207: ;
    cpy_r_r344 = CPyStatics[7107]; /* '};' */
    cpy_r_r345 = NULL;
    cpy_r_r346 = CPyDef_emit___Emitter___emit_line(cpy_r_r343, cpy_r_r344, cpy_r_r345);
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r346 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 353, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    cpy_r_r347 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 354, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    CPy_INCREF(cpy_r_r347);
CPyL209: ;
    cpy_r_r348 = CPyStatics[7131]; /* 'static PyTypeObject *{t}_template = &{t}_template_;' */
    cpy_r_r349 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 356, CPyStatic_emitclass___globals);
        goto CPyL322;
    }
    CPy_INCREF(cpy_r_r349);
CPyL210: ;
    cpy_r_r350 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r349, cpy_r_cl);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 356, CPyStatic_emitclass___globals);
        goto CPyL322;
    }
    cpy_r_r351 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r352[2] = {cpy_r_r348, cpy_r_r350};
    cpy_r_r353 = (PyObject **)&cpy_r_r352;
    cpy_r_r354 = CPyStatics[9948]; /* ('t',) */
    cpy_r_r355 = PyObject_VectorcallMethod(cpy_r_r351, cpy_r_r353, 9223372036854775809ULL, cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 355, CPyStatic_emitclass___globals);
        goto CPyL323;
    }
    CPy_DECREF(cpy_r_r350);
    if (likely(PyUnicode_Check(cpy_r_r355)))
        cpy_r_r356 = cpy_r_r355;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_class", 355, CPyStatic_emitclass___globals, "str", cpy_r_r355);
        goto CPyL322;
    }
    cpy_r_r357 = NULL;
    cpy_r_r358 = CPyDef_emit___Emitter___emit_line(cpy_r_r347, cpy_r_r356, cpy_r_r357);
    CPy_DECREF(cpy_r_r356);
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r358 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 354, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    cpy_r_r359 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 360, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    CPy_INCREF(cpy_r_r359);
CPyL215: ;
    cpy_r_r360 = NULL;
    cpy_r_r361 = NULL;
    cpy_r_r362 = CPyDef_emit___Emitter___emit_line(cpy_r_r359, cpy_r_r360, cpy_r_r361);
    CPy_DECREF(cpy_r_r359);
    if (unlikely(cpy_r_r362 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 360, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    if (!cpy_r_generate_full) goto CPyL324;
    cpy_r_r363 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 363, CPyStatic_emitclass___globals);
        goto CPyL321;
    }
    CPy_INCREF(cpy_r_r363);
CPyL218: ;
    if (cpy_r_shadow_vtable_name == NULL) {
        goto CPyL325;
    } else
        goto CPyL221;
CPyL219: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"shadow_vtable_name\" referenced before assignment");
    cpy_r_r364 = 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 362, CPyStatic_emitclass___globals);
        goto CPyL233;
    }
    CPy_Unreachable();
CPyL221: ;
    cpy_r_r365 = CPyDef_emitclass___generate_setup_for_class(cpy_r_cl, cpy_r_setup_name, cpy_r_defaults_fn, cpy_r_vtable_name, cpy_r_shadow_vtable_name, cpy_r_r363);
    CPy_DECREF(cpy_r_defaults_fn);
    CPy_XDECREF(cpy_r_shadow_vtable_name);
    CPy_DECREF(cpy_r_r363);
    if (unlikely(cpy_r_r365 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 362, CPyStatic_emitclass___globals);
        goto CPyL326;
    }
    cpy_r_r366 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 365, CPyStatic_emitclass___globals);
        goto CPyL326;
    }
    CPy_INCREF(cpy_r_r366);
CPyL223: ;
    cpy_r_r367 = NULL;
    cpy_r_r368 = NULL;
    cpy_r_r369 = CPyDef_emit___Emitter___emit_line(cpy_r_r366, cpy_r_r367, cpy_r_r368);
    CPy_DECREF(cpy_r_r366);
    if (unlikely(cpy_r_r369 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 365, CPyStatic_emitclass___globals);
        goto CPyL326;
    }
    cpy_r_r370 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_ctor;
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "ClassIR", "ctor", 366, CPyStatic_emitclass___globals);
        goto CPyL326;
    }
    CPy_INCREF(cpy_r_r370);
CPyL225: ;
    cpy_r_r371 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 366, CPyStatic_emitclass___globals);
        goto CPyL327;
    }
    CPy_INCREF(cpy_r_r371);
CPyL226: ;
    cpy_r_r372 = CPyDef_emitclass___generate_constructor_for_class(cpy_r_cl, cpy_r_r370, cpy_r_init_fn, cpy_r_setup_name, cpy_r_vtable_name, cpy_r_r371);
    CPy_DECREF(cpy_r_r370);
    CPy_DECREF(cpy_r_init_fn);
    CPy_DECREF(cpy_r_setup_name);
    CPy_DECREF(cpy_r_vtable_name);
    CPy_DECREF(cpy_r_r371);
    if (unlikely(cpy_r_r372 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 366, CPyStatic_emitclass___globals);
        goto CPyL328;
    }
    cpy_r_r373 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_class", "generate_class_env", "emitter", 367, CPyStatic_emitclass___globals);
        goto CPyL328;
    }
    CPy_INCREF(cpy_r_r373);
CPyL228: ;
    cpy_r_r374 = NULL;
    cpy_r_r375 = NULL;
    cpy_r_r376 = CPyDef_emit___Emitter___emit_line(cpy_r_r373, cpy_r_r374, cpy_r_r375);
    CPy_DECREF(cpy_r_r373);
    if (unlikely(cpy_r_r376 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 367, CPyStatic_emitclass___globals);
        goto CPyL328;
    }
CPyL229: ;
    if (!cpy_r_needs_getseters) goto CPyL329;
    cpy_r_r377 = ((mypyc___codegen___emitclass___generate_class_envObject *)cpy_r_r1)->_emitter;
    if (unlikely(cpy_r_r377 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'emitter' of 'generate_class_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r377);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 369, CPyStatic_emitclass___globals);
        goto CPyL233;
    }
CPyL231: ;
    cpy_r_r378 = CPyDef_emitclass___generate_getseters(cpy_r_cl, cpy_r_r377);
    CPy_DECREF(cpy_r_r377);
    if (unlikely(cpy_r_r378 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 369, CPyStatic_emitclass___globals);
        goto CPyL233;
    }
CPyL232: ;
    return 1;
CPyL233: ;
    cpy_r_r379 = 2;
    return cpy_r_r379;
CPyL234: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    goto CPyL233;
CPyL235: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    goto CPyL233;
CPyL236: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    goto CPyL233;
CPyL237: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    goto CPyL233;
CPyL238: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    goto CPyL233;
CPyL239: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    goto CPyL233;
CPyL240: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    goto CPyL233;
CPyL241: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    goto CPyL233;
CPyL242: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    goto CPyL233;
CPyL243: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    goto CPyL233;
CPyL244: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    goto CPyL233;
CPyL245: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    goto CPyL233;
CPyL246: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    goto CPyL233;
CPyL247: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    goto CPyL233;
CPyL248: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name_prefix);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    goto CPyL233;
CPyL249: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL27;
CPyL250: ;
    CPy_DECREF(cpy_r_name_prefix);
    goto CPyL35;
CPyL251: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    goto CPyL233;
CPyL252: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r77);
    goto CPyL233;
CPyL253: ;
    CPy_DECREF(cpy_r_r81);
    goto CPyL43;
CPyL254: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    goto CPyL233;
CPyL255: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL256: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r90);
    goto CPyL233;
CPyL257: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL64;
CPyL258: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    goto CPyL233;
CPyL259: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_table_name);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_slot_defs);
    goto CPyL233;
CPyL260: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_table_name);
    CPy_DecRef(cpy_r_type);
    goto CPyL233;
CPyL261: ;
    CPy_DECREF(cpy_r_table_name);
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_slots);
    goto CPyL63;
CPyL262: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_table_name);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_slots);
    goto CPyL233;
CPyL263: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_table_name);
    goto CPyL233;
CPyL264: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r118);
    goto CPyL233;
CPyL265: ;
    CPy_DECREF(cpy_r_richcompare_name);
    goto CPyL71;
CPyL266: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_richcompare_name);
    goto CPyL233;
CPyL267: ;
    CPy_DECREF(cpy_r_r137);
    goto CPyL79;
CPyL268: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_struct_name);
    goto CPyL233;
CPyL269: ;
    CPy_DECREF(cpy_r_struct_name);
    goto CPyL76;
CPyL270: ;
    CPy_DECREF(cpy_r_struct_name);
    goto CPyL80;
CPyL271: ;
    CPy_DECREF(cpy_r_members_name);
    goto CPyL103;
CPyL272: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    goto CPyL233;
CPyL273: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    CPy_DecRef(cpy_r_weak_offset);
    goto CPyL233;
CPyL274: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    CPy_DecRef(cpy_r_weak_offset);
    CPy_DecRef(cpy_r_r157);
    goto CPyL233;
CPyL275: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    CPy_DecRef(cpy_r_weak_offset);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r160);
    goto CPyL233;
CPyL276: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_members_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    CPy_DecRef(cpy_r_weak_offset);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r163);
    goto CPyL233;
CPyL277: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_base_size);
    CPy_DecRef(cpy_r_weak_offset);
    goto CPyL233;
CPyL278: ;
    CPy_DECREF(cpy_r_base_size);
    CPy_DECREF(cpy_r_weak_offset);
    goto CPyL104;
CPyL279: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_weak_offset);
    goto CPyL233;
CPyL280: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL281: ;
    CPy_XDECREF(cpy_r_shadow_vtable_name);
    CPy_DECREF(cpy_r_init_fn);
    goto CPyL105;
CPyL282: ;
    CPy_DECREF(cpy_r_traverse_name);
    CPy_DECREF(cpy_r_clear_name);
    CPy_DECREF(cpy_r_dealloc_name);
    CPy_DECREF(cpy_r_vtable_setup_name);
    goto CPyL149;
CPyL283: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    goto CPyL233;
CPyL284: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_r195);
    goto CPyL233;
CPyL285: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_setup_name);
    CPy_DECREF(cpy_r_new_name);
    CPy_DECREF(cpy_r_getseters_name);
    CPy_DECREF(cpy_r_vtable_name);
    CPy_DECREF(cpy_r_traverse_name);
    CPy_DECREF(cpy_r_clear_name);
    CPy_DECREF(cpy_r_dealloc_name);
    CPy_DECREF(cpy_r_methods_name);
    CPy_DECREF(cpy_r_vtable_setup_name);
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_defaults_fn);
    goto CPyL110;
CPyL286: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_r205);
    goto CPyL233;
CPyL287: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r206);
    goto CPyL233;
CPyL288: ;
    CPy_DECREF(cpy_r_r214);
    goto CPyL120;
CPyL289: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_traverse_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL290: ;
    CPy_DECREF(cpy_r_r221);
    goto CPyL125;
CPyL291: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_clear_name);
    CPy_DecRef(cpy_r_dealloc_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL292: ;
    CPy_DECREF(cpy_r_r225);
    goto CPyL129;
CPyL293: ;
    CPy_DECREF(cpy_r_r229);
    goto CPyL133;
CPyL294: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL295: ;
    CPy_DECREF(cpy_r_r233);
    goto CPyL137;
CPyL296: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r236);
    goto CPyL233;
CPyL297: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r236);
    CPy_DecRef(cpy_r_r238);
    goto CPyL233;
CPyL298: ;
    CPy_DecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_vtable_setup_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL299: ;
    CPy_DECREF(cpy_r_r242);
    goto CPyL145;
CPyL300: ;
    CPy_DecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL301: ;
    CPy_DecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL302: ;
    CPy_DECREF(cpy_r_r247);
    goto CPyL149;
CPyL303: ;
    CPy_DECREF(cpy_r_getseters_name);
    goto CPyL158;
CPyL304: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_getseters_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL305: ;
    CPy_DECREF(cpy_r_r251);
    goto CPyL154;
CPyL306: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_new_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL307: ;
    CPy_DECREF(cpy_r_r255);
    goto CPyL158;
CPyL308: ;
    CPy_DECREF(cpy_r_new_name);
    goto CPyL161;
CPyL309: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_methods_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL310: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL311: ;
    CPy_DECREF(cpy_r_r262);
    goto CPyL165;
CPyL312: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_flags);
    goto CPyL233;
CPyL313: ;
    CPy_DECREF(cpy_r_r292);
    goto CPyL183;
CPyL314: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r311);
    goto CPyL233;
CPyL315: ;
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_r326);
    CPy_DECREF(cpy_r_r327.f2);
    CPy_DECREF(cpy_r_r327.f3);
    goto CPyL205;
CPyL316: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r331);
    goto CPyL233;
CPyL317: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r332);
    goto CPyL233;
CPyL318: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_value);
    goto CPyL233;
CPyL319: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r334);
    goto CPyL233;
CPyL320: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r326);
    goto CPyL233;
CPyL321: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL322: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r347);
    goto CPyL233;
CPyL323: ;
    CPy_XDecRef(cpy_r_shadow_vtable_name);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_defaults_fn);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r347);
    CPy_DecRef(cpy_r_r350);
    goto CPyL233;
CPyL324: ;
    CPy_XDECREF(cpy_r_shadow_vtable_name);
    CPy_DECREF(cpy_r_setup_name);
    CPy_DECREF(cpy_r_vtable_name);
    CPy_DECREF(cpy_r_defaults_fn);
    CPy_DECREF(cpy_r_init_fn);
    goto CPyL229;
CPyL325: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_setup_name);
    CPy_DECREF(cpy_r_vtable_name);
    CPy_DECREF(cpy_r_defaults_fn);
    CPy_DECREF(cpy_r_init_fn);
    CPy_DECREF(cpy_r_r363);
    goto CPyL219;
CPyL326: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_init_fn);
    goto CPyL233;
CPyL327: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_setup_name);
    CPy_DecRef(cpy_r_vtable_name);
    CPy_DecRef(cpy_r_init_fn);
    CPy_DecRef(cpy_r_r370);
    goto CPyL233;
CPyL328: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL233;
CPyL329: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL232;
}

PyObject *CPyPy_emitclass___generate_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "module", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_module;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_module, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_class(arg_cl, arg_module, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_class", 197, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___getter_name(PyObject *cpy_r_cl, PyObject *cpy_r_attribute, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_module_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[7132]; /* '_get_' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_attribute);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "getter_name", 373, CPyStatic_emitclass___globals);
        goto CPyL4;
    }
    cpy_r_r4 = CPyDef_namegen___NameGenerator___private_name(cpy_r_names, cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "getter_name", 373, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_emitclass___getter_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attribute", "names", 0};
    static CPyArg_Parser parser = {"OOO:getter_name", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attribute;
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attribute, &obj_names)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attribute;
    if (likely(PyUnicode_Check(obj_attribute)))
        arg_attribute = obj_attribute;
    else {
        CPy_TypeError("str", obj_attribute); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___getter_name(arg_cl, arg_attribute, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "getter_name", 372, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___setter_name(PyObject *cpy_r_cl, PyObject *cpy_r_attribute, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_module_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[7133]; /* '_set_' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_attribute);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "setter_name", 377, CPyStatic_emitclass___globals);
        goto CPyL4;
    }
    cpy_r_r4 = CPyDef_namegen___NameGenerator___private_name(cpy_r_names, cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "setter_name", 377, CPyStatic_emitclass___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_emitclass___setter_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attribute", "names", 0};
    static CPyArg_Parser parser = {"OOO:setter_name", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attribute;
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attribute, &obj_names)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attribute;
    if (likely(PyUnicode_Check(obj_attribute)))
        arg_attribute = obj_attribute;
    else {
        CPy_TypeError("str", obj_attribute); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___setter_name(arg_cl, arg_attribute, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "setter_name", 376, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_object_struct(PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_seen_attrs;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_lines;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_bitmap_attrs;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_base;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_attr;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    int64_t cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T4CIOO cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_rtype;
    tuple_T2OO cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    tuple_T2OO cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 381, CPyStatic_emitclass___globals);
        goto CPyL69;
    }
    cpy_r_seen_attrs = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 382, CPyStatic_emitclass___globals);
        goto CPyL70;
    }
    cpy_r_lines = cpy_r_r1;
    cpy_r_r2 = CPyStatics[7134]; /* 'typedef struct {' */
    cpy_r_r3 = CPyStatics[7135]; /* 'PyObject_HEAD' */
    cpy_r_r4 = CPyStatics[7136]; /* 'CPyVTableItem *vtable;' */
    cpy_r_r5 = PyList_New(3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 383, CPyStatic_emitclass___globals);
        goto CPyL71;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = cpy_r_r7 + 8;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r8 = cpy_r_r3;
    cpy_r_r9 = cpy_r_r7 + 16;
    CPy_INCREF(cpy_r_r4);
    *(PyObject * *)cpy_r_r9 = cpy_r_r4;
    cpy_r_r10 = PyNumber_InPlaceAdd(cpy_r_lines, cpy_r_r5);
    CPy_DECREF(cpy_r_lines);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 383, CPyStatic_emitclass___globals);
        goto CPyL70;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 383, CPyStatic_emitclass___globals, "list", cpy_r_r10);
        goto CPyL70;
    }
    cpy_r_lines = cpy_r_r11;
    cpy_r_r12 = CPyStatics[706]; /* '__call__' */
    cpy_r_r13 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 384, CPyStatic_emitclass___globals);
        goto CPyL71;
    }
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPyDef_emit___Emitter___use_vectorcall(cpy_r_emitter);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 384, CPyStatic_emitclass___globals);
        goto CPyL71;
    }
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPyStatics[7137]; /* 'vectorcallfunc vectorcall;' */
    cpy_r_r16 = PyList_Append(cpy_r_lines, cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 385, CPyStatic_emitclass___globals);
        goto CPyL71;
    }
CPyL10: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 386, CPyStatic_emitclass___globals);
        goto CPyL71;
    }
    cpy_r_bitmap_attrs = cpy_r_r18;
    cpy_r_r19 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_object_struct", "ClassIR", "base_mro", 387, CPyStatic_emitclass___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = CPyTagged_Subtract(cpy_r_r22, 2);
    cpy_r_r24 = cpy_r_r23;
CPyL13: ;
    cpy_r_r25 = cpy_r_r24 & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = 0 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    cpy_r_r29 = cpy_r_r26 & cpy_r_r28;
    if (!cpy_r_r29) goto CPyL15;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r24 >= (Py_ssize_t)0;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL16;
CPyL15: ;
    cpy_r_r32 = CPyTagged_IsLt_(cpy_r_r24, 0);
    cpy_r_r33 = cpy_r_r32 ^ 1;
    cpy_r_r31 = cpy_r_r33;
CPyL16: ;
    if (!cpy_r_r31) goto CPyL73;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = cpy_r_r24 & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    cpy_r_r39 = cpy_r_r36 & 1;
    cpy_r_r40 = cpy_r_r39 == 0;
    cpy_r_r41 = cpy_r_r38 & cpy_r_r40;
    if (!cpy_r_r41) goto CPyL19;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r36;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL20;
CPyL19: ;
    cpy_r_r44 = CPyTagged_IsLt_(cpy_r_r24, cpy_r_r36);
    cpy_r_r43 = cpy_r_r44;
CPyL20: ;
    if (!cpy_r_r43) goto CPyL73;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r24);
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("short_int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 387, CPyStatic_emitclass___globals);
        goto CPyL74;
    }
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r46);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_class_ir___ClassIR))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 387, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r47);
        goto CPyL74;
    }
    cpy_r_base = cpy_r_r48;
    cpy_r_r49 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_is_trait;
    if (cpy_r_r49) goto CPyL75;
CPyL24: ;
    cpy_r_r50 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_bitmap_attrs;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_object_struct", "ClassIR", "bitmap_attrs", 389, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r50);
CPyL25: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    CPy_DECREF(cpy_r_r50);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = cpy_r_r53 != 0;
    if (!cpy_r_r54) goto CPyL43;
    cpy_r_r55 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_bitmap_attrs;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_object_struct", "ClassIR", "bitmap_attrs", 391, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
CPyL27: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = CPyTagged_Subtract(cpy_r_r58, 2);
    cpy_r_r60 = CPyDef_emit___Emitter___bitmap_field(cpy_r_emitter, cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 391, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
    cpy_r_r61 = PySequence_Contains(cpy_r_bitmap_attrs, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 391, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
    cpy_r_r63 = cpy_r_r61;
    cpy_r_r64 = cpy_r_r63 ^ 1;
    if (!cpy_r_r64) goto CPyL43;
    cpy_r_r65 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_bitmap_attrs;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_object_struct", "ClassIR", "bitmap_attrs", 392, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
CPyL31: ;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_r65)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = (PyObject *)&PyRange_Type;
    cpy_r_r70 = CPyStatics[9015]; /* 0 */
    cpy_r_r71 = CPyTagged_StealAsObject(cpy_r_r68);
    cpy_r_r72 = CPyStatics[9043]; /* 32 */
    PyObject *cpy_r_r73[3] = {cpy_r_r70, cpy_r_r71, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r74, 3, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 392, CPyStatic_emitclass___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(PyRange_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 392, CPyStatic_emitclass___globals, "range", cpy_r_r75);
        goto CPyL76;
    }
    cpy_r_r77 = PyObject_GetIter(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 392, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
CPyL34: ;
    cpy_r_r78 = PyIter_Next(cpy_r_r77);
    if (cpy_r_r78 == NULL) goto CPyL78;
    if (likely(PyLong_Check(cpy_r_r78)))
        cpy_r_r79 = CPyTagged_FromObject(cpy_r_r78);
    else {
        CPy_TypeError("int", cpy_r_r78); cpy_r_r79 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 392, CPyStatic_emitclass___globals);
        goto CPyL79;
    }
    cpy_r_i = cpy_r_r79;
    cpy_r_r80 = CPyDef_emit___Emitter___bitmap_field(cpy_r_emitter, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 393, CPyStatic_emitclass___globals);
        goto CPyL79;
    }
    cpy_r_attr = cpy_r_r80;
    cpy_r_r81 = PySequence_Contains(cpy_r_bitmap_attrs, cpy_r_attr);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 394, CPyStatic_emitclass___globals);
        goto CPyL80;
    }
    cpy_r_r83 = cpy_r_r81;
    cpy_r_r84 = cpy_r_r83 ^ 1;
    if (!cpy_r_r84) goto CPyL81;
    cpy_r_r85 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r86 = CPyStatics[295]; /* ' ' */
    cpy_r_r87 = CPyStatics[6886]; /* ';' */
    cpy_r_r88 = CPyStr_Build(4, cpy_r_r85, cpy_r_r86, cpy_r_attr, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 395, CPyStatic_emitclass___globals);
        goto CPyL80;
    }
    cpy_r_r89 = PyList_Append(cpy_r_lines, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 395, CPyStatic_emitclass___globals);
        goto CPyL80;
    }
    cpy_r_r91 = PyList_Append(cpy_r_bitmap_attrs, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 396, CPyStatic_emitclass___globals);
        goto CPyL79;
    } else
        goto CPyL34;
CPyL42: ;
    cpy_r_r93 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 392, CPyStatic_emitclass___globals);
        goto CPyL76;
    }
CPyL43: ;
    cpy_r_r94 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r94 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r94);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals);
        goto CPyL74;
    }
CPyL44: ;
    cpy_r_r95 = 0;
    cpy_r_r96 = PyDict_Size(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 << 1;
    cpy_r_r98 = CPyDict_GetItemsIter(cpy_r_r94);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL45: ;
    cpy_r_r99 = CPyDict_NextItem(cpy_r_r98, cpy_r_r95);
    cpy_r_r100 = cpy_r_r99.f1;
    cpy_r_r95 = cpy_r_r100;
    cpy_r_r101 = cpy_r_r99.f0;
    if (!cpy_r_r101) goto CPyL83;
    cpy_r_r102 = cpy_r_r99.f2;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = cpy_r_r99.f3;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r99.f2);
    CPy_DECREF(cpy_r_r99.f3);
    if (likely(PyUnicode_Check(cpy_r_r102)))
        cpy_r_r104 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals, "str", cpy_r_r102);
        goto CPyL84;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r103, CPyType_rtypes___RType)))
        cpy_r_r105 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RType", cpy_r_r103);
        goto CPyL85;
    }
    cpy_r_attr = cpy_r_r104;
    cpy_r_rtype = cpy_r_r105;
    cpy_r_r106.f0 = cpy_r_attr;
    cpy_r_r106.f1 = cpy_r_rtype;
    CPy_INCREF(cpy_r_r106.f0);
    CPy_INCREF(cpy_r_r106.f1);
    cpy_r_r107 = PyTuple_New(2);
    if (unlikely(cpy_r_r107 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9284 = cpy_r_r106.f0;
    PyTuple_SET_ITEM(cpy_r_r107, 0, __tmp9284);
    PyObject *__tmp9285 = cpy_r_r106.f1;
    PyTuple_SET_ITEM(cpy_r_r107, 1, __tmp9285);
    cpy_r_r108 = PySet_Contains(cpy_r_seen_attrs, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 398, CPyStatic_emitclass___globals);
        goto CPyL86;
    }
    cpy_r_r110 = cpy_r_r108;
    cpy_r_r111 = cpy_r_r110 ^ 1;
    if (!cpy_r_r111) goto CPyL87;
    cpy_r_r112 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_rtype);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 399, CPyStatic_emitclass___globals);
        goto CPyL86;
    }
    cpy_r_r113 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 399, CPyStatic_emitclass___globals);
        goto CPyL88;
    }
    cpy_r_r114 = CPyStatics[6886]; /* ';' */
    cpy_r_r115 = CPyStr_Build(3, cpy_r_r112, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 399, CPyStatic_emitclass___globals);
        goto CPyL86;
    }
    cpy_r_r116 = PyList_Append(cpy_r_lines, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 399, CPyStatic_emitclass___globals);
        goto CPyL86;
    }
    cpy_r_r118.f0 = cpy_r_attr;
    cpy_r_r118.f1 = cpy_r_rtype;
    CPy_INCREF(cpy_r_r118.f0);
    CPy_INCREF(cpy_r_r118.f1);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r119 = PyTuple_New(2);
    if (unlikely(cpy_r_r119 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9286 = cpy_r_r118.f0;
    PyTuple_SET_ITEM(cpy_r_r119, 0, __tmp9286);
    PyObject *__tmp9287 = cpy_r_r118.f1;
    PyTuple_SET_ITEM(cpy_r_r119, 1, __tmp9287);
    cpy_r_r120 = PySet_Add(cpy_r_seen_attrs, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 400, CPyStatic_emitclass___globals);
        goto CPyL89;
    }
    cpy_r_r122 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r123 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r124 = *(PyObject * *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 == cpy_r_r122;
    if (!cpy_r_r125) goto CPyL90;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r126 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 403, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL91;
    }
    cpy_r_r127 = CPyDef_emit___Emitter___declare_tuple_struct(cpy_r_emitter, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 403, CPyStatic_emitclass___globals);
        goto CPyL91;
    }
CPyL58: ;
    cpy_r_r128 = CPyDict_CheckSize(cpy_r_r94, cpy_r_r97);
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals);
        goto CPyL91;
    } else
        goto CPyL45;
CPyL59: ;
    cpy_r_r129 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 397, CPyStatic_emitclass___globals);
        goto CPyL74;
    }
CPyL60: ;
    cpy_r_r130 = cpy_r_r24 + -2;
    CPyTagged_DECREF(cpy_r_r24);
    cpy_r_r24 = cpy_r_r130;
    goto CPyL13;
CPyL61: ;
    cpy_r_r131 = CPyStatics[6887]; /* '} ' */
    cpy_r_r132 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r132);
    cpy_r_r133 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 405, CPyStatic_emitclass___globals);
        goto CPyL92;
    }
    cpy_r_r134 = CPyStatics[6886]; /* ';' */
    cpy_r_r135 = CPyStr_Build(3, cpy_r_r131, cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 405, CPyStatic_emitclass___globals);
        goto CPyL92;
    }
    cpy_r_r136 = PyList_Append(cpy_r_lines, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 405, CPyStatic_emitclass___globals);
        goto CPyL92;
    }
    cpy_r_r138 = CPyStatics[163]; /* '' */
    cpy_r_r139 = PyList_Append(cpy_r_lines, cpy_r_r138);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 406, CPyStatic_emitclass___globals);
        goto CPyL92;
    }
    cpy_r_r141 = NULL;
    cpy_r_r142 = NULL;
    cpy_r_r143 = 2;
    cpy_r_r144 = CPyDef_emit___HeaderDeclaration(cpy_r_lines, cpy_r_r141, cpy_r_r142, 1, cpy_r_r143);
    CPy_DECREF(cpy_r_lines);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 407, CPyStatic_emitclass___globals);
        goto CPyL69;
    }
    cpy_r_r145 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r146 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r145)->_declarations;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 407, CPyStatic_emitclass___globals);
        goto CPyL93;
    }
    cpy_r_r149 = CPyDict_SetItem(cpy_r_r146, cpy_r_r148, cpy_r_r144);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 407, CPyStatic_emitclass___globals);
        goto CPyL69;
    }
    return 1;
CPyL69: ;
    cpy_r_r151 = 2;
    return cpy_r_r151;
CPyL70: ;
    CPy_DecRef(cpy_r_seen_attrs);
    goto CPyL69;
CPyL71: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    goto CPyL69;
CPyL72: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    goto CPyL69;
CPyL73: ;
    CPy_DECREF(cpy_r_seen_attrs);
    CPy_DECREF(cpy_r_bitmap_attrs);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r24);
    goto CPyL61;
CPyL74: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL69;
CPyL75: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL60;
CPyL76: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_base);
    goto CPyL69;
CPyL77: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r71);
    goto CPyL69;
CPyL78: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL42;
CPyL79: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r77);
    goto CPyL69;
CPyL80: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_attr);
    goto CPyL69;
CPyL81: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL34;
CPyL82: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r94);
    goto CPyL69;
CPyL83: ;
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99.f2);
    CPy_DECREF(cpy_r_r99.f3);
    goto CPyL59;
CPyL84: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r103);
    goto CPyL69;
CPyL85: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r104);
    goto CPyL69;
CPyL86: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL69;
CPyL87: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL58;
CPyL88: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_r112);
    goto CPyL69;
CPyL89: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL69;
CPyL90: ;
    CPy_DECREF(cpy_r_rtype);
    goto CPyL58;
CPyL91: ;
    CPy_DecRef(cpy_r_seen_attrs);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_bitmap_attrs);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    goto CPyL69;
CPyL92: ;
    CPy_DecRef(cpy_r_lines);
    goto CPyL69;
CPyL93: ;
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r146);
    goto CPyL69;
}

PyObject *CPyPy_emitclass___generate_object_struct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_object_struct", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_object_struct(arg_cl, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_object_struct", 380, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass___trait_vtable_name_generate_vtables_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_trait) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_trait_vtable_name;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_vtable_name", "trait_vtable_name_generate_vtables_obj", "__mypyc_env__", 443, CPyStatic_emitclass___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_vtable_name", "generate_vtables_env", "trait_vtable_name", -1, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_trait_vtable_name = cpy_r_r1;
    CPy_DECREF(cpy_r_trait_vtable_name);
    cpy_r_r2 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_vtable_name", "generate_vtables_env", "base", 445, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_vtable_name", "generate_vtables_env", "emitter", 445, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r3)->_names;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_vtable_name", 445, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r6 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_vtable_name", "generate_vtables_env", "emitter", 446, CPyStatic_emitclass___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r6)->_names;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_trait, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_vtable_name", 446, CPyStatic_emitclass___globals);
        goto CPyL16;
    }
    cpy_r_r9 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_shadow;
    if (unlikely(cpy_r_r9 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'shadow' of 'generate_vtables_env' undefined");
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_vtable_name", 447, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
CPyL8: ;
    if (!cpy_r_r9) goto CPyL10;
CPyL9: ;
    cpy_r_r10 = CPyStatics[7115]; /* '_shadow' */
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r10;
    goto CPyL11;
CPyL10: ;
    cpy_r_r12 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r12);
    cpy_r_r11 = cpy_r_r12;
CPyL11: ;
    cpy_r_r13 = CPyStatics[755]; /* '_' */
    cpy_r_r14 = CPyStatics[7139]; /* '_trait_vtable' */
    cpy_r_r15 = CPyStr_Build(5, cpy_r_r5, cpy_r_r13, cpy_r_r8, cpy_r_r14, cpy_r_r11);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_vtable_name", 444, CPyStatic_emitclass___globals);
        goto CPyL13;
    }
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
}

PyObject *CPyPy_emitclass___trait_vtable_name_generate_vtables_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"trait", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_trait;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_trait)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_trait;
    if (likely(Py_TYPE(obj_trait) == CPyType_class_ir___ClassIR))
        arg_trait = obj_trait;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_trait); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___trait_vtable_name_generate_vtables_obj_____call__(arg___mypyc_self__, arg_trait);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_vtable_name", 443, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitclass___trait_offset_table_name_generate_vtables_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "__get__", -1, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_trait) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_trait_offset_table_name;
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
    cpy_r_r0 = ((mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_offset_table_name", "trait_offset_table_name_generate_vtables_obj", "__mypyc_env__", 450, CPyStatic_emitclass___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_offset_table_name", "generate_vtables_env", "trait_offset_table_name", -1, CPyStatic_emitclass___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_trait_offset_table_name = cpy_r_r1;
    CPy_DECREF(cpy_r_trait_offset_table_name);
    cpy_r_r2 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_offset_table_name", "generate_vtables_env", "base", 452, CPyStatic_emitclass___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "trait_offset_table_name", "generate_vtables_env", "emitter", 452, CPyStatic_emitclass___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r3)->_names;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_offset_table_name", 452, CPyStatic_emitclass___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'emitter' of 'generate_vtables_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_offset_table_name", 452, CPyStatic_emitclass___globals);
        goto CPyL12;
    }
CPyL6: ;
    cpy_r_r7 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r6)->_names;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_trait, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_offset_table_name", 452, CPyStatic_emitclass___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyStatics[755]; /* '_' */
    cpy_r_r10 = CPyStatics[7140]; /* '_offset_table' */
    cpy_r_r11 = CPyStr_Build(4, cpy_r_r5, cpy_r_r9, cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_offset_table_name", 451, CPyStatic_emitclass___globals);
        goto CPyL9;
    }
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_emitclass___trait_offset_table_name_generate_vtables_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"trait", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_trait;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_trait)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_trait;
    if (likely(Py_TYPE(obj_trait) == CPyType_class_ir___ClassIR))
        arg_trait = obj_trait;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_trait); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj_____call__(arg___mypyc_self__, arg_trait);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "trait_offset_table_name", 450, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___generate_vtables(PyObject *cpy_r_base, PyObject *cpy_r_vtable_setup_name, PyObject *cpy_r_vtable_name, PyObject *cpy_r_emitter, char cpy_r_shadow) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T4CIOO cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_trait;
    PyObject *cpy_r_vtable;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int64_t cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_subtables;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    int64_t cpy_r_r116;
    CPyTagged cpy_r_r117;
    PyObject *cpy_r_r118;
    tuple_T4CIOO cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_offset_name;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    tuple_T3OOO cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    CPyPtr cpy_r_r162;
    int64_t cpy_r_r163;
    CPyTagged cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyPtr cpy_r_r168;
    int64_t cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyTagged cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    cpy_r_r0 = CPyDef_emitclass___generate_vtables_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 412, CPyStatic_emitclass___globals);
        goto CPyL105;
    }
    CPy_INCREF(cpy_r_base);
    if (((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base);
    }
    ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base = cpy_r_base;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 412, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_emitter);
    if (((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter);
    }
    ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter = cpy_r_emitter;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 412, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_shadow = cpy_r_shadow;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 412, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r4 = CPyDef_emitclass___trait_vtable_name_generate_vtables_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 443, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((mypyc___codegen___emitclass___trait_vtable_name_generate_vtables_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 443, CPyStatic_emitclass___globals);
        goto CPyL107;
    }
    if (((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name);
    }
    ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name = cpy_r_r4;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 443, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r7 = CPyDef_emitclass___trait_offset_table_name_generate_vtables_obj();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 450, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *)cpy_r_r7)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *)cpy_r_r7)->___mypyc_env__);
    }
    ((mypyc___codegen___emitclass___trait_offset_table_name_generate_vtables_objObject *)cpy_r_r7)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 450, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    if (((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name != NULL) {
        CPy_DECREF(((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name);
    }
    ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name = cpy_r_r7;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 450, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r10 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 456, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 458, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r11);
CPyL12: ;
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r11)->_vtable_entries;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "ClassIR", "vtable_entries", 458, CPyStatic_emitclass___globals);
        goto CPyL110;
    }
CPyL13: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r16 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 458, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r16)->_trait_vtables;
    if (unlikely(cpy_r_r17 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'trait_vtables' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r17);
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 458, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
CPyL15: ;
    cpy_r_r18 = PyDict_Size(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = CPyTagged_Multiply(6, cpy_r_r19);
    cpy_r_r21 = CPyTagged_Add(cpy_r_r15, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    cpy_r_r24 = 2 & 1;
    cpy_r_r25 = cpy_r_r24 == 0;
    cpy_r_r26 = cpy_r_r23 & cpy_r_r25;
    if (!cpy_r_r26) goto CPyL17;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r21 > (Py_ssize_t)2;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL18;
CPyL17: ;
    cpy_r_r29 = CPyTagged_IsLt_(2, cpy_r_r21);
    cpy_r_r28 = cpy_r_r29;
CPyL18: ;
    if (!cpy_r_r28) goto CPyL111;
    cpy_r_r30 = cpy_r_r21;
    goto CPyL21;
CPyL20: ;
    cpy_r_r30 = 2;
CPyL21: ;
    cpy_r_r31 = CPyTagged_Str(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 457, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
    cpy_r_r32 = CPyStatics[7141]; /* 'static CPyVTableItem ' */
    cpy_r_r33 = CPyStatics[207]; /* '[' */
    cpy_r_r34 = CPyStatics[7142]; /* '];' */
    cpy_r_r35 = CPyStr_Build(5, cpy_r_r32, cpy_r_vtable_name, cpy_r_r33, cpy_r_r31, cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 457, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_emit___Emitter___emit_line(cpy_r_r10, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 456, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r38 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 462, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r38);
CPyL25: ;
    cpy_r_r39 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r38)->_trait_vtables;
    if (unlikely(cpy_r_r39 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'trait_vtables' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r39);
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
CPyL26: ;
    cpy_r_r40 = 0;
    cpy_r_r41 = PyDict_Size(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = CPyDict_GetItemsIter(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals);
        goto CPyL112;
    }
CPyL27: ;
    cpy_r_r44 = CPyDict_NextItem(cpy_r_r43, cpy_r_r40);
    cpy_r_r45 = cpy_r_r44.f1;
    cpy_r_r40 = cpy_r_r45;
    cpy_r_r46 = cpy_r_r44.f0;
    if (!cpy_r_r46) goto CPyL113;
    cpy_r_r47 = cpy_r_r44.f2;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = cpy_r_r44.f3;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r44.f2);
    CPy_DECREF(cpy_r_r44.f3);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_class_ir___ClassIR))
        cpy_r_r49 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r47);
        goto CPyL114;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r50 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals, "list", cpy_r_r48);
        goto CPyL115;
    }
    cpy_r_trait = cpy_r_r49;
    cpy_r_vtable = cpy_r_r50;
    cpy_r_r51 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 464, CPyStatic_emitclass___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r51);
CPyL31: ;
    cpy_r_r52 = CPyStatics[7141]; /* 'static CPyVTableItem ' */
    cpy_r_r53 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "trait_vtable_name", 465, CPyStatic_emitclass___globals);
        goto CPyL117;
    }
    CPy_INCREF(cpy_r_r53);
CPyL32: ;
    PyObject *cpy_r_r54[1] = {cpy_r_trait};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 465, CPyStatic_emitclass___globals);
        goto CPyL117;
    }
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 465, CPyStatic_emitclass___globals, "str", cpy_r_r56);
        goto CPyL117;
    }
    cpy_r_r58 = CPyStatics[207]; /* '[' */
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_vtable)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    CPy_DECREF(cpy_r_vtable);
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r61 > (Py_ssize_t)2;
    if (!cpy_r_r62) goto CPyL36;
    cpy_r_r63 = cpy_r_r61;
    goto CPyL37;
CPyL36: ;
    cpy_r_r63 = 2;
CPyL37: ;
    cpy_r_r64 = CPyTagged_Str(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 465, CPyStatic_emitclass___globals);
        goto CPyL118;
    }
    cpy_r_r65 = CPyStatics[7142]; /* '];' */
    cpy_r_r66 = CPyStr_Build(5, cpy_r_r52, cpy_r_r57, cpy_r_r58, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 465, CPyStatic_emitclass___globals);
        goto CPyL119;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyDef_emit___Emitter___emit_line(cpy_r_r51, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 464, CPyStatic_emitclass___globals);
        goto CPyL120;
    }
    cpy_r_r69 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 468, CPyStatic_emitclass___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r69);
CPyL41: ;
    cpy_r_r70 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "trait_offset_table_name", 470, CPyStatic_emitclass___globals);
        goto CPyL121;
    }
    CPy_INCREF(cpy_r_r70);
CPyL42: ;
    PyObject *cpy_r_r71[1] = {cpy_r_trait};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 470, CPyStatic_emitclass___globals);
        goto CPyL121;
    }
    if (likely(PyUnicode_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 470, CPyStatic_emitclass___globals, "str", cpy_r_r73);
        goto CPyL121;
    }
    cpy_r_r75 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_trait)->_attributes;
    if (unlikely(cpy_r_r75 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r75);
    }
    CPy_DECREF(cpy_r_trait);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 470, CPyStatic_emitclass___globals);
        goto CPyL122;
    }
CPyL45: ;
    cpy_r_r76 = PyDict_Size(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 << 1;
    cpy_r_r78 = (Py_ssize_t)cpy_r_r77 > (Py_ssize_t)2;
    if (!cpy_r_r78) goto CPyL47;
    cpy_r_r79 = cpy_r_r77;
    goto CPyL48;
CPyL47: ;
    cpy_r_r79 = 2;
CPyL48: ;
    cpy_r_r80 = CPyTagged_Str(cpy_r_r79);
    CPyTagged_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 469, CPyStatic_emitclass___globals);
        goto CPyL122;
    }
    cpy_r_r81 = CPyStatics[7143]; /* 'static size_t ' */
    cpy_r_r82 = CPyStatics[207]; /* '[' */
    cpy_r_r83 = CPyStatics[7142]; /* '];' */
    cpy_r_r84 = CPyStr_Build(5, cpy_r_r81, cpy_r_r74, cpy_r_r82, cpy_r_r80, cpy_r_r83);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 469, CPyStatic_emitclass___globals);
        goto CPyL123;
    }
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_emit___Emitter___emit_line(cpy_r_r69, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 468, CPyStatic_emitclass___globals);
        goto CPyL124;
    }
    cpy_r_r87 = CPyDict_CheckSize(cpy_r_r39, cpy_r_r42);
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals);
        goto CPyL124;
    } else
        goto CPyL27;
CPyL52: ;
    cpy_r_r88 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 462, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r89 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 475, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r89);
CPyL54: ;
    cpy_r_r90 = CPyStatics[7144]; /* 'static bool' */
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPyDef_emit___Emitter___emit_line(cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 475, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r93 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 476, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r93);
CPyL56: ;
    cpy_r_r94 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r95 = CPyStatics[7145]; /* '(void)' */
    cpy_r_r96 = CPyStr_Build(3, cpy_r_r94, cpy_r_vtable_setup_name, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 476, CPyStatic_emitclass___globals);
        goto CPyL125;
    }
    cpy_r_r97 = NULL;
    cpy_r_r98 = CPyDef_emit___Emitter___emit_line(cpy_r_r93, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 476, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r99 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 477, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r99);
CPyL59: ;
    cpy_r_r100 = CPyStatics[1405]; /* '{' */
    cpy_r_r101 = NULL;
    cpy_r_r102 = CPyDef_emit___Emitter___emit_line(cpy_r_r99, cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 477, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_r103 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 479, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r103);
CPyL61: ;
    cpy_r_r104 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r103)->_allow_interpreted_subclasses;
    CPy_DECREF(cpy_r_r103);
    if (!cpy_r_r104) goto CPyL67;
CPyL62: ;
    cpy_r_r105 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_shadow;
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "shadow", 479, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
CPyL63: ;
    if (cpy_r_r105) goto CPyL67;
CPyL64: ;
    cpy_r_r106 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 480, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r106);
CPyL65: ;
    cpy_r_r107 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r108 = CPyStatics[7146]; /* '_shadow();' */
    cpy_r_r109 = CPyStr_Build(3, cpy_r_r107, cpy_r_vtable_setup_name, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 480, CPyStatic_emitclass___globals);
        goto CPyL126;
    }
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_emit___Emitter___emit_line(cpy_r_r106, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 480, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
CPyL67: ;
    cpy_r_r112 = PyList_New(0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 482, CPyStatic_emitclass___globals);
        goto CPyL106;
    }
    cpy_r_subtables = cpy_r_r112;
    cpy_r_r113 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 483, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r113);
CPyL69: ;
    cpy_r_r114 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r113)->_trait_vtables;
    if (unlikely(cpy_r_r114 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'trait_vtables' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r114);
    }
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
CPyL70: ;
    cpy_r_r115 = 0;
    cpy_r_r116 = PyDict_Size(cpy_r_r114);
    cpy_r_r117 = cpy_r_r116 << 1;
    cpy_r_r118 = CPyDict_GetItemsIter(cpy_r_r114);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals);
        goto CPyL128;
    }
CPyL71: ;
    cpy_r_r119 = CPyDict_NextItem(cpy_r_r118, cpy_r_r115);
    cpy_r_r120 = cpy_r_r119.f1;
    cpy_r_r115 = cpy_r_r120;
    cpy_r_r121 = cpy_r_r119.f0;
    if (!cpy_r_r121) goto CPyL129;
    cpy_r_r122 = cpy_r_r119.f2;
    CPy_INCREF(cpy_r_r122);
    cpy_r_r123 = cpy_r_r119.f3;
    CPy_INCREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r119.f2);
    CPy_DECREF(cpy_r_r119.f3);
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_class_ir___ClassIR))
        cpy_r_r124 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r122);
        goto CPyL130;
    }
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r125 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals, "list", cpy_r_r123);
        goto CPyL131;
    }
    cpy_r_trait = cpy_r_r124;
    cpy_r_vtable = cpy_r_r125;
    cpy_r_r126 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_vtable_name;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "trait_vtable_name", 484, CPyStatic_emitclass___globals);
        goto CPyL132;
    }
    CPy_INCREF(cpy_r_r126);
CPyL75: ;
    PyObject *cpy_r_r127[1] = {cpy_r_trait};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = _PyObject_Vectorcall(cpy_r_r126, cpy_r_r128, 1, 0);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 484, CPyStatic_emitclass___globals);
        goto CPyL132;
    }
    if (likely(PyUnicode_Check(cpy_r_r129)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 484, CPyStatic_emitclass___globals, "str", cpy_r_r129);
        goto CPyL132;
    }
    cpy_r_name = cpy_r_r130;
    cpy_r_r131 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_trait_offset_table_name;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "trait_offset_table_name", 485, CPyStatic_emitclass___globals);
        goto CPyL133;
    }
    CPy_INCREF(cpy_r_r131);
CPyL78: ;
    PyObject *cpy_r_r132[1] = {cpy_r_trait};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = _PyObject_Vectorcall(cpy_r_r131, cpy_r_r133, 1, 0);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 485, CPyStatic_emitclass___globals);
        goto CPyL133;
    }
    if (likely(PyUnicode_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 485, CPyStatic_emitclass___globals, "str", cpy_r_r134);
        goto CPyL133;
    }
    cpy_r_offset_name = cpy_r_r135;
    cpy_r_r136 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 486, CPyStatic_emitclass___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r136);
CPyL81: ;
    cpy_r_r137 = PyList_New(0);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 486, CPyStatic_emitclass___globals);
        goto CPyL135;
    }
    cpy_r_r138 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_shadow;
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "shadow", 486, CPyStatic_emitclass___globals);
        goto CPyL136;
    }
CPyL83: ;
    cpy_r_r139 = CPyDef_emitclass___generate_vtable(cpy_r_vtable, cpy_r_name, cpy_r_r136, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_vtable);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r139 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 486, CPyStatic_emitclass___globals);
        goto CPyL137;
    }
    cpy_r_r140 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 487, CPyStatic_emitclass___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r140);
CPyL85: ;
    cpy_r_r141 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 487, CPyStatic_emitclass___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r141);
CPyL86: ;
    cpy_r_r142 = CPyDef_emitclass___generate_offset_table(cpy_r_offset_name, cpy_r_r140, cpy_r_trait, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 487, CPyStatic_emitclass___globals);
        goto CPyL137;
    }
    cpy_r_r143.f0 = cpy_r_trait;
    cpy_r_r143.f1 = cpy_r_name;
    cpy_r_r143.f2 = cpy_r_offset_name;
    CPy_INCREF(cpy_r_r143.f0);
    CPy_INCREF(cpy_r_r143.f1);
    CPy_INCREF(cpy_r_r143.f2);
    CPy_DECREF(cpy_r_trait);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_offset_name);
    cpy_r_r144 = PyTuple_New(3);
    if (unlikely(cpy_r_r144 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9288 = cpy_r_r143.f0;
    PyTuple_SET_ITEM(cpy_r_r144, 0, __tmp9288);
    PyObject *__tmp9289 = cpy_r_r143.f1;
    PyTuple_SET_ITEM(cpy_r_r144, 1, __tmp9289);
    PyObject *__tmp9290 = cpy_r_r143.f2;
    PyTuple_SET_ITEM(cpy_r_r144, 2, __tmp9290);
    cpy_r_r145 = PyList_Append(cpy_r_subtables, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 488, CPyStatic_emitclass___globals);
        goto CPyL139;
    }
    cpy_r_r147 = CPyDict_CheckSize(cpy_r_r114, cpy_r_r117);
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals);
        goto CPyL139;
    } else
        goto CPyL71;
CPyL89: ;
    cpy_r_r148 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 483, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    cpy_r_r149 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_base;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "base", 490, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r149);
CPyL91: ;
    cpy_r_r150 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r149)->_vtable_entries;
    if (unlikely(cpy_r_r150 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'vtable_entries' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r150);
    }
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 490, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
CPyL92: ;
    cpy_r_r151 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 490, CPyStatic_emitclass___globals);
        goto CPyL140;
    }
    CPy_INCREF(cpy_r_r151);
CPyL93: ;
    cpy_r_r152 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_shadow;
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "shadow", 490, CPyStatic_emitclass___globals);
        goto CPyL141;
    }
CPyL94: ;
    cpy_r_r153 = CPyDef_emitclass___generate_vtable(cpy_r_r150, cpy_r_vtable_name, cpy_r_r151, cpy_r_subtables, cpy_r_r152);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r153 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 490, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    cpy_r_r154 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_vtables", "generate_vtables_env", "emitter", 492, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r154);
CPyL96: ;
    cpy_r_r155 = CPyStatics[7147]; /* 'return 1;' */
    cpy_r_r156 = NULL;
    cpy_r_r157 = CPyDef_emit___Emitter___emit_line(cpy_r_r154, cpy_r_r155, cpy_r_r156);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 492, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    cpy_r_r158 = ((mypyc___codegen___emitclass___generate_vtables_envObject *)cpy_r_r0)->_emitter;
    if (unlikely(cpy_r_r158 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'emitter' of 'generate_vtables_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r158);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 493, CPyStatic_emitclass___globals);
        goto CPyL142;
    }
CPyL98: ;
    cpy_r_r159 = CPyStatics[1406]; /* '}' */
    cpy_r_r160 = NULL;
    cpy_r_r161 = CPyDef_emit___Emitter___emit_line(cpy_r_r158, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r161 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 493, CPyStatic_emitclass___globals);
        goto CPyL142;
    }
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_subtables)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = cpy_r_r164 != 0;
    if (cpy_r_r165) {
        goto CPyL101;
    } else
        goto CPyL143;
CPyL100: ;
    CPy_INCREF(cpy_r_vtable_name);
    cpy_r_r166 = cpy_r_vtable_name;
    goto CPyL104;
CPyL101: ;
    cpy_r_r167 = CPyStatics[7148]; /* ' + ' */
    cpy_r_r168 = (CPyPtr)&((PyVarObject *)cpy_r_subtables)->ob_size;
    cpy_r_r169 = *(int64_t *)cpy_r_r168;
    CPy_DECREF(cpy_r_subtables);
    cpy_r_r170 = cpy_r_r169 << 1;
    cpy_r_r171 = CPyTagged_Multiply(cpy_r_r170, 6);
    cpy_r_r172 = CPyTagged_Str(cpy_r_r171);
    CPyTagged_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 495, CPyStatic_emitclass___globals);
        goto CPyL105;
    }
    cpy_r_r173 = CPyStr_Build(3, cpy_r_vtable_name, cpy_r_r167, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 495, CPyStatic_emitclass___globals);
        goto CPyL105;
    }
    cpy_r_r166 = cpy_r_r173;
CPyL104: ;
    return cpy_r_r166;
CPyL105: ;
    cpy_r_r174 = NULL;
    return cpy_r_r174;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL105;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL105;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL105;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL105;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL105;
CPyL111: ;
    CPyTagged_DECREF(cpy_r_r21);
    goto CPyL20;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    goto CPyL105;
CPyL113: ;
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44.f2);
    CPy_DECREF(cpy_r_r44.f3);
    goto CPyL52;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r48);
    goto CPyL105;
CPyL115: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r49);
    goto CPyL105;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    goto CPyL105;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_r51);
    goto CPyL105;
CPyL118: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r57);
    goto CPyL105;
CPyL119: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_r51);
    goto CPyL105;
CPyL120: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    goto CPyL105;
CPyL121: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_r69);
    goto CPyL105;
CPyL122: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r74);
    goto CPyL105;
CPyL123: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r69);
    goto CPyL105;
CPyL124: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r43);
    goto CPyL105;
CPyL125: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r93);
    goto CPyL105;
CPyL126: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r106);
    goto CPyL105;
CPyL127: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    goto CPyL105;
CPyL128: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    goto CPyL105;
CPyL129: ;
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r119.f2);
    CPy_DECREF(cpy_r_r119.f3);
    goto CPyL89;
CPyL130: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r123);
    goto CPyL105;
CPyL131: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r124);
    goto CPyL105;
CPyL132: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    goto CPyL105;
CPyL133: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    goto CPyL105;
CPyL134: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_offset_name);
    goto CPyL105;
CPyL135: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_offset_name);
    CPy_DecRef(cpy_r_r136);
    goto CPyL105;
CPyL136: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_vtable);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_offset_name);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r137);
    goto CPyL105;
CPyL137: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_offset_name);
    goto CPyL105;
CPyL138: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_offset_name);
    CPy_DecRef(cpy_r_r140);
    goto CPyL105;
CPyL139: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r118);
    goto CPyL105;
CPyL140: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r150);
    goto CPyL105;
CPyL141: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subtables);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r151);
    goto CPyL105;
CPyL142: ;
    CPy_DecRef(cpy_r_subtables);
    goto CPyL105;
CPyL143: ;
    CPy_DECREF(cpy_r_subtables);
    goto CPyL100;
}

PyObject *CPyPy_emitclass___generate_vtables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"base", "vtable_setup_name", "vtable_name", "emitter", "shadow", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_vtables", kwlist, 0};
    PyObject *obj_base;
    PyObject *obj_vtable_setup_name;
    PyObject *obj_vtable_name;
    PyObject *obj_emitter;
    PyObject *obj_shadow;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_base, &obj_vtable_setup_name, &obj_vtable_name, &obj_emitter, &obj_shadow)) {
        return NULL;
    }
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_class_ir___ClassIR))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_base); 
        goto fail;
    }
    PyObject *arg_vtable_setup_name;
    if (likely(PyUnicode_Check(obj_vtable_setup_name)))
        arg_vtable_setup_name = obj_vtable_setup_name;
    else {
        CPy_TypeError("str", obj_vtable_setup_name); 
        goto fail;
    }
    PyObject *arg_vtable_name;
    if (likely(PyUnicode_Check(obj_vtable_name)))
        arg_vtable_name = obj_vtable_name;
    else {
        CPy_TypeError("str", obj_vtable_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char arg_shadow;
    if (unlikely(!PyBool_Check(obj_shadow))) {
        CPy_TypeError("bool", obj_shadow); goto fail;
    } else
        arg_shadow = obj_shadow == Py_True;
    PyObject *retval = CPyDef_emitclass___generate_vtables(arg_base, arg_vtable_setup_name, arg_vtable_name, arg_emitter, arg_shadow);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtables", 412, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_offset_table(PyObject *cpy_r_trait_offset_table_name, PyObject *cpy_r_emitter, PyObject *cpy_r_trait, PyObject *cpy_r_cl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3CIO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = CPyStatics[7149]; /* 'size_t ' */
    cpy_r_r1 = CPyStatics[7150]; /* '_scratch[] = {' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_trait_offset_table_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 502, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 502, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_trait)->_attributes;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_offset_table", "ClassIR", "attributes", 503, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetKeysIter(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 503, CPyStatic_emitclass___globals);
        goto CPyL21;
    }
CPyL4: ;
    cpy_r_r10 = CPyDict_NextKey(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL22;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10.f2);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 503, CPyStatic_emitclass___globals, "str", cpy_r_r13);
        goto CPyL23;
    }
    cpy_r_attr = cpy_r_r14;
    cpy_r_r15 = CPyStatics[7120]; /* 'offsetof(' */
    cpy_r_r16 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 504, CPyStatic_emitclass___globals);
        goto CPyL24;
    }
    cpy_r_r18 = CPyStatics[71]; /* ', ' */
    cpy_r_r19 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 504, CPyStatic_emitclass___globals);
        goto CPyL25;
    }
    cpy_r_r20 = CPyStatics[7151]; /* '),' */
    cpy_r_r21 = CPyStr_Build(5, cpy_r_r15, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 504, CPyStatic_emitclass___globals);
        goto CPyL23;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 504, CPyStatic_emitclass___globals);
        goto CPyL23;
    }
    cpy_r_r24 = CPyDict_CheckSize(cpy_r_r5, cpy_r_r8);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 503, CPyStatic_emitclass___globals);
        goto CPyL23;
    } else
        goto CPyL4;
CPyL11: ;
    cpy_r_r25 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 503, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    cpy_r_r26 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_trait)->_attributes;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_offset_table", "ClassIR", "attributes", 505, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r26);
CPyL13: ;
    cpy_r_r27 = PyDict_Size(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (cpy_r_r29) goto CPyL15;
    cpy_r_r30 = CPyStatics[3720]; /* '0' */
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 507, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
CPyL15: ;
    cpy_r_r33 = CPyStatics[7107]; /* '};' */
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 508, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    cpy_r_r36 = CPyStatics[7152]; /* 'memcpy({name}, {name}_scratch, sizeof({name}));' */
    cpy_r_r37 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r38[2] = {cpy_r_r36, cpy_r_trait_offset_table_name};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = CPyStatics[9646]; /* ('name',) */
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775809ULL, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 510, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 510, CPyStatic_emitclass___globals, "str", cpy_r_r41);
        goto CPyL20;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 509, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL21: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    goto CPyL11;
CPyL23: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_attr);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r17);
    goto CPyL20;
}

PyObject *CPyPy_emitclass___generate_offset_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"trait_offset_table_name", "emitter", "trait", "cl", 0};
    static CPyArg_Parser parser = {"OOOO:generate_offset_table", kwlist, 0};
    PyObject *obj_trait_offset_table_name;
    PyObject *obj_emitter;
    PyObject *obj_trait;
    PyObject *obj_cl;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_trait_offset_table_name, &obj_emitter, &obj_trait, &obj_cl)) {
        return NULL;
    }
    PyObject *arg_trait_offset_table_name;
    if (likely(PyUnicode_Check(obj_trait_offset_table_name)))
        arg_trait_offset_table_name = obj_trait_offset_table_name;
    else {
        CPy_TypeError("str", obj_trait_offset_table_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_trait;
    if (likely(Py_TYPE(obj_trait) == CPyType_class_ir___ClassIR))
        arg_trait = obj_trait;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_trait); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_offset_table(arg_trait_offset_table_name, arg_emitter, arg_trait, arg_cl);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_offset_table", 498, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_vtable(PyObject *cpy_r_entries, PyObject *cpy_r_vtable_name, PyObject *cpy_r_emitter, PyObject *cpy_r_subtables, char cpy_r_shadow) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_trait;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_table;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_offset_table;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_entry;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_method;
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
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyPtr cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    cpy_r_r0 = CPyStatics[7153]; /* 'CPyVTableItem ' */
    cpy_r_r1 = CPyStatics[7150]; /* '_scratch[] = {' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_vtable_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 521, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 521, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_subtables)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyStatics[7154];
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 523, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r12 = 0;
CPyL5: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_subtables)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_subtables, cpy_r_r12);
    PyObject *__tmp9291;
    if (unlikely(!(PyTuple_Check(cpy_r_r17) && PyTuple_GET_SIZE(cpy_r_r17) == 3))) {
        __tmp9291 = NULL;
        goto __LL9292;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r17, 0)) == CPyType_class_ir___ClassIR))
        __tmp9291 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp9291 = NULL;
    }
    if (__tmp9291 == NULL) goto __LL9292;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 1))))
        __tmp9291 = PyTuple_GET_ITEM(cpy_r_r17, 1);
    else {
        __tmp9291 = NULL;
    }
    if (__tmp9291 == NULL) goto __LL9292;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 2))))
        __tmp9291 = PyTuple_GET_ITEM(cpy_r_r17, 2);
    else {
        __tmp9291 = NULL;
    }
    if (__tmp9291 == NULL) goto __LL9292;
    __tmp9291 = cpy_r_r17;
__LL9292: ;
    if (unlikely(__tmp9291 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.class_ir.ClassIR, str, str]", cpy_r_r17); cpy_r_r18 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp9293 = PyTuple_GET_ITEM(cpy_r_r17, 0);
        CPy_INCREF(__tmp9293);
        PyObject *__tmp9294;
        if (likely(Py_TYPE(__tmp9293) == CPyType_class_ir___ClassIR))
            __tmp9294 = __tmp9293;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9293); 
            __tmp9294 = NULL;
        }
        cpy_r_r18.f0 = __tmp9294;
        PyObject *__tmp9295 = PyTuple_GET_ITEM(cpy_r_r17, 1);
        CPy_INCREF(__tmp9295);
        PyObject *__tmp9296;
        if (likely(PyUnicode_Check(__tmp9295)))
            __tmp9296 = __tmp9295;
        else {
            CPy_TypeError("str", __tmp9295); 
            __tmp9296 = NULL;
        }
        cpy_r_r18.f1 = __tmp9296;
        PyObject *__tmp9297 = PyTuple_GET_ITEM(cpy_r_r17, 2);
        CPy_INCREF(__tmp9297);
        PyObject *__tmp9298;
        if (likely(PyUnicode_Check(__tmp9297)))
            __tmp9298 = __tmp9297;
        else {
            CPy_TypeError("str", __tmp9297); 
            __tmp9298 = NULL;
        }
        cpy_r_r18.f2 = __tmp9298;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 524, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    cpy_r_trait = cpy_r_r19;
    cpy_r_r20 = cpy_r_r18.f1;
    CPy_INCREF(cpy_r_r20);
    cpy_r_table = cpy_r_r20;
    cpy_r_r21 = cpy_r_r18.f2;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_r18.f2);
    cpy_r_offset_table = cpy_r_r21;
    cpy_r_r22 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_trait);
    CPy_DECREF(cpy_r_trait);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 527, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    cpy_r_r23 = CPyStatics[7155]; /* '(CPyVTableItem)' */
    cpy_r_r24 = CPyStatics[7156]; /* ', (CPyVTableItem)' */
    cpy_r_r25 = CPyStatics[7156]; /* ', (CPyVTableItem)' */
    cpy_r_r26 = CPyStatics[242]; /* ',' */
    cpy_r_r27 = CPyStr_Build(7, cpy_r_r23, cpy_r_r22, cpy_r_r24, cpy_r_table, cpy_r_r25, cpy_r_offset_table, cpy_r_r26);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_table);
    CPy_DECREF(cpy_r_offset_table);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 526, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 525, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r30 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r30;
    goto CPyL5;
CPyL11: ;
    cpy_r_r31 = CPyStatics[7157];
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 530, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
CPyL12: ;
    cpy_r_r34 = 0;
CPyL13: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL32;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_entries, cpy_r_r34);
    if (likely(PyTuple_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 532, CPyStatic_emitclass___globals, "tuple", cpy_r_r39);
        goto CPyL39;
    }
    cpy_r_entry = cpy_r_r40;
    if (!cpy_r_shadow) goto CPyL22;
    cpy_r_r41 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    if (Py_TYPE(cpy_r_r41) == CPyType_func_ir___FuncIR)
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL9299;
    if (cpy_r_r41 == Py_None)
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL9299;
    CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r41);
    goto CPyL41;
__LL9299: ;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
    if (!cpy_r_r44) goto CPyL22;
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_func_ir___FuncIR))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r45);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r46;
    goto CPyL25;
CPyL22: ;
    cpy_r_r48 = CPySequenceTuple_GetItem(cpy_r_entry, 4);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_func_ir___FuncIR))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 533, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r48);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r49;
CPyL25: ;
    cpy_r_method = cpy_r_r47;
    cpy_r_r50 = CPySequenceTuple_GetItem(cpy_r_entry, 4);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 536, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_func_ir___FuncIR))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 536, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r50);
        goto CPyL42;
    }
    cpy_r_r52 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r51)->_decl;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_emitter, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 536, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r54 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r55 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_func_ir___FuncIR___cname(cpy_r_method, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_method);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 538, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r57 = CPyStatics[7155]; /* '(CPyVTableItem)' */
    cpy_r_r58 = CPyStatics[242]; /* ',' */
    cpy_r_r59 = CPyStr_Build(5, cpy_r_r57, cpy_r_r53, cpy_r_r54, cpy_r_r56, cpy_r_r58);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 535, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 534, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r62 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r62;
    goto CPyL13;
CPyL32: ;
    cpy_r_r63 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r64 = *(int64_t *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = cpy_r_r65 != 0;
    if (cpy_r_r66) goto CPyL34;
    cpy_r_r67 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 544, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
CPyL34: ;
    cpy_r_r70 = CPyStatics[7107]; /* '};' */
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 545, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r73 = CPyStatics[7152]; /* 'memcpy({name}, {name}_scratch, sizeof({name}));' */
    cpy_r_r74 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r75[2] = {cpy_r_r73, cpy_r_vtable_name};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = CPyStatics[9646]; /* ('name',) */
    cpy_r_r78 = PyObject_VectorcallMethod(cpy_r_r74, cpy_r_r76, 9223372036854775809ULL, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 546, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    if (likely(PyUnicode_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 546, CPyStatic_emitclass___globals, "str", cpy_r_r78);
        goto CPyL39;
    }
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 546, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    return 1;
CPyL39: ;
    cpy_r_r82 = 2;
    return cpy_r_r82;
CPyL40: ;
    CPy_DecRef(cpy_r_table);
    CPy_DecRef(cpy_r_offset_table);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_entry);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL39;
}

PyObject *CPyPy_emitclass___generate_vtable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entries", "vtable_name", "emitter", "subtables", "shadow", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_vtable", kwlist, 0};
    PyObject *obj_entries;
    PyObject *obj_vtable_name;
    PyObject *obj_emitter;
    PyObject *obj_subtables;
    PyObject *obj_shadow;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_entries, &obj_vtable_name, &obj_emitter, &obj_subtables, &obj_shadow)) {
        return NULL;
    }
    PyObject *arg_entries;
    if (likely(PyList_Check(obj_entries)))
        arg_entries = obj_entries;
    else {
        CPy_TypeError("list", obj_entries); 
        goto fail;
    }
    PyObject *arg_vtable_name;
    if (likely(PyUnicode_Check(obj_vtable_name)))
        arg_vtable_name = obj_vtable_name;
    else {
        CPy_TypeError("str", obj_vtable_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_subtables;
    if (likely(PyList_Check(obj_subtables)))
        arg_subtables = obj_subtables;
    else {
        CPy_TypeError("list", obj_subtables); 
        goto fail;
    }
    char arg_shadow;
    if (unlikely(!PyBool_Check(obj_shadow))) {
        CPy_TypeError("bool", obj_shadow); goto fail;
    } else
        arg_shadow = obj_shadow == Py_True;
    char retval = CPyDef_emitclass___generate_vtable(arg_entries, arg_vtable_name, arg_emitter, arg_subtables, arg_shadow);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_vtable", 514, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_setup_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_func_name, PyObject *cpy_r_defaults_fn, PyObject *cpy_r_vtable_name, PyObject *cpy_r_shadow_vtable_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_field;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_r101;
    int64_t cpy_r_r102;
    char cpy_r_r103;
    int64_t cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    CPyPtr cpy_r_r111;
    int64_t cpy_r_r112;
    CPyTagged cpy_r_r113;
    int64_t cpy_r_r114;
    char cpy_r_r115;
    int64_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r126;
    CPyTagged cpy_r_r127;
    int64_t cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    tuple_T4CIOO cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    CPyTagged cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
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
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    cpy_r_r0 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 558, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r3 = CPyStatics[7158]; /* '(PyTypeObject *type)' */
    cpy_r_r4 = CPyStr_Build(2, cpy_r_func_name, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 559, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 559, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r7 = CPyStatics[1405]; /* '{' */
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 560, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r10 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 561, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r12 = CPyStatics[7159]; /* ' *self;' */
    cpy_r_r13 = CPyStr_Build(2, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 561, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 561, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r16 = CPyStatics[7160]; /* 'self = (' */
    cpy_r_r17 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 562, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r19 = CPyStatics[7161]; /* ' *)type->tp_alloc(type, 0);' */
    cpy_r_r20 = CPyStr_Build(3, cpy_r_r16, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 562, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 562, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r23 = CPyStatics[7162]; /* 'if (self == NULL)' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 563, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r26 = CPyStatics[7163]; /* '    return NULL;' */
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 564, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_shadow_vtable_name != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL25;
    CPy_INCREF(cpy_r_shadow_vtable_name);
    if (likely(cpy_r_shadow_vtable_name != Py_None))
        cpy_r_r31 = cpy_r_shadow_vtable_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 554, CPyStatic_emitclass___globals, "str", cpy_r_shadow_vtable_name);
        goto CPyL82;
    }
    cpy_r_r32 = CPyStr_IsTrue(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (!cpy_r_r32) goto CPyL25;
    cpy_r_r33 = CPyStatics[7164]; /* 'if (type != ' */
    cpy_r_r34 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 567, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r35 = CPyStatics[6900]; /* ') {' */
    cpy_r_r36 = CPyStr_Build(3, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 567, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 567, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r39 = CPyStatics[7165]; /* 'self->vtable = ' */
    CPy_INCREF(cpy_r_shadow_vtable_name);
    if (likely(cpy_r_shadow_vtable_name != Py_None))
        cpy_r_r40 = cpy_r_shadow_vtable_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 568, CPyStatic_emitclass___globals, "str", cpy_r_shadow_vtable_name);
        goto CPyL82;
    }
    cpy_r_r41 = CPyStatics[6886]; /* ';' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 568, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 568, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r45 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 569, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r48 = CPyStatics[7165]; /* 'self->vtable = ' */
    cpy_r_r49 = CPyStatics[6886]; /* ';' */
    cpy_r_r50 = CPyStr_Build(3, cpy_r_r48, cpy_r_vtable_name, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 570, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 570, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r53 = CPyStatics[1406]; /* '}' */
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 571, CPyStatic_emitclass___globals);
        goto CPyL82;
    } else
        goto CPyL27;
CPyL25: ;
    cpy_r_r56 = CPyStatics[7165]; /* 'self->vtable = ' */
    cpy_r_r57 = CPyStatics[6886]; /* ';' */
    cpy_r_r58 = CPyStr_Build(3, cpy_r_r56, cpy_r_vtable_name, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 573, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 573, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL27: ;
    cpy_r_r61 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_setup_for_class", "ClassIR", "bitmap_attrs", 574, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL28: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r61)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (PyObject *)&PyRange_Type;
    cpy_r_r66 = CPyStatics[9015]; /* 0 */
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r64);
    cpy_r_r68 = CPyStatics[9043]; /* 32 */
    PyObject *cpy_r_r69[3] = {cpy_r_r66, cpy_r_r67, cpy_r_r68};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r70, 3, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 574, CPyStatic_emitclass___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r67);
    if (likely(PyRange_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 574, CPyStatic_emitclass___globals, "range", cpy_r_r71);
        goto CPyL82;
    }
    cpy_r_r73 = PyObject_GetIter(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 574, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL31: ;
    cpy_r_r74 = PyIter_Next(cpy_r_r73);
    if (cpy_r_r74 == NULL) goto CPyL84;
    if (likely(PyLong_Check(cpy_r_r74)))
        cpy_r_r75 = CPyTagged_FromObject(cpy_r_r74);
    else {
        CPy_TypeError("int", cpy_r_r74); cpy_r_r75 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 574, CPyStatic_emitclass___globals);
        goto CPyL85;
    }
    cpy_r_i = cpy_r_r75;
    cpy_r_r76 = CPyDef_emit___Emitter___bitmap_field(cpy_r_emitter, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 575, CPyStatic_emitclass___globals);
        goto CPyL85;
    }
    cpy_r_field = cpy_r_r76;
    cpy_r_r77 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r78 = CPyStatics[7167]; /* ' = 0;' */
    cpy_r_r79 = CPyStr_Build(3, cpy_r_r77, cpy_r_field, cpy_r_r78);
    CPy_DECREF(cpy_r_field);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 576, CPyStatic_emitclass___globals);
        goto CPyL85;
    }
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 576, CPyStatic_emitclass___globals);
        goto CPyL85;
    } else
        goto CPyL31;
CPyL36: ;
    cpy_r_r82 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 574, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r83 = CPyStatics[706]; /* '__call__' */
    cpy_r_r84 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 578, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    if (!cpy_r_r84) goto CPyL45;
    cpy_r_r85 = CPyDef_emit___Emitter___use_vectorcall(cpy_r_emitter);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 578, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    if (!cpy_r_r85) goto CPyL45;
    cpy_r_r86 = CPyStatics[706]; /* '__call__' */
    cpy_r_r87 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_cl, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 579, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r88 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyDef_func_ir___FuncDecl___cname(cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 579, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_name = cpy_r_r89;
    cpy_r_r90 = CPyStatics[7168]; /* 'self->vectorcall = ' */
    cpy_r_r91 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r92 = CPyStatics[6886]; /* ';' */
    cpy_r_r93 = CPyStr_Build(4, cpy_r_r90, cpy_r_r91, cpy_r_name, cpy_r_r92);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 580, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r94 = NULL;
    cpy_r_r95 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 580, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL45: ;
    cpy_r_r96 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_setup_for_class", "ClassIR", "base_mro", 582, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r96);
CPyL46: ;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = CPyTagged_Subtract(cpy_r_r99, 2);
    cpy_r_r101 = cpy_r_r100;
CPyL47: ;
    cpy_r_r102 = cpy_r_r101 & 1;
    cpy_r_r103 = cpy_r_r102 == 0;
    cpy_r_r104 = 0 & 1;
    cpy_r_r105 = cpy_r_r104 == 0;
    cpy_r_r106 = cpy_r_r103 & cpy_r_r105;
    if (!cpy_r_r106) goto CPyL49;
    cpy_r_r107 = (Py_ssize_t)cpy_r_r101 >= (Py_ssize_t)0;
    cpy_r_r108 = cpy_r_r107;
    goto CPyL50;
CPyL49: ;
    cpy_r_r109 = CPyTagged_IsLt_(cpy_r_r101, 0);
    cpy_r_r110 = cpy_r_r109 ^ 1;
    cpy_r_r108 = cpy_r_r110;
CPyL50: ;
    if (!cpy_r_r108) goto CPyL86;
    cpy_r_r111 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r112 = *(int64_t *)cpy_r_r111;
    cpy_r_r113 = cpy_r_r112 << 1;
    cpy_r_r114 = cpy_r_r101 & 1;
    cpy_r_r115 = cpy_r_r114 == 0;
    cpy_r_r116 = cpy_r_r113 & 1;
    cpy_r_r117 = cpy_r_r116 == 0;
    cpy_r_r118 = cpy_r_r115 & cpy_r_r117;
    if (!cpy_r_r118) goto CPyL53;
    cpy_r_r119 = (Py_ssize_t)cpy_r_r101 < (Py_ssize_t)cpy_r_r113;
    cpy_r_r120 = cpy_r_r119;
    goto CPyL54;
CPyL53: ;
    cpy_r_r121 = CPyTagged_IsLt_(cpy_r_r101, cpy_r_r113);
    cpy_r_r120 = cpy_r_r121;
CPyL54: ;
    if (!cpy_r_r120) goto CPyL86;
    CPyTagged_INCREF(cpy_r_r101);
    cpy_r_r122 = CPyTagged_StealAsObject(cpy_r_r101);
    if (likely(PyLong_Check(cpy_r_r122)))
        cpy_r_r123 = CPyTagged_FromObject(cpy_r_r122);
    else {
        CPy_TypeError("short_int", cpy_r_r122); cpy_r_r123 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 582, CPyStatic_emitclass___globals);
        goto CPyL87;
    }
    cpy_r_r124 = CPyList_GetItemUnsafe(cpy_r_r96, cpy_r_r123);
    if (likely(Py_TYPE(cpy_r_r124) == CPyType_class_ir___ClassIR))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 582, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r124);
        goto CPyL87;
    }
    cpy_r_base = cpy_r_r125;
    cpy_r_r126 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r126 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r126);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals);
        goto CPyL87;
    }
CPyL58: ;
    cpy_r_r127 = 0;
    cpy_r_r128 = PyDict_Size(cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 << 1;
    cpy_r_r130 = CPyDict_GetItemsIter(cpy_r_r126);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals);
        goto CPyL88;
    }
CPyL59: ;
    cpy_r_r131 = CPyDict_NextItem(cpy_r_r130, cpy_r_r127);
    cpy_r_r132 = cpy_r_r131.f1;
    cpy_r_r127 = cpy_r_r132;
    cpy_r_r133 = cpy_r_r131.f0;
    if (!cpy_r_r133) goto CPyL89;
    cpy_r_r134 = cpy_r_r131.f2;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = cpy_r_r131.f3;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r131.f2);
    CPy_DECREF(cpy_r_r131.f3);
    if (likely(PyUnicode_Check(cpy_r_r134)))
        cpy_r_r136 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals, "str", cpy_r_r134);
        goto CPyL90;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r135, CPyType_rtypes___RType)))
        cpy_r_r137 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RType", cpy_r_r135);
        goto CPyL91;
    }
    cpy_r_attr = cpy_r_r136;
    cpy_r_rtype = cpy_r_r137;
    cpy_r_r138 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_emitter, cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 584, CPyStatic_emitclass___globals);
        goto CPyL92;
    }
    cpy_r_value = cpy_r_r138;
    cpy_r_r139 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r140 = PyUnicode_Compare(cpy_r_value, cpy_r_r139);
    cpy_r_r141 = cpy_r_r140 == -1;
    if (!cpy_r_r141) goto CPyL66;
    cpy_r_r142 = PyErr_Occurred();
    cpy_r_r143 = cpy_r_r142 != NULL;
    if (!cpy_r_r143) goto CPyL66;
    cpy_r_r144 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 588, CPyStatic_emitclass___globals);
        goto CPyL93;
    }
CPyL66: ;
    cpy_r_r145 = cpy_r_r140 != 0;
    if (!cpy_r_r145) goto CPyL94;
    cpy_r_r146 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r147 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 589, CPyStatic_emitclass___globals);
        goto CPyL95;
    }
    cpy_r_r148 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r149 = CPyStatics[6886]; /* ';' */
    cpy_r_r150 = CPyStr_Build(5, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_value, cpy_r_r149);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 589, CPyStatic_emitclass___globals);
        goto CPyL96;
    }
    cpy_r_r151 = NULL;
    cpy_r_r152 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r150, cpy_r_r151);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 589, CPyStatic_emitclass___globals);
        goto CPyL96;
    }
CPyL70: ;
    cpy_r_r153 = CPyDict_CheckSize(cpy_r_r126, cpy_r_r129);
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals);
        goto CPyL96;
    } else
        goto CPyL59;
CPyL71: ;
    cpy_r_r154 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 583, CPyStatic_emitclass___globals);
        goto CPyL87;
    }
    cpy_r_r155 = cpy_r_r101 + -2;
    CPyTagged_DECREF(cpy_r_r101);
    cpy_r_r101 = cpy_r_r155;
    goto CPyL47;
CPyL73: ;
    cpy_r_r156 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r157 = cpy_r_defaults_fn != cpy_r_r156;
    if (!cpy_r_r157) goto CPyL79;
    cpy_r_r158 = CPyStatics[6880]; /* 'CPyDef_' */
    CPy_INCREF(cpy_r_defaults_fn);
    if (likely(cpy_r_defaults_fn != Py_None))
        cpy_r_r159 = cpy_r_defaults_fn;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 595, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_defaults_fn);
        goto CPyL82;
    }
    cpy_r_r160 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r160);
    cpy_r_r161 = CPyDef_func_ir___FuncIR___cname(cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 595, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r162 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r163 = CPyStatics[7169]; /* '((PyObject *)self) == 0) {' */
    cpy_r_r164 = CPyStr_Build(4, cpy_r_r162, cpy_r_r158, cpy_r_r161, cpy_r_r163);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 594, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r165 = CPyStatics[7170]; /* 'Py_DECREF(self);' */
    cpy_r_r166 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r167 = CPyStatics[1406]; /* '}' */
    cpy_r_r168 = PyTuple_Pack(4, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 593, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r169 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 593, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
CPyL79: ;
    cpy_r_r170 = CPyStatics[7172]; /* 'return (PyObject *)self;' */
    cpy_r_r171 = NULL;
    cpy_r_r172 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r170, cpy_r_r171);
    if (unlikely(cpy_r_r172 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 602, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    cpy_r_r173 = CPyStatics[1406]; /* '}' */
    cpy_r_r174 = NULL;
    cpy_r_r175 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 603, CPyStatic_emitclass___globals);
        goto CPyL82;
    }
    return 1;
CPyL82: ;
    cpy_r_r176 = 2;
    return cpy_r_r176;
CPyL83: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL82;
CPyL84: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL36;
CPyL85: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL82;
CPyL86: ;
    CPy_DECREF(cpy_r_r96);
    CPyTagged_DECREF(cpy_r_r101);
    goto CPyL73;
CPyL87: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    goto CPyL82;
CPyL88: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    goto CPyL82;
CPyL89: ;
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131.f2);
    CPy_DECREF(cpy_r_r131.f3);
    goto CPyL71;
CPyL90: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r135);
    goto CPyL82;
CPyL91: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r136);
    goto CPyL82;
CPyL92: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_attr);
    goto CPyL82;
CPyL93: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_value);
    goto CPyL82;
CPyL94: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_value);
    goto CPyL70;
CPyL95: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_value);
    goto CPyL82;
CPyL96: ;
    CPy_DecRef(cpy_r_r96);
    CPyTagged_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r130);
    goto CPyL82;
}

PyObject *CPyPy_emitclass___generate_setup_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "func_name", "defaults_fn", "vtable_name", "shadow_vtable_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOOO:generate_setup_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_func_name;
    PyObject *obj_defaults_fn;
    PyObject *obj_vtable_name;
    PyObject *obj_shadow_vtable_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_func_name, &obj_defaults_fn, &obj_vtable_name, &obj_shadow_vtable_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_defaults_fn;
    if (Py_TYPE(obj_defaults_fn) == CPyType_func_ir___FuncIR)
        arg_defaults_fn = obj_defaults_fn;
    else {
        arg_defaults_fn = NULL;
    }
    if (arg_defaults_fn != NULL) goto __LL9300;
    if (obj_defaults_fn == Py_None)
        arg_defaults_fn = obj_defaults_fn;
    else {
        arg_defaults_fn = NULL;
    }
    if (arg_defaults_fn != NULL) goto __LL9300;
    CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", obj_defaults_fn); 
    goto fail;
__LL9300: ;
    PyObject *arg_vtable_name;
    if (likely(PyUnicode_Check(obj_vtable_name)))
        arg_vtable_name = obj_vtable_name;
    else {
        CPy_TypeError("str", obj_vtable_name); 
        goto fail;
    }
    PyObject *arg_shadow_vtable_name;
    if (PyUnicode_Check(obj_shadow_vtable_name))
        arg_shadow_vtable_name = obj_shadow_vtable_name;
    else {
        arg_shadow_vtable_name = NULL;
    }
    if (arg_shadow_vtable_name != NULL) goto __LL9301;
    if (obj_shadow_vtable_name == Py_None)
        arg_shadow_vtable_name = obj_shadow_vtable_name;
    else {
        arg_shadow_vtable_name = NULL;
    }
    if (arg_shadow_vtable_name != NULL) goto __LL9301;
    CPy_TypeError("str or None", obj_shadow_vtable_name); 
    goto fail;
__LL9301: ;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_setup_for_class(arg_cl, arg_func_name, arg_defaults_fn, arg_vtable_name, arg_shadow_vtable_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setup_for_class", 549, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_constructor_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_init_fn, PyObject *cpy_r_setup_name, PyObject *cpy_r_vtable_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
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
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    cpy_r_r0 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r1 = CPyDef_emitfunc___native_function_header(cpy_r_fn, cpy_r_emitter);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 615, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r2 = CPyStatics[163]; /* '' */
    cpy_r_r3 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r4[3] = {cpy_r_r0, cpy_r_r1, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 615, CPyStatic_emitclass___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 615, CPyStatic_emitclass___globals, "str", cpy_r_r6);
        goto CPyL44;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 615, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r10 = CPyStatics[1405]; /* '{' */
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 616, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r13 = CPyStatics[7173]; /* 'PyObject *self = ' */
    cpy_r_r14 = CPyStatics[2381]; /* '(' */
    cpy_r_r15 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 617, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r16 = CPyStatics[6872]; /* ');' */
    cpy_r_r17 = CPyStr_Build(5, cpy_r_r13, cpy_r_setup_name, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 617, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 617, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r20 = CPyStatics[7162]; /* 'if (self == NULL)' */
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 618, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r23 = CPyStatics[7163]; /* '    return NULL;' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 619, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r26 = CPyStatics[71]; /* ', ' */
    cpy_r_r27 = CPyStatics[729]; /* 'self' */
    cpy_r_r28 = PyList_New(1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r30 = cpy_r_r27;
    cpy_r_r31 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_sig;
    cpy_r_r32 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r31)->_args;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = PyList_New(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r36 = 0;
CPyL13: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL47;
    cpy_r_r41 = CPySequenceTuple_GetItem(cpy_r_r32, cpy_r_r36);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_func_ir___RuntimeArg))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r41);
        goto CPyL48;
    }
    cpy_r_arg = cpy_r_r42;
    cpy_r_r43 = CPyStatics[6862]; /* 'cpy_r_' */
    cpy_r_r44 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r45 = PyUnicode_Concat(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r46 = CPyList_SetItemUnsafe(cpy_r_r35, cpy_r_r36, cpy_r_r45);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r47 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r47;
    goto CPyL13;
CPyL19: ;
    cpy_r_r48 = PyNumber_Add(cpy_r_r28, cpy_r_r35);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals, "list", cpy_r_r48);
        goto CPyL44;
    }
    cpy_r_r50 = PyUnicode_Join(cpy_r_r26, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 620, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_args = cpy_r_r50;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_init_fn != cpy_r_r51;
    if (!cpy_r_r52) goto CPyL33;
    if (likely(cpy_r_init_fn != Py_None))
        cpy_r_r53 = cpy_r_init_fn;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 624, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_init_fn);
        goto CPyL49;
    }
    cpy_r_r54 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r53)->_decl;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_emitter, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 624, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r56 = CPyStatics[6880]; /* 'CPyDef_' */
    CPy_INCREF(cpy_r_init_fn);
    if (likely(cpy_r_init_fn != Py_None))
        cpy_r_r57 = cpy_r_init_fn;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 626, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_init_fn);
        goto CPyL50;
    }
    cpy_r_r58 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_func_ir___FuncIR___cname(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 626, CPyStatic_emitclass___globals);
        goto CPyL50;
    }
    cpy_r_r60 = CPyStatics[7174]; /* 'char res = ' */
    cpy_r_r61 = CPyStatics[2381]; /* '(' */
    cpy_r_r62 = CPyStatics[6872]; /* ');' */
    cpy_r_r63 = CPyStr_Build(7, cpy_r_r60, cpy_r_r55, cpy_r_r56, cpy_r_r59, cpy_r_r61, cpy_r_args, cpy_r_r62);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 623, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 622, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r66 = CPyStatics[7175]; /* 'if (res == 2) {' */
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 630, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r69 = CPyStatics[7170]; /* 'Py_DECREF(self);' */
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 631, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r72 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r73 = NULL;
    cpy_r_r74 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 632, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r75 = CPyStatics[1406]; /* '}' */
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 633, CPyStatic_emitclass___globals);
        goto CPyL44;
    } else
        goto CPyL41;
CPyL33: ;
    cpy_r_r78 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_sig;
    cpy_r_r79 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r78)->_args;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_r79)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    CPy_DECREF(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r82 > (Py_ssize_t)2;
    if (!cpy_r_r83) goto CPyL51;
    cpy_r_r84 = CPyStatics[7176]; /* 'int res = ' */
    cpy_r_r85 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 637, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r86 = CPyStatics[7177]; /* '->tp_init(' */
    cpy_r_r87 = CPyStatics[6872]; /* ');' */
    cpy_r_r88 = CPyStr_Build(5, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_args, cpy_r_r87);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 637, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r89 = NULL;
    cpy_r_r90 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 637, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r91 = CPyStatics[7178]; /* 'if (res < 0) {' */
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 639, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r94 = CPyStatics[7170]; /* 'Py_DECREF(self);' */
    cpy_r_r95 = NULL;
    cpy_r_r96 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 640, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r97 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r98 = NULL;
    cpy_r_r99 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 641, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r100 = CPyStatics[1406]; /* '}' */
    cpy_r_r101 = NULL;
    cpy_r_r102 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 642, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
CPyL41: ;
    cpy_r_r103 = CPyStatics[7179]; /* 'return self;' */
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 644, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r106 = CPyStatics[1406]; /* '}' */
    cpy_r_r107 = NULL;
    cpy_r_r108 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 645, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    return 1;
CPyL44: ;
    cpy_r_r109 = 2;
    return cpy_r_r109;
CPyL45: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    goto CPyL44;
CPyL47: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL19;
CPyL48: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r55);
    goto CPyL44;
CPyL51: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL41;
}

PyObject *CPyPy_emitclass___generate_constructor_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "init_fn", "setup_name", "vtable_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOOO:generate_constructor_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_init_fn;
    PyObject *obj_setup_name;
    PyObject *obj_vtable_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_init_fn, &obj_setup_name, &obj_vtable_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncDecl))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn); 
        goto fail;
    }
    PyObject *arg_init_fn;
    if (Py_TYPE(obj_init_fn) == CPyType_func_ir___FuncIR)
        arg_init_fn = obj_init_fn;
    else {
        arg_init_fn = NULL;
    }
    if (arg_init_fn != NULL) goto __LL9302;
    if (obj_init_fn == Py_None)
        arg_init_fn = obj_init_fn;
    else {
        arg_init_fn = NULL;
    }
    if (arg_init_fn != NULL) goto __LL9302;
    CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", obj_init_fn); 
    goto fail;
__LL9302: ;
    PyObject *arg_setup_name;
    if (likely(PyUnicode_Check(obj_setup_name)))
        arg_setup_name = obj_setup_name;
    else {
        CPy_TypeError("str", obj_setup_name); 
        goto fail;
    }
    PyObject *arg_vtable_name;
    if (likely(PyUnicode_Check(obj_vtable_name)))
        arg_vtable_name = obj_vtable_name;
    else {
        CPy_TypeError("str", obj_vtable_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_constructor_for_class(arg_cl, arg_fn, arg_init_fn, arg_setup_name, arg_vtable_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_constructor_for_class", 606, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___generate_init_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_init_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_func_name;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 655, CPyStatic_emitclass___globals);
        goto CPyL16;
    }
    cpy_r_r2 = CPyStatics[7180]; /* '_init' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 655, CPyStatic_emitclass___globals);
        goto CPyL16;
    }
    cpy_r_func_name = cpy_r_r3;
    cpy_r_r4 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 657, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r7 = CPyStatics[7182]; /* '(PyObject *self, PyObject *args, PyObject *kwds)' */
    cpy_r_r8 = CPyStr_Build(2, cpy_r_func_name, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 658, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 658, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r11 = CPyStatics[1405]; /* '{' */
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 659, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r14 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_allow_interpreted_subclasses;
    if (cpy_r_r14) goto CPyL10;
CPyL7: ;
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL18;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 660, CPyStatic_emitclass___globals, "str", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_r19 = CPyStr_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL13;
CPyL10: ;
    cpy_r_r20 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r21 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_func_ir___FuncIR___cname(cpy_r_init_fn, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 663, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r23 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r24 = CPyStatics[7183]; /* '(self, args, kwds) != NULL ? 0 : -1;' */
    cpy_r_r25 = CPyStr_Build(4, cpy_r_r23, cpy_r_r20, cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 662, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 661, CPyStatic_emitclass___globals);
        goto CPyL17;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r28 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 667, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
CPyL14: ;
    cpy_r_r31 = CPyStatics[1406]; /* '}' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 668, CPyStatic_emitclass___globals);
        goto CPyL17;
    }
    return cpy_r_func_name;
CPyL16: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL17: ;
    CPy_DecRef(cpy_r_func_name);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL13;
}

PyObject *CPyPy_emitclass___generate_init_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "init_fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_init_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_init_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_init_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_init_fn;
    if (likely(Py_TYPE(obj_init_fn) == CPyType_func_ir___FuncIR))
        arg_init_fn = obj_init_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_init_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___generate_init_for_class(arg_cl, arg_init_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_init_for_class", 648, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_new_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_func_name, PyObject *cpy_r_vtable_name, PyObject *cpy_r_setup_name, PyObject *cpy_r_init_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
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
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    cpy_r_r0 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 681, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r3 = CPyStatics[7185]; /* '(PyTypeObject *type, PyObject *args, PyObject *kwds)' */
    cpy_r_r4 = CPyStr_Build(2, cpy_r_func_name, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 682, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 682, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r7 = CPyStatics[1405]; /* '{' */
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 683, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r10 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_allow_interpreted_subclasses;
    if (cpy_r_r10) goto CPyL11;
CPyL5: ;
    cpy_r_r11 = CPyStatics[7164]; /* 'if (type != ' */
    cpy_r_r12 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 686, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r13 = CPyStatics[6900]; /* ') {' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 686, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 686, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r17 = CPyStatics[7186]; /* ('PyErr_SetString(PyExc_TypeError, "interpreted classes '
                                     'cannot inherit from compiled");') */
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 687, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r20 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 690, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r23 = CPyStatics[1406]; /* '}' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 691, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
CPyL11: ;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_init_fn != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_allow_interpreted_subclasses;
    if (cpy_r_r28) goto CPyL18;
CPyL13: ;
    cpy_r_r29 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL34;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r32 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 693, CPyStatic_emitclass___globals, "str", cpy_r_r29);
        goto CPyL33;
    }
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (cpy_r_r33) goto CPyL18;
CPyL16: ;
    cpy_r_r34 = CPyDef_class_ir___ClassIR___is_serializable(cpy_r_cl);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 693, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    if (!cpy_r_r34) goto CPyL20;
CPyL18: ;
    cpy_r_r35 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r36 = CPyStatics[7187]; /* '(type);' */
    cpy_r_r37 = CPyStr_Build(3, cpy_r_r35, cpy_r_setup_name, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 695, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 695, CPyStatic_emitclass___globals);
        goto CPyL33;
    } else
        goto CPyL31;
CPyL20: ;
    cpy_r_r40 = CPyStatics[7173]; /* 'PyObject *self = ' */
    cpy_r_r41 = CPyStatics[7187]; /* '(type);' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_r40, cpy_r_setup_name, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 700, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 700, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r45 = CPyStatics[7162]; /* 'if (self == NULL)' */
    cpy_r_r46 = CPyStatics[7163]; /* '    return NULL;' */
    cpy_r_r47 = PyTuple_Pack(2, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 701, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r48 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 701, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r49 = CPyStatics[7188]; /* 'PyObject *ret = ' */
    cpy_r_r50 = CPyStatics[7069]; /* 'CPyPy_' */
    CPy_INCREF(cpy_r_init_fn);
    if (likely(cpy_r_init_fn != Py_None))
        cpy_r_r51 = cpy_r_init_fn;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 703, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_init_fn);
        goto CPyL33;
    }
    cpy_r_r52 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyDef_func_ir___FuncIR___cname(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 703, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r54 = CPyStatics[7189]; /* '(self, args, kwds);' */
    cpy_r_r55 = CPyStr_Build(4, cpy_r_r49, cpy_r_r50, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 703, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r56 = NULL;
    cpy_r_r57 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 702, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r58 = CPyStatics[7190]; /* 'if (ret == NULL)' */
    cpy_r_r59 = CPyStatics[7163]; /* '    return NULL;' */
    cpy_r_r60 = PyTuple_Pack(2, cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 705, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r61 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 705, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r62 = CPyStatics[7179]; /* 'return self;' */
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 706, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
CPyL31: ;
    cpy_r_r65 = CPyStatics[1406]; /* '}' */
    cpy_r_r66 = NULL;
    cpy_r_r67 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 707, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
CPyL34: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL16;
}

PyObject *CPyPy_emitclass___generate_new_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "func_name", "vtable_name", "setup_name", "init_fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOOO:generate_new_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_func_name;
    PyObject *obj_vtable_name;
    PyObject *obj_setup_name;
    PyObject *obj_init_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_func_name, &obj_vtable_name, &obj_setup_name, &obj_init_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_vtable_name;
    if (likely(PyUnicode_Check(obj_vtable_name)))
        arg_vtable_name = obj_vtable_name;
    else {
        CPy_TypeError("str", obj_vtable_name); 
        goto fail;
    }
    PyObject *arg_setup_name;
    if (likely(PyUnicode_Check(obj_setup_name)))
        arg_setup_name = obj_setup_name;
    else {
        CPy_TypeError("str", obj_setup_name); 
        goto fail;
    }
    PyObject *arg_init_fn;
    if (Py_TYPE(obj_init_fn) == CPyType_func_ir___FuncIR)
        arg_init_fn = obj_init_fn;
    else {
        arg_init_fn = NULL;
    }
    if (arg_init_fn != NULL) goto __LL9303;
    if (obj_init_fn == Py_None)
        arg_init_fn = obj_init_fn;
    else {
        arg_init_fn = NULL;
    }
    if (arg_init_fn != NULL) goto __LL9303;
    CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", obj_init_fn); 
    goto fail;
__LL9303: ;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_new_for_class(arg_cl, arg_func_name, arg_vtable_name, arg_setup_name, arg_init_fn, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_class", 673, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_new_for_trait(PyObject *cpy_r_cl, PyObject *cpy_r_func_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 711, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r3 = CPyStatics[7185]; /* '(PyTypeObject *type, PyObject *args, PyObject *kwds)' */
    cpy_r_r4 = CPyStr_Build(2, cpy_r_func_name, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 712, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 712, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r7 = CPyStatics[1405]; /* '{' */
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 713, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r10 = CPyStatics[7164]; /* 'if (type != ' */
    cpy_r_r11 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 714, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r12 = CPyStatics[6900]; /* ') {' */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 714, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 714, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyStatics[7191]; /* ('PyErr_SetString(PyExc_TypeError, "interpreted classes '
                                     'cannot inherit from compiled traits");') */
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 715, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r19 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 719, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r22 = CPyStatics[7192]; /* ('PyErr_SetString(PyExc_TypeError, "traits may not be '
                                     'directly created");') */
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 720, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r25 = CPyStatics[1406]; /* '}' */
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 721, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r28 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 722, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r31 = CPyStatics[1406]; /* '}' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 723, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
}

PyObject *CPyPy_emitclass___generate_new_for_trait(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "func_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_new_for_trait", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_func_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_func_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_new_for_trait(arg_cl, arg_func_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_new_for_trait", 710, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_traverse_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_func_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T4CIOO cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_struct_name;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 728, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 730, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r6 = CPyStatics[7193]; /* ' *self, visitproc visit, void *arg)' */
    cpy_r_r7 = CPyStr_Build(4, cpy_r_func_name, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 730, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 729, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r10 = CPyStatics[1405]; /* '{' */
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 732, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r13 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_traverse_for_class", "ClassIR", "base_mro", 733, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r13);
CPyL6: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_r16, 2);
    cpy_r_r18 = cpy_r_r17;
CPyL7: ;
    cpy_r_r19 = cpy_r_r18 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    cpy_r_r21 = 0 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    cpy_r_r23 = cpy_r_r20 & cpy_r_r22;
    if (!cpy_r_r23) goto CPyL9;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r18 >= (Py_ssize_t)0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL10;
CPyL9: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_r18, 0);
    cpy_r_r27 = cpy_r_r26 ^ 1;
    cpy_r_r25 = cpy_r_r27;
CPyL10: ;
    if (!cpy_r_r25) goto CPyL47;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r18 & 1;
    cpy_r_r32 = cpy_r_r31 == 0;
    cpy_r_r33 = cpy_r_r30 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    cpy_r_r35 = cpy_r_r32 & cpy_r_r34;
    if (!cpy_r_r35) goto CPyL13;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r30;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL14;
CPyL13: ;
    cpy_r_r38 = CPyTagged_IsLt_(cpy_r_r18, cpy_r_r30);
    cpy_r_r37 = cpy_r_r38;
CPyL14: ;
    if (!cpy_r_r37) goto CPyL47;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r18);
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("short_int", cpy_r_r39); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 733, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_class_ir___ClassIR))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 733, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r41);
        goto CPyL48;
    }
    cpy_r_base = cpy_r_r42;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r43 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r43);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
CPyL18: ;
    cpy_r_r44 = 0;
    cpy_r_r45 = PyDict_Size(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = CPyDict_GetItemsIter(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
CPyL19: ;
    cpy_r_r48 = CPyDict_NextItem(cpy_r_r47, cpy_r_r44);
    cpy_r_r49 = cpy_r_r48.f1;
    cpy_r_r44 = cpy_r_r49;
    cpy_r_r50 = cpy_r_r48.f0;
    if (!cpy_r_r50) goto CPyL50;
    cpy_r_r51 = cpy_r_r48.f2;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = cpy_r_r48.f3;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r48.f2);
    CPy_DECREF(cpy_r_r48.f3);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r53 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals, "str", cpy_r_r51);
        goto CPyL51;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r52, CPyType_rtypes___RType)))
        cpy_r_r54 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RType", cpy_r_r52);
        goto CPyL52;
    }
    cpy_r_attr = cpy_r_r53;
    cpy_r_rtype = cpy_r_r54;
    cpy_r_r55 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r56 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 735, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r57 = CPyStr_Build(2, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 735, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r58 = CPyDef_emit___Emitter___emit_gc_visit(cpy_r_emitter, cpy_r_r57, cpy_r_rtype);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 735, CPyStatic_emitclass___globals);
        goto CPyL54;
    }
    cpy_r_r59 = CPyDict_CheckSize(cpy_r_r43, cpy_r_r46);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals);
        goto CPyL54;
    } else
        goto CPyL19;
CPyL26: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 734, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r61 = cpy_r_r18 + -2;
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r18 = cpy_r_r61;
    goto CPyL7;
CPyL28: ;
    cpy_r_r62 = CPyDef_emitclass___has_managed_dict(cpy_r_cl, cpy_r_emitter);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 736, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    if (!cpy_r_r62) goto CPyL31;
    cpy_r_r63 = CPyStatics[7194]; /* ('_PyObject_VisitManagedDict((PyObject *)self, visit, '
                                     'arg);') */
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 737, CPyStatic_emitclass___globals);
        goto CPyL46;
    } else
        goto CPyL43;
CPyL31: ;
    cpy_r_r66 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_has_dict;
    if (!cpy_r_r66) goto CPyL43;
CPyL32: ;
    cpy_r_r67 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 739, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_struct_name = cpy_r_r68;
    cpy_r_r69 = CPyStatics[7195]; /* '*((PyObject **)((char *)self + sizeof(' */
    cpy_r_r70 = CPyStatics[6955]; /* ')))' */
    cpy_r_r71 = CPyStr_Build(3, cpy_r_r69, cpy_r_struct_name, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 742, CPyStatic_emitclass___globals);
        goto CPyL55;
    }
    cpy_r_r72 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 742, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r74 = CPyDef_emit___Emitter___emit_gc_visit(cpy_r_emitter, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 741, CPyStatic_emitclass___globals);
        goto CPyL55;
    }
    cpy_r_r75 = CPyStatics[7196]; /* ('*((PyObject **)((char *)self + sizeof(PyObject *) + '
                                     'sizeof(') */
    cpy_r_r76 = CPyStatics[6955]; /* ')))' */
    cpy_r_r77 = CPyStr_Build(3, cpy_r_r75, cpy_r_struct_name, cpy_r_r76);
    CPy_DECREF(cpy_r_struct_name);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 745, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r78 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r78 == NULL)) {
        goto CPyL57;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r79 = 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 746, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r80 = CPyDef_emit___Emitter___emit_gc_visit(cpy_r_emitter, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 744, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
CPyL43: ;
    cpy_r_r81 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 748, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r84 = CPyStatics[1406]; /* '}' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 749, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    return 1;
CPyL46: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL47: ;
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r18);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48.f2);
    CPy_DECREF(cpy_r_r48.f3);
    goto CPyL26;
CPyL51: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r53);
    goto CPyL46;
CPyL53: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL46;
CPyL54: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_struct_name);
    goto CPyL46;
CPyL56: ;
    CPy_DecRef(cpy_r_struct_name);
    CPy_DecRef(cpy_r_r71);
    goto CPyL35;
CPyL57: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL40;
}

PyObject *CPyPy_emitclass___generate_traverse_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "func_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_traverse_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_func_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_func_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_traverse_for_class(arg_cl, arg_func_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_traverse_for_class", 726, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_clear_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_func_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T4CIOO cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_struct_name;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 753, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 754, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r6 = CPyStatics[7197]; /* ' *self)' */
    cpy_r_r7 = CPyStr_Build(4, cpy_r_func_name, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 754, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 754, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r10 = CPyStatics[1405]; /* '{' */
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 755, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r13 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_clear_for_class", "ClassIR", "base_mro", 756, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r13);
CPyL6: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_r16, 2);
    cpy_r_r18 = cpy_r_r17;
CPyL7: ;
    cpy_r_r19 = cpy_r_r18 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    cpy_r_r21 = 0 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    cpy_r_r23 = cpy_r_r20 & cpy_r_r22;
    if (!cpy_r_r23) goto CPyL9;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r18 >= (Py_ssize_t)0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL10;
CPyL9: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_r18, 0);
    cpy_r_r27 = cpy_r_r26 ^ 1;
    cpy_r_r25 = cpy_r_r27;
CPyL10: ;
    if (!cpy_r_r25) goto CPyL47;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r18 & 1;
    cpy_r_r32 = cpy_r_r31 == 0;
    cpy_r_r33 = cpy_r_r30 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    cpy_r_r35 = cpy_r_r32 & cpy_r_r34;
    if (!cpy_r_r35) goto CPyL13;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r30;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL14;
CPyL13: ;
    cpy_r_r38 = CPyTagged_IsLt_(cpy_r_r18, cpy_r_r30);
    cpy_r_r37 = cpy_r_r38;
CPyL14: ;
    if (!cpy_r_r37) goto CPyL47;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r18);
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("short_int", cpy_r_r39); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 756, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_class_ir___ClassIR))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 756, CPyStatic_emitclass___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r41);
        goto CPyL48;
    }
    cpy_r_base = cpy_r_r42;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r43 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r43);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
CPyL18: ;
    cpy_r_r44 = 0;
    cpy_r_r45 = PyDict_Size(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = CPyDict_GetItemsIter(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
CPyL19: ;
    cpy_r_r48 = CPyDict_NextItem(cpy_r_r47, cpy_r_r44);
    cpy_r_r49 = cpy_r_r48.f1;
    cpy_r_r44 = cpy_r_r49;
    cpy_r_r50 = cpy_r_r48.f0;
    if (!cpy_r_r50) goto CPyL50;
    cpy_r_r51 = cpy_r_r48.f2;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = cpy_r_r48.f3;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r48.f2);
    CPy_DECREF(cpy_r_r48.f3);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r53 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals, "str", cpy_r_r51);
        goto CPyL51;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r52, CPyType_rtypes___RType)))
        cpy_r_r54 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RType", cpy_r_r52);
        goto CPyL52;
    }
    cpy_r_attr = cpy_r_r53;
    cpy_r_rtype = cpy_r_r54;
    cpy_r_r55 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r56 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 758, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r57 = CPyStr_Build(2, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 758, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r58 = CPyDef_emit___Emitter___emit_gc_clear(cpy_r_emitter, cpy_r_r57, cpy_r_rtype);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 758, CPyStatic_emitclass___globals);
        goto CPyL54;
    }
    cpy_r_r59 = CPyDict_CheckSize(cpy_r_r43, cpy_r_r46);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals);
        goto CPyL54;
    } else
        goto CPyL19;
CPyL26: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 757, CPyStatic_emitclass___globals);
        goto CPyL48;
    }
    cpy_r_r61 = cpy_r_r18 + -2;
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r18 = cpy_r_r61;
    goto CPyL7;
CPyL28: ;
    cpy_r_r62 = CPyDef_emitclass___has_managed_dict(cpy_r_cl, cpy_r_emitter);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 759, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    if (!cpy_r_r62) goto CPyL31;
    cpy_r_r63 = CPyStatics[7198]; /* '_PyObject_ClearManagedDict((PyObject *)self);' */
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 760, CPyStatic_emitclass___globals);
        goto CPyL46;
    } else
        goto CPyL43;
CPyL31: ;
    cpy_r_r66 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_has_dict;
    if (!cpy_r_r66) goto CPyL43;
CPyL32: ;
    cpy_r_r67 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 762, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_struct_name = cpy_r_r68;
    cpy_r_r69 = CPyStatics[7195]; /* '*((PyObject **)((char *)self + sizeof(' */
    cpy_r_r70 = CPyStatics[6955]; /* ')))' */
    cpy_r_r71 = CPyStr_Build(3, cpy_r_r69, cpy_r_struct_name, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 765, CPyStatic_emitclass___globals);
        goto CPyL55;
    }
    cpy_r_r72 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 765, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r74 = CPyDef_emit___Emitter___emit_gc_clear(cpy_r_emitter, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 764, CPyStatic_emitclass___globals);
        goto CPyL55;
    }
    cpy_r_r75 = CPyStatics[7196]; /* ('*((PyObject **)((char *)self + sizeof(PyObject *) + '
                                     'sizeof(') */
    cpy_r_r76 = CPyStatics[6955]; /* ')))' */
    cpy_r_r77 = CPyStr_Build(3, cpy_r_r75, cpy_r_struct_name, cpy_r_r76);
    CPy_DECREF(cpy_r_struct_name);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 768, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r78 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r78 == NULL)) {
        goto CPyL57;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r79 = 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 769, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r80 = CPyDef_emit___Emitter___emit_gc_clear(cpy_r_emitter, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 767, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
CPyL43: ;
    cpy_r_r81 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 771, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    cpy_r_r84 = CPyStatics[1406]; /* '}' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 772, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
    return 1;
CPyL46: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL47: ;
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r18);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48.f2);
    CPy_DECREF(cpy_r_r48.f3);
    goto CPyL26;
CPyL51: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r53);
    goto CPyL46;
CPyL53: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL46;
CPyL54: ;
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_struct_name);
    goto CPyL46;
CPyL56: ;
    CPy_DecRef(cpy_r_struct_name);
    CPy_DecRef(cpy_r_r71);
    goto CPyL35;
CPyL57: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL40;
}

PyObject *CPyPy_emitclass___generate_clear_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "func_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_clear_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_func_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_func_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_clear_for_class(arg_cl, arg_func_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_clear_for_class", 752, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_dealloc_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_dealloc_func_name, PyObject *cpy_r_clear_func_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[7199]; /* 'static void' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 778, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 779, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r6 = CPyStatics[7197]; /* ' *self)' */
    cpy_r_r7 = CPyStr_Build(4, cpy_r_dealloc_func_name, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 779, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 779, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r10 = CPyStatics[1405]; /* '{' */
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 780, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r13 = CPyStatics[7200]; /* 'PyObject_GC_UnTrack(self);' */
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 781, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyStatics[7201]; /* 'CPy_TRASHCAN_BEGIN(self, ' */
    cpy_r_r17 = CPyStatics[72]; /* ')' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_dealloc_func_name, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 783, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 783, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[7202]; /* '(self);' */
    cpy_r_r22 = CPyStr_Build(2, cpy_r_clear_func_name, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 784, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 784, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r25 = CPyStatics[7203]; /* 'Py_TYPE(self)->tp_free((PyObject *)self);' */
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 785, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r28 = CPyStatics[7204]; /* 'CPy_TRASHCAN_END(self)' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 786, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r31 = CPyStatics[1406]; /* '}' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 787, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
}

PyObject *CPyPy_emitclass___generate_dealloc_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "dealloc_func_name", "clear_func_name", "emitter", 0};
    static CPyArg_Parser parser = {"OOOO:generate_dealloc_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_dealloc_func_name;
    PyObject *obj_clear_func_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_dealloc_func_name, &obj_clear_func_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_dealloc_func_name;
    if (likely(PyUnicode_Check(obj_dealloc_func_name)))
        arg_dealloc_func_name = obj_dealloc_func_name;
    else {
        CPy_TypeError("str", obj_dealloc_func_name); 
        goto fail;
    }
    PyObject *arg_clear_func_name;
    if (likely(PyUnicode_Check(obj_clear_func_name)))
        arg_clear_func_name = obj_clear_func_name;
    else {
        CPy_TypeError("str", obj_clear_func_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_dealloc_for_class(arg_cl, arg_dealloc_func_name, arg_clear_func_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_dealloc_for_class", 775, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_methods_table(PyObject *cpy_r_cl, PyObject *cpy_r_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3CIO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    tuple_T2II cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_flags;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    cpy_r_r0 = CPyStatics[7205]; /* 'static PyMethodDef ' */
    cpy_r_r1 = CPyStatics[7102]; /* '[] = {' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 791, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 791, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_methods;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_methods_table", "ClassIR", "methods", 792, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetValuesIter(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 792, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
CPyL4: ;
    cpy_r_r10 = CPyDict_NextValue(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL41;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10.f2);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___FuncIR))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 792, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r13);
        goto CPyL42;
    }
    cpy_r_fn = cpy_r_r14;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r16 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r15)->_is_prop_setter;
    if (cpy_r_r16) goto CPyL43;
CPyL7: ;
    cpy_r_r17 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r18 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r17)->_is_prop_getter;
    if (cpy_r_r18) goto CPyL43;
CPyL8: ;
    cpy_r_r19 = CPyStatics[7206]; /* '{"' */
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 795, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
CPyL9: ;
    cpy_r_r21 = CPyStatics[7207]; /* '",' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 795, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 795, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r25 = CPyStatics[7208]; /* ' (PyCFunction)' */
    cpy_r_r26 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r27 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 796, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r29 = CPyStatics[242]; /* ',' */
    cpy_r_r30 = CPyStr_Build(4, cpy_r_r25, cpy_r_r26, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 796, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 796, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r33 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r33.f0);
    CPyTagged_INCREF(cpy_r_r33.f1);
    cpy_r_r34 = CPyDef_mypyc___common___use_fastcall(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33.f0);
    CPyTagged_DECREF(cpy_r_r33.f1);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 797, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = CPyStatics[7209]; /* 'METH_FASTCALL' */
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 798, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    CPy_INCREF(cpy_r_r35);
    *(PyObject * *)cpy_r_r38 = cpy_r_r35;
    cpy_r_flags = cpy_r_r36;
    goto CPyL20;
CPyL18: ;
    cpy_r_r39 = CPyStatics[7210]; /* 'METH_VARARGS' */
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 800, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    CPy_INCREF(cpy_r_r39);
    *(PyObject * *)cpy_r_r42 = cpy_r_r39;
    cpy_r_flags = cpy_r_r40;
CPyL20: ;
    cpy_r_r43 = CPyStatics[7211]; /* 'METH_KEYWORDS' */
    cpy_r_r44 = PyList_Append(cpy_r_flags, cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 801, CPyStatic_emitclass___globals);
        goto CPyL45;
    }
    cpy_r_r46 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r47 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r46)->_kind;
    cpy_r_r48 = cpy_r_r47 == 2;
    if (cpy_r_r48) {
        goto CPyL46;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r49 = CPyStatics[7212]; /* 'METH_STATIC' */
    cpy_r_r50 = PyList_Append(cpy_r_flags, cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 803, CPyStatic_emitclass___globals);
        goto CPyL47;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r52 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r53 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r52)->_kind;
    cpy_r_r54 = cpy_r_r53 == 4;
    CPy_DECREF(cpy_r_fn);
    if (!cpy_r_r54) goto CPyL25;
    cpy_r_r55 = CPyStatics[7213]; /* 'METH_CLASS' */
    cpy_r_r56 = PyList_Append(cpy_r_flags, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 805, CPyStatic_emitclass___globals);
        goto CPyL47;
    }
CPyL25: ;
    cpy_r_r58 = CPyStatics[3679]; /* ' | ' */
    cpy_r_r59 = PyUnicode_Join(cpy_r_r58, cpy_r_flags);
    CPy_DECREF(cpy_r_flags);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 807, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r60 = CPyStatics[295]; /* ' ' */
    cpy_r_r61 = CPyStatics[7214]; /* ', NULL},' */
    cpy_r_r62 = CPyStr_Build(3, cpy_r_r60, cpy_r_r59, cpy_r_r61);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 807, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 807, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
CPyL28: ;
    cpy_r_r65 = CPyDict_CheckSize(cpy_r_r5, cpy_r_r8);
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 792, CPyStatic_emitclass___globals);
        goto CPyL42;
    } else
        goto CPyL4;
CPyL29: ;
    cpy_r_r66 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 792, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r67 = CPyStatics[5719]; /* '__setstate__' */
    cpy_r_r68 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 810, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    if (cpy_r_r68) goto CPyL36;
    cpy_r_r69 = CPyStatics[5718]; /* '__getstate__' */
    cpy_r_r70 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 810, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    if (cpy_r_r70) goto CPyL36;
    cpy_r_r71 = CPyStatics[7215]; /* ('{"__setstate__", (PyCFunction)CPyPickle_SetState, '
                                     'METH_O, NULL},') */
    cpy_r_r72 = CPyStatics[7216]; /* ('{"__getstate__", (PyCFunction)CPyPickle_GetState, '
                                     'METH_NOARGS, NULL},') */
    cpy_r_r73 = PyTuple_Pack(2, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 811, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r74 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 811, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
CPyL36: ;
    cpy_r_r75 = CPyStatics[7217];
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 816, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    cpy_r_r78 = CPyStatics[7107]; /* '};' */
    cpy_r_r79 = NULL;
    cpy_r_r80 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 817, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
    return 1;
CPyL39: ;
    cpy_r_r81 = 2;
    return cpy_r_r81;
CPyL40: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL39;
CPyL41: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    goto CPyL29;
CPyL42: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL28;
CPyL44: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_fn);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_flags);
    goto CPyL39;
CPyL46: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_flags);
    goto CPyL39;
}

PyObject *CPyPy_emitclass___generate_methods_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "name", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_methods_table", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_methods_table(arg_cl, arg_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_methods_table", 790, CPyStatic_emitclass___globals);
    return NULL;
}

PyObject *CPyDef_emitclass___generate_side_table_for_class(PyObject *cpy_r_cl, PyObject *cpy_r_name, PyObject *cpy_r_type, PyObject *cpy_r_slots, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T4CIOO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_field;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 823, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[755]; /* '_' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_name);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 823, CPyStatic_emitclass___globals);
        goto CPyL14;
    }
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = CPyStatics[7218]; /* 'static ' */
    cpy_r_r5 = CPyStatics[295]; /* ' ' */
    cpy_r_r6 = CPyStatics[7219]; /* ' = {' */
    cpy_r_r7 = CPyStr_Build(5, cpy_r_r4, cpy_r_type, cpy_r_r5, cpy_r_name, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 824, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 824, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
    cpy_r_r10 = 0;
    cpy_r_r11 = PyDict_Size(cpy_r_slots);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPyDict_GetItemsIter(cpy_r_slots);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 825, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_r14 = CPyDict_NextItem(cpy_r_r13, cpy_r_r10);
    cpy_r_r15 = cpy_r_r14.f1;
    cpy_r_r10 = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f0;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r14.f3;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r19 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 825, CPyStatic_emitclass___globals, "str", cpy_r_r17);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 825, CPyStatic_emitclass___globals, "str", cpy_r_r18);
        goto CPyL18;
    }
    cpy_r_field = cpy_r_r19;
    cpy_r_value = cpy_r_r20;
    cpy_r_r21 = CPyStatics[224]; /* '.' */
    cpy_r_r22 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r23 = CPyStatics[242]; /* ',' */
    cpy_r_r24 = CPyStr_Build(5, cpy_r_r21, cpy_r_field, cpy_r_r22, cpy_r_value, cpy_r_r23);
    CPy_DECREF(cpy_r_field);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 826, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 826, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r27 = CPyDict_CheckSize(cpy_r_slots, cpy_r_r12);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 825, CPyStatic_emitclass___globals);
        goto CPyL19;
    } else
        goto CPyL5;
CPyL11: ;
    cpy_r_r28 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 825, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
    cpy_r_r29 = CPyStatics[7107]; /* '};' */
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 827, CPyStatic_emitclass___globals);
        goto CPyL15;
    }
    return cpy_r_name;
CPyL14: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL15: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r18);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r19);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r13);
    goto CPyL14;
}

PyObject *CPyPy_emitclass___generate_side_table_for_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "name", "type", "slots", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_side_table_for_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_name;
    PyObject *obj_type;
    PyObject *obj_slots;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_name, &obj_type, &obj_slots, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyUnicode_Check(obj_type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("str", obj_type); 
        goto fail;
    }
    PyObject *arg_slots;
    if (likely(PyDict_Check(obj_slots)))
        arg_slots = obj_slots;
    else {
        CPy_TypeError("dict", obj_slots); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitclass___generate_side_table_for_class(arg_cl, arg_name, arg_type, arg_slots, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_side_table_for_class", 820, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_getseter_declarations(PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
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
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T4CIOO cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    PyObject *cpy_r_prop;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_getter;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_setter;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r0) goto CPyL17;
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseter_declarations", "ClassIR", "attributes", 833, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetKeysIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 833, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextKey(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL39;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 833, CPyStatic_emitclass___globals, "str", cpy_r_r9);
        goto CPyL40;
    }
    cpy_r_attr = cpy_r_r10;
    cpy_r_r11 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 834, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r14 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_attr, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 837, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r16 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 837, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r18 = CPyStatics[2381]; /* '(' */
    cpy_r_r19 = CPyStatics[7220]; /* ' *self, void *closure);' */
    cpy_r_r20 = CPyStr_Build(4, cpy_r_r15, cpy_r_r18, cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 836, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 835, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r23 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 840, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r26 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_attr, cpy_r_r26);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 843, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    cpy_r_r28 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 843, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r30 = CPyStatics[2381]; /* '(' */
    cpy_r_r31 = CPyStatics[7221]; /* ' *self, PyObject *value, void *closure);' */
    cpy_r_r32 = CPyStr_Build(4, cpy_r_r27, cpy_r_r30, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 842, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 841, CPyStatic_emitclass___globals);
        goto CPyL40;
    }
    cpy_r_r35 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 833, CPyStatic_emitclass___globals);
        goto CPyL40;
    } else
        goto CPyL3;
CPyL16: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 833, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
CPyL17: ;
    cpy_r_r37 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_properties;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseter_declarations", "ClassIR", "properties", 847, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r37);
CPyL18: ;
    cpy_r_r38 = 0;
    cpy_r_r39 = PyDict_Size(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = CPyDict_GetItemsIter(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 847, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
CPyL19: ;
    cpy_r_r42 = CPyDict_NextItem(cpy_r_r41, cpy_r_r38);
    cpy_r_r43 = cpy_r_r42.f1;
    cpy_r_r38 = cpy_r_r43;
    cpy_r_r44 = cpy_r_r42.f0;
    if (!cpy_r_r44) goto CPyL45;
    cpy_r_r45 = cpy_r_r42.f2;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = cpy_r_r42.f3;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r42.f2);
    CPy_DECREF(cpy_r_r42.f3);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r47 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 847, CPyStatic_emitclass___globals, "str", cpy_r_r45);
        goto CPyL46;
    }
    PyObject *__tmp9304;
    if (unlikely(!(PyTuple_Check(cpy_r_r46) && PyTuple_GET_SIZE(cpy_r_r46) == 2))) {
        __tmp9304 = NULL;
        goto __LL9305;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r46, 0)) == CPyType_func_ir___FuncIR))
        __tmp9304 = PyTuple_GET_ITEM(cpy_r_r46, 0);
    else {
        __tmp9304 = NULL;
    }
    if (__tmp9304 == NULL) goto __LL9305;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r46, 1)) == CPyType_func_ir___FuncIR)
        __tmp9304 = PyTuple_GET_ITEM(cpy_r_r46, 1);
    else {
        __tmp9304 = NULL;
    }
    if (__tmp9304 != NULL) goto __LL9306;
    if (PyTuple_GET_ITEM(cpy_r_r46, 1) == Py_None)
        __tmp9304 = PyTuple_GET_ITEM(cpy_r_r46, 1);
    else {
        __tmp9304 = NULL;
    }
    if (__tmp9304 != NULL) goto __LL9306;
    __tmp9304 = NULL;
__LL9306: ;
    if (__tmp9304 == NULL) goto __LL9305;
    __tmp9304 = cpy_r_r46;
__LL9305: ;
    if (unlikely(__tmp9304 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, union[mypyc.ir.func_ir.FuncIR, None]]", cpy_r_r46); cpy_r_r48 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9307 = PyTuple_GET_ITEM(cpy_r_r46, 0);
        CPy_INCREF(__tmp9307);
        PyObject *__tmp9308;
        if (likely(Py_TYPE(__tmp9307) == CPyType_func_ir___FuncIR))
            __tmp9308 = __tmp9307;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9307); 
            __tmp9308 = NULL;
        }
        cpy_r_r48.f0 = __tmp9308;
        PyObject *__tmp9309 = PyTuple_GET_ITEM(cpy_r_r46, 1);
        CPy_INCREF(__tmp9309);
        PyObject *__tmp9310;
        if (Py_TYPE(__tmp9309) == CPyType_func_ir___FuncIR)
            __tmp9310 = __tmp9309;
        else {
            __tmp9310 = NULL;
        }
        if (__tmp9310 != NULL) goto __LL9311;
        if (__tmp9309 == Py_None)
            __tmp9310 = __tmp9309;
        else {
            __tmp9310 = NULL;
        }
        if (__tmp9310 != NULL) goto __LL9311;
        CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", __tmp9309); 
        __tmp9310 = NULL;
__LL9311: ;
        cpy_r_r48.f1 = __tmp9310;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 847, CPyStatic_emitclass___globals);
        goto CPyL47;
    }
    cpy_r_prop = cpy_r_r47;
    cpy_r_r49 = cpy_r_r48.f0;
    CPy_INCREF(cpy_r_r49);
    cpy_r_getter = cpy_r_r49;
    cpy_r_r50 = cpy_r_r48.f1;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r48.f0);
    CPy_DECREF(cpy_r_r48.f1);
    cpy_r_setter = cpy_r_r50;
    cpy_r_r51 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_getter)->_decl;
    cpy_r_r52 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r51)->_implicit;
    CPy_DECREF(cpy_r_getter);
    if (cpy_r_r52) goto CPyL48;
CPyL23: ;
    cpy_r_r53 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 852, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r56 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_prop, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 855, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r58 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 855, CPyStatic_emitclass___globals);
        goto CPyL50;
    }
    cpy_r_r60 = CPyStatics[2381]; /* '(' */
    cpy_r_r61 = CPyStatics[7220]; /* ' *self, void *closure);' */
    cpy_r_r62 = CPyStr_Build(4, cpy_r_r57, cpy_r_r60, cpy_r_r59, cpy_r_r61);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 854, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 853, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_setter != cpy_r_r65;
    CPy_DECREF(cpy_r_setter);
    if (!cpy_r_r66) goto CPyL51;
    cpy_r_r67 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 861, CPyStatic_emitclass___globals);
        goto CPyL52;
    }
    cpy_r_r70 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_prop, cpy_r_r70);
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 864, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r72 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 864, CPyStatic_emitclass___globals);
        goto CPyL54;
    }
    cpy_r_r74 = CPyStatics[2381]; /* '(' */
    cpy_r_r75 = CPyStatics[7221]; /* ' *self, PyObject *value, void *closure);' */
    cpy_r_r76 = CPyStr_Build(4, cpy_r_r71, cpy_r_r74, cpy_r_r73, cpy_r_r75);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 863, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 862, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
CPyL34: ;
    cpy_r_r79 = CPyDict_CheckSize(cpy_r_r37, cpy_r_r40);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 847, CPyStatic_emitclass___globals);
        goto CPyL53;
    } else
        goto CPyL19;
CPyL35: ;
    cpy_r_r80 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 847, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r81 = 2;
    return cpy_r_r81;
CPyL38: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL16;
CPyL40: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_attr);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r15);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r27);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42.f2);
    CPy_DECREF(cpy_r_r42.f3);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r46);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r47);
    goto CPyL37;
CPyL48: ;
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_setter);
    goto CPyL34;
CPyL49: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_setter);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_setter);
    CPy_DecRef(cpy_r_r57);
    goto CPyL37;
CPyL51: ;
    CPy_DECREF(cpy_r_prop);
    goto CPyL34;
CPyL52: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_prop);
    goto CPyL37;
CPyL53: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    goto CPyL37;
CPyL54: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r71);
    goto CPyL37;
}

PyObject *CPyPy_emitclass___generate_getseter_declarations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_getseter_declarations", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_getseter_declarations(arg_cl, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseter_declarations", 831, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_getseters_table(PyObject *cpy_r_cl, PyObject *cpy_r_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T3CIO cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T4CIOO cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_prop;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_getter;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_setter;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyStatics[7222]; /* 'static PyGetSetDef ' */
    cpy_r_r1 = CPyStatics[7102]; /* '[] = {' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 870, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 870, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r5) goto CPyL16;
CPyL3: ;
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseters_table", "ClassIR", "attributes", 872, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = 0;
    cpy_r_r8 = PyDict_Size(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = CPyDict_GetKeysIter(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 872, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
CPyL5: ;
    cpy_r_r11 = CPyDict_NextKey(cpy_r_r10, cpy_r_r7);
    cpy_r_r12 = cpy_r_r11.f1;
    cpy_r_r7 = cpy_r_r12;
    cpy_r_r13 = cpy_r_r11.f0;
    if (!cpy_r_r13) goto CPyL40;
    cpy_r_r14 = cpy_r_r11.f2;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11.f2);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 872, CPyStatic_emitclass___globals, "str", cpy_r_r14);
        goto CPyL41;
    }
    cpy_r_attr = cpy_r_r15;
    cpy_r_r16 = CPyStatics[7206]; /* '{"' */
    cpy_r_r17 = CPyStatics[7207]; /* '",' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_attr, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 873, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 873, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r21 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_attr, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 876, CPyStatic_emitclass___globals);
        goto CPyL42;
    }
    cpy_r_r23 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_attr, cpy_r_r23);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 876, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r25 = CPyStatics[7223]; /* ' (getter)' */
    cpy_r_r26 = CPyStatics[7224]; /* ', (setter)' */
    cpy_r_r27 = CPyStatics[242]; /* ',' */
    cpy_r_r28 = CPyStr_Build(5, cpy_r_r25, cpy_r_r22, cpy_r_r26, cpy_r_r24, cpy_r_r27);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 875, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 874, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r31 = CPyStatics[7225]; /* ' NULL, NULL},' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 879, CPyStatic_emitclass___globals);
        goto CPyL41;
    }
    cpy_r_r34 = CPyDict_CheckSize(cpy_r_r6, cpy_r_r9);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 872, CPyStatic_emitclass___globals);
        goto CPyL41;
    } else
        goto CPyL5;
CPyL15: ;
    cpy_r_r35 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 872, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
CPyL16: ;
    cpy_r_r36 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_properties;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseters_table", "ClassIR", "properties", 880, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r36);
CPyL17: ;
    cpy_r_r37 = 0;
    cpy_r_r38 = PyDict_Size(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = CPyDict_GetItemsIter(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 880, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
CPyL18: ;
    cpy_r_r41 = CPyDict_NextItem(cpy_r_r40, cpy_r_r37);
    cpy_r_r42 = cpy_r_r41.f1;
    cpy_r_r37 = cpy_r_r42;
    cpy_r_r43 = cpy_r_r41.f0;
    if (!cpy_r_r43) goto CPyL45;
    cpy_r_r44 = cpy_r_r41.f2;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r41.f3;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r41.f3);
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r46 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 880, CPyStatic_emitclass___globals, "str", cpy_r_r44);
        goto CPyL46;
    }
    PyObject *__tmp9312;
    if (unlikely(!(PyTuple_Check(cpy_r_r45) && PyTuple_GET_SIZE(cpy_r_r45) == 2))) {
        __tmp9312 = NULL;
        goto __LL9313;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r45, 0)) == CPyType_func_ir___FuncIR))
        __tmp9312 = PyTuple_GET_ITEM(cpy_r_r45, 0);
    else {
        __tmp9312 = NULL;
    }
    if (__tmp9312 == NULL) goto __LL9313;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r45, 1)) == CPyType_func_ir___FuncIR)
        __tmp9312 = PyTuple_GET_ITEM(cpy_r_r45, 1);
    else {
        __tmp9312 = NULL;
    }
    if (__tmp9312 != NULL) goto __LL9314;
    if (PyTuple_GET_ITEM(cpy_r_r45, 1) == Py_None)
        __tmp9312 = PyTuple_GET_ITEM(cpy_r_r45, 1);
    else {
        __tmp9312 = NULL;
    }
    if (__tmp9312 != NULL) goto __LL9314;
    __tmp9312 = NULL;
__LL9314: ;
    if (__tmp9312 == NULL) goto __LL9313;
    __tmp9312 = cpy_r_r45;
__LL9313: ;
    if (unlikely(__tmp9312 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, union[mypyc.ir.func_ir.FuncIR, None]]", cpy_r_r45); cpy_r_r47 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9315 = PyTuple_GET_ITEM(cpy_r_r45, 0);
        CPy_INCREF(__tmp9315);
        PyObject *__tmp9316;
        if (likely(Py_TYPE(__tmp9315) == CPyType_func_ir___FuncIR))
            __tmp9316 = __tmp9315;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9315); 
            __tmp9316 = NULL;
        }
        cpy_r_r47.f0 = __tmp9316;
        PyObject *__tmp9317 = PyTuple_GET_ITEM(cpy_r_r45, 1);
        CPy_INCREF(__tmp9317);
        PyObject *__tmp9318;
        if (Py_TYPE(__tmp9317) == CPyType_func_ir___FuncIR)
            __tmp9318 = __tmp9317;
        else {
            __tmp9318 = NULL;
        }
        if (__tmp9318 != NULL) goto __LL9319;
        if (__tmp9317 == Py_None)
            __tmp9318 = __tmp9317;
        else {
            __tmp9318 = NULL;
        }
        if (__tmp9318 != NULL) goto __LL9319;
        CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", __tmp9317); 
        __tmp9318 = NULL;
__LL9319: ;
        cpy_r_r47.f1 = __tmp9318;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 880, CPyStatic_emitclass___globals);
        goto CPyL47;
    }
    cpy_r_prop = cpy_r_r46;
    cpy_r_r48 = cpy_r_r47.f0;
    CPy_INCREF(cpy_r_r48);
    cpy_r_getter = cpy_r_r48;
    cpy_r_r49 = cpy_r_r47.f1;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r47.f0);
    CPy_DECREF(cpy_r_r47.f1);
    cpy_r_setter = cpy_r_r49;
    cpy_r_r50 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_getter)->_decl;
    cpy_r_r51 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r50)->_implicit;
    CPy_DECREF(cpy_r_getter);
    if (cpy_r_r51) goto CPyL48;
CPyL22: ;
    cpy_r_r52 = CPyStatics[7206]; /* '{"' */
    cpy_r_r53 = CPyStatics[7207]; /* '",' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r52, cpy_r_prop, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 884, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 884, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r57 = CPyStatics[7223]; /* ' (getter)' */
    cpy_r_r58 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_prop, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 885, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r60 = CPyStatics[242]; /* ',' */
    cpy_r_r61 = CPyStr_Build(3, cpy_r_r57, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 885, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 885, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_setter != cpy_r_r64;
    CPy_DECREF(cpy_r_setter);
    if (!cpy_r_r65) goto CPyL50;
    cpy_r_r66 = CPyStatics[7226]; /* ' (setter)' */
    cpy_r_r67 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_prop, cpy_r_r67);
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 888, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
    cpy_r_r69 = CPyStatics[242]; /* ',' */
    cpy_r_r70 = CPyStr_Build(3, cpy_r_r66, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 888, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 888, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
    cpy_r_r73 = CPyStatics[7227]; /* 'NULL, NULL},' */
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 889, CPyStatic_emitclass___globals);
        goto CPyL51;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r76 = CPyStatics[7228]; /* 'NULL, NULL, NULL},' */
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 891, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
CPyL33: ;
    cpy_r_r79 = CPyDict_CheckSize(cpy_r_r36, cpy_r_r39);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 880, CPyStatic_emitclass___globals);
        goto CPyL51;
    } else
        goto CPyL18;
CPyL34: ;
    cpy_r_r80 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 880, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    cpy_r_r81 = CPyStatics[7217];
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 893, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    cpy_r_r84 = CPyStatics[7107]; /* '};' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 894, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL39: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11.f2);
    goto CPyL15;
CPyL41: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_attr);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r22);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL38;
CPyL45: ;
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r41.f3);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r45);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r46);
    goto CPyL38;
CPyL48: ;
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_setter);
    goto CPyL33;
CPyL49: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_setter);
    goto CPyL38;
CPyL50: ;
    CPy_DECREF(cpy_r_prop);
    goto CPyL32;
CPyL51: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r40);
    goto CPyL38;
}

PyObject *CPyPy_emitclass___generate_getseters_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "name", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_getseters_table", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_getseters_table(arg_cl, arg_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters_table", 869, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_getseters(PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T4CIOO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_rtype;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T4CIOO cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T2OO cpy_r_r46;
    PyObject *cpy_r_prop;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_getter;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_setter;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r0) goto CPyL17;
CPyL1: ;
    cpy_r_r1 = 0;
    cpy_r_i = 0;
    cpy_r_r2 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseters", "ClassIR", "attributes", 899, CPyStatic_emitclass___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetItemsIter(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 899, CPyStatic_emitclass___globals);
        goto CPyL39;
    }
CPyL3: ;
    cpy_r_r7 = CPyDict_NextItem(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL40;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r7.f3;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 899, CPyStatic_emitclass___globals, "str", cpy_r_r10);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_rtypes___RType)))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 899, CPyStatic_emitclass___globals, "mypyc.ir.rtypes.RType", cpy_r_r11);
        goto CPyL42;
    }
    cpy_r_attr = cpy_r_r12;
    cpy_r_rtype = cpy_r_r13;
    cpy_r_r14 = CPyDef_emitclass___generate_getter(cpy_r_cl, cpy_r_attr, cpy_r_rtype, cpy_r_emitter);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 900, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r15 = CPyStatics[163]; /* '' */
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 901, CPyStatic_emitclass___globals);
        goto CPyL43;
    }
    cpy_r_r18 = CPyDef_emitclass___generate_setter(cpy_r_cl, cpy_r_attr, cpy_r_rtype, cpy_r_emitter);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 902, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    cpy_r_r19 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseters", "ClassIR", "attributes", 903, CPyStatic_emitclass___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r19);
CPyL10: ;
    cpy_r_r20 = PyDict_Size(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = CPyTagged_Subtract(cpy_r_r21, 2);
    cpy_r_r23 = cpy_r_i & 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (cpy_r_r24) goto CPyL12;
    cpy_r_r25 = cpy_r_r22 & 1;
    cpy_r_r26 = cpy_r_r25 != 0;
    if (!cpy_r_r26) goto CPyL13;
CPyL12: ;
    cpy_r_r27 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_r22);
    if (cpy_r_r27) {
        goto CPyL14;
    } else
        goto CPyL15;
CPyL13: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r22;
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_r22);
    if (!cpy_r_r28) goto CPyL15;
CPyL14: ;
    cpy_r_r29 = CPyStatics[163]; /* '' */
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 904, CPyStatic_emitclass___globals);
        goto CPyL45;
    }
CPyL15: ;
    cpy_r_r32 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r32;
    cpy_r_i = cpy_r_r32;
    cpy_r_r33 = CPyDict_CheckSize(cpy_r_r2, cpy_r_r5);
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 899, CPyStatic_emitclass___globals);
        goto CPyL44;
    } else
        goto CPyL3;
CPyL16: ;
    cpy_r_r34 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 899, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
CPyL17: ;
    cpy_r_r35 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_properties;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitclass.py", "generate_getseters", "ClassIR", "properties", 905, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r35);
CPyL18: ;
    cpy_r_r36 = 0;
    cpy_r_r37 = PyDict_Size(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = CPyDict_GetItemsIter(cpy_r_r35);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 905, CPyStatic_emitclass___globals);
        goto CPyL46;
    }
CPyL19: ;
    cpy_r_r40 = CPyDict_NextItem(cpy_r_r39, cpy_r_r36);
    cpy_r_r41 = cpy_r_r40.f1;
    cpy_r_r36 = cpy_r_r41;
    cpy_r_r42 = cpy_r_r40.f0;
    if (!cpy_r_r42) goto CPyL47;
    cpy_r_r43 = cpy_r_r40.f2;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = cpy_r_r40.f3;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r40.f2);
    CPy_DECREF(cpy_r_r40.f3);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r45 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 905, CPyStatic_emitclass___globals, "str", cpy_r_r43);
        goto CPyL48;
    }
    PyObject *__tmp9320;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp9320 = NULL;
        goto __LL9321;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r44, 0)) == CPyType_func_ir___FuncIR))
        __tmp9320 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        __tmp9320 = NULL;
    }
    if (__tmp9320 == NULL) goto __LL9321;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r44, 1)) == CPyType_func_ir___FuncIR)
        __tmp9320 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp9320 = NULL;
    }
    if (__tmp9320 != NULL) goto __LL9322;
    if (PyTuple_GET_ITEM(cpy_r_r44, 1) == Py_None)
        __tmp9320 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp9320 = NULL;
    }
    if (__tmp9320 != NULL) goto __LL9322;
    __tmp9320 = NULL;
__LL9322: ;
    if (__tmp9320 == NULL) goto __LL9321;
    __tmp9320 = cpy_r_r44;
__LL9321: ;
    if (unlikely(__tmp9320 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, union[mypyc.ir.func_ir.FuncIR, None]]", cpy_r_r44); cpy_r_r46 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9323 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPy_INCREF(__tmp9323);
        PyObject *__tmp9324;
        if (likely(Py_TYPE(__tmp9323) == CPyType_func_ir___FuncIR))
            __tmp9324 = __tmp9323;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9323); 
            __tmp9324 = NULL;
        }
        cpy_r_r46.f0 = __tmp9324;
        PyObject *__tmp9325 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp9325);
        PyObject *__tmp9326;
        if (Py_TYPE(__tmp9325) == CPyType_func_ir___FuncIR)
            __tmp9326 = __tmp9325;
        else {
            __tmp9326 = NULL;
        }
        if (__tmp9326 != NULL) goto __LL9327;
        if (__tmp9325 == Py_None)
            __tmp9326 = __tmp9325;
        else {
            __tmp9326 = NULL;
        }
        if (__tmp9326 != NULL) goto __LL9327;
        CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", __tmp9325); 
        __tmp9326 = NULL;
__LL9327: ;
        cpy_r_r46.f1 = __tmp9326;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 905, CPyStatic_emitclass___globals);
        goto CPyL49;
    }
    cpy_r_prop = cpy_r_r45;
    cpy_r_r47 = cpy_r_r46.f0;
    CPy_INCREF(cpy_r_r47);
    cpy_r_getter = cpy_r_r47;
    cpy_r_r48 = cpy_r_r46.f1;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r46.f0);
    CPy_DECREF(cpy_r_r46.f1);
    cpy_r_setter = cpy_r_r48;
    cpy_r_r49 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_getter)->_decl;
    cpy_r_r50 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r49)->_implicit;
    if (cpy_r_r50) goto CPyL50;
CPyL23: ;
    cpy_r_r51 = CPY_GET_ATTR(cpy_r_getter, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 909, CPyStatic_emitclass___globals);
        goto CPyL51;
    }
CPyL24: ;
    cpy_r_r52 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r51)->_ret_type;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_rtype = cpy_r_r52;
    cpy_r_r53 = CPyStatics[163]; /* '' */
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 910, CPyStatic_emitclass___globals);
        goto CPyL52;
    }
    cpy_r_r56 = CPyDef_emitclass___generate_readonly_getter(cpy_r_cl, cpy_r_prop, cpy_r_rtype, cpy_r_getter, cpy_r_emitter);
    CPy_DECREF(cpy_r_rtype);
    CPy_DECREF(cpy_r_getter);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 911, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_setter != cpy_r_r57;
    if (!cpy_r_r58) goto CPyL54;
    CPy_INCREF(cpy_r_setter);
    if (likely(cpy_r_setter != Py_None))
        cpy_r_r59 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 913, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_setter);
        goto CPyL53;
    }
    cpy_r_r60 = CPY_GET_ATTR(cpy_r_r59, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 913, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
CPyL29: ;
    cpy_r_r61 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r60)->_args;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_r61, 2);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 913, CPyStatic_emitclass___globals);
        goto CPyL53;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_func_ir___RuntimeArg))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 913, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r62);
        goto CPyL53;
    }
    cpy_r_r64 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r63)->_type;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    cpy_r_arg_type = cpy_r_r64;
    cpy_r_r65 = CPyStatics[163]; /* '' */
    cpy_r_r66 = NULL;
    cpy_r_r67 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 914, CPyStatic_emitclass___globals);
        goto CPyL55;
    }
    if (likely(cpy_r_setter != Py_None))
        cpy_r_r68 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 915, CPyStatic_emitclass___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_setter);
        goto CPyL56;
    }
    cpy_r_r69 = CPyDef_emitclass___generate_property_setter(cpy_r_cl, cpy_r_prop, cpy_r_arg_type, cpy_r_r68, cpy_r_emitter);
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 915, CPyStatic_emitclass___globals);
        goto CPyL57;
    }
CPyL34: ;
    cpy_r_r70 = CPyDict_CheckSize(cpy_r_r35, cpy_r_r38);
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 905, CPyStatic_emitclass___globals);
        goto CPyL57;
    } else
        goto CPyL19;
CPyL35: ;
    cpy_r_r71 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 905, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL37;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    goto CPyL37;
CPyL40: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    goto CPyL16;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL37;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r12);
    goto CPyL37;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL37;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL37;
CPyL47: ;
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40.f2);
    CPy_DECREF(cpy_r_r40.f3);
    goto CPyL35;
CPyL48: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r44);
    goto CPyL37;
CPyL49: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    goto CPyL37;
CPyL50: ;
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_getter);
    CPy_DECREF(cpy_r_setter);
    goto CPyL34;
CPyL51: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_getter);
    CPy_DecRef(cpy_r_setter);
    goto CPyL37;
CPyL52: ;
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_getter);
    CPy_DecRef(cpy_r_setter);
    goto CPyL37;
CPyL53: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_setter);
    goto CPyL37;
CPyL54: ;
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_setter);
    goto CPyL34;
CPyL55: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_setter);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL37;
CPyL56: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL37;
CPyL57: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    goto CPyL37;
}

PyObject *CPyPy_emitclass___generate_getseters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_getseters", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_getseters(arg_cl, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getseters", 897, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_getter(PyObject *cpy_r_cl, PyObject *cpy_r_attr, PyObject *cpy_r_rtype, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attr_field;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_attr_expr;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_always_defined;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
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
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 919, CPyStatic_emitclass___globals);
        goto CPyL32;
    }
    cpy_r_attr_field = cpy_r_r0;
    cpy_r_r1 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 920, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_attr, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 923, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r6 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 923, CPyStatic_emitclass___globals);
        goto CPyL34;
    }
    cpy_r_r8 = CPyStatics[2381]; /* '(' */
    cpy_r_r9 = CPyStatics[7229]; /* ' *self, void *closure)' */
    cpy_r_r10 = CPyStr_Build(4, cpy_r_r5, cpy_r_r8, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 922, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 921, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r13 = CPyStatics[1405]; /* '{' */
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 926, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r16 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r17 = CPyStr_Build(2, cpy_r_r16, cpy_r_attr_field);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 927, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_attr_expr = cpy_r_r17;
    cpy_r_r18 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 932, CPyStatic_emitclass___globals);
        goto CPyL35;
    }
    if (cpy_r_r18) goto CPyL11;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL12;
CPyL11: ;
    cpy_r_r20 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_refcounted;
    cpy_r_r21 = cpy_r_r20 ^ 1;
    cpy_r_r19 = cpy_r_r21;
CPyL12: ;
    cpy_r_always_defined = cpy_r_r19;
    if (cpy_r_always_defined) goto CPyL36;
    cpy_r_r22 = CPyStatics[860]; /* '==' */
    cpy_r_r23 = CPyStatics[729]; /* 'self' */
    cpy_r_r24 = CPyDef_emit___Emitter___emit_undefined_attr_check(cpy_r_emitter, cpy_r_rtype, cpy_r_attr_expr, cpy_r_r22, cpy_r_r23, cpy_r_attr, cpy_r_cl, 1);
    CPy_DECREF(cpy_r_attr_expr);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 935, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r25 = CPyStatics[7230]; /* 'PyErr_SetString(PyExc_AttributeError,' */
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 936, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r28 = CPyStatics[7231]; /* '    "attribute ' */
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[146]; /* 'repr' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_attr};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals, "str", cpy_r_r34);
        goto CPyL33;
    }
    cpy_r_r36 = CPyStatics[3379]; /* ' of ' */
    cpy_r_r37 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[146]; /* 'repr' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r37};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r37);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals, "str", cpy_r_r43);
        goto CPyL38;
    }
    cpy_r_r45 = CPyStatics[7232]; /* ' undefined");' */
    cpy_r_r46 = CPyStr_Build(5, cpy_r_r28, cpy_r_r35, cpy_r_r36, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 937, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r49 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 938, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r52 = CPyStatics[1406]; /* '}' */
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 939, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
CPyL25: ;
    cpy_r_r55 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r56 = CPyStr_Build(2, cpy_r_r55, cpy_r_attr_field);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 940, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_emitter, cpy_r_r56, cpy_r_rtype, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 940, CPyStatic_emitclass___globals);
        goto CPyL33;
    }
    cpy_r_r59 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r60 = CPyStr_Build(2, cpy_r_r59, cpy_r_attr_field);
    CPy_DECREF(cpy_r_attr_field);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 941, CPyStatic_emitclass___globals);
        goto CPyL32;
    }
    cpy_r_r61 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r62 = 2;
    cpy_r_r63 = CPyDef_emit___Emitter___emit_box(cpy_r_emitter, cpy_r_r60, cpy_r_r61, cpy_r_rtype, 1, cpy_r_r62);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 941, CPyStatic_emitclass___globals);
        goto CPyL32;
    }
    cpy_r_r64 = CPyStatics[7234]; /* 'return retval;' */
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 942, CPyStatic_emitclass___globals);
        goto CPyL32;
    }
    cpy_r_r67 = CPyStatics[1406]; /* '}' */
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 943, CPyStatic_emitclass___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL33: ;
    CPy_DecRef(cpy_r_attr_field);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r5);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_attr_expr);
    goto CPyL32;
CPyL36: ;
    CPy_DECREF(cpy_r_attr_expr);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r35);
    goto CPyL32;
}

PyObject *CPyPy_emitclass___generate_getter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attr", "rtype", "emitter", 0};
    static CPyArg_Parser parser = {"OOOO:generate_getter", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attr;
    PyObject *obj_rtype;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attr, &obj_rtype, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_getter(arg_cl, arg_attr, arg_rtype, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_getter", 918, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_setter(PyObject *cpy_r_cl, PyObject *cpy_r_attr, PyObject *cpy_r_rtype, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attr_field;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_deletable;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_always_defined;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_attr_expr;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    cpy_r_r0 = CPyDef_emit___Emitter___attr(cpy_r_emitter, cpy_r_attr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 947, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    cpy_r_attr_field = cpy_r_r0;
    cpy_r_r1 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 948, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_attr, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 951, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r6 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 951, CPyStatic_emitclass___globals);
        goto CPyL65;
    }
    cpy_r_r8 = CPyStatics[2381]; /* '(' */
    cpy_r_r9 = CPyStatics[7235]; /* ' *self, PyObject *value, void *closure)' */
    cpy_r_r10 = CPyStr_Build(4, cpy_r_r5, cpy_r_r8, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 950, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 949, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r13 = CPyStatics[1405]; /* '{' */
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 954, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r16 = CPyDef_class_ir___ClassIR___is_deletable(cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 956, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_deletable = cpy_r_r16;
    if (cpy_r_deletable) goto CPyL21;
    cpy_r_r17 = CPyStatics[7236]; /* 'if (value == NULL) {' */
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 958, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r20 = CPyStatics[7230]; /* 'PyErr_SetString(PyExc_AttributeError,' */
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 959, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r23 = CPyStatics[7237]; /* '    "' */
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[146]; /* 'repr' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals, "str", cpy_r_r30);
        goto CPyL64;
    }
    cpy_r_r32 = CPyStatics[7238]; /* ' object attribute ' */
    cpy_r_r33 = CPyModule_builtins;
    cpy_r_r34 = CPyStatics[146]; /* 'repr' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r36[1] = {cpy_r_attr};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r37, 1, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals, "str", cpy_r_r38);
        goto CPyL67;
    }
    cpy_r_r40 = CPyStatics[7239]; /* ' cannot be deleted");' */
    cpy_r_r41 = CPyStr_Build(5, cpy_r_r23, cpy_r_r31, cpy_r_r32, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 961, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 960, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r44 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 963, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r47 = CPyStatics[1406]; /* '}' */
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 964, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL21: ;
    cpy_r_r50 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 969, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    if (cpy_r_r50) goto CPyL24;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL25;
CPyL24: ;
    cpy_r_r52 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_refcounted;
    cpy_r_r53 = cpy_r_r52 ^ 1;
    cpy_r_r51 = cpy_r_r53;
CPyL25: ;
    cpy_r_always_defined = cpy_r_r51;
    cpy_r_r54 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_refcounted;
    if (!cpy_r_r54) goto CPyL33;
CPyL26: ;
    cpy_r_r55 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r56 = CPyStr_Build(2, cpy_r_r55, cpy_r_attr_field);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 972, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_attr_expr = cpy_r_r56;
    if (cpy_r_always_defined) goto CPyL68;
    cpy_r_r57 = CPyStatics[863]; /* '!=' */
    cpy_r_r58 = CPyStatics[729]; /* 'self' */
    cpy_r_r59 = 2;
    cpy_r_r60 = CPyDef_emit___Emitter___emit_undefined_attr_check(cpy_r_emitter, cpy_r_rtype, cpy_r_attr_expr, cpy_r_r57, cpy_r_r58, cpy_r_attr, cpy_r_cl, cpy_r_r59);
    CPy_DECREF(cpy_r_attr_expr);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 974, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL29: ;
    cpy_r_r61 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r62 = CPyStr_Build(2, cpy_r_r61, cpy_r_attr_field);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 975, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r63 = 2;
    cpy_r_r64 = 2;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_r62, cpy_r_rtype, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 975, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    if (cpy_r_always_defined) goto CPyL33;
    cpy_r_r66 = CPyStatics[1406]; /* '}' */
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 977, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL33: ;
    if (!cpy_r_deletable) goto CPyL35;
    cpy_r_r69 = CPyStatics[7241]; /* 'if (value != NULL) {' */
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 980, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL35: ;
    cpy_r_r72 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_unboxed;
    if (!cpy_r_r72) goto CPyL38;
CPyL36: ;
    cpy_r_r73 = CPyStatics[2242]; /* 'value' */
    cpy_r_r74 = CPyStatics[7242]; /* 'tmp' */
    cpy_r_r75 = CPyStatics[7243]; /* '-1' */
    cpy_r_r76 = CPyDef_emit___ReturnHandler(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 983, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r77 = 2;
    cpy_r_r78 = 2;
    cpy_r_r79 = 2;
    cpy_r_r80 = CPyDef_emit___Emitter___emit_unbox(cpy_r_emitter, cpy_r_r73, cpy_r_r74, cpy_r_rtype, 1, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 983, CPyStatic_emitclass___globals);
        goto CPyL64;
    } else
        goto CPyL47;
CPyL38: ;
    cpy_r_r81 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r81 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 984, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r83 = CPyDef_sametype___is_same_type(cpy_r_rtype, cpy_r_r81);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 984, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    if (!cpy_r_r83) goto CPyL44;
    cpy_r_r84 = CPyStatics[7244]; /* 'PyObject *tmp = value;' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 985, CPyStatic_emitclass___globals);
        goto CPyL64;
    } else
        goto CPyL47;
CPyL44: ;
    cpy_r_r87 = CPyStatics[2242]; /* 'value' */
    cpy_r_r88 = CPyStatics[7242]; /* 'tmp' */
    cpy_r_r89 = NULL;
    cpy_r_r90 = 2;
    cpy_r_r91 = 2;
    cpy_r_r92 = NULL;
    cpy_r_r93 = 2;
    cpy_r_r94 = CPyDef_emit___Emitter___emit_cast(cpy_r_emitter, cpy_r_r87, cpy_r_r88, cpy_r_rtype, 1, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 987, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r95 = CPyStatics[7245]; /* 'if (!tmp)' */
    cpy_r_r96 = CPyStatics[7246]; /* '    return -1;' */
    cpy_r_r97 = PyTuple_Pack(2, cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 988, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r98 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 988, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL47: ;
    cpy_r_r99 = CPyStatics[7242]; /* 'tmp' */
    cpy_r_r100 = 2;
    cpy_r_r101 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_emitter, cpy_r_r99, cpy_r_rtype, cpy_r_r100);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 989, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r102 = CPyStatics[7166]; /* 'self->' */
    cpy_r_r103 = CPyStatics[7247]; /* ' = tmp;' */
    cpy_r_r104 = CPyStr_Build(3, cpy_r_r102, cpy_r_attr_field, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 990, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r105 = NULL;
    cpy_r_r106 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 990, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r107 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_error_overlap;
    if (!cpy_r_r107) goto CPyL53;
CPyL51: ;
    if (cpy_r_always_defined) goto CPyL53;
    cpy_r_r108 = CPyStatics[7242]; /* 'tmp' */
    cpy_r_r109 = CPyStatics[729]; /* 'self' */
    cpy_r_r110 = CPyDef_emit___Emitter___emit_attr_bitmap_set(cpy_r_emitter, cpy_r_r108, cpy_r_r109, cpy_r_rtype, cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 992, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
CPyL53: ;
    if (!cpy_r_deletable) goto CPyL70;
    cpy_r_r111 = CPyStatics[6961]; /* '} else' */
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 995, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r114 = CPyStatics[7248]; /* '    self->' */
    cpy_r_r115 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r116 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_emitter, cpy_r_rtype);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 996, CPyStatic_emitclass___globals);
        goto CPyL64;
    }
    cpy_r_r117 = CPyStatics[6886]; /* ';' */
    cpy_r_r118 = CPyStr_Build(5, cpy_r_r114, cpy_r_attr_field, cpy_r_r115, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_attr_field);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 996, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    cpy_r_r119 = NULL;
    cpy_r_r120 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r118, cpy_r_r119);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 996, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    cpy_r_r121 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_error_overlap;
    if (!cpy_r_r121) goto CPyL60;
CPyL59: ;
    cpy_r_r122 = CPyStatics[729]; /* 'self' */
    cpy_r_r123 = CPyDef_emit___Emitter___emit_attr_bitmap_clear(cpy_r_emitter, cpy_r_r122, cpy_r_rtype, cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 998, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
CPyL60: ;
    cpy_r_r124 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 999, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    cpy_r_r127 = CPyStatics[1406]; /* '}' */
    cpy_r_r128 = NULL;
    cpy_r_r129 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 1000, CPyStatic_emitclass___globals);
        goto CPyL63;
    }
    return 1;
CPyL63: ;
    cpy_r_r130 = 2;
    return cpy_r_r130;
CPyL64: ;
    CPy_DecRef(cpy_r_attr_field);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r5);
    goto CPyL63;
CPyL66: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r24);
    goto CPyL63;
CPyL67: ;
    CPy_DecRef(cpy_r_attr_field);
    CPy_DecRef(cpy_r_r31);
    goto CPyL63;
CPyL68: ;
    CPy_DECREF(cpy_r_attr_expr);
    goto CPyL29;
CPyL69: ;
    CPy_DecRef(cpy_r_attr_field);
    goto CPyL39;
CPyL70: ;
    CPy_DECREF(cpy_r_attr_field);
    goto CPyL60;
}

PyObject *CPyPy_emitclass___generate_setter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attr", "rtype", "emitter", 0};
    static CPyArg_Parser parser = {"OOOO:generate_setter", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attr;
    PyObject *obj_rtype;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attr, &obj_rtype, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_setter(arg_cl, arg_attr, arg_rtype, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_setter", 946, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_readonly_getter(PyObject *cpy_r_cl, PyObject *cpy_r_attr, PyObject *cpy_r_rtype, PyObject *cpy_r_func_ir, PyObject *cpy_r_emitter) {
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
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyStatics[7113]; /* 'static PyObject *' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1006, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r3 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitclass___getter_name(cpy_r_cl, cpy_r_attr, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1009, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r5 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1009, CPyStatic_emitclass___globals);
        goto CPyL20;
    }
    cpy_r_r7 = CPyStatics[2381]; /* '(' */
    cpy_r_r8 = CPyStatics[7229]; /* ' *self, void *closure)' */
    cpy_r_r9 = CPyStr_Build(4, cpy_r_r4, cpy_r_r7, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1008, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1007, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r12 = CPyStatics[1405]; /* '{' */
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1012, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r15 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_unboxed;
    if (!cpy_r_r15) goto CPyL14;
CPyL7: ;
    cpy_r_r16 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_rtype);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1016, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r17 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r18 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_func_ir___FuncIR___cname(cpy_r_func_ir, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1016, CPyStatic_emitclass___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyStatics[7249]; /* 'retval = ' */
    cpy_r_r21 = CPyStatics[7250]; /* '((PyObject *) self);' */
    cpy_r_r22 = CPyStr_Build(5, cpy_r_r16, cpy_r_r20, cpy_r_r17, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1015, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1014, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r25 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r26 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r27 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r25, cpy_r_rtype, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1019, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r28 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r29 = CPyStatics[7251]; /* 'retbox' */
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_box(cpy_r_emitter, cpy_r_r28, cpy_r_r29, cpy_r_rtype, 1, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1020, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r32 = CPyStatics[7252]; /* 'return retbox;' */
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1021, CPyStatic_emitclass___globals);
        goto CPyL19;
    } else
        goto CPyL17;
CPyL14: ;
    cpy_r_r35 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r36 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r37 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_func_ir___FuncIR___cname(cpy_r_func_ir, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1024, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r39 = CPyStatics[7250]; /* '((PyObject *) self);' */
    cpy_r_r40 = CPyStr_Build(4, cpy_r_r35, cpy_r_r36, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1024, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1023, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
CPyL17: ;
    cpy_r_r43 = CPyStatics[1406]; /* '}' */
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1026, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL20: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL19;
}

PyObject *CPyPy_emitclass___generate_readonly_getter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attr", "rtype", "func_ir", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_readonly_getter", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attr;
    PyObject *obj_rtype;
    PyObject *obj_func_ir;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attr, &obj_rtype, &obj_func_ir, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_func_ir;
    if (likely(Py_TYPE(obj_func_ir) == CPyType_func_ir___FuncIR))
        arg_func_ir = obj_func_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_func_ir); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_readonly_getter(arg_cl, arg_attr, arg_rtype, arg_func_ir, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_readonly_getter", 1003, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___generate_property_setter(PyObject *cpy_r_cl, PyObject *cpy_r_attr, PyObject *cpy_r_arg_type, PyObject *cpy_r_func_ir, PyObject *cpy_r_emitter) {
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
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = CPyStatics[7181]; /* 'static int' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1032, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r3 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitclass___setter_name(cpy_r_cl, cpy_r_attr, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1035, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r5 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1035, CPyStatic_emitclass___globals);
        goto CPyL19;
    }
    cpy_r_r7 = CPyStatics[2381]; /* '(' */
    cpy_r_r8 = CPyStatics[7235]; /* ' *self, PyObject *value, void *closure)' */
    cpy_r_r9 = CPyStr_Build(4, cpy_r_r4, cpy_r_r7, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1034, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1033, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r12 = CPyStatics[1405]; /* '{' */
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1038, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r15 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_arg_type)->_is_unboxed;
    if (!cpy_r_r15) goto CPyL12;
CPyL7: ;
    cpy_r_r16 = CPyStatics[2242]; /* 'value' */
    cpy_r_r17 = CPyStatics[7242]; /* 'tmp' */
    cpy_r_r18 = CPyStatics[7243]; /* '-1' */
    cpy_r_r19 = CPyDef_emit___ReturnHandler(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1040, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_emit___Emitter___emit_unbox(cpy_r_emitter, cpy_r_r16, cpy_r_r17, cpy_r_arg_type, 1, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1040, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r24 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r25 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_func_ir___FuncIR___cname(cpy_r_func_ir, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1042, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r27 = CPyStatics[7253]; /* '((PyObject *) self, tmp);' */
    cpy_r_r28 = CPyStr_Build(3, cpy_r_r24, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1042, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1041, CPyStatic_emitclass___globals);
        goto CPyL18;
    } else
        goto CPyL15;
CPyL12: ;
    cpy_r_r31 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r32 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_func_ir___FuncIR___cname(cpy_r_func_ir, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1046, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r34 = CPyStatics[7254]; /* '((PyObject *) self, value);' */
    cpy_r_r35 = CPyStr_Build(3, cpy_r_r31, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1046, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1045, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
CPyL15: ;
    cpy_r_r38 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1048, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    cpy_r_r41 = CPyStatics[1406]; /* '}' */
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1049, CPyStatic_emitclass___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL19: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
}

PyObject *CPyPy_emitclass___generate_property_setter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "attr", "arg_type", "func_ir", "emitter", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_property_setter", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_attr;
    PyObject *obj_arg_type;
    PyObject *obj_func_ir;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_attr, &obj_arg_type, &obj_func_ir, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_arg_type;
    if (likely(PyObject_TypeCheck(obj_arg_type, CPyType_rtypes___RType)))
        arg_arg_type = obj_arg_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_arg_type); 
        goto fail;
    }
    PyObject *arg_func_ir;
    if (likely(Py_TYPE(obj_func_ir) == CPyType_func_ir___FuncIR))
        arg_func_ir = obj_func_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_func_ir); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___generate_property_setter(arg_cl, arg_attr, arg_arg_type, arg_func_ir, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "generate_property_setter", 1029, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass___has_managed_dict(PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    tuple_T2II cpy_r_r0;
    tuple_T2II cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r1.f0 = 6;
    cpy_r_r1.f1 = 24;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9328 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp9328);
    PyObject *__tmp9329 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp9329);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9330 = CPyTagged_StealAsObject(cpy_r_r1.f0);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp9330);
    PyObject *__tmp9331 = CPyTagged_StealAsObject(cpy_r_r1.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp9331);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "has_managed_dict", 1058, CPyStatic_emitclass___globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "has_managed_dict", 1058, CPyStatic_emitclass___globals);
        goto CPyL11;
    }
    if (cpy_r_r5) goto CPyL4;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL10;
CPyL4: ;
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_has_dict;
    if (cpy_r_r7) goto CPyL6;
CPyL5: ;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL9;
CPyL6: ;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[7255]; /* 'PyBaseExceptionObject' */
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r9, cpy_r_r10, 3);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "has_managed_dict", 1060, CPyStatic_emitclass___globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "has_managed_dict", 1060, CPyStatic_emitclass___globals);
        goto CPyL11;
    }
    cpy_r_r8 = cpy_r_r12;
CPyL9: ;
    cpy_r_r6 = cpy_r_r8;
CPyL10: ;
    return cpy_r_r6;
CPyL11: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_emitclass___has_managed_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "emitter", 0};
    static CPyArg_Parser parser = {"OO:has_managed_dict", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitclass___has_managed_dict(arg_cl, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitclass.py", "has_managed_dict", 1052, CPyStatic_emitclass___globals);
    return NULL;
}

char CPyDef_emitclass_____top_level__(void) {
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
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
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
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    tuple_T2OO cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    tuple_T2OO cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    tuple_T2OO cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    tuple_T2OO cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    tuple_T2OO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    tuple_T2OO cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    tuple_T2OO cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    tuple_T2OO cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2OO cpy_r_r132;
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
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    tuple_T2OO cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    tuple_T2OO cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    tuple_T2OO cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    tuple_T2OO cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    tuple_T2OO cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    tuple_T2OO cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    tuple_T2OO cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    tuple_T2OO cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    tuple_T2OO cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    tuple_T2OO cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    tuple_T2OO cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    tuple_T2OO cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    tuple_T2OO cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    tuple_T2OO cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    tuple_T2OO cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    tuple_T2OO cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    tuple_T2OO cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    tuple_T2OO cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    tuple_T2OO cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    tuple_T2OO cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    tuple_T2OO cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    tuple_T2OO cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    tuple_T2OO cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    tuple_T2OO cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    tuple_T2OO cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    tuple_T2OO cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    tuple_T2OO cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    tuple_T2OO cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    tuple_T2OO cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    tuple_T2OO cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    tuple_T2OO cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    tuple_T2OO cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    tuple_T2OO cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    tuple_T2OO cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    tuple_T2OO cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    tuple_T2OO cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    tuple_T2OO cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    tuple_T2OO cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    tuple_T2OO cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    tuple_T2OO cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    tuple_T2OO cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    tuple_T2OO cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    tuple_T2OO cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    tuple_T2OO cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    tuple_T2OO cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    tuple_T2OO cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    tuple_T2OO cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    tuple_T2OO cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    tuple_T2OO cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    tuple_T2OO cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    tuple_T2OO cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    tuple_T2OO cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    tuple_T2OO cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
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
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    int32_t cpy_r_r530;
    char cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    tuple_T2OO cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    tuple_T2OO cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    tuple_T2OO cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    int32_t cpy_r_r556;
    char cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    tuple_T3OOO cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    tuple_T3OOO cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    tuple_T3OOO cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    tuple_T3OOO cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    CPyPtr cpy_r_r587;
    CPyPtr cpy_r_r588;
    CPyPtr cpy_r_r589;
    CPyPtr cpy_r_r590;
    CPyPtr cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    int32_t cpy_r_r594;
    char cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    int32_t cpy_r_r598;
    char cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    int32_t cpy_r_r602;
    char cpy_r_r603;
    char cpy_r_r604;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", -1, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_emitclass___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 3, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9949]; /* ('Callable', 'Mapping', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_emitclass___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 5, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9950]; /* ('Emitter', 'HeaderDeclaration', 'ReturnHandler') */
    cpy_r_r14 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r15 = CPyStatic_emitclass___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 7, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___codegen___emit = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___codegen___emit);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9951]; /* ('native_function_header',) */
    cpy_r_r18 = CPyStatics[7257]; /* 'mypyc.codegen.emitfunc' */
    cpy_r_r19 = CPyStatic_emitclass___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 8, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___codegen___emitfunc = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___codegen___emitfunc);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9952]; /* ('generate_bin_op_wrapper', 'generate_bool_wrapper',
                                     'generate_contains_wrapper', 'generate_dunder_wrapper',
                                     'generate_get_wrapper', 'generate_hash_wrapper',
                                     'generate_ipow_wrapper', 'generate_len_wrapper',
                                     'generate_richcompare_wrapper',
                                     'generate_set_del_item_wrapper') */
    cpy_r_r22 = CPyStatics[7268]; /* 'mypyc.codegen.emitwrapper' */
    cpy_r_r23 = CPyStatic_emitclass___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 9, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___codegen___emitwrapper = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___codegen___emitwrapper);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9953]; /* ('BITMAP_BITS', 'BITMAP_TYPE', 'NATIVE_PREFIX', 'PREFIX',
                                     'REG_PREFIX', 'use_fastcall') */
    cpy_r_r26 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r27 = CPyStatic_emitclass___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 21, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___common = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9954]; /* ('ClassIR', 'VTableEntries') */
    cpy_r_r30 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r31 = CPyStatic_emitclass___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 22, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9955]; /* ('FUNC_CLASSMETHOD', 'FUNC_STATICMETHOD', 'FuncDecl',
                                     'FuncIR') */
    cpy_r_r34 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r35 = CPyStatic_emitclass___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 23, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9956]; /* ('RTuple', 'RType', 'object_rprimitive') */
    cpy_r_r38 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r39 = CPyStatic_emitclass___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 24, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9957]; /* ('NameGenerator',) */
    cpy_r_r42 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r43 = CPyStatic_emitclass___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 25, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___namegen = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9947]; /* ('is_same_type',) */
    cpy_r_r46 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r47 = CPyStatic_emitclass___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 26, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    CPyModule_mypyc___sametype = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___sametype);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatic_emitclass___globals;
    cpy_r_r50 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 41, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r52 = (PyObject *)CPyType_class_ir___ClassIR;
    cpy_r_r53 = (PyObject *)CPyType_func_ir___FuncIR;
    cpy_r_r54 = (PyObject *)CPyType_emit___Emitter;
    cpy_r_r55 = PyList_New(3);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 41, CPyStatic_emitclass___globals);
        goto CPyL109;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    CPy_INCREF(cpy_r_r52);
    *(PyObject * *)cpy_r_r57 = cpy_r_r52;
    cpy_r_r58 = cpy_r_r57 + 8;
    CPy_INCREF(cpy_r_r53);
    *(PyObject * *)cpy_r_r58 = cpy_r_r53;
    cpy_r_r59 = cpy_r_r57 + 16;
    CPy_INCREF(cpy_r_r54);
    *(PyObject * *)cpy_r_r59 = cpy_r_r54;
    cpy_r_r60 = (PyObject *)&PyUnicode_Type;
    cpy_r_r61.f0 = cpy_r_r55;
    cpy_r_r61.f1 = cpy_r_r60;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r62 = PyTuple_New(2);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9332 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp9332);
    PyObject *__tmp9333 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp9333);
    cpy_r_r63 = PyObject_GetItem(cpy_r_r51, cpy_r_r62);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 41, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r64 = CPyStatic_emitclass___globals;
    cpy_r_r65 = CPyStatics[7274]; /* 'SlotGenerator' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 41, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r68 = CPyStatic_emitclass___globals;
    cpy_r_r69 = CPyStatics[511]; /* 'Mapping' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r71 = (PyObject *)&PyUnicode_Type;
    cpy_r_r72 = CPyStatic_emitclass___globals;
    cpy_r_r73 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL110;
    }
    cpy_r_r75 = (PyObject *)&PyUnicode_Type;
    cpy_r_r76 = CPyStatic_emitclass___globals;
    cpy_r_r77 = CPyStatics[7274]; /* 'SlotGenerator' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL111;
    }
    cpy_r_r79.f0 = cpy_r_r75;
    cpy_r_r79.f1 = cpy_r_r78;
    CPy_INCREF(cpy_r_r79.f0);
    CPy_INCREF(cpy_r_r79.f1);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = PyTuple_New(2);
    if (unlikely(cpy_r_r80 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9334 = cpy_r_r79.f0;
    PyTuple_SET_ITEM(cpy_r_r80, 0, __tmp9334);
    PyObject *__tmp9335 = cpy_r_r79.f1;
    PyTuple_SET_ITEM(cpy_r_r80, 1, __tmp9335);
    cpy_r_r81 = PyObject_GetItem(cpy_r_r74, cpy_r_r80);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL110;
    }
    cpy_r_r82.f0 = cpy_r_r71;
    cpy_r_r82.f1 = cpy_r_r81;
    CPy_INCREF(cpy_r_r82.f0);
    CPy_INCREF(cpy_r_r82.f1);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9336 = cpy_r_r82.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp9336);
    PyObject *__tmp9337 = cpy_r_r82.f1;
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp9337);
    cpy_r_r84 = PyObject_GetItem(cpy_r_r70, cpy_r_r83);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r85 = CPyStatic_emitclass___globals;
    cpy_r_r86 = CPyStatics[7275]; /* 'SlotTable' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r85, cpy_r_r86, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 42, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r89 = CPyStatics[288]; /* '__init__' */
    cpy_r_r90 = CPyStatics[7276]; /* 'tp_init' */
    cpy_r_r91 = CPyDef_emitclass_____mypyc_lambda__0_obj();
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 45, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r92.f0 = cpy_r_r90;
    cpy_r_r92.f1 = cpy_r_r91;
    CPy_INCREF(cpy_r_r92.f0);
    CPy_INCREF(cpy_r_r92.f1);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = CPyStatics[706]; /* '__call__' */
    cpy_r_r94 = CPyStatics[7125]; /* 'tp_call' */
    cpy_r_r95 = CPyDef_emitclass_____mypyc_lambda__1_obj();
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 46, CPyStatic_emitclass___globals);
        goto CPyL112;
    }
    cpy_r_r96.f0 = cpy_r_r94;
    cpy_r_r96.f1 = cpy_r_r95;
    CPy_INCREF(cpy_r_r96.f0);
    CPy_INCREF(cpy_r_r96.f1);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = CPyStatics[1418]; /* '__str__' */
    cpy_r_r98 = CPyStatics[7277]; /* 'tp_str' */
    cpy_r_r99 = CPyStatic_emitclass___globals;
    cpy_r_r100 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r101 = CPyDict_GetItem(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 47, CPyStatic_emitclass___globals);
        goto CPyL113;
    }
    cpy_r_r102.f0 = cpy_r_r98;
    cpy_r_r102.f1 = cpy_r_r101;
    CPy_INCREF(cpy_r_r102.f0);
    CPy_INCREF(cpy_r_r102.f1);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r103 = CPyStatics[5430]; /* '__repr__' */
    cpy_r_r104 = CPyStatics[7279]; /* 'tp_repr' */
    cpy_r_r105 = CPyStatic_emitclass___globals;
    cpy_r_r106 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 48, CPyStatic_emitclass___globals);
        goto CPyL114;
    }
    cpy_r_r108.f0 = cpy_r_r104;
    cpy_r_r108.f1 = cpy_r_r107;
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = CPyStatics[824]; /* '__next__' */
    cpy_r_r110 = CPyStatics[7280]; /* 'tp_iternext' */
    cpy_r_r111 = CPyStatic_emitclass___globals;
    cpy_r_r112 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 49, CPyStatic_emitclass___globals);
        goto CPyL115;
    }
    cpy_r_r114.f0 = cpy_r_r110;
    cpy_r_r114.f1 = cpy_r_r113;
    CPy_INCREF(cpy_r_r114.f0);
    CPy_INCREF(cpy_r_r114.f1);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r116 = CPyStatics[7281]; /* 'tp_iter' */
    cpy_r_r117 = CPyStatic_emitclass___globals;
    cpy_r_r118 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 50, CPyStatic_emitclass___globals);
        goto CPyL116;
    }
    cpy_r_r120.f0 = cpy_r_r116;
    cpy_r_r120.f1 = cpy_r_r119;
    CPy_INCREF(cpy_r_r120.f0);
    CPy_INCREF(cpy_r_r120.f1);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = CPyStatics[2031]; /* '__hash__' */
    cpy_r_r122 = CPyStatics[7282]; /* 'tp_hash' */
    cpy_r_r123 = CPyStatic_emitclass___globals;
    cpy_r_r124 = CPyStatics[7263]; /* 'generate_hash_wrapper' */
    cpy_r_r125 = CPyDict_GetItem(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 51, CPyStatic_emitclass___globals);
        goto CPyL117;
    }
    cpy_r_r126.f0 = cpy_r_r122;
    cpy_r_r126.f1 = cpy_r_r125;
    CPy_INCREF(cpy_r_r126.f0);
    CPy_INCREF(cpy_r_r126.f1);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = CPyStatics[707]; /* '__get__' */
    cpy_r_r128 = CPyStatics[7283]; /* 'tp_descr_get' */
    cpy_r_r129 = CPyStatic_emitclass___globals;
    cpy_r_r130 = CPyStatics[7262]; /* 'generate_get_wrapper' */
    cpy_r_r131 = CPyDict_GetItem(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 52, CPyStatic_emitclass___globals);
        goto CPyL118;
    }
    cpy_r_r132.f0 = cpy_r_r128;
    cpy_r_r132.f1 = cpy_r_r131;
    CPy_INCREF(cpy_r_r132.f0);
    CPy_INCREF(cpy_r_r132.f1);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9338 = cpy_r_r92.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp9338);
    PyObject *__tmp9339 = cpy_r_r92.f1;
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp9339);
    cpy_r_r134 = PyTuple_New(2);
    if (unlikely(cpy_r_r134 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9340 = cpy_r_r96.f0;
    PyTuple_SET_ITEM(cpy_r_r134, 0, __tmp9340);
    PyObject *__tmp9341 = cpy_r_r96.f1;
    PyTuple_SET_ITEM(cpy_r_r134, 1, __tmp9341);
    cpy_r_r135 = PyTuple_New(2);
    if (unlikely(cpy_r_r135 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9342 = cpy_r_r102.f0;
    PyTuple_SET_ITEM(cpy_r_r135, 0, __tmp9342);
    PyObject *__tmp9343 = cpy_r_r102.f1;
    PyTuple_SET_ITEM(cpy_r_r135, 1, __tmp9343);
    cpy_r_r136 = PyTuple_New(2);
    if (unlikely(cpy_r_r136 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9344 = cpy_r_r108.f0;
    PyTuple_SET_ITEM(cpy_r_r136, 0, __tmp9344);
    PyObject *__tmp9345 = cpy_r_r108.f1;
    PyTuple_SET_ITEM(cpy_r_r136, 1, __tmp9345);
    cpy_r_r137 = PyTuple_New(2);
    if (unlikely(cpy_r_r137 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9346 = cpy_r_r114.f0;
    PyTuple_SET_ITEM(cpy_r_r137, 0, __tmp9346);
    PyObject *__tmp9347 = cpy_r_r114.f1;
    PyTuple_SET_ITEM(cpy_r_r137, 1, __tmp9347);
    cpy_r_r138 = PyTuple_New(2);
    if (unlikely(cpy_r_r138 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9348 = cpy_r_r120.f0;
    PyTuple_SET_ITEM(cpy_r_r138, 0, __tmp9348);
    PyObject *__tmp9349 = cpy_r_r120.f1;
    PyTuple_SET_ITEM(cpy_r_r138, 1, __tmp9349);
    cpy_r_r139 = PyTuple_New(2);
    if (unlikely(cpy_r_r139 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9350 = cpy_r_r126.f0;
    PyTuple_SET_ITEM(cpy_r_r139, 0, __tmp9350);
    PyObject *__tmp9351 = cpy_r_r126.f1;
    PyTuple_SET_ITEM(cpy_r_r139, 1, __tmp9351);
    cpy_r_r140 = PyTuple_New(2);
    if (unlikely(cpy_r_r140 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9352 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r140, 0, __tmp9352);
    PyObject *__tmp9353 = cpy_r_r132.f1;
    PyTuple_SET_ITEM(cpy_r_r140, 1, __tmp9353);
    cpy_r_r141 = CPyDict_Build(8, cpy_r_r89, cpy_r_r133, cpy_r_r93, cpy_r_r134, cpy_r_r97, cpy_r_r135, cpy_r_r103, cpy_r_r136, cpy_r_r109, cpy_r_r137, cpy_r_r115, cpy_r_r138, cpy_r_r121, cpy_r_r139, cpy_r_r127, cpy_r_r140);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 44, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r142 = CPyStatic_emitclass___globals;
    cpy_r_r143 = CPyStatics[7094]; /* 'SLOT_DEFS' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r142, cpy_r_r143, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 44, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r146 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r147 = CPyStatics[7284]; /* 'mp_subscript' */
    cpy_r_r148 = CPyStatic_emitclass___globals;
    cpy_r_r149 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r150 = CPyDict_GetItem(cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 56, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r151.f0 = cpy_r_r147;
    cpy_r_r151.f1 = cpy_r_r150;
    CPy_INCREF(cpy_r_r151.f0);
    CPy_INCREF(cpy_r_r151.f1);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r152 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r153 = CPyStatics[7285]; /* 'mp_ass_subscript' */
    cpy_r_r154 = CPyStatic_emitclass___globals;
    cpy_r_r155 = CPyStatics[7267]; /* 'generate_set_del_item_wrapper' */
    cpy_r_r156 = CPyDict_GetItem(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 57, CPyStatic_emitclass___globals);
        goto CPyL119;
    }
    cpy_r_r157.f0 = cpy_r_r153;
    cpy_r_r157.f1 = cpy_r_r156;
    CPy_INCREF(cpy_r_r157.f0);
    CPy_INCREF(cpy_r_r157.f1);
    CPy_DECREF(cpy_r_r156);
    cpy_r_r158 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r159 = CPyStatics[7285]; /* 'mp_ass_subscript' */
    cpy_r_r160 = CPyStatic_emitclass___globals;
    cpy_r_r161 = CPyStatics[7267]; /* 'generate_set_del_item_wrapper' */
    cpy_r_r162 = CPyDict_GetItem(cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 58, CPyStatic_emitclass___globals);
        goto CPyL120;
    }
    cpy_r_r163.f0 = cpy_r_r159;
    cpy_r_r163.f1 = cpy_r_r162;
    CPy_INCREF(cpy_r_r163.f0);
    CPy_INCREF(cpy_r_r163.f1);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r164 = CPyStatics[848]; /* '__len__' */
    cpy_r_r165 = CPyStatics[7286]; /* 'mp_length' */
    cpy_r_r166 = CPyStatic_emitclass___globals;
    cpy_r_r167 = CPyStatics[7265]; /* 'generate_len_wrapper' */
    cpy_r_r168 = CPyDict_GetItem(cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 59, CPyStatic_emitclass___globals);
        goto CPyL121;
    }
    cpy_r_r169.f0 = cpy_r_r165;
    cpy_r_r169.f1 = cpy_r_r168;
    CPy_INCREF(cpy_r_r169.f0);
    CPy_INCREF(cpy_r_r169.f1);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r170 = PyTuple_New(2);
    if (unlikely(cpy_r_r170 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9354 = cpy_r_r151.f0;
    PyTuple_SET_ITEM(cpy_r_r170, 0, __tmp9354);
    PyObject *__tmp9355 = cpy_r_r151.f1;
    PyTuple_SET_ITEM(cpy_r_r170, 1, __tmp9355);
    cpy_r_r171 = PyTuple_New(2);
    if (unlikely(cpy_r_r171 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9356 = cpy_r_r157.f0;
    PyTuple_SET_ITEM(cpy_r_r171, 0, __tmp9356);
    PyObject *__tmp9357 = cpy_r_r157.f1;
    PyTuple_SET_ITEM(cpy_r_r171, 1, __tmp9357);
    cpy_r_r172 = PyTuple_New(2);
    if (unlikely(cpy_r_r172 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9358 = cpy_r_r163.f0;
    PyTuple_SET_ITEM(cpy_r_r172, 0, __tmp9358);
    PyObject *__tmp9359 = cpy_r_r163.f1;
    PyTuple_SET_ITEM(cpy_r_r172, 1, __tmp9359);
    cpy_r_r173 = PyTuple_New(2);
    if (unlikely(cpy_r_r173 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9360 = cpy_r_r169.f0;
    PyTuple_SET_ITEM(cpy_r_r173, 0, __tmp9360);
    PyObject *__tmp9361 = cpy_r_r169.f1;
    PyTuple_SET_ITEM(cpy_r_r173, 1, __tmp9361);
    cpy_r_r174 = CPyDict_Build(4, cpy_r_r146, cpy_r_r170, cpy_r_r152, cpy_r_r171, cpy_r_r158, cpy_r_r172, cpy_r_r164, cpy_r_r173);
    CPy_DECREF(cpy_r_r170);
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 55, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r175 = CPyStatic_emitclass___globals;
    cpy_r_r176 = CPyStatics[7287]; /* 'AS_MAPPING_SLOT_DEFS' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_r175, cpy_r_r176, cpy_r_r174);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 55, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r179 = CPyStatics[1188]; /* '__contains__' */
    cpy_r_r180 = CPyStatics[7288]; /* 'sq_contains' */
    cpy_r_r181 = CPyStatic_emitclass___globals;
    cpy_r_r182 = CPyStatics[7260]; /* 'generate_contains_wrapper' */
    cpy_r_r183 = CPyDict_GetItem(cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 62, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r184.f0 = cpy_r_r180;
    cpy_r_r184.f1 = cpy_r_r183;
    CPy_INCREF(cpy_r_r184.f0);
    CPy_INCREF(cpy_r_r184.f1);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r185 = PyTuple_New(2);
    if (unlikely(cpy_r_r185 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9362 = cpy_r_r184.f0;
    PyTuple_SET_ITEM(cpy_r_r185, 0, __tmp9362);
    PyObject *__tmp9363 = cpy_r_r184.f1;
    PyTuple_SET_ITEM(cpy_r_r185, 1, __tmp9363);
    cpy_r_r186 = CPyDict_Build(1, cpy_r_r179, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 62, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r187 = CPyStatic_emitclass___globals;
    cpy_r_r188 = CPyStatics[7289]; /* 'AS_SEQUENCE_SLOT_DEFS' */
    cpy_r_r189 = CPyDict_SetItem(cpy_r_r187, cpy_r_r188, cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 62, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r191 = CPyStatics[847]; /* '__bool__' */
    cpy_r_r192 = CPyStatics[7290]; /* 'nb_bool' */
    cpy_r_r193 = CPyStatic_emitclass___globals;
    cpy_r_r194 = CPyStatics[7259]; /* 'generate_bool_wrapper' */
    cpy_r_r195 = CPyDict_GetItem(cpy_r_r193, cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 66, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r196.f0 = cpy_r_r192;
    cpy_r_r196.f1 = cpy_r_r195;
    CPy_INCREF(cpy_r_r196.f0);
    CPy_INCREF(cpy_r_r196.f1);
    CPy_DECREF(cpy_r_r195);
    cpy_r_r197 = CPyStatics[5427]; /* '__int__' */
    cpy_r_r198 = CPyStatics[7291]; /* 'nb_int' */
    cpy_r_r199 = CPyStatic_emitclass___globals;
    cpy_r_r200 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r201 = CPyDict_GetItem(cpy_r_r199, cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 67, CPyStatic_emitclass___globals);
        goto CPyL122;
    }
    cpy_r_r202.f0 = cpy_r_r198;
    cpy_r_r202.f1 = cpy_r_r201;
    CPy_INCREF(cpy_r_r202.f0);
    CPy_INCREF(cpy_r_r202.f1);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r203 = CPyStatics[5425]; /* '__float__' */
    cpy_r_r204 = CPyStatics[7292]; /* 'nb_float' */
    cpy_r_r205 = CPyStatic_emitclass___globals;
    cpy_r_r206 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r207 = CPyDict_GetItem(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 68, CPyStatic_emitclass___globals);
        goto CPyL123;
    }
    cpy_r_r208.f0 = cpy_r_r204;
    cpy_r_r208.f1 = cpy_r_r207;
    CPy_INCREF(cpy_r_r208.f0);
    CPy_INCREF(cpy_r_r208.f1);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r209 = CPyStatics[3359]; /* '__neg__' */
    cpy_r_r210 = CPyStatics[7293]; /* 'nb_negative' */
    cpy_r_r211 = CPyStatic_emitclass___globals;
    cpy_r_r212 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r213 = CPyDict_GetItem(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 69, CPyStatic_emitclass___globals);
        goto CPyL124;
    }
    cpy_r_r214.f0 = cpy_r_r210;
    cpy_r_r214.f1 = cpy_r_r213;
    CPy_INCREF(cpy_r_r214.f0);
    CPy_INCREF(cpy_r_r214.f1);
    CPy_DECREF(cpy_r_r213);
    cpy_r_r215 = CPyStatics[3361]; /* '__pos__' */
    cpy_r_r216 = CPyStatics[7294]; /* 'nb_positive' */
    cpy_r_r217 = CPyStatic_emitclass___globals;
    cpy_r_r218 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r219 = CPyDict_GetItem(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 70, CPyStatic_emitclass___globals);
        goto CPyL125;
    }
    cpy_r_r220.f0 = cpy_r_r216;
    cpy_r_r220.f1 = cpy_r_r219;
    CPy_INCREF(cpy_r_r220.f0);
    CPy_INCREF(cpy_r_r220.f1);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r221 = CPyStatics[5421]; /* '__abs__' */
    cpy_r_r222 = CPyStatics[7295]; /* 'nb_absolute' */
    cpy_r_r223 = CPyStatic_emitclass___globals;
    cpy_r_r224 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 71, CPyStatic_emitclass___globals);
        goto CPyL126;
    }
    cpy_r_r226.f0 = cpy_r_r222;
    cpy_r_r226.f1 = cpy_r_r225;
    CPy_INCREF(cpy_r_r226.f0);
    CPy_INCREF(cpy_r_r226.f1);
    CPy_DECREF(cpy_r_r225);
    cpy_r_r227 = CPyStatics[3363]; /* '__invert__' */
    cpy_r_r228 = CPyStatics[7296]; /* 'nb_invert' */
    cpy_r_r229 = CPyStatic_emitclass___globals;
    cpy_r_r230 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r231 = CPyDict_GetItem(cpy_r_r229, cpy_r_r230);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 72, CPyStatic_emitclass___globals);
        goto CPyL127;
    }
    cpy_r_r232.f0 = cpy_r_r228;
    cpy_r_r232.f1 = cpy_r_r231;
    CPy_INCREF(cpy_r_r232.f0);
    CPy_INCREF(cpy_r_r232.f1);
    CPy_DECREF(cpy_r_r231);
    cpy_r_r233 = CPyStatics[1184]; /* '__add__' */
    cpy_r_r234 = CPyStatics[7297]; /* 'nb_add' */
    cpy_r_r235 = CPyStatic_emitclass___globals;
    cpy_r_r236 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r237 = CPyDict_GetItem(cpy_r_r235, cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 74, CPyStatic_emitclass___globals);
        goto CPyL128;
    }
    cpy_r_r238.f0 = cpy_r_r234;
    cpy_r_r238.f1 = cpy_r_r237;
    CPy_INCREF(cpy_r_r238.f0);
    CPy_INCREF(cpy_r_r238.f1);
    CPy_DECREF(cpy_r_r237);
    cpy_r_r239 = CPyStatics[1186]; /* '__radd__' */
    cpy_r_r240 = CPyStatics[7297]; /* 'nb_add' */
    cpy_r_r241 = CPyStatic_emitclass___globals;
    cpy_r_r242 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 75, CPyStatic_emitclass___globals);
        goto CPyL129;
    }
    cpy_r_r244.f0 = cpy_r_r240;
    cpy_r_r244.f1 = cpy_r_r243;
    CPy_INCREF(cpy_r_r244.f0);
    CPy_INCREF(cpy_r_r244.f1);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r245 = CPyStatics[4183]; /* '__sub__' */
    cpy_r_r246 = CPyStatics[7298]; /* 'nb_subtract' */
    cpy_r_r247 = CPyStatic_emitclass___globals;
    cpy_r_r248 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r249 = CPyDict_GetItem(cpy_r_r247, cpy_r_r248);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 76, CPyStatic_emitclass___globals);
        goto CPyL130;
    }
    cpy_r_r250.f0 = cpy_r_r246;
    cpy_r_r250.f1 = cpy_r_r249;
    CPy_INCREF(cpy_r_r250.f0);
    CPy_INCREF(cpy_r_r250.f1);
    CPy_DECREF(cpy_r_r249);
    cpy_r_r251 = CPyStatics[4203]; /* '__rsub__' */
    cpy_r_r252 = CPyStatics[7298]; /* 'nb_subtract' */
    cpy_r_r253 = CPyStatic_emitclass___globals;
    cpy_r_r254 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r255 = CPyDict_GetItem(cpy_r_r253, cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 77, CPyStatic_emitclass___globals);
        goto CPyL131;
    }
    cpy_r_r256.f0 = cpy_r_r252;
    cpy_r_r256.f1 = cpy_r_r255;
    CPy_INCREF(cpy_r_r256.f0);
    CPy_INCREF(cpy_r_r256.f1);
    CPy_DECREF(cpy_r_r255);
    cpy_r_r257 = CPyStatics[1196]; /* '__mul__' */
    cpy_r_r258 = CPyStatics[7299]; /* 'nb_multiply' */
    cpy_r_r259 = CPyStatic_emitclass___globals;
    cpy_r_r260 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r261 = CPyDict_GetItem(cpy_r_r259, cpy_r_r260);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 78, CPyStatic_emitclass___globals);
        goto CPyL132;
    }
    cpy_r_r262.f0 = cpy_r_r258;
    cpy_r_r262.f1 = cpy_r_r261;
    CPy_INCREF(cpy_r_r262.f0);
    CPy_INCREF(cpy_r_r262.f1);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r263 = CPyStatics[4204]; /* '__rmul__' */
    cpy_r_r264 = CPyStatics[7299]; /* 'nb_multiply' */
    cpy_r_r265 = CPyStatic_emitclass___globals;
    cpy_r_r266 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r267 = CPyDict_GetItem(cpy_r_r265, cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 79, CPyStatic_emitclass___globals);
        goto CPyL133;
    }
    cpy_r_r268.f0 = cpy_r_r264;
    cpy_r_r268.f1 = cpy_r_r267;
    CPy_INCREF(cpy_r_r268.f0);
    CPy_INCREF(cpy_r_r268.f1);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r269 = CPyStatics[4185]; /* '__mod__' */
    cpy_r_r270 = CPyStatics[7300]; /* 'nb_remainder' */
    cpy_r_r271 = CPyStatic_emitclass___globals;
    cpy_r_r272 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r273 = CPyDict_GetItem(cpy_r_r271, cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 80, CPyStatic_emitclass___globals);
        goto CPyL134;
    }
    cpy_r_r274.f0 = cpy_r_r270;
    cpy_r_r274.f1 = cpy_r_r273;
    CPy_INCREF(cpy_r_r274.f0);
    CPy_INCREF(cpy_r_r274.f1);
    CPy_DECREF(cpy_r_r273);
    cpy_r_r275 = CPyStatics[4206]; /* '__rmod__' */
    cpy_r_r276 = CPyStatics[7300]; /* 'nb_remainder' */
    cpy_r_r277 = CPyStatic_emitclass___globals;
    cpy_r_r278 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r279 = CPyDict_GetItem(cpy_r_r277, cpy_r_r278);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 81, CPyStatic_emitclass___globals);
        goto CPyL135;
    }
    cpy_r_r280.f0 = cpy_r_r276;
    cpy_r_r280.f1 = cpy_r_r279;
    CPy_INCREF(cpy_r_r280.f0);
    CPy_INCREF(cpy_r_r280.f1);
    CPy_DECREF(cpy_r_r279);
    cpy_r_r281 = CPyStatics[4184]; /* '__truediv__' */
    cpy_r_r282 = CPyStatics[7301]; /* 'nb_true_divide' */
    cpy_r_r283 = CPyStatic_emitclass___globals;
    cpy_r_r284 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r285 = CPyDict_GetItem(cpy_r_r283, cpy_r_r284);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 82, CPyStatic_emitclass___globals);
        goto CPyL136;
    }
    cpy_r_r286.f0 = cpy_r_r282;
    cpy_r_r286.f1 = cpy_r_r285;
    CPy_INCREF(cpy_r_r286.f0);
    CPy_INCREF(cpy_r_r286.f1);
    CPy_DECREF(cpy_r_r285);
    cpy_r_r287 = CPyStatics[4205]; /* '__rtruediv__' */
    cpy_r_r288 = CPyStatics[7301]; /* 'nb_true_divide' */
    cpy_r_r289 = CPyStatic_emitclass___globals;
    cpy_r_r290 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r291 = CPyDict_GetItem(cpy_r_r289, cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 83, CPyStatic_emitclass___globals);
        goto CPyL137;
    }
    cpy_r_r292.f0 = cpy_r_r288;
    cpy_r_r292.f1 = cpy_r_r291;
    CPy_INCREF(cpy_r_r292.f0);
    CPy_INCREF(cpy_r_r292.f1);
    CPy_DECREF(cpy_r_r291);
    cpy_r_r293 = CPyStatics[4188]; /* '__floordiv__' */
    cpy_r_r294 = CPyStatics[7302]; /* 'nb_floor_divide' */
    cpy_r_r295 = CPyStatic_emitclass___globals;
    cpy_r_r296 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r297 = CPyDict_GetItem(cpy_r_r295, cpy_r_r296);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 84, CPyStatic_emitclass___globals);
        goto CPyL138;
    }
    cpy_r_r298.f0 = cpy_r_r294;
    cpy_r_r298.f1 = cpy_r_r297;
    CPy_INCREF(cpy_r_r298.f0);
    CPy_INCREF(cpy_r_r298.f1);
    CPy_DECREF(cpy_r_r297);
    cpy_r_r299 = CPyStatics[4208]; /* '__rfloordiv__' */
    cpy_r_r300 = CPyStatics[7302]; /* 'nb_floor_divide' */
    cpy_r_r301 = CPyStatic_emitclass___globals;
    cpy_r_r302 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r303 = CPyDict_GetItem(cpy_r_r301, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 85, CPyStatic_emitclass___globals);
        goto CPyL139;
    }
    cpy_r_r304.f0 = cpy_r_r300;
    cpy_r_r304.f1 = cpy_r_r303;
    CPy_INCREF(cpy_r_r304.f0);
    CPy_INCREF(cpy_r_r304.f1);
    CPy_DECREF(cpy_r_r303);
    cpy_r_r305 = CPyStatics[4187]; /* '__divmod__' */
    cpy_r_r306 = CPyStatics[7303]; /* 'nb_divmod' */
    cpy_r_r307 = CPyStatic_emitclass___globals;
    cpy_r_r308 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r309 = CPyDict_GetItem(cpy_r_r307, cpy_r_r308);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 86, CPyStatic_emitclass___globals);
        goto CPyL140;
    }
    cpy_r_r310.f0 = cpy_r_r306;
    cpy_r_r310.f1 = cpy_r_r309;
    CPy_INCREF(cpy_r_r310.f0);
    CPy_INCREF(cpy_r_r310.f1);
    CPy_DECREF(cpy_r_r309);
    cpy_r_r311 = CPyStatics[4207]; /* '__rdivmod__' */
    cpy_r_r312 = CPyStatics[7303]; /* 'nb_divmod' */
    cpy_r_r313 = CPyStatic_emitclass___globals;
    cpy_r_r314 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r315 = CPyDict_GetItem(cpy_r_r313, cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 87, CPyStatic_emitclass___globals);
        goto CPyL141;
    }
    cpy_r_r316.f0 = cpy_r_r312;
    cpy_r_r316.f1 = cpy_r_r315;
    CPy_INCREF(cpy_r_r316.f0);
    CPy_INCREF(cpy_r_r316.f1);
    CPy_DECREF(cpy_r_r315);
    cpy_r_r317 = CPyStatics[4194]; /* '__lshift__' */
    cpy_r_r318 = CPyStatics[7304]; /* 'nb_lshift' */
    cpy_r_r319 = CPyStatic_emitclass___globals;
    cpy_r_r320 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r321 = CPyDict_GetItem(cpy_r_r319, cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 88, CPyStatic_emitclass___globals);
        goto CPyL142;
    }
    cpy_r_r322.f0 = cpy_r_r318;
    cpy_r_r322.f1 = cpy_r_r321;
    CPy_INCREF(cpy_r_r322.f0);
    CPy_INCREF(cpy_r_r322.f1);
    CPy_DECREF(cpy_r_r321);
    cpy_r_r323 = CPyStatics[4214]; /* '__rlshift__' */
    cpy_r_r324 = CPyStatics[7304]; /* 'nb_lshift' */
    cpy_r_r325 = CPyStatic_emitclass___globals;
    cpy_r_r326 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r327 = CPyDict_GetItem(cpy_r_r325, cpy_r_r326);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 89, CPyStatic_emitclass___globals);
        goto CPyL143;
    }
    cpy_r_r328.f0 = cpy_r_r324;
    cpy_r_r328.f1 = cpy_r_r327;
    CPy_INCREF(cpy_r_r328.f0);
    CPy_INCREF(cpy_r_r328.f1);
    CPy_DECREF(cpy_r_r327);
    cpy_r_r329 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r330 = CPyStatics[7305]; /* 'nb_rshift' */
    cpy_r_r331 = CPyStatic_emitclass___globals;
    cpy_r_r332 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r333 = CPyDict_GetItem(cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 90, CPyStatic_emitclass___globals);
        goto CPyL144;
    }
    cpy_r_r334.f0 = cpy_r_r330;
    cpy_r_r334.f1 = cpy_r_r333;
    CPy_INCREF(cpy_r_r334.f0);
    CPy_INCREF(cpy_r_r334.f1);
    CPy_DECREF(cpy_r_r333);
    cpy_r_r335 = CPyStatics[4215]; /* '__rrshift__' */
    cpy_r_r336 = CPyStatics[7305]; /* 'nb_rshift' */
    cpy_r_r337 = CPyStatic_emitclass___globals;
    cpy_r_r338 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r339 = CPyDict_GetItem(cpy_r_r337, cpy_r_r338);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 91, CPyStatic_emitclass___globals);
        goto CPyL145;
    }
    cpy_r_r340.f0 = cpy_r_r336;
    cpy_r_r340.f1 = cpy_r_r339;
    CPy_INCREF(cpy_r_r340.f0);
    CPy_INCREF(cpy_r_r340.f1);
    CPy_DECREF(cpy_r_r339);
    cpy_r_r341 = CPyStatics[4191]; /* '__and__' */
    cpy_r_r342 = CPyStatics[7306]; /* 'nb_and' */
    cpy_r_r343 = CPyStatic_emitclass___globals;
    cpy_r_r344 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r345 = CPyDict_GetItem(cpy_r_r343, cpy_r_r344);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 92, CPyStatic_emitclass___globals);
        goto CPyL146;
    }
    cpy_r_r346.f0 = cpy_r_r342;
    cpy_r_r346.f1 = cpy_r_r345;
    CPy_INCREF(cpy_r_r346.f0);
    CPy_INCREF(cpy_r_r346.f1);
    CPy_DECREF(cpy_r_r345);
    cpy_r_r347 = CPyStatics[4211]; /* '__rand__' */
    cpy_r_r348 = CPyStatics[7306]; /* 'nb_and' */
    cpy_r_r349 = CPyStatic_emitclass___globals;
    cpy_r_r350 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r351 = CPyDict_GetItem(cpy_r_r349, cpy_r_r350);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 93, CPyStatic_emitclass___globals);
        goto CPyL147;
    }
    cpy_r_r352.f0 = cpy_r_r348;
    cpy_r_r352.f1 = cpy_r_r351;
    CPy_INCREF(cpy_r_r352.f0);
    CPy_INCREF(cpy_r_r352.f1);
    CPy_DECREF(cpy_r_r351);
    cpy_r_r353 = CPyStatics[4192]; /* '__or__' */
    cpy_r_r354 = CPyStatics[7307]; /* 'nb_or' */
    cpy_r_r355 = CPyStatic_emitclass___globals;
    cpy_r_r356 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r357 = CPyDict_GetItem(cpy_r_r355, cpy_r_r356);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 94, CPyStatic_emitclass___globals);
        goto CPyL148;
    }
    cpy_r_r358.f0 = cpy_r_r354;
    cpy_r_r358.f1 = cpy_r_r357;
    CPy_INCREF(cpy_r_r358.f0);
    CPy_INCREF(cpy_r_r358.f1);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r359 = CPyStatics[4212]; /* '__ror__' */
    cpy_r_r360 = CPyStatics[7307]; /* 'nb_or' */
    cpy_r_r361 = CPyStatic_emitclass___globals;
    cpy_r_r362 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r363 = CPyDict_GetItem(cpy_r_r361, cpy_r_r362);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 95, CPyStatic_emitclass___globals);
        goto CPyL149;
    }
    cpy_r_r364.f0 = cpy_r_r360;
    cpy_r_r364.f1 = cpy_r_r363;
    CPy_INCREF(cpy_r_r364.f0);
    CPy_INCREF(cpy_r_r364.f1);
    CPy_DECREF(cpy_r_r363);
    cpy_r_r365 = CPyStatics[4193]; /* '__xor__' */
    cpy_r_r366 = CPyStatics[7308]; /* 'nb_xor' */
    cpy_r_r367 = CPyStatic_emitclass___globals;
    cpy_r_r368 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r369 = CPyDict_GetItem(cpy_r_r367, cpy_r_r368);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 96, CPyStatic_emitclass___globals);
        goto CPyL150;
    }
    cpy_r_r370.f0 = cpy_r_r366;
    cpy_r_r370.f1 = cpy_r_r369;
    CPy_INCREF(cpy_r_r370.f0);
    CPy_INCREF(cpy_r_r370.f1);
    CPy_DECREF(cpy_r_r369);
    cpy_r_r371 = CPyStatics[4213]; /* '__rxor__' */
    cpy_r_r372 = CPyStatics[7308]; /* 'nb_xor' */
    cpy_r_r373 = CPyStatic_emitclass___globals;
    cpy_r_r374 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r375 = CPyDict_GetItem(cpy_r_r373, cpy_r_r374);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 97, CPyStatic_emitclass___globals);
        goto CPyL151;
    }
    cpy_r_r376.f0 = cpy_r_r372;
    cpy_r_r376.f1 = cpy_r_r375;
    CPy_INCREF(cpy_r_r376.f0);
    CPy_INCREF(cpy_r_r376.f1);
    CPy_DECREF(cpy_r_r375);
    cpy_r_r377 = CPyStatics[4190]; /* '__matmul__' */
    cpy_r_r378 = CPyStatics[7309]; /* 'nb_matrix_multiply' */
    cpy_r_r379 = CPyStatic_emitclass___globals;
    cpy_r_r380 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r381 = CPyDict_GetItem(cpy_r_r379, cpy_r_r380);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 98, CPyStatic_emitclass___globals);
        goto CPyL152;
    }
    cpy_r_r382.f0 = cpy_r_r378;
    cpy_r_r382.f1 = cpy_r_r381;
    CPy_INCREF(cpy_r_r382.f0);
    CPy_INCREF(cpy_r_r382.f1);
    CPy_DECREF(cpy_r_r381);
    cpy_r_r383 = CPyStatics[4210]; /* '__rmatmul__' */
    cpy_r_r384 = CPyStatics[7309]; /* 'nb_matrix_multiply' */
    cpy_r_r385 = CPyStatic_emitclass___globals;
    cpy_r_r386 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r387 = CPyDict_GetItem(cpy_r_r385, cpy_r_r386);
    if (unlikely(cpy_r_r387 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 99, CPyStatic_emitclass___globals);
        goto CPyL153;
    }
    cpy_r_r388.f0 = cpy_r_r384;
    cpy_r_r388.f1 = cpy_r_r387;
    CPy_INCREF(cpy_r_r388.f0);
    CPy_INCREF(cpy_r_r388.f1);
    CPy_DECREF(cpy_r_r387);
    cpy_r_r389 = CPyStatics[5434]; /* '__iadd__' */
    cpy_r_r390 = CPyStatics[7310]; /* 'nb_inplace_add' */
    cpy_r_r391 = CPyStatic_emitclass___globals;
    cpy_r_r392 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r393 = CPyDict_GetItem(cpy_r_r391, cpy_r_r392);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 101, CPyStatic_emitclass___globals);
        goto CPyL154;
    }
    cpy_r_r394.f0 = cpy_r_r390;
    cpy_r_r394.f1 = cpy_r_r393;
    CPy_INCREF(cpy_r_r394.f0);
    CPy_INCREF(cpy_r_r394.f1);
    CPy_DECREF(cpy_r_r393);
    cpy_r_r395 = CPyStatics[5445]; /* '__isub__' */
    cpy_r_r396 = CPyStatics[7311]; /* 'nb_inplace_subtract' */
    cpy_r_r397 = CPyStatic_emitclass___globals;
    cpy_r_r398 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r399 = CPyDict_GetItem(cpy_r_r397, cpy_r_r398);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 102, CPyStatic_emitclass___globals);
        goto CPyL155;
    }
    cpy_r_r400.f0 = cpy_r_r396;
    cpy_r_r400.f1 = cpy_r_r399;
    CPy_INCREF(cpy_r_r400.f0);
    CPy_INCREF(cpy_r_r400.f1);
    CPy_DECREF(cpy_r_r399);
    cpy_r_r401 = CPyStatics[5441]; /* '__imul__' */
    cpy_r_r402 = CPyStatics[7312]; /* 'nb_inplace_multiply' */
    cpy_r_r403 = CPyStatic_emitclass___globals;
    cpy_r_r404 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r405 = CPyDict_GetItem(cpy_r_r403, cpy_r_r404);
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 103, CPyStatic_emitclass___globals);
        goto CPyL156;
    }
    cpy_r_r406.f0 = cpy_r_r402;
    cpy_r_r406.f1 = cpy_r_r405;
    CPy_INCREF(cpy_r_r406.f0);
    CPy_INCREF(cpy_r_r406.f1);
    CPy_DECREF(cpy_r_r405);
    cpy_r_r407 = CPyStatics[5440]; /* '__imod__' */
    cpy_r_r408 = CPyStatics[7313]; /* 'nb_inplace_remainder' */
    cpy_r_r409 = CPyStatic_emitclass___globals;
    cpy_r_r410 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r411 = CPyDict_GetItem(cpy_r_r409, cpy_r_r410);
    if (unlikely(cpy_r_r411 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 104, CPyStatic_emitclass___globals);
        goto CPyL157;
    }
    cpy_r_r412.f0 = cpy_r_r408;
    cpy_r_r412.f1 = cpy_r_r411;
    CPy_INCREF(cpy_r_r412.f0);
    CPy_INCREF(cpy_r_r412.f1);
    CPy_DECREF(cpy_r_r411);
    cpy_r_r413 = CPyStatics[5446]; /* '__itruediv__' */
    cpy_r_r414 = CPyStatics[7314]; /* 'nb_inplace_true_divide' */
    cpy_r_r415 = CPyStatic_emitclass___globals;
    cpy_r_r416 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r417 = CPyDict_GetItem(cpy_r_r415, cpy_r_r416);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 105, CPyStatic_emitclass___globals);
        goto CPyL158;
    }
    cpy_r_r418.f0 = cpy_r_r414;
    cpy_r_r418.f1 = cpy_r_r417;
    CPy_INCREF(cpy_r_r418.f0);
    CPy_INCREF(cpy_r_r418.f1);
    CPy_DECREF(cpy_r_r417);
    cpy_r_r419 = CPyStatics[5437]; /* '__ifloordiv__' */
    cpy_r_r420 = CPyStatics[7315]; /* 'nb_inplace_floor_divide' */
    cpy_r_r421 = CPyStatic_emitclass___globals;
    cpy_r_r422 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r423 = CPyDict_GetItem(cpy_r_r421, cpy_r_r422);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 106, CPyStatic_emitclass___globals);
        goto CPyL159;
    }
    cpy_r_r424.f0 = cpy_r_r420;
    cpy_r_r424.f1 = cpy_r_r423;
    CPy_INCREF(cpy_r_r424.f0);
    CPy_INCREF(cpy_r_r424.f1);
    CPy_DECREF(cpy_r_r423);
    cpy_r_r425 = CPyStatics[5438]; /* '__ilshift__' */
    cpy_r_r426 = CPyStatics[7316]; /* 'nb_inplace_lshift' */
    cpy_r_r427 = CPyStatic_emitclass___globals;
    cpy_r_r428 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r429 = CPyDict_GetItem(cpy_r_r427, cpy_r_r428);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 107, CPyStatic_emitclass___globals);
        goto CPyL160;
    }
    cpy_r_r430.f0 = cpy_r_r426;
    cpy_r_r430.f1 = cpy_r_r429;
    CPy_INCREF(cpy_r_r430.f0);
    CPy_INCREF(cpy_r_r430.f1);
    CPy_DECREF(cpy_r_r429);
    cpy_r_r431 = CPyStatics[5444]; /* '__irshift__' */
    cpy_r_r432 = CPyStatics[7317]; /* 'nb_inplace_rshift' */
    cpy_r_r433 = CPyStatic_emitclass___globals;
    cpy_r_r434 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r435 = CPyDict_GetItem(cpy_r_r433, cpy_r_r434);
    if (unlikely(cpy_r_r435 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 108, CPyStatic_emitclass___globals);
        goto CPyL161;
    }
    cpy_r_r436.f0 = cpy_r_r432;
    cpy_r_r436.f1 = cpy_r_r435;
    CPy_INCREF(cpy_r_r436.f0);
    CPy_INCREF(cpy_r_r436.f1);
    CPy_DECREF(cpy_r_r435);
    cpy_r_r437 = CPyStatics[5435]; /* '__iand__' */
    cpy_r_r438 = CPyStatics[7318]; /* 'nb_inplace_and' */
    cpy_r_r439 = CPyStatic_emitclass___globals;
    cpy_r_r440 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r441 = CPyDict_GetItem(cpy_r_r439, cpy_r_r440);
    if (unlikely(cpy_r_r441 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 109, CPyStatic_emitclass___globals);
        goto CPyL162;
    }
    cpy_r_r442.f0 = cpy_r_r438;
    cpy_r_r442.f1 = cpy_r_r441;
    CPy_INCREF(cpy_r_r442.f0);
    CPy_INCREF(cpy_r_r442.f1);
    CPy_DECREF(cpy_r_r441);
    cpy_r_r443 = CPyStatics[5442]; /* '__ior__' */
    cpy_r_r444 = CPyStatics[7319]; /* 'nb_inplace_or' */
    cpy_r_r445 = CPyStatic_emitclass___globals;
    cpy_r_r446 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r447 = CPyDict_GetItem(cpy_r_r445, cpy_r_r446);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 110, CPyStatic_emitclass___globals);
        goto CPyL163;
    }
    cpy_r_r448.f0 = cpy_r_r444;
    cpy_r_r448.f1 = cpy_r_r447;
    CPy_INCREF(cpy_r_r448.f0);
    CPy_INCREF(cpy_r_r448.f1);
    CPy_DECREF(cpy_r_r447);
    cpy_r_r449 = CPyStatics[5447]; /* '__ixor__' */
    cpy_r_r450 = CPyStatics[7320]; /* 'nb_inplace_xor' */
    cpy_r_r451 = CPyStatic_emitclass___globals;
    cpy_r_r452 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r453 = CPyDict_GetItem(cpy_r_r451, cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 111, CPyStatic_emitclass___globals);
        goto CPyL164;
    }
    cpy_r_r454.f0 = cpy_r_r450;
    cpy_r_r454.f1 = cpy_r_r453;
    CPy_INCREF(cpy_r_r454.f0);
    CPy_INCREF(cpy_r_r454.f1);
    CPy_DECREF(cpy_r_r453);
    cpy_r_r455 = CPyStatics[5439]; /* '__imatmul__' */
    cpy_r_r456 = CPyStatics[7321]; /* 'nb_inplace_matrix_multiply' */
    cpy_r_r457 = CPyStatic_emitclass___globals;
    cpy_r_r458 = CPyStatics[7261]; /* 'generate_dunder_wrapper' */
    cpy_r_r459 = CPyDict_GetItem(cpy_r_r457, cpy_r_r458);
    if (unlikely(cpy_r_r459 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 112, CPyStatic_emitclass___globals);
        goto CPyL165;
    }
    cpy_r_r460.f0 = cpy_r_r456;
    cpy_r_r460.f1 = cpy_r_r459;
    CPy_INCREF(cpy_r_r460.f0);
    CPy_INCREF(cpy_r_r460.f1);
    CPy_DECREF(cpy_r_r459);
    cpy_r_r461 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r462 = CPyStatics[7322]; /* 'nb_power' */
    cpy_r_r463 = CPyStatic_emitclass___globals;
    cpy_r_r464 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r465 = CPyDict_GetItem(cpy_r_r463, cpy_r_r464);
    if (unlikely(cpy_r_r465 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 115, CPyStatic_emitclass___globals);
        goto CPyL166;
    }
    cpy_r_r466.f0 = cpy_r_r462;
    cpy_r_r466.f1 = cpy_r_r465;
    CPy_INCREF(cpy_r_r466.f0);
    CPy_INCREF(cpy_r_r466.f1);
    CPy_DECREF(cpy_r_r465);
    cpy_r_r467 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r468 = CPyStatics[7322]; /* 'nb_power' */
    cpy_r_r469 = CPyStatic_emitclass___globals;
    cpy_r_r470 = CPyStatics[7258]; /* 'generate_bin_op_wrapper' */
    cpy_r_r471 = CPyDict_GetItem(cpy_r_r469, cpy_r_r470);
    if (unlikely(cpy_r_r471 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 116, CPyStatic_emitclass___globals);
        goto CPyL167;
    }
    cpy_r_r472.f0 = cpy_r_r468;
    cpy_r_r472.f1 = cpy_r_r471;
    CPy_INCREF(cpy_r_r472.f0);
    CPy_INCREF(cpy_r_r472.f1);
    CPy_DECREF(cpy_r_r471);
    cpy_r_r473 = CPyStatics[5443]; /* '__ipow__' */
    cpy_r_r474 = CPyStatics[7323]; /* 'nb_inplace_power' */
    cpy_r_r475 = CPyStatic_emitclass___globals;
    cpy_r_r476 = CPyStatics[7264]; /* 'generate_ipow_wrapper' */
    cpy_r_r477 = CPyDict_GetItem(cpy_r_r475, cpy_r_r476);
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 117, CPyStatic_emitclass___globals);
        goto CPyL168;
    }
    cpy_r_r478.f0 = cpy_r_r474;
    cpy_r_r478.f1 = cpy_r_r477;
    CPy_INCREF(cpy_r_r478.f0);
    CPy_INCREF(cpy_r_r478.f1);
    CPy_DECREF(cpy_r_r477);
    cpy_r_r479 = PyTuple_New(2);
    if (unlikely(cpy_r_r479 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9364 = cpy_r_r196.f0;
    PyTuple_SET_ITEM(cpy_r_r479, 0, __tmp9364);
    PyObject *__tmp9365 = cpy_r_r196.f1;
    PyTuple_SET_ITEM(cpy_r_r479, 1, __tmp9365);
    cpy_r_r480 = PyTuple_New(2);
    if (unlikely(cpy_r_r480 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9366 = cpy_r_r202.f0;
    PyTuple_SET_ITEM(cpy_r_r480, 0, __tmp9366);
    PyObject *__tmp9367 = cpy_r_r202.f1;
    PyTuple_SET_ITEM(cpy_r_r480, 1, __tmp9367);
    cpy_r_r481 = PyTuple_New(2);
    if (unlikely(cpy_r_r481 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9368 = cpy_r_r208.f0;
    PyTuple_SET_ITEM(cpy_r_r481, 0, __tmp9368);
    PyObject *__tmp9369 = cpy_r_r208.f1;
    PyTuple_SET_ITEM(cpy_r_r481, 1, __tmp9369);
    cpy_r_r482 = PyTuple_New(2);
    if (unlikely(cpy_r_r482 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9370 = cpy_r_r214.f0;
    PyTuple_SET_ITEM(cpy_r_r482, 0, __tmp9370);
    PyObject *__tmp9371 = cpy_r_r214.f1;
    PyTuple_SET_ITEM(cpy_r_r482, 1, __tmp9371);
    cpy_r_r483 = PyTuple_New(2);
    if (unlikely(cpy_r_r483 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9372 = cpy_r_r220.f0;
    PyTuple_SET_ITEM(cpy_r_r483, 0, __tmp9372);
    PyObject *__tmp9373 = cpy_r_r220.f1;
    PyTuple_SET_ITEM(cpy_r_r483, 1, __tmp9373);
    cpy_r_r484 = PyTuple_New(2);
    if (unlikely(cpy_r_r484 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9374 = cpy_r_r226.f0;
    PyTuple_SET_ITEM(cpy_r_r484, 0, __tmp9374);
    PyObject *__tmp9375 = cpy_r_r226.f1;
    PyTuple_SET_ITEM(cpy_r_r484, 1, __tmp9375);
    cpy_r_r485 = PyTuple_New(2);
    if (unlikely(cpy_r_r485 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9376 = cpy_r_r232.f0;
    PyTuple_SET_ITEM(cpy_r_r485, 0, __tmp9376);
    PyObject *__tmp9377 = cpy_r_r232.f1;
    PyTuple_SET_ITEM(cpy_r_r485, 1, __tmp9377);
    cpy_r_r486 = PyTuple_New(2);
    if (unlikely(cpy_r_r486 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9378 = cpy_r_r238.f0;
    PyTuple_SET_ITEM(cpy_r_r486, 0, __tmp9378);
    PyObject *__tmp9379 = cpy_r_r238.f1;
    PyTuple_SET_ITEM(cpy_r_r486, 1, __tmp9379);
    cpy_r_r487 = PyTuple_New(2);
    if (unlikely(cpy_r_r487 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9380 = cpy_r_r244.f0;
    PyTuple_SET_ITEM(cpy_r_r487, 0, __tmp9380);
    PyObject *__tmp9381 = cpy_r_r244.f1;
    PyTuple_SET_ITEM(cpy_r_r487, 1, __tmp9381);
    cpy_r_r488 = PyTuple_New(2);
    if (unlikely(cpy_r_r488 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9382 = cpy_r_r250.f0;
    PyTuple_SET_ITEM(cpy_r_r488, 0, __tmp9382);
    PyObject *__tmp9383 = cpy_r_r250.f1;
    PyTuple_SET_ITEM(cpy_r_r488, 1, __tmp9383);
    cpy_r_r489 = PyTuple_New(2);
    if (unlikely(cpy_r_r489 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9384 = cpy_r_r256.f0;
    PyTuple_SET_ITEM(cpy_r_r489, 0, __tmp9384);
    PyObject *__tmp9385 = cpy_r_r256.f1;
    PyTuple_SET_ITEM(cpy_r_r489, 1, __tmp9385);
    cpy_r_r490 = PyTuple_New(2);
    if (unlikely(cpy_r_r490 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9386 = cpy_r_r262.f0;
    PyTuple_SET_ITEM(cpy_r_r490, 0, __tmp9386);
    PyObject *__tmp9387 = cpy_r_r262.f1;
    PyTuple_SET_ITEM(cpy_r_r490, 1, __tmp9387);
    cpy_r_r491 = PyTuple_New(2);
    if (unlikely(cpy_r_r491 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9388 = cpy_r_r268.f0;
    PyTuple_SET_ITEM(cpy_r_r491, 0, __tmp9388);
    PyObject *__tmp9389 = cpy_r_r268.f1;
    PyTuple_SET_ITEM(cpy_r_r491, 1, __tmp9389);
    cpy_r_r492 = PyTuple_New(2);
    if (unlikely(cpy_r_r492 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9390 = cpy_r_r274.f0;
    PyTuple_SET_ITEM(cpy_r_r492, 0, __tmp9390);
    PyObject *__tmp9391 = cpy_r_r274.f1;
    PyTuple_SET_ITEM(cpy_r_r492, 1, __tmp9391);
    cpy_r_r493 = PyTuple_New(2);
    if (unlikely(cpy_r_r493 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9392 = cpy_r_r280.f0;
    PyTuple_SET_ITEM(cpy_r_r493, 0, __tmp9392);
    PyObject *__tmp9393 = cpy_r_r280.f1;
    PyTuple_SET_ITEM(cpy_r_r493, 1, __tmp9393);
    cpy_r_r494 = PyTuple_New(2);
    if (unlikely(cpy_r_r494 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9394 = cpy_r_r286.f0;
    PyTuple_SET_ITEM(cpy_r_r494, 0, __tmp9394);
    PyObject *__tmp9395 = cpy_r_r286.f1;
    PyTuple_SET_ITEM(cpy_r_r494, 1, __tmp9395);
    cpy_r_r495 = PyTuple_New(2);
    if (unlikely(cpy_r_r495 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9396 = cpy_r_r292.f0;
    PyTuple_SET_ITEM(cpy_r_r495, 0, __tmp9396);
    PyObject *__tmp9397 = cpy_r_r292.f1;
    PyTuple_SET_ITEM(cpy_r_r495, 1, __tmp9397);
    cpy_r_r496 = PyTuple_New(2);
    if (unlikely(cpy_r_r496 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9398 = cpy_r_r298.f0;
    PyTuple_SET_ITEM(cpy_r_r496, 0, __tmp9398);
    PyObject *__tmp9399 = cpy_r_r298.f1;
    PyTuple_SET_ITEM(cpy_r_r496, 1, __tmp9399);
    cpy_r_r497 = PyTuple_New(2);
    if (unlikely(cpy_r_r497 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9400 = cpy_r_r304.f0;
    PyTuple_SET_ITEM(cpy_r_r497, 0, __tmp9400);
    PyObject *__tmp9401 = cpy_r_r304.f1;
    PyTuple_SET_ITEM(cpy_r_r497, 1, __tmp9401);
    cpy_r_r498 = PyTuple_New(2);
    if (unlikely(cpy_r_r498 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9402 = cpy_r_r310.f0;
    PyTuple_SET_ITEM(cpy_r_r498, 0, __tmp9402);
    PyObject *__tmp9403 = cpy_r_r310.f1;
    PyTuple_SET_ITEM(cpy_r_r498, 1, __tmp9403);
    cpy_r_r499 = PyTuple_New(2);
    if (unlikely(cpy_r_r499 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9404 = cpy_r_r316.f0;
    PyTuple_SET_ITEM(cpy_r_r499, 0, __tmp9404);
    PyObject *__tmp9405 = cpy_r_r316.f1;
    PyTuple_SET_ITEM(cpy_r_r499, 1, __tmp9405);
    cpy_r_r500 = PyTuple_New(2);
    if (unlikely(cpy_r_r500 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9406 = cpy_r_r322.f0;
    PyTuple_SET_ITEM(cpy_r_r500, 0, __tmp9406);
    PyObject *__tmp9407 = cpy_r_r322.f1;
    PyTuple_SET_ITEM(cpy_r_r500, 1, __tmp9407);
    cpy_r_r501 = PyTuple_New(2);
    if (unlikely(cpy_r_r501 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9408 = cpy_r_r328.f0;
    PyTuple_SET_ITEM(cpy_r_r501, 0, __tmp9408);
    PyObject *__tmp9409 = cpy_r_r328.f1;
    PyTuple_SET_ITEM(cpy_r_r501, 1, __tmp9409);
    cpy_r_r502 = PyTuple_New(2);
    if (unlikely(cpy_r_r502 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9410 = cpy_r_r334.f0;
    PyTuple_SET_ITEM(cpy_r_r502, 0, __tmp9410);
    PyObject *__tmp9411 = cpy_r_r334.f1;
    PyTuple_SET_ITEM(cpy_r_r502, 1, __tmp9411);
    cpy_r_r503 = PyTuple_New(2);
    if (unlikely(cpy_r_r503 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9412 = cpy_r_r340.f0;
    PyTuple_SET_ITEM(cpy_r_r503, 0, __tmp9412);
    PyObject *__tmp9413 = cpy_r_r340.f1;
    PyTuple_SET_ITEM(cpy_r_r503, 1, __tmp9413);
    cpy_r_r504 = PyTuple_New(2);
    if (unlikely(cpy_r_r504 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9414 = cpy_r_r346.f0;
    PyTuple_SET_ITEM(cpy_r_r504, 0, __tmp9414);
    PyObject *__tmp9415 = cpy_r_r346.f1;
    PyTuple_SET_ITEM(cpy_r_r504, 1, __tmp9415);
    cpy_r_r505 = PyTuple_New(2);
    if (unlikely(cpy_r_r505 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9416 = cpy_r_r352.f0;
    PyTuple_SET_ITEM(cpy_r_r505, 0, __tmp9416);
    PyObject *__tmp9417 = cpy_r_r352.f1;
    PyTuple_SET_ITEM(cpy_r_r505, 1, __tmp9417);
    cpy_r_r506 = PyTuple_New(2);
    if (unlikely(cpy_r_r506 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9418 = cpy_r_r358.f0;
    PyTuple_SET_ITEM(cpy_r_r506, 0, __tmp9418);
    PyObject *__tmp9419 = cpy_r_r358.f1;
    PyTuple_SET_ITEM(cpy_r_r506, 1, __tmp9419);
    cpy_r_r507 = PyTuple_New(2);
    if (unlikely(cpy_r_r507 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9420 = cpy_r_r364.f0;
    PyTuple_SET_ITEM(cpy_r_r507, 0, __tmp9420);
    PyObject *__tmp9421 = cpy_r_r364.f1;
    PyTuple_SET_ITEM(cpy_r_r507, 1, __tmp9421);
    cpy_r_r508 = PyTuple_New(2);
    if (unlikely(cpy_r_r508 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9422 = cpy_r_r370.f0;
    PyTuple_SET_ITEM(cpy_r_r508, 0, __tmp9422);
    PyObject *__tmp9423 = cpy_r_r370.f1;
    PyTuple_SET_ITEM(cpy_r_r508, 1, __tmp9423);
    cpy_r_r509 = PyTuple_New(2);
    if (unlikely(cpy_r_r509 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9424 = cpy_r_r376.f0;
    PyTuple_SET_ITEM(cpy_r_r509, 0, __tmp9424);
    PyObject *__tmp9425 = cpy_r_r376.f1;
    PyTuple_SET_ITEM(cpy_r_r509, 1, __tmp9425);
    cpy_r_r510 = PyTuple_New(2);
    if (unlikely(cpy_r_r510 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9426 = cpy_r_r382.f0;
    PyTuple_SET_ITEM(cpy_r_r510, 0, __tmp9426);
    PyObject *__tmp9427 = cpy_r_r382.f1;
    PyTuple_SET_ITEM(cpy_r_r510, 1, __tmp9427);
    cpy_r_r511 = PyTuple_New(2);
    if (unlikely(cpy_r_r511 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9428 = cpy_r_r388.f0;
    PyTuple_SET_ITEM(cpy_r_r511, 0, __tmp9428);
    PyObject *__tmp9429 = cpy_r_r388.f1;
    PyTuple_SET_ITEM(cpy_r_r511, 1, __tmp9429);
    cpy_r_r512 = PyTuple_New(2);
    if (unlikely(cpy_r_r512 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9430 = cpy_r_r394.f0;
    PyTuple_SET_ITEM(cpy_r_r512, 0, __tmp9430);
    PyObject *__tmp9431 = cpy_r_r394.f1;
    PyTuple_SET_ITEM(cpy_r_r512, 1, __tmp9431);
    cpy_r_r513 = PyTuple_New(2);
    if (unlikely(cpy_r_r513 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9432 = cpy_r_r400.f0;
    PyTuple_SET_ITEM(cpy_r_r513, 0, __tmp9432);
    PyObject *__tmp9433 = cpy_r_r400.f1;
    PyTuple_SET_ITEM(cpy_r_r513, 1, __tmp9433);
    cpy_r_r514 = PyTuple_New(2);
    if (unlikely(cpy_r_r514 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9434 = cpy_r_r406.f0;
    PyTuple_SET_ITEM(cpy_r_r514, 0, __tmp9434);
    PyObject *__tmp9435 = cpy_r_r406.f1;
    PyTuple_SET_ITEM(cpy_r_r514, 1, __tmp9435);
    cpy_r_r515 = PyTuple_New(2);
    if (unlikely(cpy_r_r515 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9436 = cpy_r_r412.f0;
    PyTuple_SET_ITEM(cpy_r_r515, 0, __tmp9436);
    PyObject *__tmp9437 = cpy_r_r412.f1;
    PyTuple_SET_ITEM(cpy_r_r515, 1, __tmp9437);
    cpy_r_r516 = PyTuple_New(2);
    if (unlikely(cpy_r_r516 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9438 = cpy_r_r418.f0;
    PyTuple_SET_ITEM(cpy_r_r516, 0, __tmp9438);
    PyObject *__tmp9439 = cpy_r_r418.f1;
    PyTuple_SET_ITEM(cpy_r_r516, 1, __tmp9439);
    cpy_r_r517 = PyTuple_New(2);
    if (unlikely(cpy_r_r517 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9440 = cpy_r_r424.f0;
    PyTuple_SET_ITEM(cpy_r_r517, 0, __tmp9440);
    PyObject *__tmp9441 = cpy_r_r424.f1;
    PyTuple_SET_ITEM(cpy_r_r517, 1, __tmp9441);
    cpy_r_r518 = PyTuple_New(2);
    if (unlikely(cpy_r_r518 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9442 = cpy_r_r430.f0;
    PyTuple_SET_ITEM(cpy_r_r518, 0, __tmp9442);
    PyObject *__tmp9443 = cpy_r_r430.f1;
    PyTuple_SET_ITEM(cpy_r_r518, 1, __tmp9443);
    cpy_r_r519 = PyTuple_New(2);
    if (unlikely(cpy_r_r519 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9444 = cpy_r_r436.f0;
    PyTuple_SET_ITEM(cpy_r_r519, 0, __tmp9444);
    PyObject *__tmp9445 = cpy_r_r436.f1;
    PyTuple_SET_ITEM(cpy_r_r519, 1, __tmp9445);
    cpy_r_r520 = PyTuple_New(2);
    if (unlikely(cpy_r_r520 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9446 = cpy_r_r442.f0;
    PyTuple_SET_ITEM(cpy_r_r520, 0, __tmp9446);
    PyObject *__tmp9447 = cpy_r_r442.f1;
    PyTuple_SET_ITEM(cpy_r_r520, 1, __tmp9447);
    cpy_r_r521 = PyTuple_New(2);
    if (unlikely(cpy_r_r521 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9448 = cpy_r_r448.f0;
    PyTuple_SET_ITEM(cpy_r_r521, 0, __tmp9448);
    PyObject *__tmp9449 = cpy_r_r448.f1;
    PyTuple_SET_ITEM(cpy_r_r521, 1, __tmp9449);
    cpy_r_r522 = PyTuple_New(2);
    if (unlikely(cpy_r_r522 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9450 = cpy_r_r454.f0;
    PyTuple_SET_ITEM(cpy_r_r522, 0, __tmp9450);
    PyObject *__tmp9451 = cpy_r_r454.f1;
    PyTuple_SET_ITEM(cpy_r_r522, 1, __tmp9451);
    cpy_r_r523 = PyTuple_New(2);
    if (unlikely(cpy_r_r523 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9452 = cpy_r_r460.f0;
    PyTuple_SET_ITEM(cpy_r_r523, 0, __tmp9452);
    PyObject *__tmp9453 = cpy_r_r460.f1;
    PyTuple_SET_ITEM(cpy_r_r523, 1, __tmp9453);
    cpy_r_r524 = PyTuple_New(2);
    if (unlikely(cpy_r_r524 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9454 = cpy_r_r466.f0;
    PyTuple_SET_ITEM(cpy_r_r524, 0, __tmp9454);
    PyObject *__tmp9455 = cpy_r_r466.f1;
    PyTuple_SET_ITEM(cpy_r_r524, 1, __tmp9455);
    cpy_r_r525 = PyTuple_New(2);
    if (unlikely(cpy_r_r525 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9456 = cpy_r_r472.f0;
    PyTuple_SET_ITEM(cpy_r_r525, 0, __tmp9456);
    PyObject *__tmp9457 = cpy_r_r472.f1;
    PyTuple_SET_ITEM(cpy_r_r525, 1, __tmp9457);
    cpy_r_r526 = PyTuple_New(2);
    if (unlikely(cpy_r_r526 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9458 = cpy_r_r478.f0;
    PyTuple_SET_ITEM(cpy_r_r526, 0, __tmp9458);
    PyObject *__tmp9459 = cpy_r_r478.f1;
    PyTuple_SET_ITEM(cpy_r_r526, 1, __tmp9459);
    cpy_r_r527 = CPyDict_Build(48, cpy_r_r191, cpy_r_r479, cpy_r_r197, cpy_r_r480, cpy_r_r203, cpy_r_r481, cpy_r_r209, cpy_r_r482, cpy_r_r215, cpy_r_r483, cpy_r_r221, cpy_r_r484, cpy_r_r227, cpy_r_r485, cpy_r_r233, cpy_r_r486, cpy_r_r239, cpy_r_r487, cpy_r_r245, cpy_r_r488, cpy_r_r251, cpy_r_r489, cpy_r_r257, cpy_r_r490, cpy_r_r263, cpy_r_r491, cpy_r_r269, cpy_r_r492, cpy_r_r275, cpy_r_r493, cpy_r_r281, cpy_r_r494, cpy_r_r287, cpy_r_r495, cpy_r_r293, cpy_r_r496, cpy_r_r299, cpy_r_r497, cpy_r_r305, cpy_r_r498, cpy_r_r311, cpy_r_r499, cpy_r_r317, cpy_r_r500, cpy_r_r323, cpy_r_r501, cpy_r_r329, cpy_r_r502, cpy_r_r335, cpy_r_r503, cpy_r_r341, cpy_r_r504, cpy_r_r347, cpy_r_r505, cpy_r_r353, cpy_r_r506, cpy_r_r359, cpy_r_r507, cpy_r_r365, cpy_r_r508, cpy_r_r371, cpy_r_r509, cpy_r_r377, cpy_r_r510, cpy_r_r383, cpy_r_r511, cpy_r_r389, cpy_r_r512, cpy_r_r395, cpy_r_r513, cpy_r_r401, cpy_r_r514, cpy_r_r407, cpy_r_r515, cpy_r_r413, cpy_r_r516, cpy_r_r419, cpy_r_r517, cpy_r_r425, cpy_r_r518, cpy_r_r431, cpy_r_r519, cpy_r_r437, cpy_r_r520, cpy_r_r443, cpy_r_r521, cpy_r_r449, cpy_r_r522, cpy_r_r455, cpy_r_r523, cpy_r_r461, cpy_r_r524, cpy_r_r467, cpy_r_r525, cpy_r_r473, cpy_r_r526);
    CPy_DECREF(cpy_r_r479);
    CPy_DECREF(cpy_r_r480);
    CPy_DECREF(cpy_r_r481);
    CPy_DECREF(cpy_r_r482);
    CPy_DECREF(cpy_r_r483);
    CPy_DECREF(cpy_r_r484);
    CPy_DECREF(cpy_r_r485);
    CPy_DECREF(cpy_r_r486);
    CPy_DECREF(cpy_r_r487);
    CPy_DECREF(cpy_r_r488);
    CPy_DECREF(cpy_r_r489);
    CPy_DECREF(cpy_r_r490);
    CPy_DECREF(cpy_r_r491);
    CPy_DECREF(cpy_r_r492);
    CPy_DECREF(cpy_r_r493);
    CPy_DECREF(cpy_r_r494);
    CPy_DECREF(cpy_r_r495);
    CPy_DECREF(cpy_r_r496);
    CPy_DECREF(cpy_r_r497);
    CPy_DECREF(cpy_r_r498);
    CPy_DECREF(cpy_r_r499);
    CPy_DECREF(cpy_r_r500);
    CPy_DECREF(cpy_r_r501);
    CPy_DECREF(cpy_r_r502);
    CPy_DECREF(cpy_r_r503);
    CPy_DECREF(cpy_r_r504);
    CPy_DECREF(cpy_r_r505);
    CPy_DECREF(cpy_r_r506);
    CPy_DECREF(cpy_r_r507);
    CPy_DECREF(cpy_r_r508);
    CPy_DECREF(cpy_r_r509);
    CPy_DECREF(cpy_r_r510);
    CPy_DECREF(cpy_r_r511);
    CPy_DECREF(cpy_r_r512);
    CPy_DECREF(cpy_r_r513);
    CPy_DECREF(cpy_r_r514);
    CPy_DECREF(cpy_r_r515);
    CPy_DECREF(cpy_r_r516);
    CPy_DECREF(cpy_r_r517);
    CPy_DECREF(cpy_r_r518);
    CPy_DECREF(cpy_r_r519);
    CPy_DECREF(cpy_r_r520);
    CPy_DECREF(cpy_r_r521);
    CPy_DECREF(cpy_r_r522);
    CPy_DECREF(cpy_r_r523);
    CPy_DECREF(cpy_r_r524);
    CPy_DECREF(cpy_r_r525);
    CPy_DECREF(cpy_r_r526);
    if (unlikely(cpy_r_r527 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 64, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r528 = CPyStatic_emitclass___globals;
    cpy_r_r529 = CPyStatics[7324]; /* 'AS_NUMBER_SLOT_DEFS' */
    cpy_r_r530 = CPyDict_SetItem(cpy_r_r528, cpy_r_r529, cpy_r_r527);
    CPy_DECREF(cpy_r_r527);
    cpy_r_r531 = cpy_r_r530 >= 0;
    if (unlikely(!cpy_r_r531)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 64, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r532 = CPyStatics[811]; /* '__await__' */
    cpy_r_r533 = CPyStatics[7325]; /* 'am_await' */
    cpy_r_r534 = CPyStatic_emitclass___globals;
    cpy_r_r535 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r536 = CPyDict_GetItem(cpy_r_r534, cpy_r_r535);
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 121, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r537.f0 = cpy_r_r533;
    cpy_r_r537.f1 = cpy_r_r536;
    CPy_INCREF(cpy_r_r537.f0);
    CPy_INCREF(cpy_r_r537.f1);
    CPy_DECREF(cpy_r_r536);
    cpy_r_r538 = CPyStatics[820]; /* '__aiter__' */
    cpy_r_r539 = CPyStatics[7326]; /* 'am_aiter' */
    cpy_r_r540 = CPyStatic_emitclass___globals;
    cpy_r_r541 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r542 = CPyDict_GetItem(cpy_r_r540, cpy_r_r541);
    if (unlikely(cpy_r_r542 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 122, CPyStatic_emitclass___globals);
        goto CPyL169;
    }
    cpy_r_r543.f0 = cpy_r_r539;
    cpy_r_r543.f1 = cpy_r_r542;
    CPy_INCREF(cpy_r_r543.f0);
    CPy_INCREF(cpy_r_r543.f1);
    CPy_DECREF(cpy_r_r542);
    cpy_r_r544 = CPyStatics[821]; /* '__anext__' */
    cpy_r_r545 = CPyStatics[7327]; /* 'am_anext' */
    cpy_r_r546 = CPyStatic_emitclass___globals;
    cpy_r_r547 = CPyStatics[7278]; /* 'native_slot' */
    cpy_r_r548 = CPyDict_GetItem(cpy_r_r546, cpy_r_r547);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 123, CPyStatic_emitclass___globals);
        goto CPyL170;
    }
    cpy_r_r549.f0 = cpy_r_r545;
    cpy_r_r549.f1 = cpy_r_r548;
    CPy_INCREF(cpy_r_r549.f0);
    CPy_INCREF(cpy_r_r549.f1);
    CPy_DECREF(cpy_r_r548);
    cpy_r_r550 = PyTuple_New(2);
    if (unlikely(cpy_r_r550 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9460 = cpy_r_r537.f0;
    PyTuple_SET_ITEM(cpy_r_r550, 0, __tmp9460);
    PyObject *__tmp9461 = cpy_r_r537.f1;
    PyTuple_SET_ITEM(cpy_r_r550, 1, __tmp9461);
    cpy_r_r551 = PyTuple_New(2);
    if (unlikely(cpy_r_r551 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9462 = cpy_r_r543.f0;
    PyTuple_SET_ITEM(cpy_r_r551, 0, __tmp9462);
    PyObject *__tmp9463 = cpy_r_r543.f1;
    PyTuple_SET_ITEM(cpy_r_r551, 1, __tmp9463);
    cpy_r_r552 = PyTuple_New(2);
    if (unlikely(cpy_r_r552 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9464 = cpy_r_r549.f0;
    PyTuple_SET_ITEM(cpy_r_r552, 0, __tmp9464);
    PyObject *__tmp9465 = cpy_r_r549.f1;
    PyTuple_SET_ITEM(cpy_r_r552, 1, __tmp9465);
    cpy_r_r553 = CPyDict_Build(3, cpy_r_r532, cpy_r_r550, cpy_r_r538, cpy_r_r551, cpy_r_r544, cpy_r_r552);
    CPy_DECREF(cpy_r_r550);
    CPy_DECREF(cpy_r_r551);
    CPy_DECREF(cpy_r_r552);
    if (unlikely(cpy_r_r553 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 120, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r554 = CPyStatic_emitclass___globals;
    cpy_r_r555 = CPyStatics[7328]; /* 'AS_ASYNC_SLOT_DEFS' */
    cpy_r_r556 = CPyDict_SetItem(cpy_r_r554, cpy_r_r555, cpy_r_r553);
    CPy_DECREF(cpy_r_r553);
    cpy_r_r557 = cpy_r_r556 >= 0;
    if (unlikely(!cpy_r_r557)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 120, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r558 = CPyStatics[7329]; /* 'as_mapping' */
    cpy_r_r559 = CPyStatics[7330]; /* 'PyMappingMethods' */
    cpy_r_r560 = CPyStatic_emitclass___globals;
    cpy_r_r561 = CPyStatics[7287]; /* 'AS_MAPPING_SLOT_DEFS' */
    cpy_r_r562 = CPyDict_GetItem(cpy_r_r560, cpy_r_r561);
    if (unlikely(cpy_r_r562 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 127, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r563.f0 = cpy_r_r558;
    cpy_r_r563.f1 = cpy_r_r559;
    cpy_r_r563.f2 = cpy_r_r562;
    CPy_INCREF(cpy_r_r563.f0);
    CPy_INCREF(cpy_r_r563.f1);
    CPy_INCREF(cpy_r_r563.f2);
    CPy_DECREF(cpy_r_r562);
    cpy_r_r564 = CPyStatics[7331]; /* 'as_sequence' */
    cpy_r_r565 = CPyStatics[7332]; /* 'PySequenceMethods' */
    cpy_r_r566 = CPyStatic_emitclass___globals;
    cpy_r_r567 = CPyStatics[7289]; /* 'AS_SEQUENCE_SLOT_DEFS' */
    cpy_r_r568 = CPyDict_GetItem(cpy_r_r566, cpy_r_r567);
    if (unlikely(cpy_r_r568 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 128, CPyStatic_emitclass___globals);
        goto CPyL171;
    }
    cpy_r_r569.f0 = cpy_r_r564;
    cpy_r_r569.f1 = cpy_r_r565;
    cpy_r_r569.f2 = cpy_r_r568;
    CPy_INCREF(cpy_r_r569.f0);
    CPy_INCREF(cpy_r_r569.f1);
    CPy_INCREF(cpy_r_r569.f2);
    CPy_DECREF(cpy_r_r568);
    cpy_r_r570 = CPyStatics[7333]; /* 'as_number' */
    cpy_r_r571 = CPyStatics[7334]; /* 'PyNumberMethods' */
    cpy_r_r572 = CPyStatic_emitclass___globals;
    cpy_r_r573 = CPyStatics[7324]; /* 'AS_NUMBER_SLOT_DEFS' */
    cpy_r_r574 = CPyDict_GetItem(cpy_r_r572, cpy_r_r573);
    if (unlikely(cpy_r_r574 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 129, CPyStatic_emitclass___globals);
        goto CPyL172;
    }
    cpy_r_r575.f0 = cpy_r_r570;
    cpy_r_r575.f1 = cpy_r_r571;
    cpy_r_r575.f2 = cpy_r_r574;
    CPy_INCREF(cpy_r_r575.f0);
    CPy_INCREF(cpy_r_r575.f1);
    CPy_INCREF(cpy_r_r575.f2);
    CPy_DECREF(cpy_r_r574);
    cpy_r_r576 = CPyStatics[7335]; /* 'as_async' */
    cpy_r_r577 = CPyStatics[7336]; /* 'PyAsyncMethods' */
    cpy_r_r578 = CPyStatic_emitclass___globals;
    cpy_r_r579 = CPyStatics[7328]; /* 'AS_ASYNC_SLOT_DEFS' */
    cpy_r_r580 = CPyDict_GetItem(cpy_r_r578, cpy_r_r579);
    if (unlikely(cpy_r_r580 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 130, CPyStatic_emitclass___globals);
        goto CPyL173;
    }
    cpy_r_r581.f0 = cpy_r_r576;
    cpy_r_r581.f1 = cpy_r_r577;
    cpy_r_r581.f2 = cpy_r_r580;
    CPy_INCREF(cpy_r_r581.f0);
    CPy_INCREF(cpy_r_r581.f1);
    CPy_INCREF(cpy_r_r581.f2);
    CPy_DECREF(cpy_r_r580);
    cpy_r_r582 = PyList_New(4);
    if (unlikely(cpy_r_r582 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 126, CPyStatic_emitclass___globals);
        goto CPyL174;
    }
    cpy_r_r583 = PyTuple_New(3);
    if (unlikely(cpy_r_r583 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9466 = cpy_r_r563.f0;
    PyTuple_SET_ITEM(cpy_r_r583, 0, __tmp9466);
    PyObject *__tmp9467 = cpy_r_r563.f1;
    PyTuple_SET_ITEM(cpy_r_r583, 1, __tmp9467);
    PyObject *__tmp9468 = cpy_r_r563.f2;
    PyTuple_SET_ITEM(cpy_r_r583, 2, __tmp9468);
    cpy_r_r584 = PyTuple_New(3);
    if (unlikely(cpy_r_r584 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9469 = cpy_r_r569.f0;
    PyTuple_SET_ITEM(cpy_r_r584, 0, __tmp9469);
    PyObject *__tmp9470 = cpy_r_r569.f1;
    PyTuple_SET_ITEM(cpy_r_r584, 1, __tmp9470);
    PyObject *__tmp9471 = cpy_r_r569.f2;
    PyTuple_SET_ITEM(cpy_r_r584, 2, __tmp9471);
    cpy_r_r585 = PyTuple_New(3);
    if (unlikely(cpy_r_r585 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9472 = cpy_r_r575.f0;
    PyTuple_SET_ITEM(cpy_r_r585, 0, __tmp9472);
    PyObject *__tmp9473 = cpy_r_r575.f1;
    PyTuple_SET_ITEM(cpy_r_r585, 1, __tmp9473);
    PyObject *__tmp9474 = cpy_r_r575.f2;
    PyTuple_SET_ITEM(cpy_r_r585, 2, __tmp9474);
    cpy_r_r586 = PyTuple_New(3);
    if (unlikely(cpy_r_r586 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9475 = cpy_r_r581.f0;
    PyTuple_SET_ITEM(cpy_r_r586, 0, __tmp9475);
    PyObject *__tmp9476 = cpy_r_r581.f1;
    PyTuple_SET_ITEM(cpy_r_r586, 1, __tmp9476);
    PyObject *__tmp9477 = cpy_r_r581.f2;
    PyTuple_SET_ITEM(cpy_r_r586, 2, __tmp9477);
    cpy_r_r587 = (CPyPtr)&((PyListObject *)cpy_r_r582)->ob_item;
    cpy_r_r588 = *(CPyPtr *)cpy_r_r587;
    *(PyObject * *)cpy_r_r588 = cpy_r_r583;
    cpy_r_r589 = cpy_r_r588 + 8;
    *(PyObject * *)cpy_r_r589 = cpy_r_r584;
    cpy_r_r590 = cpy_r_r588 + 16;
    *(PyObject * *)cpy_r_r590 = cpy_r_r585;
    cpy_r_r591 = cpy_r_r588 + 24;
    *(PyObject * *)cpy_r_r591 = cpy_r_r586;
    cpy_r_r592 = CPyStatic_emitclass___globals;
    cpy_r_r593 = CPyStatics[7095]; /* 'SIDE_TABLES' */
    cpy_r_r594 = CPyDict_SetItem(cpy_r_r592, cpy_r_r593, cpy_r_r582);
    CPy_DECREF(cpy_r_r582);
    cpy_r_r595 = cpy_r_r594 >= 0;
    if (unlikely(!cpy_r_r595)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 126, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r596 = CPyStatics[2031]; /* '__hash__' */
    cpy_r_r597 = PySet_New(NULL);
    if (unlikely(cpy_r_r597 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 135, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    cpy_r_r598 = PySet_Add(cpy_r_r597, cpy_r_r596);
    cpy_r_r599 = cpy_r_r598 >= 0;
    if (unlikely(!cpy_r_r599)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 135, CPyStatic_emitclass___globals);
        goto CPyL175;
    }
    cpy_r_r600 = CPyStatic_emitclass___globals;
    cpy_r_r601 = CPyStatics[7071]; /* 'ALWAYS_FILL' */
    cpy_r_r602 = CPyDict_SetItem(cpy_r_r600, cpy_r_r601, cpy_r_r597);
    CPy_DECREF(cpy_r_r597);
    cpy_r_r603 = cpy_r_r602 >= 0;
    if (unlikely(!cpy_r_r603)) {
        CPy_AddTraceback("mypyc/codegen/emitclass.py", "<module>", 135, CPyStatic_emitclass___globals);
        goto CPyL108;
    }
    return 1;
CPyL108: ;
    cpy_r_r604 = 2;
    return cpy_r_r604;
CPyL109: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL108;
CPyL110: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL108;
CPyL111: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r74);
    goto CPyL108;
CPyL112: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    goto CPyL108;
CPyL113: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    goto CPyL108;
CPyL114: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    goto CPyL108;
CPyL115: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    goto CPyL108;
CPyL116: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r114.f0);
    CPy_DecRef(cpy_r_r114.f1);
    goto CPyL108;
CPyL117: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r114.f0);
    CPy_DecRef(cpy_r_r114.f1);
    CPy_DecRef(cpy_r_r120.f0);
    CPy_DecRef(cpy_r_r120.f1);
    goto CPyL108;
CPyL118: ;
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r114.f0);
    CPy_DecRef(cpy_r_r114.f1);
    CPy_DecRef(cpy_r_r120.f0);
    CPy_DecRef(cpy_r_r120.f1);
    CPy_DecRef(cpy_r_r126.f0);
    CPy_DecRef(cpy_r_r126.f1);
    goto CPyL108;
CPyL119: ;
    CPy_DecRef(cpy_r_r151.f0);
    CPy_DecRef(cpy_r_r151.f1);
    goto CPyL108;
CPyL120: ;
    CPy_DecRef(cpy_r_r151.f0);
    CPy_DecRef(cpy_r_r151.f1);
    CPy_DecRef(cpy_r_r157.f0);
    CPy_DecRef(cpy_r_r157.f1);
    goto CPyL108;
CPyL121: ;
    CPy_DecRef(cpy_r_r151.f0);
    CPy_DecRef(cpy_r_r151.f1);
    CPy_DecRef(cpy_r_r157.f0);
    CPy_DecRef(cpy_r_r157.f1);
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    goto CPyL108;
CPyL122: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    goto CPyL108;
CPyL123: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    goto CPyL108;
CPyL124: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    goto CPyL108;
CPyL125: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    goto CPyL108;
CPyL126: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    goto CPyL108;
CPyL127: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    goto CPyL108;
CPyL128: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    goto CPyL108;
CPyL129: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    goto CPyL108;
CPyL130: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    goto CPyL108;
CPyL131: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    goto CPyL108;
CPyL132: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    goto CPyL108;
CPyL133: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    goto CPyL108;
CPyL134: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    goto CPyL108;
CPyL135: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    goto CPyL108;
CPyL136: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    goto CPyL108;
CPyL137: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    goto CPyL108;
CPyL138: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    goto CPyL108;
CPyL139: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    goto CPyL108;
CPyL140: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    goto CPyL108;
CPyL141: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    goto CPyL108;
CPyL142: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    goto CPyL108;
CPyL143: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    goto CPyL108;
CPyL144: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    goto CPyL108;
CPyL145: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    goto CPyL108;
CPyL146: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    goto CPyL108;
CPyL147: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    goto CPyL108;
CPyL148: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    goto CPyL108;
CPyL149: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    goto CPyL108;
CPyL150: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    goto CPyL108;
CPyL151: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    goto CPyL108;
CPyL152: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    goto CPyL108;
CPyL153: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    goto CPyL108;
CPyL154: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    goto CPyL108;
CPyL155: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    goto CPyL108;
CPyL156: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    goto CPyL108;
CPyL157: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    goto CPyL108;
CPyL158: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    goto CPyL108;
CPyL159: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    goto CPyL108;
CPyL160: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    goto CPyL108;
CPyL161: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    goto CPyL108;
CPyL162: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    goto CPyL108;
CPyL163: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    goto CPyL108;
CPyL164: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    CPy_DecRef(cpy_r_r448.f0);
    CPy_DecRef(cpy_r_r448.f1);
    goto CPyL108;
CPyL165: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    CPy_DecRef(cpy_r_r448.f0);
    CPy_DecRef(cpy_r_r448.f1);
    CPy_DecRef(cpy_r_r454.f0);
    CPy_DecRef(cpy_r_r454.f1);
    goto CPyL108;
CPyL166: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    CPy_DecRef(cpy_r_r448.f0);
    CPy_DecRef(cpy_r_r448.f1);
    CPy_DecRef(cpy_r_r454.f0);
    CPy_DecRef(cpy_r_r454.f1);
    CPy_DecRef(cpy_r_r460.f0);
    CPy_DecRef(cpy_r_r460.f1);
    goto CPyL108;
CPyL167: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    CPy_DecRef(cpy_r_r448.f0);
    CPy_DecRef(cpy_r_r448.f1);
    CPy_DecRef(cpy_r_r454.f0);
    CPy_DecRef(cpy_r_r454.f1);
    CPy_DecRef(cpy_r_r460.f0);
    CPy_DecRef(cpy_r_r460.f1);
    CPy_DecRef(cpy_r_r466.f0);
    CPy_DecRef(cpy_r_r466.f1);
    goto CPyL108;
CPyL168: ;
    CPy_DecRef(cpy_r_r196.f0);
    CPy_DecRef(cpy_r_r196.f1);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r208.f0);
    CPy_DecRef(cpy_r_r208.f1);
    CPy_DecRef(cpy_r_r214.f0);
    CPy_DecRef(cpy_r_r214.f1);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r232.f0);
    CPy_DecRef(cpy_r_r232.f1);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r268.f0);
    CPy_DecRef(cpy_r_r268.f1);
    CPy_DecRef(cpy_r_r274.f0);
    CPy_DecRef(cpy_r_r274.f1);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r286.f0);
    CPy_DecRef(cpy_r_r286.f1);
    CPy_DecRef(cpy_r_r292.f0);
    CPy_DecRef(cpy_r_r292.f1);
    CPy_DecRef(cpy_r_r298.f0);
    CPy_DecRef(cpy_r_r298.f1);
    CPy_DecRef(cpy_r_r304.f0);
    CPy_DecRef(cpy_r_r304.f1);
    CPy_DecRef(cpy_r_r310.f0);
    CPy_DecRef(cpy_r_r310.f1);
    CPy_DecRef(cpy_r_r316.f0);
    CPy_DecRef(cpy_r_r316.f1);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r328.f0);
    CPy_DecRef(cpy_r_r328.f1);
    CPy_DecRef(cpy_r_r334.f0);
    CPy_DecRef(cpy_r_r334.f1);
    CPy_DecRef(cpy_r_r340.f0);
    CPy_DecRef(cpy_r_r340.f1);
    CPy_DecRef(cpy_r_r346.f0);
    CPy_DecRef(cpy_r_r346.f1);
    CPy_DecRef(cpy_r_r352.f0);
    CPy_DecRef(cpy_r_r352.f1);
    CPy_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r370.f0);
    CPy_DecRef(cpy_r_r370.f1);
    CPy_DecRef(cpy_r_r376.f0);
    CPy_DecRef(cpy_r_r376.f1);
    CPy_DecRef(cpy_r_r382.f0);
    CPy_DecRef(cpy_r_r382.f1);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r394.f0);
    CPy_DecRef(cpy_r_r394.f1);
    CPy_DecRef(cpy_r_r400.f0);
    CPy_DecRef(cpy_r_r400.f1);
    CPy_DecRef(cpy_r_r406.f0);
    CPy_DecRef(cpy_r_r406.f1);
    CPy_DecRef(cpy_r_r412.f0);
    CPy_DecRef(cpy_r_r412.f1);
    CPy_DecRef(cpy_r_r418.f0);
    CPy_DecRef(cpy_r_r418.f1);
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    CPy_DecRef(cpy_r_r436.f0);
    CPy_DecRef(cpy_r_r436.f1);
    CPy_DecRef(cpy_r_r442.f0);
    CPy_DecRef(cpy_r_r442.f1);
    CPy_DecRef(cpy_r_r448.f0);
    CPy_DecRef(cpy_r_r448.f1);
    CPy_DecRef(cpy_r_r454.f0);
    CPy_DecRef(cpy_r_r454.f1);
    CPy_DecRef(cpy_r_r460.f0);
    CPy_DecRef(cpy_r_r460.f1);
    CPy_DecRef(cpy_r_r466.f0);
    CPy_DecRef(cpy_r_r466.f1);
    CPy_DecRef(cpy_r_r472.f0);
    CPy_DecRef(cpy_r_r472.f1);
    goto CPyL108;
CPyL169: ;
    CPy_DecRef(cpy_r_r537.f0);
    CPy_DecRef(cpy_r_r537.f1);
    goto CPyL108;
CPyL170: ;
    CPy_DecRef(cpy_r_r537.f0);
    CPy_DecRef(cpy_r_r537.f1);
    CPy_DecRef(cpy_r_r543.f0);
    CPy_DecRef(cpy_r_r543.f1);
    goto CPyL108;
CPyL171: ;
    CPy_DecRef(cpy_r_r563.f0);
    CPy_DecRef(cpy_r_r563.f1);
    CPy_DecRef(cpy_r_r563.f2);
    goto CPyL108;
CPyL172: ;
    CPy_DecRef(cpy_r_r563.f0);
    CPy_DecRef(cpy_r_r563.f1);
    CPy_DecRef(cpy_r_r563.f2);
    CPy_DecRef(cpy_r_r569.f0);
    CPy_DecRef(cpy_r_r569.f1);
    CPy_DecRef(cpy_r_r569.f2);
    goto CPyL108;
CPyL173: ;
    CPy_DecRef(cpy_r_r563.f0);
    CPy_DecRef(cpy_r_r563.f1);
    CPy_DecRef(cpy_r_r563.f2);
    CPy_DecRef(cpy_r_r569.f0);
    CPy_DecRef(cpy_r_r569.f1);
    CPy_DecRef(cpy_r_r569.f2);
    CPy_DecRef(cpy_r_r575.f0);
    CPy_DecRef(cpy_r_r575.f1);
    CPy_DecRef(cpy_r_r575.f2);
    goto CPyL108;
CPyL174: ;
    CPy_DecRef(cpy_r_r563.f0);
    CPy_DecRef(cpy_r_r563.f1);
    CPy_DecRef(cpy_r_r563.f2);
    CPy_DecRef(cpy_r_r569.f0);
    CPy_DecRef(cpy_r_r569.f1);
    CPy_DecRef(cpy_r_r569.f2);
    CPy_DecRef(cpy_r_r575.f0);
    CPy_DecRef(cpy_r_r575.f1);
    CPy_DecRef(cpy_r_r575.f2);
    CPy_DecRef(cpy_r_r581.f0);
    CPy_DecRef(cpy_r_r581.f1);
    CPy_DecRef(cpy_r_r581.f2);
    goto CPyL108;
CPyL175: ;
    CPy_DecRef(cpy_r_r597);
    goto CPyL108;
}
