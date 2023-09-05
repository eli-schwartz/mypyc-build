#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *specialize___specialize_function_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___specialize_function_env(void);

static PyObject *
specialize___specialize_function_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___specialize_function_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___specialize_function_env_setup(type);
}

static int
specialize___specialize_function_env_traverse(mypyc___irbuild___specialize___specialize_function_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_name);
    Py_VISIT(self->_typ);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
specialize___specialize_function_env_clear(mypyc___irbuild___specialize___specialize_function_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_typ);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
specialize___specialize_function_env_dealloc(mypyc___irbuild___specialize___specialize_function_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___specialize_function_env_dealloc)
    specialize___specialize_function_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___specialize_function_env_vtable[1];
static bool
CPyDef_specialize___specialize_function_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___specialize_function_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___specialize_function_env_vtable, specialize___specialize_function_env_vtable_scratch, sizeof(specialize___specialize_function_env_vtable));
    return 1;
}

static PyMethodDef specialize___specialize_function_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___specialize_function_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "specialize_function_env",
    .tp_new = specialize___specialize_function_env_new,
    .tp_dealloc = (destructor)specialize___specialize_function_env_dealloc,
    .tp_traverse = (traverseproc)specialize___specialize_function_env_traverse,
    .tp_clear = (inquiry)specialize___specialize_function_env_clear,
    .tp_methods = specialize___specialize_function_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___specialize_function_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___specialize_function_env_template = &CPyType_specialize___specialize_function_env_template_;

static PyObject *
specialize___specialize_function_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___specialize_function_envObject *self;
    self = (mypyc___irbuild___specialize___specialize_function_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___specialize_function_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___specialize_function_env(void)
{
    PyObject *self = specialize___specialize_function_env_setup(CPyType_specialize___specialize_function_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize___wrapper_specialize_function_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize___wrapper_specialize_function_obj_____get__(self, instance, owner);
}
PyMemberDef specialize___wrapper_specialize_function_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize___wrapper_specialize_function_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___wrapper_specialize_function_obj(void);

static PyObject *
specialize___wrapper_specialize_function_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___wrapper_specialize_function_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___wrapper_specialize_function_obj_setup(type);
}

static int
specialize___wrapper_specialize_function_obj_traverse(mypyc___irbuild___specialize___wrapper_specialize_function_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject))));
    return 0;
}

static int
specialize___wrapper_specialize_function_obj_clear(mypyc___irbuild___specialize___wrapper_specialize_function_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject))));
    return 0;
}

static void
specialize___wrapper_specialize_function_obj_dealloc(mypyc___irbuild___specialize___wrapper_specialize_function_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___wrapper_specialize_function_obj_dealloc)
    specialize___wrapper_specialize_function_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___wrapper_specialize_function_obj_vtable[2];
static bool
CPyDef_specialize___wrapper_specialize_function_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize___wrapper_specialize_function_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize___wrapper_specialize_function_obj_____call__,
        (CPyVTableItem)CPyDef_specialize___wrapper_specialize_function_obj_____get__,
    };
    memcpy(specialize___wrapper_specialize_function_obj_vtable, specialize___wrapper_specialize_function_obj_vtable_scratch, sizeof(specialize___wrapper_specialize_function_obj_vtable));
    return 1;
}

static PyMethodDef specialize___wrapper_specialize_function_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize___wrapper_specialize_function_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize___wrapper_specialize_function_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___wrapper_specialize_function_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_specialize_function_obj",
    .tp_new = specialize___wrapper_specialize_function_obj_new,
    .tp_dealloc = (destructor)specialize___wrapper_specialize_function_obj_dealloc,
    .tp_traverse = (traverseproc)specialize___wrapper_specialize_function_obj_traverse,
    .tp_clear = (inquiry)specialize___wrapper_specialize_function_obj_clear,
    .tp_methods = specialize___wrapper_specialize_function_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize___wrapper_specialize_function_obj,
    .tp_members = specialize___wrapper_specialize_function_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize___wrapper_specialize_function_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize___wrapper_specialize_function_obj_template = &CPyType_specialize___wrapper_specialize_function_obj_template_;

static PyObject *
specialize___wrapper_specialize_function_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___wrapper_specialize_function_objObject *self;
    self = (mypyc___irbuild___specialize___wrapper_specialize_function_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___wrapper_specialize_function_obj_vtable;
    self->vectorcall = CPyPy_specialize___wrapper_specialize_function_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___wrapper_specialize_function_obj(void)
{
    PyObject *self = specialize___wrapper_specialize_function_obj_setup(CPyType_specialize___wrapper_specialize_function_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *specialize___translate_any_call_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___translate_any_call_env(void);

static PyObject *
specialize___translate_any_call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___translate_any_call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___translate_any_call_env_setup(type);
}

static int
specialize___translate_any_call_env_traverse(mypyc___irbuild___specialize___translate_any_call_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_callee);
    return 0;
}

static int
specialize___translate_any_call_env_clear(mypyc___irbuild___specialize___translate_any_call_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_callee);
    return 0;
}

static void
specialize___translate_any_call_env_dealloc(mypyc___irbuild___specialize___translate_any_call_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___translate_any_call_env_dealloc)
    specialize___translate_any_call_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___translate_any_call_env_vtable[1];
static bool
CPyDef_specialize___translate_any_call_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___translate_any_call_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___translate_any_call_env_vtable, specialize___translate_any_call_env_vtable_scratch, sizeof(specialize___translate_any_call_env_vtable));
    return 1;
}

static PyMethodDef specialize___translate_any_call_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___translate_any_call_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_any_call_env",
    .tp_new = specialize___translate_any_call_env_new,
    .tp_dealloc = (destructor)specialize___translate_any_call_env_dealloc,
    .tp_traverse = (traverseproc)specialize___translate_any_call_env_traverse,
    .tp_clear = (inquiry)specialize___translate_any_call_env_clear,
    .tp_methods = specialize___translate_any_call_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___translate_any_call_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___translate_any_call_env_template = &CPyType_specialize___translate_any_call_env_template_;

static PyObject *
specialize___translate_any_call_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___translate_any_call_envObject *self;
    self = (mypyc___irbuild___specialize___translate_any_call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___translate_any_call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___translate_any_call_env(void)
{
    PyObject *self = specialize___translate_any_call_env_setup(CPyType_specialize___translate_any_call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize_____mypyc_lambda__0_translate_any_call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__(self, instance, owner);
}
PyMemberDef specialize_____mypyc_lambda__0_translate_any_call_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize_____mypyc_lambda__0_translate_any_call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj(void);

static PyObject *
specialize_____mypyc_lambda__0_translate_any_call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize_____mypyc_lambda__0_translate_any_call_obj_setup(type);
}

static int
specialize_____mypyc_lambda__0_translate_any_call_obj_traverse(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject))));
    return 0;
}

static int
specialize_____mypyc_lambda__0_translate_any_call_obj_clear(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject))));
    return 0;
}

static void
specialize_____mypyc_lambda__0_translate_any_call_obj_dealloc(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize_____mypyc_lambda__0_translate_any_call_obj_dealloc)
    specialize_____mypyc_lambda__0_translate_any_call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize_____mypyc_lambda__0_translate_any_call_obj_vtable[2];
static bool
CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize_____mypyc_lambda__0_translate_any_call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__,
        (CPyVTableItem)CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__,
    };
    memcpy(specialize_____mypyc_lambda__0_translate_any_call_obj_vtable, specialize_____mypyc_lambda__0_translate_any_call_obj_vtable_scratch, sizeof(specialize_____mypyc_lambda__0_translate_any_call_obj_vtable));
    return 1;
}

static PyMethodDef specialize_____mypyc_lambda__0_translate_any_call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_translate_any_call_obj",
    .tp_new = specialize_____mypyc_lambda__0_translate_any_call_obj_new,
    .tp_dealloc = (destructor)specialize_____mypyc_lambda__0_translate_any_call_obj_dealloc,
    .tp_traverse = (traverseproc)specialize_____mypyc_lambda__0_translate_any_call_obj_traverse,
    .tp_clear = (inquiry)specialize_____mypyc_lambda__0_translate_any_call_obj_clear,
    .tp_methods = specialize_____mypyc_lambda__0_translate_any_call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize_____mypyc_lambda__0_translate_any_call_obj,
    .tp_members = specialize_____mypyc_lambda__0_translate_any_call_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj_template = &CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj_template_;

static PyObject *
specialize_____mypyc_lambda__0_translate_any_call_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *self;
    self = (mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize_____mypyc_lambda__0_translate_any_call_obj_vtable;
    self->vectorcall = CPyPy_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj(void)
{
    PyObject *self = specialize_____mypyc_lambda__0_translate_any_call_obj_setup(CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *specialize___translate_all_call_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___translate_all_call_env(void);

static PyObject *
specialize___translate_all_call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___translate_all_call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___translate_all_call_env_setup(type);
}

static int
specialize___translate_all_call_env_traverse(mypyc___irbuild___specialize___translate_all_call_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_callee);
    return 0;
}

static int
specialize___translate_all_call_env_clear(mypyc___irbuild___specialize___translate_all_call_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_callee);
    return 0;
}

static void
specialize___translate_all_call_env_dealloc(mypyc___irbuild___specialize___translate_all_call_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___translate_all_call_env_dealloc)
    specialize___translate_all_call_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___translate_all_call_env_vtable[1];
static bool
CPyDef_specialize___translate_all_call_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___translate_all_call_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___translate_all_call_env_vtable, specialize___translate_all_call_env_vtable_scratch, sizeof(specialize___translate_all_call_env_vtable));
    return 1;
}

static PyMethodDef specialize___translate_all_call_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___translate_all_call_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_all_call_env",
    .tp_new = specialize___translate_all_call_env_new,
    .tp_dealloc = (destructor)specialize___translate_all_call_env_dealloc,
    .tp_traverse = (traverseproc)specialize___translate_all_call_env_traverse,
    .tp_clear = (inquiry)specialize___translate_all_call_env_clear,
    .tp_methods = specialize___translate_all_call_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___translate_all_call_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___translate_all_call_env_template = &CPyType_specialize___translate_all_call_env_template_;

static PyObject *
specialize___translate_all_call_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___translate_all_call_envObject *self;
    self = (mypyc___irbuild___specialize___translate_all_call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___translate_all_call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___translate_all_call_env(void)
{
    PyObject *self = specialize___translate_all_call_env_setup(CPyType_specialize___translate_all_call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize_____mypyc_lambda__1_translate_all_call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__(self, instance, owner);
}
PyMemberDef specialize_____mypyc_lambda__1_translate_all_call_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize_____mypyc_lambda__1_translate_all_call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj(void);

static PyObject *
specialize_____mypyc_lambda__1_translate_all_call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize_____mypyc_lambda__1_translate_all_call_obj_setup(type);
}

static int
specialize_____mypyc_lambda__1_translate_all_call_obj_traverse(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject))));
    return 0;
}

static int
specialize_____mypyc_lambda__1_translate_all_call_obj_clear(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject))));
    return 0;
}

static void
specialize_____mypyc_lambda__1_translate_all_call_obj_dealloc(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize_____mypyc_lambda__1_translate_all_call_obj_dealloc)
    specialize_____mypyc_lambda__1_translate_all_call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize_____mypyc_lambda__1_translate_all_call_obj_vtable[2];
static bool
CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize_____mypyc_lambda__1_translate_all_call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__,
        (CPyVTableItem)CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__,
    };
    memcpy(specialize_____mypyc_lambda__1_translate_all_call_obj_vtable, specialize_____mypyc_lambda__1_translate_all_call_obj_vtable_scratch, sizeof(specialize_____mypyc_lambda__1_translate_all_call_obj_vtable));
    return 1;
}

static PyMethodDef specialize_____mypyc_lambda__1_translate_all_call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_translate_all_call_obj",
    .tp_new = specialize_____mypyc_lambda__1_translate_all_call_obj_new,
    .tp_dealloc = (destructor)specialize_____mypyc_lambda__1_translate_all_call_obj_dealloc,
    .tp_traverse = (traverseproc)specialize_____mypyc_lambda__1_translate_all_call_obj_traverse,
    .tp_clear = (inquiry)specialize_____mypyc_lambda__1_translate_all_call_obj_clear,
    .tp_methods = specialize_____mypyc_lambda__1_translate_all_call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize_____mypyc_lambda__1_translate_all_call_obj,
    .tp_members = specialize_____mypyc_lambda__1_translate_all_call_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj_template = &CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj_template_;

static PyObject *
specialize_____mypyc_lambda__1_translate_all_call_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *self;
    self = (mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize_____mypyc_lambda__1_translate_all_call_obj_vtable;
    self->vectorcall = CPyPy_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj(void)
{
    PyObject *self = specialize_____mypyc_lambda__1_translate_all_call_obj_setup(CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *specialize___any_all_helper_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___any_all_helper_env(void);

static PyObject *
specialize___any_all_helper_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___any_all_helper_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___any_all_helper_env_setup(type);
}

static int
specialize___any_all_helper_env_traverse(mypyc___irbuild___specialize___any_all_helper_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen);
    Py_VISIT(self->_modify);
    Py_VISIT(self->_new_value);
    Py_VISIT(self->_exit_block);
    Py_VISIT(self->_false_block);
    Py_VISIT(self->_retval);
    Py_VISIT(self->_true_block);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_initial_value);
    Py_VISIT(self->_loop_params);
    return 0;
}

static int
specialize___any_all_helper_env_clear(mypyc___irbuild___specialize___any_all_helper_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen);
    Py_CLEAR(self->_modify);
    Py_CLEAR(self->_new_value);
    Py_CLEAR(self->_exit_block);
    Py_CLEAR(self->_false_block);
    Py_CLEAR(self->_retval);
    Py_CLEAR(self->_true_block);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_initial_value);
    Py_CLEAR(self->_loop_params);
    return 0;
}

static void
specialize___any_all_helper_env_dealloc(mypyc___irbuild___specialize___any_all_helper_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___any_all_helper_env_dealloc)
    specialize___any_all_helper_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___any_all_helper_env_vtable[1];
static bool
CPyDef_specialize___any_all_helper_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___any_all_helper_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___any_all_helper_env_vtable, specialize___any_all_helper_env_vtable_scratch, sizeof(specialize___any_all_helper_env_vtable));
    return 1;
}

static PyMethodDef specialize___any_all_helper_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___any_all_helper_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "any_all_helper_env",
    .tp_new = specialize___any_all_helper_env_new,
    .tp_dealloc = (destructor)specialize___any_all_helper_env_dealloc,
    .tp_traverse = (traverseproc)specialize___any_all_helper_env_traverse,
    .tp_clear = (inquiry)specialize___any_all_helper_env_clear,
    .tp_methods = specialize___any_all_helper_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___any_all_helper_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___any_all_helper_env_template = &CPyType_specialize___any_all_helper_env_template_;

static PyObject *
specialize___any_all_helper_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___any_all_helper_envObject *self;
    self = (mypyc___irbuild___specialize___any_all_helper_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___any_all_helper_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___any_all_helper_env(void)
{
    PyObject *self = specialize___any_all_helper_env_setup(CPyType_specialize___any_all_helper_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize___gen_inner_stmts_any_all_helper_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____get__(self, instance, owner);
}
PyMemberDef specialize___gen_inner_stmts_any_all_helper_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize___gen_inner_stmts_any_all_helper_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___gen_inner_stmts_any_all_helper_obj(void);

static PyObject *
specialize___gen_inner_stmts_any_all_helper_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___gen_inner_stmts_any_all_helper_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___gen_inner_stmts_any_all_helper_obj_setup(type);
}

static int
specialize___gen_inner_stmts_any_all_helper_obj_traverse(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject))));
    return 0;
}

static int
specialize___gen_inner_stmts_any_all_helper_obj_clear(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject))));
    return 0;
}

static void
specialize___gen_inner_stmts_any_all_helper_obj_dealloc(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___gen_inner_stmts_any_all_helper_obj_dealloc)
    specialize___gen_inner_stmts_any_all_helper_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___gen_inner_stmts_any_all_helper_obj_vtable[2];
static bool
CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize___gen_inner_stmts_any_all_helper_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____call__,
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____get__,
    };
    memcpy(specialize___gen_inner_stmts_any_all_helper_obj_vtable, specialize___gen_inner_stmts_any_all_helper_obj_vtable_scratch, sizeof(specialize___gen_inner_stmts_any_all_helper_obj_vtable));
    return 1;
}

static PyMethodDef specialize___gen_inner_stmts_any_all_helper_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_any_all_helper_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_any_all_helper_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___gen_inner_stmts_any_all_helper_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_any_all_helper_obj",
    .tp_new = specialize___gen_inner_stmts_any_all_helper_obj_new,
    .tp_dealloc = (destructor)specialize___gen_inner_stmts_any_all_helper_obj_dealloc,
    .tp_traverse = (traverseproc)specialize___gen_inner_stmts_any_all_helper_obj_traverse,
    .tp_clear = (inquiry)specialize___gen_inner_stmts_any_all_helper_obj_clear,
    .tp_methods = specialize___gen_inner_stmts_any_all_helper_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize___gen_inner_stmts_any_all_helper_obj,
    .tp_members = specialize___gen_inner_stmts_any_all_helper_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize___gen_inner_stmts_any_all_helper_obj_template = &CPyType_specialize___gen_inner_stmts_any_all_helper_obj_template_;

static PyObject *
specialize___gen_inner_stmts_any_all_helper_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *self;
    self = (mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___gen_inner_stmts_any_all_helper_obj_vtable;
    self->vectorcall = CPyPy_specialize___gen_inner_stmts_any_all_helper_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___gen_inner_stmts_any_all_helper_obj(void)
{
    PyObject *self = specialize___gen_inner_stmts_any_all_helper_obj_setup(CPyType_specialize___gen_inner_stmts_any_all_helper_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *specialize___translate_sum_call_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___translate_sum_call_env(void);

static PyObject *
specialize___translate_sum_call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___translate_sum_call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___translate_sum_call_env_setup(type);
}

static int
specialize___translate_sum_call_env_traverse(mypyc___irbuild___specialize___translate_sum_call_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen_expr);
    Py_VISIT(self->_retval);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_callee);
    Py_VISIT(self->_start_expr);
    Py_VISIT(self->_target_type);
    return 0;
}

static int
specialize___translate_sum_call_env_clear(mypyc___irbuild___specialize___translate_sum_call_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen_expr);
    Py_CLEAR(self->_retval);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_callee);
    Py_CLEAR(self->_start_expr);
    Py_CLEAR(self->_target_type);
    return 0;
}

static void
specialize___translate_sum_call_env_dealloc(mypyc___irbuild___specialize___translate_sum_call_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___translate_sum_call_env_dealloc)
    specialize___translate_sum_call_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___translate_sum_call_env_vtable[1];
static bool
CPyDef_specialize___translate_sum_call_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___translate_sum_call_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___translate_sum_call_env_vtable, specialize___translate_sum_call_env_vtable_scratch, sizeof(specialize___translate_sum_call_env_vtable));
    return 1;
}

static PyMethodDef specialize___translate_sum_call_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___translate_sum_call_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_sum_call_env",
    .tp_new = specialize___translate_sum_call_env_new,
    .tp_dealloc = (destructor)specialize___translate_sum_call_env_dealloc,
    .tp_traverse = (traverseproc)specialize___translate_sum_call_env_traverse,
    .tp_clear = (inquiry)specialize___translate_sum_call_env_clear,
    .tp_methods = specialize___translate_sum_call_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___translate_sum_call_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___translate_sum_call_env_template = &CPyType_specialize___translate_sum_call_env_template_;

static PyObject *
specialize___translate_sum_call_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___translate_sum_call_envObject *self;
    self = (mypyc___irbuild___specialize___translate_sum_call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___translate_sum_call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___translate_sum_call_env(void)
{
    PyObject *self = specialize___translate_sum_call_env_setup(CPyType_specialize___translate_sum_call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize___gen_inner_stmts_translate_sum_call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____get__(self, instance, owner);
}
PyMemberDef specialize___gen_inner_stmts_translate_sum_call_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize___gen_inner_stmts_translate_sum_call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj(void);

static PyObject *
specialize___gen_inner_stmts_translate_sum_call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___gen_inner_stmts_translate_sum_call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___gen_inner_stmts_translate_sum_call_obj_setup(type);
}

static int
specialize___gen_inner_stmts_translate_sum_call_obj_traverse(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject))));
    return 0;
}

static int
specialize___gen_inner_stmts_translate_sum_call_obj_clear(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject))));
    return 0;
}

static void
specialize___gen_inner_stmts_translate_sum_call_obj_dealloc(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___gen_inner_stmts_translate_sum_call_obj_dealloc)
    specialize___gen_inner_stmts_translate_sum_call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___gen_inner_stmts_translate_sum_call_obj_vtable[2];
static bool
CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize___gen_inner_stmts_translate_sum_call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____call__,
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____get__,
    };
    memcpy(specialize___gen_inner_stmts_translate_sum_call_obj_vtable, specialize___gen_inner_stmts_translate_sum_call_obj_vtable_scratch, sizeof(specialize___gen_inner_stmts_translate_sum_call_obj_vtable));
    return 1;
}

static PyMethodDef specialize___gen_inner_stmts_translate_sum_call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_translate_sum_call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_translate_sum_call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___gen_inner_stmts_translate_sum_call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_translate_sum_call_obj",
    .tp_new = specialize___gen_inner_stmts_translate_sum_call_obj_new,
    .tp_dealloc = (destructor)specialize___gen_inner_stmts_translate_sum_call_obj_dealloc,
    .tp_traverse = (traverseproc)specialize___gen_inner_stmts_translate_sum_call_obj_traverse,
    .tp_clear = (inquiry)specialize___gen_inner_stmts_translate_sum_call_obj_clear,
    .tp_methods = specialize___gen_inner_stmts_translate_sum_call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize___gen_inner_stmts_translate_sum_call_obj,
    .tp_members = specialize___gen_inner_stmts_translate_sum_call_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize___gen_inner_stmts_translate_sum_call_obj_template = &CPyType_specialize___gen_inner_stmts_translate_sum_call_obj_template_;

static PyObject *
specialize___gen_inner_stmts_translate_sum_call_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *self;
    self = (mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___gen_inner_stmts_translate_sum_call_obj_vtable;
    self->vectorcall = CPyPy_specialize___gen_inner_stmts_translate_sum_call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj(void)
{
    PyObject *self = specialize___gen_inner_stmts_translate_sum_call_obj_setup(CPyType_specialize___gen_inner_stmts_translate_sum_call_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *specialize___translate_next_call_env_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___translate_next_call_env(void);

static PyObject *
specialize___translate_next_call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___translate_next_call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___translate_next_call_env_setup(type);
}

static int
specialize___translate_next_call_env_traverse(mypyc___irbuild___specialize___translate_next_call_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_exit_block);
    Py_VISIT(self->_gen);
    Py_VISIT(self->_retval);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_callee);
    Py_VISIT(self->_default_val);
    return 0;
}

static int
specialize___translate_next_call_env_clear(mypyc___irbuild___specialize___translate_next_call_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_exit_block);
    Py_CLEAR(self->_gen);
    Py_CLEAR(self->_retval);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_callee);
    Py_CLEAR(self->_default_val);
    return 0;
}

static void
specialize___translate_next_call_env_dealloc(mypyc___irbuild___specialize___translate_next_call_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___translate_next_call_env_dealloc)
    specialize___translate_next_call_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___translate_next_call_env_vtable[1];
static bool
CPyDef_specialize___translate_next_call_env_trait_vtable_setup(void)
{
    CPyVTableItem specialize___translate_next_call_env_vtable_scratch[] = {
        NULL
    };
    memcpy(specialize___translate_next_call_env_vtable, specialize___translate_next_call_env_vtable_scratch, sizeof(specialize___translate_next_call_env_vtable));
    return 1;
}

static PyMethodDef specialize___translate_next_call_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___translate_next_call_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_next_call_env",
    .tp_new = specialize___translate_next_call_env_new,
    .tp_dealloc = (destructor)specialize___translate_next_call_env_dealloc,
    .tp_traverse = (traverseproc)specialize___translate_next_call_env_traverse,
    .tp_clear = (inquiry)specialize___translate_next_call_env_clear,
    .tp_methods = specialize___translate_next_call_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___translate_next_call_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_specialize___translate_next_call_env_template = &CPyType_specialize___translate_next_call_env_template_;

static PyObject *
specialize___translate_next_call_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___translate_next_call_envObject *self;
    self = (mypyc___irbuild___specialize___translate_next_call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___translate_next_call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___translate_next_call_env(void)
{
    PyObject *self = specialize___translate_next_call_env_setup(CPyType_specialize___translate_next_call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__specialize___gen_inner_stmts_translate_next_call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____get__(self, instance, owner);
}
PyMemberDef specialize___gen_inner_stmts_translate_next_call_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *specialize___gen_inner_stmts_translate_next_call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_specialize___gen_inner_stmts_translate_next_call_obj(void);

static PyObject *
specialize___gen_inner_stmts_translate_next_call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_specialize___gen_inner_stmts_translate_next_call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return specialize___gen_inner_stmts_translate_next_call_obj_setup(type);
}

static int
specialize___gen_inner_stmts_translate_next_call_obj_traverse(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject))));
    return 0;
}

static int
specialize___gen_inner_stmts_translate_next_call_obj_clear(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject))));
    return 0;
}

static void
specialize___gen_inner_stmts_translate_next_call_obj_dealloc(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, specialize___gen_inner_stmts_translate_next_call_obj_dealloc)
    specialize___gen_inner_stmts_translate_next_call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem specialize___gen_inner_stmts_translate_next_call_obj_vtable[2];
static bool
CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_trait_vtable_setup(void)
{
    CPyVTableItem specialize___gen_inner_stmts_translate_next_call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____call__,
        (CPyVTableItem)CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____get__,
    };
    memcpy(specialize___gen_inner_stmts_translate_next_call_obj_vtable, specialize___gen_inner_stmts_translate_next_call_obj_vtable_scratch, sizeof(specialize___gen_inner_stmts_translate_next_call_obj_vtable));
    return 1;
}

static PyMethodDef specialize___gen_inner_stmts_translate_next_call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_translate_next_call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_specialize___gen_inner_stmts_translate_next_call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_specialize___gen_inner_stmts_translate_next_call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_translate_next_call_obj",
    .tp_new = specialize___gen_inner_stmts_translate_next_call_obj_new,
    .tp_dealloc = (destructor)specialize___gen_inner_stmts_translate_next_call_obj_dealloc,
    .tp_traverse = (traverseproc)specialize___gen_inner_stmts_translate_next_call_obj_traverse,
    .tp_clear = (inquiry)specialize___gen_inner_stmts_translate_next_call_obj_clear,
    .tp_methods = specialize___gen_inner_stmts_translate_next_call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__specialize___gen_inner_stmts_translate_next_call_obj,
    .tp_members = specialize___gen_inner_stmts_translate_next_call_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_specialize___gen_inner_stmts_translate_next_call_obj_template = &CPyType_specialize___gen_inner_stmts_translate_next_call_obj_template_;

static PyObject *
specialize___gen_inner_stmts_translate_next_call_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *self;
    self = (mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = specialize___gen_inner_stmts_translate_next_call_obj_vtable;
    self->vectorcall = CPyPy_specialize___gen_inner_stmts_translate_next_call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_specialize___gen_inner_stmts_translate_next_call_obj(void)
{
    PyObject *self = specialize___gen_inner_stmts_translate_next_call_obj_setup(CPyType_specialize___gen_inner_stmts_translate_next_call_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef specializemodule_methods[] = {
    {"_apply_specialization", (PyCFunction)CPyPy_specialize____apply_specialization, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_function_specialization", (PyCFunction)CPyPy_specialize___apply_function_specialization, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_method_specialization", (PyCFunction)CPyPy_specialize___apply_method_specialization, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"specialize_function", (PyCFunction)CPyPy_specialize___specialize_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_globals", (PyCFunction)CPyPy_specialize___translate_globals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_builtins_with_unary_dunder", (PyCFunction)CPyPy_specialize___translate_builtins_with_unary_dunder, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_len", (PyCFunction)CPyPy_specialize___translate_len, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dict_methods_fast_path", (PyCFunction)CPyPy_specialize___dict_methods_fast_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_list_from_generator_call", (PyCFunction)CPyPy_specialize___translate_list_from_generator_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_tuple_from_generator_call", (PyCFunction)CPyPy_specialize___translate_tuple_from_generator_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_set_from_generator_call", (PyCFunction)CPyPy_specialize___translate_set_from_generator_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"faster_min_max", (PyCFunction)CPyPy_specialize___faster_min_max, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_safe_generator_call", (PyCFunction)CPyPy_specialize___translate_safe_generator_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_any_call", (PyCFunction)CPyPy_specialize___translate_any_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_all_call", (PyCFunction)CPyPy_specialize___translate_all_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"any_all_helper", (PyCFunction)CPyPy_specialize___any_all_helper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_sum_call", (PyCFunction)CPyPy_specialize___translate_sum_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_dataclasses_field_call", (PyCFunction)CPyPy_specialize___translate_dataclasses_field_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_next_call", (PyCFunction)CPyPy_specialize___translate_next_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_isinstance", (PyCFunction)CPyPy_specialize___translate_isinstance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_dict_setdefault", (PyCFunction)CPyPy_specialize___translate_dict_setdefault, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_str_format", (PyCFunction)CPyPy_specialize___translate_str_format, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_fstring", (PyCFunction)CPyPy_specialize___translate_fstring, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_i64", (PyCFunction)CPyPy_specialize___translate_i64, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_i32", (PyCFunction)CPyPy_specialize___translate_i32, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_i16", (PyCFunction)CPyPy_specialize___translate_i16, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_u8", (PyCFunction)CPyPy_specialize___translate_u8, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"truncate_literal", (PyCFunction)CPyPy_specialize___truncate_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_int", (PyCFunction)CPyPy_specialize___translate_int, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_bool", (PyCFunction)CPyPy_specialize___translate_bool, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_float", (PyCFunction)CPyPy_specialize___translate_float, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef specializemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.specialize",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    specializemodule_methods
};

PyObject *CPyInit_mypyc___irbuild___specialize(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___specialize_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___specialize_internal);
        return CPyModule_mypyc___irbuild___specialize_internal;
    }
    CPyModule_mypyc___irbuild___specialize_internal = PyModule_Create(&specializemodule);
    if (unlikely(CPyModule_mypyc___irbuild___specialize_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___specialize_internal, "__name__");
    CPyStatic_specialize___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___specialize_internal);
    if (unlikely(CPyStatic_specialize___globals == NULL))
        goto fail;
    CPyType_specialize___specialize_function_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___specialize_function_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___specialize_function_env))
        goto fail;
    CPyType_specialize___wrapper_specialize_function_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___wrapper_specialize_function_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize___wrapper_specialize_function_obj))
        goto fail;
    CPyType_specialize___translate_any_call_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___translate_any_call_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___translate_any_call_env))
        goto fail;
    CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj))
        goto fail;
    CPyType_specialize___translate_all_call_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___translate_all_call_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___translate_all_call_env))
        goto fail;
    CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj))
        goto fail;
    CPyType_specialize___any_all_helper_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___any_all_helper_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___any_all_helper_env))
        goto fail;
    CPyType_specialize___gen_inner_stmts_any_all_helper_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___gen_inner_stmts_any_all_helper_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize___gen_inner_stmts_any_all_helper_obj))
        goto fail;
    CPyType_specialize___translate_sum_call_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___translate_sum_call_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___translate_sum_call_env))
        goto fail;
    CPyType_specialize___gen_inner_stmts_translate_sum_call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___gen_inner_stmts_translate_sum_call_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize___gen_inner_stmts_translate_sum_call_obj))
        goto fail;
    CPyType_specialize___translate_next_call_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___translate_next_call_env_template, NULL, modname);
    if (unlikely(!CPyType_specialize___translate_next_call_env))
        goto fail;
    CPyType_specialize___gen_inner_stmts_translate_next_call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_specialize___gen_inner_stmts_translate_next_call_obj_template, NULL, modname);
    if (unlikely(!CPyType_specialize___gen_inner_stmts_translate_next_call_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_specialize_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___specialize_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___specialize_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_specialize___specialize_function_env);
    Py_CLEAR(CPyType_specialize___wrapper_specialize_function_obj);
    Py_CLEAR(CPyType_specialize___translate_any_call_env);
    Py_CLEAR(CPyType_specialize_____mypyc_lambda__0_translate_any_call_obj);
    Py_CLEAR(CPyType_specialize___translate_all_call_env);
    Py_CLEAR(CPyType_specialize_____mypyc_lambda__1_translate_all_call_obj);
    Py_CLEAR(CPyType_specialize___any_all_helper_env);
    Py_CLEAR(CPyType_specialize___gen_inner_stmts_any_all_helper_obj);
    Py_CLEAR(CPyType_specialize___translate_sum_call_env);
    Py_CLEAR(CPyType_specialize___gen_inner_stmts_translate_sum_call_obj);
    Py_CLEAR(CPyType_specialize___translate_next_call_env);
    Py_CLEAR(CPyType_specialize___gen_inner_stmts_translate_next_call_obj);
    return NULL;
}

PyObject *CPyDef_specialize____apply_specialization(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee, PyObject *cpy_r_name, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2OO cpy_r_r6;
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
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_specializer;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    if (cpy_r_typ != NULL) goto CPyL25;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_name != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL26;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r3 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 111, CPyStatic_specialize___globals, "str", cpy_r_name);
        goto CPyL27;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL26;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r5 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 118, CPyStatic_specialize___globals, "str", cpy_r_name);
        goto CPyL27;
    }
    cpy_r_r6.f0 = cpy_r_r5;
    cpy_r_r6.f1 = cpy_r_typ;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = CPyStatic_specialize___globals;
    cpy_r_r8 = CPyStatics[8532]; /* 'specializers' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 118, CPyStatic_specialize___globals);
        goto CPyL28;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 118, CPyStatic_specialize___globals, "dict", cpy_r_r9);
        goto CPyL28;
    }
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10444 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp10444);
    PyObject *__tmp10445 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10445);
    cpy_r_r12 = PyDict_Contains(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 118, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL26;
    cpy_r_r15 = CPyStatic_specialize___globals;
    cpy_r_r16 = CPyStatics[8532]; /* 'specializers' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 119, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    if (likely(PyDict_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 119, CPyStatic_specialize___globals, "dict", cpy_r_r17);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r19 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 119, CPyStatic_specialize___globals, "str", cpy_r_name);
        goto CPyL29;
    }
    cpy_r_r20.f0 = cpy_r_r19;
    cpy_r_r20.f1 = cpy_r_typ;
    CPy_INCREF(cpy_r_r20.f0);
    CPy_INCREF(cpy_r_r20.f1);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10446 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp10446);
    PyObject *__tmp10447 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp10447);
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r18, cpy_r_r21);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 119, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 119, CPyStatic_specialize___globals, "list", cpy_r_r22);
        goto CPyL24;
    }
    cpy_r_r24 = 0;
CPyL16: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL30;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r23, cpy_r_r24);
    cpy_r_specializer = cpy_r_r29;
    PyObject *cpy_r_r30[3] = {cpy_r_builder, cpy_r_expr, cpy_r_callee};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_specializer, cpy_r_r31, 3, 0);
    CPy_DECREF(cpy_r_specializer);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 120, CPyStatic_specialize___globals);
        goto CPyL31;
    }
    if (PyObject_TypeCheck(cpy_r_r32, CPyType_ops___Value))
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL10448;
    if (cpy_r_r32 == Py_None)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL10448;
    CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 120, CPyStatic_specialize___globals, "mypyc.ir.ops.Value or None", cpy_r_r32);
    goto CPyL31;
__LL10448: ;
    cpy_r_val = cpy_r_r33;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_val != cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL32;
    } else
        goto CPyL33;
CPyL20: ;
    if (likely(cpy_r_val != Py_None))
        cpy_r_r36 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 122, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_val);
        goto CPyL24;
    }
    return cpy_r_r36;
CPyL22: ;
    cpy_r_r37 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r37;
    goto CPyL16;
CPyL23: ;
    cpy_r_r38 = Py_None;
    CPy_INCREF(cpy_r_r38);
    return cpy_r_r38;
CPyL24: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL25: ;
    CPy_INCREF(cpy_r_typ);
    goto CPyL2;
CPyL26: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r18);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL24;
CPyL32: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL20;
CPyL33: ;
    CPy_DECREF(cpy_r_val);
    goto CPyL22;
}

PyObject *CPyPy_specialize____apply_specialization(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", "name", "typ", 0};
    static CPyArg_Parser parser = {"OOOO|O:_apply_specialization", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    PyObject *obj_name;
    PyObject *obj_typ = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee, &obj_name, &obj_typ)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *arg_name;
    if (PyUnicode_Check(obj_name))
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL10449;
    if (obj_name == Py_None)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL10449;
    CPy_TypeError("str or None", obj_name); 
    goto fail;
__LL10449: ;
    PyObject *arg_typ;
    if (obj_typ == NULL) {
        arg_typ = NULL;
        goto __LL10450;
    }
    if (PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10450;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10450;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_typ); 
    goto fail;
__LL10450: ;
    PyObject *retval = CPyDef_specialize____apply_specialization(arg_builder, arg_expr, arg_callee, arg_name, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "_apply_specialization", 110, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___apply_function_specialization(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_callee, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_function_specialization", 130, CPyStatic_specialize___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_specialize____apply_specialization(cpy_r_builder, cpy_r_expr, cpy_r_callee, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_function_specialization", 130, CPyStatic_specialize___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_specialize___apply_function_specialization(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:apply_function_specialization", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___apply_function_specialization(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_function_specialization", 126, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___apply_method_specialization(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    if (cpy_r_typ != NULL) goto CPyL9;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_typ == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_callee, CPyType_nodes___MemberExpr, 6, mypy___nodes___MemberExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_method_specialization", 137, CPyStatic_specialize___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL6;
CPyL5: ;
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r4 = cpy_r_r5;
CPyL6: ;
    cpy_r_name = cpy_r_r4;
    cpy_r_r6 = CPyDef_specialize____apply_specialization(cpy_r_builder, cpy_r_expr, cpy_r_callee, cpy_r_name, cpy_r_typ);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_method_specialization", 138, CPyStatic_specialize___globals);
        goto CPyL8;
    }
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL9: ;
    CPy_INCREF(cpy_r_typ);
    goto CPyL2;
CPyL10: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL8;
}

PyObject *CPyPy_specialize___apply_method_specialization(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", "typ", 0};
    static CPyArg_Parser parser = {"OOO|O:apply_method_specialization", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    PyObject *obj_typ = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee, &obj_typ)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely(Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_callee); 
        goto fail;
    }
    PyObject *arg_typ;
    if (obj_typ == NULL) {
        arg_typ = NULL;
        goto __LL10451;
    }
    if (PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10451;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10451;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_typ); 
    goto fail;
__LL10451: ;
    PyObject *retval = CPyDef_specialize___apply_method_specialization(arg_builder, arg_expr, arg_callee, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "apply_method_specialization", 133, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___wrapper_specialize_function_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize___wrapper_specialize_function_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize___wrapper_specialize_function_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___wrapper_specialize_function_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_f) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypyc___irbuild___specialize___wrapper_specialize_function_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "wrapper", "wrapper_specialize_function_obj", "__mypyc_env__", 151, CPyStatic_specialize___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r0)->_wrapper;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "wrapper", "specialize_function_env", "wrapper", -1, CPyStatic_specialize___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_wrapper = cpy_r_r1;
    CPy_DECREF(cpy_r_wrapper);
    cpy_r_r2 = CPyStatic_specialize___globals;
    cpy_r_r3 = CPyStatics[8532]; /* 'specializers' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals, "dict", cpy_r_r4);
        goto CPyL11;
    }
    cpy_r_r6 = ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r0)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "wrapper", "specialize_function_env", "name", 152, CPyStatic_specialize___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typ' of 'specialize_function_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals);
        goto CPyL13;
    }
CPyL6: ;
    cpy_r_r8.f0 = cpy_r_r6;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10452 = cpy_r_r8.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp10452);
    PyObject *__tmp10453 = cpy_r_r8.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp10453);
    cpy_r_r10 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r5, cpy_r_r9, 1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals);
        goto CPyL10;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals, "list", cpy_r_r10);
        goto CPyL10;
    }
    cpy_r_r12 = PyList_Append(cpy_r_r11, cpy_r_f);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "wrapper", 152, CPyStatic_specialize___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_f);
    return cpy_r_f;
CPyL10: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_specialize___wrapper_specialize_function_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"f", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_f;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_f)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_f = obj_f;
    PyObject *retval = CPyDef_specialize___wrapper_specialize_function_obj_____call__(arg___mypyc_self__, arg_f);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "wrapper", 151, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___specialize_function(PyObject *cpy_r_name, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    if (cpy_r_typ != NULL) goto CPyL11;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_specialize___specialize_function_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 141, CPyStatic_specialize___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_name);
    if (((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_name != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_name);
    }
    ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_name = cpy_r_name;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 141, CPyStatic_specialize___globals);
        goto CPyL13;
    }
    if (((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_typ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_typ);
    }
    ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_typ = cpy_r_typ;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 141, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyDef_specialize___wrapper_specialize_function_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 151, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
    if (((mypyc___irbuild___specialize___wrapper_specialize_function_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___wrapper_specialize_function_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize___wrapper_specialize_function_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 151, CPyStatic_specialize___globals);
        goto CPyL15;
    }
    if (((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_wrapper != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_wrapper);
    }
    ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_wrapper = cpy_r_r4;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 151, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    cpy_r_r7 = ((mypyc___irbuild___specialize___specialize_function_envObject *)cpy_r_r1)->_wrapper;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'wrapper' of 'specialize_function_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 155, CPyStatic_specialize___globals);
        goto CPyL10;
    }
CPyL9: ;
    return cpy_r_r7;
CPyL10: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL11: ;
    CPy_INCREF(cpy_r_typ);
    goto CPyL2;
CPyL12: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_specialize___specialize_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", 0};
    static CPyArg_Parser parser = {"O|O:specialize_function", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (obj_typ == NULL) {
        arg_typ = NULL;
        goto __LL10454;
    }
    if (PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10454;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10454;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_typ); 
    goto fail;
__LL10454: ;
    PyObject *retval = CPyDef_specialize___specialize_function(arg_name, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "specialize_function", 141, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_globals(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_globals", 161, CPyStatic_specialize___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_specialize___translate_globals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_globals", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_globals(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_globals", 159, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_builtins_with_unary_dunder(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_arg_typ;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_shortname;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL51;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 180, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 180, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r10 = cpy_r_r6;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r5, cpy_r_r8, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 180, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 180, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (!cpy_r_r12) goto CPyL51;
    cpy_r_r13 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL51;
    cpy_r_r17 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 181, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_nodes___Expression)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 181, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r18);
        goto CPyL52;
    }
    cpy_r_arg = cpy_r_r19;
    cpy_r_r20 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 182, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    cpy_r_arg_typ = cpy_r_r20;
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr))
        cpy_r_r21 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 183, CPyStatic_specialize___globals, "mypy.nodes.NameExpr", cpy_r_callee);
        goto CPyL56;
    }
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 183, CPyStatic_specialize___globals);
        goto CPyL56;
    }
CPyL14: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = PyUnicode_Split(cpy_r_r22, cpy_r_r23, -1);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 183, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_r25 = CPyList_GetItemShort(cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 183, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 183, CPyStatic_specialize___globals, "str", cpy_r_r25);
        goto CPyL56;
    }
    cpy_r_shortname = cpy_r_r26;
    cpy_r_r27 = CPyStatics[8007]; /* 'i64' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_shortname, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL20;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", -1, CPyStatic_specialize___globals);
        goto CPyL57;
    }
CPyL20: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL22;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL26;
CPyL22: ;
    cpy_r_r35 = CPyStatics[8005]; /* 'i32' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_shortname, cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL25;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL25;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", -1, CPyStatic_specialize___globals);
        goto CPyL57;
    }
CPyL25: ;
    cpy_r_r41 = cpy_r_r36 == 0;
    cpy_r_r34 = cpy_r_r41;
CPyL26: ;
    if (!cpy_r_r34) goto CPyL28;
    cpy_r_r42 = cpy_r_r34;
    goto CPyL32;
CPyL28: ;
    cpy_r_r43 = CPyStatics[8003]; /* 'i16' */
    cpy_r_r44 = PyUnicode_Compare(cpy_r_shortname, cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL31;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL31;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", -1, CPyStatic_specialize___globals);
        goto CPyL57;
    }
CPyL31: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    cpy_r_r42 = cpy_r_r49;
CPyL32: ;
    if (!cpy_r_r42) goto CPyL34;
    cpy_r_r50 = cpy_r_r42;
    goto CPyL38;
CPyL34: ;
    cpy_r_r51 = CPyStatics[8009]; /* 'u8' */
    cpy_r_r52 = PyUnicode_Compare(cpy_r_shortname, cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 == -1;
    if (!cpy_r_r53) goto CPyL37;
    cpy_r_r54 = PyErr_Occurred();
    cpy_r_r55 = cpy_r_r54 != NULL;
    if (!cpy_r_r55) goto CPyL37;
    cpy_r_r56 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", -1, CPyStatic_specialize___globals);
        goto CPyL57;
    }
CPyL37: ;
    cpy_r_r57 = cpy_r_r52 == 0;
    cpy_r_r50 = cpy_r_r57;
CPyL38: ;
    if (cpy_r_r50) {
        goto CPyL58;
    } else
        goto CPyL40;
CPyL39: ;
    cpy_r_r58 = CPyStatics[5427]; /* '__int__' */
    CPy_INCREF(cpy_r_r58);
    cpy_r_method = cpy_r_r58;
    goto CPyL42;
CPyL40: ;
    cpy_r_r59 = CPyStatics[756]; /* '__' */
    cpy_r_r60 = CPyStatics[756]; /* '__' */
    cpy_r_r61 = CPyStr_Build(3, cpy_r_r59, cpy_r_shortname, cpy_r_r60);
    CPy_DECREF(cpy_r_shortname);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 187, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_method = cpy_r_r61;
CPyL42: ;
    cpy_r_r62 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_arg_typ)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (!cpy_r_r65) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_arg_typ) == CPyType_rtypes___RInstance))
        cpy_r_r66 = cpy_r_arg_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 188, CPyStatic_specialize___globals, "mypyc.ir.rtypes.RInstance", cpy_r_arg_typ);
        goto CPyL60;
    }
    cpy_r_r67 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r66)->_class_ir;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_arg_typ);
    cpy_r_r68 = CPyDef_class_ir___ClassIR___has_method(cpy_r_r67, cpy_r_method);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 188, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (!cpy_r_r68) goto CPyL62;
    cpy_r_r69 = 2;
    cpy_r_r70 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r69);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 189, CPyStatic_specialize___globals);
        goto CPyL63;
    }
    if (likely(cpy_r_r70 != Py_None))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 189, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r70);
        goto CPyL63;
    }
    cpy_r_obj = cpy_r_r71;
    cpy_r_r72 = PyList_New(0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 190, CPyStatic_specialize___globals);
        goto CPyL64;
    }
    cpy_r_r73 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    cpy_r_r74 = Py_None;
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_obj, cpy_r_method, cpy_r_r72, cpy_r_r74, cpy_r_r73, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_method);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 190, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    return cpy_r_r77;
CPyL51: ;
    cpy_r_r78 = Py_None;
    CPy_INCREF(cpy_r_r78);
    return cpy_r_r78;
CPyL52: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL53: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL2;
CPyL54: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_typ);
    goto CPyL52;
CPyL57: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_typ);
    CPy_DecRef(cpy_r_shortname);
    goto CPyL52;
CPyL58: ;
    CPy_DECREF(cpy_r_shortname);
    goto CPyL39;
CPyL59: ;
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_arg_typ);
    CPy_DECREF(cpy_r_method);
    goto CPyL51;
CPyL60: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_typ);
    CPy_DecRef(cpy_r_method);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_method);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_method);
    goto CPyL51;
CPyL63: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_obj);
    goto CPyL52;
}

PyObject *CPyPy_specialize___translate_builtins_with_unary_dunder(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_builtins_with_unary_dunder", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_builtins_with_unary_dunder(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_builtins_with_unary_dunder", 173, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_len(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_expr_rtype;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_borrow;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_obj;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL25;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL27;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 197, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 197, CPyStatic_specialize___globals);
        goto CPyL28;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r10 = cpy_r_r6;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r5, cpy_r_r8, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 197, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 197, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    if (!cpy_r_r12) goto CPyL25;
    cpy_r_r13 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 198, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_nodes___Expression)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_len", 198, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r14);
        goto CPyL26;
    }
    cpy_r_arg = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 199, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    cpy_r_expr_rtype = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_expr_rtype)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL30;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r21);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 203, CPyStatic_specialize___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_expr_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r23 = cpy_r_expr_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_len", 204, CPyStatic_specialize___globals, "mypyc.ir.rtypes.RTuple", cpy_r_expr_rtype);
        goto CPyL31;
    }
    cpy_r_r24 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r23)->_types;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_expr_rtype);
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = CPyDef_ops___Integer(cpy_r_r27, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 204, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    return cpy_r_r30;
CPyL16: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 206, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPyDef_rtypes___is_list_rprimitive(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 206, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    if (!cpy_r_r32) goto CPyL20;
    cpy_r_borrow = 1;
    goto CPyL21;
CPyL20: ;
    cpy_r_borrow = 0;
CPyL21: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_borrow);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 210, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_len", 210, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL26;
    }
    cpy_r_obj = cpy_r_r34;
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_builder___IRBuilder___builtin_len(cpy_r_builder, cpy_r_obj, cpy_r_r35);
    CPy_DECREF(cpy_r_obj);
    CPyTagged_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 211, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    return cpy_r_r36;
CPyL25: ;
    cpy_r_r37 = Py_None;
    CPy_INCREF(cpy_r_r37);
    return cpy_r_r37;
CPyL26: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL2;
CPyL28: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_expr_rtype);
    goto CPyL16;
CPyL31: ;
    CPy_DecRef(cpy_r_expr_rtype);
    goto CPyL26;
CPyL32: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL13;
}

PyObject *CPyPy_specialize___translate_len(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_len", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_len(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_len", 196, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___dict_methods_fast_path(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_rtype;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL67;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 223, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 223, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r10 = cpy_r_r6;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r5, cpy_r_r8, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 223, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 223, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    if (cpy_r_r12) goto CPyL9;
CPyL8: ;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r15 = CPyList_GetItemShort(cpy_r_r14, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 225, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 225, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL66;
    }
    cpy_r_arg = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL69;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r21 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 226, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL70;
    }
    cpy_r_r22 = ((mypy___nodes___CallExprObject *)cpy_r_r21)->_args;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = cpy_r_r25 != 0;
    if (cpy_r_r26) goto CPyL69;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r27 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 226, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL70;
    }
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_r27)->_callee;
    cpy_r_r29 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (cpy_r_r32) {
        goto CPyL17;
    } else
        goto CPyL69;
CPyL16: ;
    cpy_r_r33 = Py_None;
    CPy_INCREF(cpy_r_r33);
    return cpy_r_r33;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r34 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 228, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL70;
    }
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_r34)->_callee;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___MemberExpr))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 228, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_r35);
        goto CPyL70;
    }
    cpy_r_r37 = ((mypy___nodes___MemberExprObject *)cpy_r_r36)->_expr;
    CPy_INCREF(cpy_r_r37);
    cpy_r_base = cpy_r_r37;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r38 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 229, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL71;
    }
    cpy_r_r39 = ((mypy___nodes___CallExprObject *)cpy_r_r38)->_callee;
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___MemberExpr))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 229, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_r39);
        goto CPyL71;
    }
    cpy_r_r41 = ((mypy___nodes___MemberExprObject *)cpy_r_r40)->_name;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_arg);
    cpy_r_attr = cpy_r_r41;
    cpy_r_r42 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_base);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 230, CPyStatic_specialize___globals);
        goto CPyL72;
    }
    cpy_r_rtype = cpy_r_r42;
    cpy_r_r43 = CPyDef_rtypes___is_dict_rprimitive(cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 231, CPyStatic_specialize___globals);
        goto CPyL72;
    }
    if (!cpy_r_r43) goto CPyL73;
    cpy_r_r44 = CPyStatics[267]; /* 'keys' */
    cpy_r_r45 = PyUnicode_Compare(cpy_r_attr, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL27;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL27;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", -1, CPyStatic_specialize___globals);
        goto CPyL72;
    }
CPyL27: ;
    cpy_r_r50 = cpy_r_r45 == 0;
    if (!cpy_r_r50) goto CPyL29;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL33;
CPyL29: ;
    cpy_r_r52 = CPyStatics[2406]; /* 'values' */
    cpy_r_r53 = PyUnicode_Compare(cpy_r_attr, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 == -1;
    if (!cpy_r_r54) goto CPyL32;
    cpy_r_r55 = PyErr_Occurred();
    cpy_r_r56 = cpy_r_r55 != NULL;
    if (!cpy_r_r56) goto CPyL32;
    cpy_r_r57 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", -1, CPyStatic_specialize___globals);
        goto CPyL72;
    }
CPyL32: ;
    cpy_r_r58 = cpy_r_r53 == 0;
    cpy_r_r51 = cpy_r_r58;
CPyL33: ;
    if (!cpy_r_r51) goto CPyL35;
    cpy_r_r59 = cpy_r_r51;
    goto CPyL39;
CPyL35: ;
    cpy_r_r60 = CPyStatics[219]; /* 'items' */
    cpy_r_r61 = PyUnicode_Compare(cpy_r_attr, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL38;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL38;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", -1, CPyStatic_specialize___globals);
        goto CPyL72;
    }
CPyL38: ;
    cpy_r_r66 = cpy_r_r61 == 0;
    cpy_r_r59 = cpy_r_r66;
CPyL39: ;
    if (cpy_r_r59) {
        goto CPyL41;
    } else
        goto CPyL73;
CPyL40: ;
    cpy_r_r67 = Py_None;
    CPy_INCREF(cpy_r_r67);
    return cpy_r_r67;
CPyL41: ;
    cpy_r_r68 = 2;
    cpy_r_r69 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_base, cpy_r_r68);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 234, CPyStatic_specialize___globals);
        goto CPyL74;
    }
    if (likely(cpy_r_r69 != Py_None))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 234, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r69);
        goto CPyL74;
    }
    cpy_r_obj = cpy_r_r70;
    cpy_r_r71 = CPyStatics[267]; /* 'keys' */
    cpy_r_r72 = PyUnicode_Compare(cpy_r_attr, cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 == -1;
    if (!cpy_r_r73) goto CPyL46;
    cpy_r_r74 = PyErr_Occurred();
    cpy_r_r75 = cpy_r_r74 != NULL;
    if (!cpy_r_r75) goto CPyL46;
    cpy_r_r76 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 238, CPyStatic_specialize___globals);
        goto CPyL75;
    }
CPyL46: ;
    cpy_r_r77 = cpy_r_r72 == 0;
    if (cpy_r_r77) {
        goto CPyL76;
    } else
        goto CPyL52;
CPyL47: ;
    cpy_r_r78 = CPyStatic_specialize___globals;
    cpy_r_r79 = CPyStatics[8533]; /* 'dict_keys_op' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 239, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (likely(PyTuple_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 239, CPyStatic_specialize___globals, "tuple", cpy_r_r80);
        goto CPyL77;
    }
    cpy_r_r82 = PyList_New(1);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 239, CPyStatic_specialize___globals);
        goto CPyL78;
    }
    cpy_r_r83 = (CPyPtr)&((PyListObject *)cpy_r_r82)->ob_item;
    cpy_r_r84 = *(CPyPtr *)cpy_r_r83;
    *(PyObject * *)cpy_r_r84 = cpy_r_obj;
    cpy_r_r85 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r85);
    cpy_r_r86 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r81, cpy_r_r82, cpy_r_r85);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 239, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    return cpy_r_r86;
CPyL52: ;
    cpy_r_r87 = CPyStatics[2406]; /* 'values' */
    cpy_r_r88 = PyUnicode_Compare(cpy_r_attr, cpy_r_r87);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r89 = cpy_r_r88 == -1;
    if (!cpy_r_r89) goto CPyL55;
    cpy_r_r90 = PyErr_Occurred();
    cpy_r_r91 = cpy_r_r90 != NULL;
    if (!cpy_r_r91) goto CPyL55;
    cpy_r_r92 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 240, CPyStatic_specialize___globals);
        goto CPyL77;
    }
CPyL55: ;
    cpy_r_r93 = cpy_r_r88 == 0;
    if (!cpy_r_r93) goto CPyL61;
    cpy_r_r94 = CPyStatic_specialize___globals;
    cpy_r_r95 = CPyStatics[8534]; /* 'dict_values_op' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 241, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (likely(PyTuple_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 241, CPyStatic_specialize___globals, "tuple", cpy_r_r96);
        goto CPyL77;
    }
    cpy_r_r98 = PyList_New(1);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 241, CPyStatic_specialize___globals);
        goto CPyL79;
    }
    cpy_r_r99 = (CPyPtr)&((PyListObject *)cpy_r_r98)->ob_item;
    cpy_r_r100 = *(CPyPtr *)cpy_r_r99;
    *(PyObject * *)cpy_r_r100 = cpy_r_obj;
    cpy_r_r101 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r101);
    cpy_r_r102 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r97, cpy_r_r98, cpy_r_r101);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r98);
    CPyTagged_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 241, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    return cpy_r_r102;
CPyL61: ;
    cpy_r_r103 = CPyStatic_specialize___globals;
    cpy_r_r104 = CPyStatics[8535]; /* 'dict_items_op' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 243, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (likely(PyTuple_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 243, CPyStatic_specialize___globals, "tuple", cpy_r_r105);
        goto CPyL77;
    }
    cpy_r_r107 = PyList_New(1);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 243, CPyStatic_specialize___globals);
        goto CPyL80;
    }
    cpy_r_r108 = (CPyPtr)&((PyListObject *)cpy_r_r107)->ob_item;
    cpy_r_r109 = *(CPyPtr *)cpy_r_r108;
    *(PyObject * *)cpy_r_r109 = cpy_r_obj;
    cpy_r_r110 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r110);
    cpy_r_r111 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r106, cpy_r_r107, cpy_r_r110);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r107);
    CPyTagged_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 243, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    return cpy_r_r111;
CPyL66: ;
    cpy_r_r112 = NULL;
    return cpy_r_r112;
CPyL67: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL2;
CPyL68: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL66;
CPyL69: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL16;
CPyL70: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL66;
CPyL71: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_base);
    goto CPyL66;
CPyL72: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_attr);
    goto CPyL66;
CPyL73: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_attr);
    goto CPyL40;
CPyL74: ;
    CPy_DecRef(cpy_r_attr);
    goto CPyL66;
CPyL75: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_obj);
    goto CPyL66;
CPyL76: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL47;
CPyL77: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL66;
CPyL78: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r81);
    goto CPyL66;
CPyL79: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r97);
    goto CPyL66;
CPyL80: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r106);
    goto CPyL66;
}

PyObject *CPyPy_specialize___dict_methods_fast_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:dict_methods_fast_path", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___dict_methods_fast_path(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "dict_methods_fast_path", 216, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_list_from_generator_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
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
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL16;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 259, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 259, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL18;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 259, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 260, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    cpy_r_r13 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 264, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___GeneratorExpr))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 264, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r18);
        goto CPyL17;
    }
    cpy_r_r20 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[8263]; /* 'new_list_op_with_length' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 265, CPyStatic_specialize___globals);
        goto CPyL19;
    }
    cpy_r_r23 = CPyStatic_specialize___globals;
    cpy_r_r24 = CPyStatics[8264]; /* 'new_list_set_item_op' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 266, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 266, CPyStatic_specialize___globals, "tuple", cpy_r_r25);
        goto CPyL20;
    }
    cpy_r_r27 = CPyDef_for_helpers___sequence_from_generator_preallocate_helper(cpy_r_builder, cpy_r_r19, cpy_r_r22, cpy_r_r26);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 262, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    return cpy_r_r27;
CPyL16: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL17: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL18: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL19: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL17;
}

PyObject *CPyPy_specialize___translate_list_from_generator_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_list_from_generator_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_list_from_generator_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_list_from_generator_call", 247, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_tuple_from_generator_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
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
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL16;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 284, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 284, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL18;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 284, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 285, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    cpy_r_r13 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 289, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___GeneratorExpr))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 289, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r18);
        goto CPyL17;
    }
    cpy_r_r20 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[8536]; /* 'new_tuple_with_length' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 290, CPyStatic_specialize___globals);
        goto CPyL19;
    }
    cpy_r_r23 = CPyStatic_specialize___globals;
    cpy_r_r24 = CPyStatics[8537]; /* 'new_tuple_set_item_op' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 291, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 291, CPyStatic_specialize___globals, "tuple", cpy_r_r25);
        goto CPyL20;
    }
    cpy_r_r27 = CPyDef_for_helpers___sequence_from_generator_preallocate_helper(cpy_r_builder, cpy_r_r19, cpy_r_r22, cpy_r_r26);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 287, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    return cpy_r_r27;
CPyL16: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL17: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL18: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL19: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL17;
}

PyObject *CPyPy_specialize___translate_tuple_from_generator_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_tuple_from_generator_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_tuple_from_generator_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_tuple_from_generator_call", 272, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_set_from_generator_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL13;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 307, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 307, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 307, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 308, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    cpy_r_r13 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL13;
    cpy_r_r17 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 310, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___GeneratorExpr))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 310, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r18);
        goto CPyL14;
    }
    cpy_r_r20 = CPyDef_for_helpers___translate_set_comprehension(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 310, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    return cpy_r_r20;
CPyL13: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL14: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL15: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_specialize___translate_set_from_generator_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_set_from_generator_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_set_from_generator_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_set_from_generator_call", 297, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___faster_min_max(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
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
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_x;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_comparison;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_true_block;
    PyObject *cpy_r_false_block;
    PyObject *cpy_r_next_block;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL45;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 317, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 317, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r5 = PyList_New(2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 317, CPyStatic_specialize___globals);
        goto CPyL47;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r7 = cpy_r_r1;
    cpy_r_r8 = cpy_r_r7 + 8;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r8 = cpy_r_r3;
    cpy_r_r9 = PyObject_RichCompare(cpy_r_r0, cpy_r_r5, 2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 317, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 317, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    if (!cpy_r_r10) goto CPyL43;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_nodes___Expression)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r12);
        goto CPyL44;
    }
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL44;
    }
    cpy_r_r17 = cpy_r_r16;
    cpy_r_r18 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_r18, 2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL48;
    }
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 318, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r22);
        goto CPyL48;
    }
    cpy_r_r24 = cpy_r_r23;
    cpy_r_x = cpy_r_r17;
    cpy_r_y = cpy_r_r24;
    cpy_r_r25 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 319, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPyDef_ops___Register(cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 319, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    cpy_r_result = cpy_r_r29;
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_callee, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 321, CPyStatic_specialize___globals);
        goto CPyL50;
    }
CPyL21: ;
    cpy_r_r31 = CPyStatics[8538]; /* 'builtins.min' */
    cpy_r_r32 = PyUnicode_Compare(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 == -1;
    if (!cpy_r_r33) goto CPyL24;
    cpy_r_r34 = PyErr_Occurred();
    cpy_r_r35 = cpy_r_r34 != NULL;
    if (!cpy_r_r35) goto CPyL24;
    cpy_r_r36 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 321, CPyStatic_specialize___globals);
        goto CPyL50;
    }
CPyL24: ;
    cpy_r_r37 = cpy_r_r32 == 0;
    if (!cpy_r_r37) goto CPyL27;
    cpy_r_r38 = CPyStatics[2465]; /* '<' */
    cpy_r_r39 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_y, cpy_r_x, cpy_r_r38, cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 322, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    cpy_r_comparison = cpy_r_r40;
    goto CPyL29;
CPyL27: ;
    cpy_r_r41 = CPyStatics[840]; /* '>' */
    cpy_r_r42 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_y, cpy_r_x, cpy_r_r41, cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 324, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    cpy_r_comparison = cpy_r_r43;
CPyL29: ;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_ops___BasicBlock(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 326, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_r46 = cpy_r_r45;
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPyDef_ops___BasicBlock(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 326, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    cpy_r_r49 = cpy_r_r48;
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = CPyDef_ops___BasicBlock(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 326, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    cpy_r_r52 = cpy_r_r51;
    cpy_r_true_block = cpy_r_r46;
    cpy_r_false_block = cpy_r_r49;
    cpy_r_next_block = cpy_r_r52;
    cpy_r_r53 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_true_block, cpy_r_false_block);
    CPy_DECREF(cpy_r_comparison);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 327, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_r54 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_true_block);
    CPy_DECREF(cpy_r_true_block);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 329, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    cpy_r_r55 = ((mypyc___ir___ops___RegisterObject *)cpy_r_result)->_type;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r56);
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_y, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_y);
    CPy_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 330, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_r59 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_result, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 330, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_r61 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next_block);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 331, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_r62 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_false_block);
    CPy_DECREF(cpy_r_false_block);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 333, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    cpy_r_r63 = ((mypyc___ir___ops___RegisterObject *)cpy_r_result)->_type;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r64);
    cpy_r_r65 = 2;
    cpy_r_r66 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_x, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_x);
    CPy_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 334, CPyStatic_specialize___globals);
        goto CPyL58;
    }
    cpy_r_r67 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_result, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 334, CPyStatic_specialize___globals);
        goto CPyL58;
    }
    cpy_r_r69 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next_block);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 335, CPyStatic_specialize___globals);
        goto CPyL58;
    }
    cpy_r_r70 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_next_block);
    CPy_DECREF(cpy_r_next_block);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 337, CPyStatic_specialize___globals);
        goto CPyL59;
    }
    return cpy_r_result;
CPyL43: ;
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL44: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL1;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_comparison);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r46);
    goto CPyL44;
CPyL53: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    goto CPyL44;
CPyL54: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_true_block);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL44;
CPyL56: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL44;
CPyL58: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL44;
CPyL59: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL44;
}

PyObject *CPyPy_specialize___faster_min_max(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:faster_min_max", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___faster_min_max(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "faster_min_max", 316, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_safe_generator_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
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
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
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
    PyObject *cpy_r_arg;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_arg_2;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (!cpy_r_r4) goto CPyL51;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 361, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 361, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL52;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 361, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL51;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 362, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    cpy_r_r13 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL51;
    cpy_r_r17 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r21 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 366, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL52;
    }
    cpy_r_r22 = ((mypy___nodes___MemberExprObject *)cpy_r_r21)->_expr;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 2;
    cpy_r_r24 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 366, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 366, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r24);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r26 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 367, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL54;
    }
    cpy_r_r27 = ((mypy___nodes___MemberExprObject *)cpy_r_r26)->_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r29 = CPyList_GetItemShort(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___GeneratorExpr))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r29);
        goto CPyL55;
    }
    cpy_r_r31 = CPyDef_for_helpers___translate_list_comprehension(cpy_r_builder, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    cpy_r_r32 = PyList_New(1);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r32)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    *(PyObject * *)cpy_r_r34 = cpy_r_r31;
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyList_GetSlice(cpy_r_r35, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals, "list", cpy_r_r36);
        goto CPyL57;
    }
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = PyList_New(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals);
        goto CPyL58;
    }
    cpy_r_r41 = 0;
CPyL22: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL59;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r41);
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nodes___Expression)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r46);
        goto CPyL60;
    }
    cpy_r_arg = cpy_r_r47;
    cpy_r_r48 = 2;
    cpy_r_r49 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r48);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals);
        goto CPyL60;
    }
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r49);
        goto CPyL60;
    }
    cpy_r_r51 = CPyList_SetItemUnsafe(cpy_r_r40, cpy_r_r41, cpy_r_r50);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 370, CPyStatic_specialize___globals);
        goto CPyL60;
    }
    cpy_r_r52 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r52;
    goto CPyL22;
CPyL28: ;
    cpy_r_r53 = PyNumber_Add(cpy_r_r32, cpy_r_r40);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 369, CPyStatic_specialize___globals, "list", cpy_r_r53);
        goto CPyL55;
    }
    cpy_r_r55 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 372, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    cpy_r_r56 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r56);
    cpy_r_r57 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_r25, cpy_r_r27, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 365, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    return cpy_r_r59;
CPyL33: ;
    cpy_r_r60 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r61 = CPyList_GetItemShort(cpy_r_r60, 0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_nodes___GeneratorExpr))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r61);
        goto CPyL52;
    }
    cpy_r_r63 = CPyDef_for_helpers___translate_list_comprehension(cpy_r_builder, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    cpy_r_r64 = PyList_New(1);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    cpy_r_r65 = (CPyPtr)&((PyListObject *)cpy_r_r64)->ob_item;
    cpy_r_r66 = *(CPyPtr *)cpy_r_r65;
    *(PyObject * *)cpy_r_r66 = cpy_r_r63;
    cpy_r_r67 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyList_GetSlice(cpy_r_r67, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals);
        goto CPyL63;
    }
    if (likely(PyList_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals, "list", cpy_r_r68);
        goto CPyL63;
    }
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r69)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = PyList_New(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals);
        goto CPyL64;
    }
    cpy_r_r73 = 0;
CPyL41: ;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r69)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = (Py_ssize_t)cpy_r_r73 < (Py_ssize_t)cpy_r_r76;
    if (!cpy_r_r77) goto CPyL65;
    cpy_r_r78 = CPyList_GetItemUnsafe(cpy_r_r69, cpy_r_r73);
    if (likely(PyObject_TypeCheck(cpy_r_r78, CPyType_nodes___Expression)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r78);
        goto CPyL66;
    }
    cpy_r_arg_2 = cpy_r_r79;
    cpy_r_r80 = 2;
    cpy_r_r81 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg_2, cpy_r_r80);
    CPy_DECREF(cpy_r_arg_2);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    if (likely(cpy_r_r81 != Py_None))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r81);
        goto CPyL66;
    }
    cpy_r_r83 = CPyList_SetItemUnsafe(cpy_r_r72, cpy_r_r73, cpy_r_r82);
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 383, CPyStatic_specialize___globals);
        goto CPyL66;
    }
    cpy_r_r84 = cpy_r_r73 + 2;
    cpy_r_r73 = cpy_r_r84;
    goto CPyL41;
CPyL47: ;
    cpy_r_r85 = PyNumber_Add(cpy_r_r64, cpy_r_r72);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 382, CPyStatic_specialize___globals, "list", cpy_r_r85);
        goto CPyL52;
    }
    cpy_r_r87 = CPyDef_builder___IRBuilder___call_refexpr_with_args(cpy_r_builder, cpy_r_expr, cpy_r_callee, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 378, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    return cpy_r_r87;
CPyL51: ;
    cpy_r_r88 = Py_None;
    CPy_INCREF(cpy_r_r88);
    return cpy_r_r88;
CPyL52: ;
    cpy_r_r89 = NULL;
    return cpy_r_r89;
CPyL53: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL54: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    goto CPyL52;
CPyL57: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r32);
    goto CPyL52;
CPyL58: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r37);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL28;
CPyL60: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r54);
    goto CPyL52;
CPyL62: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL52;
CPyL63: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r69);
    goto CPyL52;
CPyL65: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL47;
CPyL66: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL52;
}

PyObject *CPyPy_specialize___translate_safe_generator_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_safe_generator_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_safe_generator_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_safe_generator_call", 353, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "<lambda>", "__mypyc_lambda__0_translate_any_call_obj", "__mypyc_env__", 396, CPyStatic_specialize___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    CPy_INCREF(cpy_r_x);
    return cpy_r_x;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(PyObject_TypeCheck(obj_x, CPyType_ops___Value)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_x); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "<lambda>", 396, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_any_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = CPyDef_specialize___translate_any_call_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 390, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 == 2;
    if (!cpy_r_r5) goto CPyL21;
    cpy_r_r6 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 393, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 393, CPyStatic_specialize___globals);
        goto CPyL23;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_r7);
    *(PyObject * *)cpy_r_r11 = cpy_r_r7;
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r6, cpy_r_r9, 2);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 393, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 393, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    if (!cpy_r_r13) goto CPyL21;
    cpy_r_r14 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r15 = CPyList_GetItemShortBorrow(cpy_r_r14, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 394, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    cpy_r_r16 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL21;
    cpy_r_r20 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___GeneratorExpr))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r21);
        goto CPyL24;
    }
    cpy_r_r23 = CPyStatics[7834]; /* 'false' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_builder, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    cpy_r_r25 = CPyDef_specialize_____mypyc_lambda__0_translate_any_call_obj();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL26;
    }
    if (((mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *)cpy_r_r25)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *)cpy_r_r25)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize_____mypyc_lambda__0_translate_any_call_objObject *)cpy_r_r25)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    cpy_r_r27 = CPyStatics[7833]; /* 'true' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_builder, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    cpy_r_r29 = CPyDef_specialize___any_all_helper(cpy_r_builder, cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 396, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    return cpy_r_r29;
CPyL19: ;
    cpy_r_r30 = Py_None;
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL20: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL21: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL3;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL20;
}

PyObject *CPyPy_specialize___translate_any_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_any_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_any_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_any_call", 390, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "<lambda>", "__mypyc_lambda__1_translate_all_call_obj", "__mypyc_env__", 411, CPyStatic_specialize___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "<lambda>", "translate_all_call_env", "builder", 411, CPyStatic_specialize___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyStatics[869]; /* 'not' */
    cpy_r_r3 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expr' of 'translate_all_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<lambda>", 411, CPyStatic_specialize___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_r3)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = CPyDef_builder___IRBuilder___unary_op(cpy_r_r1, cpy_r_x, cpy_r_r2, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<lambda>", 411, CPyStatic_specialize___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(PyObject_TypeCheck(obj_x, CPyType_ops___Value)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_x); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "<lambda>", 411, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_all_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
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
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = CPyDef_specialize___translate_all_call_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 401, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 401, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_expr);
    if (((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr);
    }
    ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr = cpy_r_expr;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 401, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    cpy_r_r3 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "expr", 403, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_r3)->_args;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 == 2;
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r8) goto CPyL31;
    cpy_r_r9 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "expr", 404, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_r9)->_arg_kinds;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 404, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 404, CPyStatic_specialize___globals);
        goto CPyL33;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    CPy_INCREF(cpy_r_r11);
    *(PyObject * *)cpy_r_r15 = cpy_r_r11;
    cpy_r_r16 = PyObject_RichCompare(cpy_r_r10, cpy_r_r13, 2);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 404, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r17 = 2;
    } else
        cpy_r_r17 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 404, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    if (!cpy_r_r17) goto CPyL31;
    cpy_r_r18 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "expr", 405, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r18);
CPyL14: ;
    cpy_r_r19 = ((mypy___nodes___CallExprObject *)cpy_r_r18)->_args;
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 405, CPyStatic_specialize___globals);
        goto CPyL34;
    }
    cpy_r_r21 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r24) goto CPyL31;
    cpy_r_r25 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "builder", 408, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r25);
CPyL17: ;
    cpy_r_r26 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "expr", 409, CPyStatic_specialize___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r26);
CPyL18: ;
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_r26)->_args;
    cpy_r_r28 = CPyList_GetItemShort(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 409, CPyStatic_specialize___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___GeneratorExpr))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 409, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r28);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_all_call", "translate_all_call_env", "builder", 410, CPyStatic_specialize___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r30);
CPyL21: ;
    cpy_r_r31 = CPyStatics[7833]; /* 'true' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 410, CPyStatic_specialize___globals);
        goto CPyL37;
    }
    cpy_r_r33 = CPyDef_specialize_____mypyc_lambda__1_translate_all_call_obj();
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 411, CPyStatic_specialize___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *)cpy_r_r33)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *)cpy_r_r33)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize_____mypyc_lambda__1_translate_all_call_objObject *)cpy_r_r33)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 411, CPyStatic_specialize___globals);
        goto CPyL39;
    }
    cpy_r_r35 = ((mypyc___irbuild___specialize___translate_all_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r35 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'translate_all_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r35);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 412, CPyStatic_specialize___globals);
        goto CPyL40;
    }
CPyL25: ;
    cpy_r_r36 = CPyStatics[7834]; /* 'false' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 412, CPyStatic_specialize___globals);
        goto CPyL40;
    }
    cpy_r_r38 = CPyDef_specialize___any_all_helper(cpy_r_r25, cpy_r_r29, cpy_r_r32, cpy_r_r33, cpy_r_r37);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 407, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    return cpy_r_r38;
CPyL28: ;
    cpy_r_r39 = Py_None;
    CPy_INCREF(cpy_r_r39);
    return cpy_r_r39;
CPyL29: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL7;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r33);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r33);
    goto CPyL29;
}

PyObject *CPyPy_specialize___translate_all_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_all_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_all_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_all_call", 401, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize___gen_inner_stmts_any_all_helper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

char CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_comparison;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "gen_inner_stmts_any_all_helper_obj", "__mypyc_env__", 429, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "gen_inner_stmts", -1, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 430, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "gen", 430, CPyStatic_specialize___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r3)->_left_expr;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 430, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 430, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL30;
    }
    cpy_r_r8 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_modify;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "modify", 430, CPyStatic_specialize___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 430, CPyStatic_specialize___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_ops___Value)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 430, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL30;
    }
    cpy_r_comparison = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 431, CPyStatic_specialize___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_true_block;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "true_block", 431, CPyStatic_specialize___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_false_block;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "false_block", 431, CPyStatic_specialize___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_r16 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r13, cpy_r_comparison, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_comparison);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 431, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    cpy_r_r17 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 432, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_true_block;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "true_block", 432, CPyStatic_specialize___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r18);
CPyL15: ;
    cpy_r_r19 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 432, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    cpy_r_r20 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 433, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "retval", 433, CPyStatic_specialize___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_new_value;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "new_value", 433, CPyStatic_specialize___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r22);
CPyL19: ;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r22, 0, 0, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 433, CPyStatic_specialize___globals);
        goto CPyL38;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_ops___Value)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 433, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL38;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___assign(cpy_r_r20, cpy_r_r21, cpy_r_r24, -2);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 433, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    cpy_r_r26 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 434, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r26);
CPyL23: ;
    cpy_r_r27 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_exit_block;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "exit_block", 434, CPyStatic_specialize___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r27);
CPyL24: ;
    cpy_r_r28 = CPyDef_builder___IRBuilder___goto(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 434, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    cpy_r_r29 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "any_all_helper_env", "builder", 435, CPyStatic_specialize___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r29);
CPyL26: ;
    cpy_r_r30 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_false_block;
    if (unlikely(cpy_r_r30 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'false_block' of 'any_all_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r30);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 435, CPyStatic_specialize___globals);
        goto CPyL40;
    }
CPyL27: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 435, CPyStatic_specialize___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_comparison);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r13);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL29;
}

PyObject *CPyPy_specialize___gen_inner_stmts_any_all_helper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_specialize___gen_inner_stmts_any_all_helper_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 429, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___any_all_helper(PyObject *cpy_r_builder, PyObject *cpy_r_gen, PyObject *cpy_r_initial_value, PyObject *cpy_r_modify, PyObject *cpy_r_new_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
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
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_loop_params;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = CPyDef_specialize___any_all_helper_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_gen);
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen = cpy_r_gen;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_modify);
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_modify != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_modify);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_modify = cpy_r_modify;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_new_value);
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_new_value != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_new_value);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_new_value = cpy_r_new_value;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_r5 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL42;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 424, CPyStatic_specialize___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r7 = NULL;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___Register(cpy_r_r5, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 424, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 424, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_r12 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "builder", 425, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "retval", 425, CPyStatic_specialize___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_initial_value, 0, 0, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 425, CPyStatic_specialize___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_ops___Value)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 425, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r14);
        goto CPyL44;
    }
    cpy_r_r16 = CPyDef_builder___IRBuilder___assign(cpy_r_r12, cpy_r_r13, cpy_r_r15, -2);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 425, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_r17 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen", 426, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r17);
CPyL16: ;
    cpy_r_r18 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r17)->_indices;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen", 426, CPyStatic_specialize___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r19)->_sequences;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen", 426, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r21)->_condlists;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen", 426, CPyStatic_specialize___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r23);
CPyL19: ;
    cpy_r_r24 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r23)->_is_async;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[794]; /* 'zip' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 426, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r28[4] = {cpy_r_r18, cpy_r_r20, cpy_r_r22, cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 4, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 426, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r31 = PySequence_List(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 426, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_loop_params = cpy_r_r31;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = CPyDef_ops___BasicBlock(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    cpy_r_r34 = cpy_r_r33;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPyDef_ops___BasicBlock(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    cpy_r_r37 = cpy_r_r36;
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPyDef_ops___BasicBlock(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_r40 = cpy_r_r39;
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_true_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_true_block);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_true_block = cpy_r_r34;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_false_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_false_block);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_false_block = cpy_r_r37;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_exit_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_exit_block);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_exit_block = cpy_r_r40;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 427, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    cpy_r_r44 = CPyDef_specialize___gen_inner_stmts_any_all_helper_obj();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 429, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *)cpy_r_r44)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *)cpy_r_r44)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize___gen_inner_stmts_any_all_helper_objObject *)cpy_r_r44)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 429, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r44;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 429, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    cpy_r_r47 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "builder", 437, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r47);
CPyL32: ;
    cpy_r_r48 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen_inner_stmts", 437, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r48);
CPyL33: ;
    cpy_r_r49 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "gen", 437, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r49);
CPyL34: ;
    cpy_r_r50 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r49)->_line;
    CPyTagged_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = CPyDef_for_helpers___comprehension_helper(cpy_r_r47, cpy_r_loop_params, cpy_r_r48, cpy_r_r50);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 437, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_r52 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "builder", 438, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r52);
CPyL36: ;
    cpy_r_r53 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_exit_block;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "any_all_helper", "any_all_helper_env", "exit_block", 438, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r53);
CPyL37: ;
    cpy_r_r54 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 438, CPyStatic_specialize___globals);
        goto CPyL41;
    }
    cpy_r_r55 = ((mypyc___irbuild___specialize___any_all_helper_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r55 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'retval' of 'any_all_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r55);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 440, CPyStatic_specialize___globals);
        goto CPyL40;
    }
CPyL39: ;
    return cpy_r_r55;
CPyL40: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL40;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    goto CPyL40;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL40;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r34);
    goto CPyL40;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r40);
    goto CPyL40;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r44);
    goto CPyL40;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r47);
    goto CPyL40;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL40;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r52);
    goto CPyL40;
}

PyObject *CPyPy_specialize___any_all_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "gen", "initial_value", "modify", "new_value", 0};
    static CPyArg_Parser parser = {"OOOOO:any_all_helper", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_gen;
    PyObject *obj_initial_value;
    PyObject *obj_modify;
    PyObject *obj_new_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_gen, &obj_initial_value, &obj_modify, &obj_new_value)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_nodes___GeneratorExpr))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_gen); 
        goto fail;
    }
    PyObject *arg_initial_value = obj_initial_value;
    PyObject *arg_modify = obj_modify;
    PyObject *arg_new_value = obj_new_value;
    PyObject *retval = CPyDef_specialize___any_all_helper(arg_builder, arg_gen, arg_initial_value, arg_modify, arg_new_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "any_all_helper", 417, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize___gen_inner_stmts_translate_sum_call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

char CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_call_expr;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "gen_inner_stmts_translate_sum_call_obj", "__mypyc_env__", 470, CPyStatic_specialize___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "gen_inner_stmts", -1, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "builder", 471, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "gen_expr", 471, CPyStatic_specialize___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r3)->_left_expr;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 471, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 471, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_call_expr = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "builder", 472, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "retval", 472, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_sum_call_env", "builder", 472, CPyStatic_specialize___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r11 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'retval' of 'translate_sum_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r11);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 472, CPyStatic_specialize___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r12 = CPyStatics[886]; /* '+' */
    cpy_r_r13 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r10, cpy_r_r11, cpy_r_call_expr, cpy_r_r12, -2);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_call_expr);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 472, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___assign(cpy_r_r8, cpy_r_r9, cpy_r_r13, -2);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 472, CPyStatic_specialize___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_call_expr);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_call_expr);
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_call_expr);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_call_expr);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
}

PyObject *CPyPy_specialize___gen_inner_stmts_translate_sum_call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 470, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_sum_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_start_expr;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_target_type;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
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
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_loop_params;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = CPyDef_specialize___translate_sum_call_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 444, CPyStatic_specialize___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 444, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 == 2;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL5;
CPyL4: ;
    cpy_r_r8 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = cpy_r_r11 == 4;
    cpy_r_r7 = cpy_r_r12;
CPyL5: ;
    if (!cpy_r_r7) goto CPyL69;
    cpy_r_r13 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 451, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___ArgKind))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 451, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r14);
        goto CPyL68;
    }
    cpy_r_r16 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 451, CPyStatic_specialize___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r18 = cpy_r_r15 == cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    if (!cpy_r_r18) goto CPyL69;
    cpy_r_r19 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 452, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r21 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (cpy_r_r24) {
        goto CPyL15;
    } else
        goto CPyL69;
CPyL14: ;
    cpy_r_r25 = Py_None;
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL15: ;
    cpy_r_r26 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = cpy_r_r29 == 4;
    if (!cpy_r_r30) goto CPyL34;
    cpy_r_r31 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r32 = CPyList_GetItemShort(cpy_r_r31, 2);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_nodes___ArgKind))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r32);
        goto CPyL68;
    }
    cpy_r_r34 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r36 = cpy_r_r33 != cpy_r_r34;
    CPy_DECREF(cpy_r_r33);
    if (cpy_r_r36) goto CPyL23;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL29;
CPyL23: ;
    cpy_r_r38 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r39 = CPyList_GetItemShort(cpy_r_r38, 2);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___ArgKind))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r39);
        goto CPyL68;
    }
    cpy_r_r41 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r41 == NULL)) {
        goto CPyL72;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 459, CPyStatic_specialize___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r43 = cpy_r_r40 != cpy_r_r41;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r37 = cpy_r_r43;
CPyL29: ;
    if (cpy_r_r37) {
        goto CPyL73;
    } else
        goto CPyL31;
CPyL30: ;
    cpy_r_r44 = Py_None;
    CPy_INCREF(cpy_r_r44);
    return cpy_r_r44;
CPyL31: ;
    cpy_r_r45 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r46 = CPyList_GetItemShort(cpy_r_r45, 2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 461, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nodes___Expression)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 461, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r46);
        goto CPyL68;
    }
    cpy_r_start_expr = cpy_r_r47;
    goto CPyL36;
CPyL34: ;
    cpy_r_r48 = CPyDef_nodes___IntExpr(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 463, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_start_expr = cpy_r_r48;
CPyL36: ;
    cpy_r_r49 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r50 = CPyList_GetItemShort(cpy_r_r49, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 465, CPyStatic_specialize___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_nodes___GeneratorExpr))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 465, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r50);
        goto CPyL74;
    }
    if (((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr);
    }
    ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 465, CPyStatic_specialize___globals);
        goto CPyL74;
    }
    cpy_r_r53 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "builder", 466, CPyStatic_specialize___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r53);
CPyL40: ;
    cpy_r_r54 = CPyDef_builder___IRBuilder___node_type(cpy_r_r53, cpy_r_expr);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 466, CPyStatic_specialize___globals);
        goto CPyL74;
    }
    cpy_r_target_type = cpy_r_r54;
    cpy_r_r55 = NULL;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_ops___Register(cpy_r_target_type, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 467, CPyStatic_specialize___globals);
        goto CPyL75;
    }
    if (((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval);
    }
    ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval = cpy_r_r58;
    cpy_r_r59 = 1;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 467, CPyStatic_specialize___globals);
        goto CPyL75;
    }
    cpy_r_r60 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "builder", 468, CPyStatic_specialize___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r60);
CPyL44: ;
    cpy_r_r61 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "retval", 468, CPyStatic_specialize___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r61);
CPyL45: ;
    cpy_r_r62 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "builder", 468, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r62);
CPyL46: ;
    cpy_r_r63 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "builder", 468, CPyStatic_specialize___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r63);
CPyL47: ;
    cpy_r_r64 = 2;
    cpy_r_r65 = CPyDef_builder___IRBuilder___accept(cpy_r_r63, cpy_r_start_expr, cpy_r_r64);
    CPy_DECREF(cpy_r_start_expr);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 468, CPyStatic_specialize___globals);
        goto CPyL79;
    }
    if (likely(cpy_r_r65 != Py_None))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 468, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r65);
        goto CPyL79;
    }
    cpy_r_r67 = 2;
    cpy_r_r68 = CPyDef_builder___IRBuilder___coerce(cpy_r_r62, cpy_r_r66, cpy_r_target_type, -2, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_target_type);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 468, CPyStatic_specialize___globals);
        goto CPyL80;
    }
    cpy_r_r69 = CPyDef_builder___IRBuilder___assign(cpy_r_r60, cpy_r_r61, cpy_r_r68, -2);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 468, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r70 = CPyDef_specialize___gen_inner_stmts_translate_sum_call_obj();
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 470, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *)cpy_r_r70)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *)cpy_r_r70)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize___gen_inner_stmts_translate_sum_call_objObject *)cpy_r_r70)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r71 = 1;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 470, CPyStatic_specialize___globals);
        goto CPyL81;
    }
    if (((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r70;
    cpy_r_r72 = 1;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 470, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r73 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_expr", 475, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r73);
CPyL55: ;
    cpy_r_r74 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r73)->_indices;
    CPy_INCREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_expr", 475, CPyStatic_specialize___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r75);
CPyL56: ;
    cpy_r_r76 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r75)->_sequences;
    CPy_INCREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_expr", 475, CPyStatic_specialize___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r77);
CPyL57: ;
    cpy_r_r78 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r77)->_condlists;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_expr", 475, CPyStatic_specialize___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r79);
CPyL58: ;
    cpy_r_r80 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r79)->_is_async;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = CPyModule_builtins;
    cpy_r_r82 = CPyStatics[794]; /* 'zip' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 475, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    PyObject *cpy_r_r84[4] = {cpy_r_r74, cpy_r_r76, cpy_r_r78, cpy_r_r80};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 4, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 475, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r87 = PySequence_List(cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 474, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_loop_params = cpy_r_r87;
    cpy_r_r88 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "builder", 477, CPyStatic_specialize___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r88);
CPyL62: ;
    cpy_r_r89 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_inner_stmts", 477, CPyStatic_specialize___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r89);
CPyL63: ;
    cpy_r_r90 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_gen_expr;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_sum_call", "translate_sum_call_env", "gen_expr", 477, CPyStatic_specialize___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r90);
CPyL64: ;
    cpy_r_r91 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r90)->_line;
    CPyTagged_INCREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = CPyDef_for_helpers___comprehension_helper(cpy_r_r88, cpy_r_loop_params, cpy_r_r89, cpy_r_r91);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r89);
    CPyTagged_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 477, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    cpy_r_r93 = ((mypyc___irbuild___specialize___translate_sum_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r93 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'retval' of 'translate_sum_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r93);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 479, CPyStatic_specialize___globals);
        goto CPyL67;
    }
CPyL66: ;
    return cpy_r_r93;
CPyL67: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL67;
CPyL69: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL9;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    goto CPyL19;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r40);
    goto CPyL26;
CPyL73: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL30;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_start_expr);
    goto CPyL67;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_start_expr);
    CPy_DecRef(cpy_r_target_type);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_start_expr);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_r60);
    goto CPyL67;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_start_expr);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL67;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_start_expr);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL67;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL67;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL67;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r70);
    goto CPyL67;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r74);
    goto CPyL67;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r76);
    goto CPyL67;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    goto CPyL67;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r80);
    goto CPyL67;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL67;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r88);
    goto CPyL67;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    goto CPyL67;
}

PyObject *CPyPy_specialize___translate_sum_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_sum_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_sum_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_sum_call", 444, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_dataclasses_field_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(10, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dataclasses_field_call", 495, CPyStatic_specialize___globals);
        goto CPyL3;
    }
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDict_SetItem(cpy_r_r5, cpy_r_expr, cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dataclasses_field_call", 495, CPyStatic_specialize___globals);
        goto CPyL3;
    }
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_specialize___translate_dataclasses_field_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_dataclasses_field_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_dataclasses_field_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dataclasses_field_call", 486, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_specialize___gen_inner_stmts_translate_next_call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "__get__", -1, CPyStatic_specialize___globals);
    return NULL;
}

char CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "gen_inner_stmts_translate_next_call_obj", "__mypyc_env__", 520, CPyStatic_specialize___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "gen_inner_stmts", -1, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "builder", 523, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "retval", 523, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "builder", 523, CPyStatic_specialize___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "gen", 523, CPyStatic_specialize___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r5)->_left_expr;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___accept(cpy_r_r4, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 523, CPyStatic_specialize___globals);
        goto CPyL18;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 523, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r8);
        goto CPyL18;
    }
    cpy_r_r10 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "gen", 523, CPyStatic_specialize___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r10)->_left_expr;
    cpy_r_r12 = ((mypy___nodes___ContextObject *)cpy_r_r11)->_line;
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "Expression", "line", 523, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    CPyTagged_INCREF(cpy_r_r12);
CPyL10: ;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = CPyDef_builder___IRBuilder___assign(cpy_r_r2, cpy_r_r3, cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 523, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    cpy_r_r14 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "gen_inner_stmts", "translate_next_call_env", "builder", 524, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'exit_block' of 'translate_next_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 524, CPyStatic_specialize___globals);
        goto CPyL22;
    }
CPyL13: ;
    cpy_r_r16 = CPyDef_builder___IRBuilder___goto(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 524, CPyStatic_specialize___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
}

PyObject *CPyPy_specialize___gen_inner_stmts_translate_next_call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_specialize___gen_inner_stmts_translate_next_call_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "gen_inner_stmts", 520, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_next_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_default_val;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
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
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_loop_params;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    cpy_r_r0 = CPyDef_specialize___translate_next_call_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 500, CPyStatic_specialize___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 500, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL78;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 510, CPyStatic_specialize___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 510, CPyStatic_specialize___globals);
        goto CPyL79;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r7 = cpy_r_r3;
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r2, cpy_r_r5, 2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", -1, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", -1, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL20;
CPyL10: ;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL80;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 510, CPyStatic_specialize___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r14 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL81;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 510, CPyStatic_specialize___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r16 = PyList_New(2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 510, CPyStatic_specialize___globals);
        goto CPyL82;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r12);
    *(PyObject * *)cpy_r_r18 = cpy_r_r12;
    cpy_r_r19 = cpy_r_r18 + 8;
    CPy_INCREF(cpy_r_r14);
    *(PyObject * *)cpy_r_r19 = cpy_r_r14;
    cpy_r_r20 = PyObject_RichCompare(cpy_r_r11, cpy_r_r16, 2);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", -1, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", -1, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r10 = cpy_r_r21;
CPyL20: ;
    if (!cpy_r_r10) goto CPyL83;
    cpy_r_r22 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r23 = CPyList_GetItemShortBorrow(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 511, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r24 = (PyObject *)CPyType_nodes___GeneratorExpr;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r23)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (cpy_r_r27) {
        goto CPyL24;
    } else
        goto CPyL83;
CPyL23: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL24: ;
    cpy_r_r29 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r30 = CPyList_GetItemShort(cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 515, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___GeneratorExpr))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 515, CPyStatic_specialize___globals, "mypy.nodes.GeneratorExpr", cpy_r_r30);
        goto CPyL77;
    }
    if (((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen);
    }
    ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 515, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r33 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 516, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r33);
CPyL28: ;
    cpy_r_r34 = CPyDef_builder___IRBuilder___node_type(cpy_r_r33, cpy_r_expr);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 516, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = 2;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_ops___Register(cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 516, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval);
    }
    ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 516, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r40 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r40)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r43 > (Py_ssize_t)2;
    if (!cpy_r_r44) goto CPyL38;
    cpy_r_r45 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 517, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r45);
CPyL33: ;
    cpy_r_r46 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r47 = CPyList_GetItemShort(cpy_r_r46, 2);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 517, CPyStatic_specialize___globals);
        goto CPyL84;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r47, CPyType_nodes___Expression)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 517, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r47);
        goto CPyL84;
    }
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_builder___IRBuilder___accept(cpy_r_r45, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 517, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 517, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r50);
        goto CPyL77;
    }
    cpy_r_r52 = cpy_r_r51;
    goto CPyL39;
CPyL38: ;
    cpy_r_r53 = Py_None;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r52 = cpy_r_r53;
CPyL39: ;
    cpy_r_default_val = cpy_r_r52;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPyDef_ops___BasicBlock(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 518, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    if (((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block);
    }
    ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block = cpy_r_r55;
    cpy_r_r56 = 1;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 518, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    cpy_r_r57 = CPyDef_specialize___gen_inner_stmts_translate_next_call_obj();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 520, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *)cpy_r_r57)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *)cpy_r_r57)->___mypyc_env__);
    }
    ((mypyc___irbuild___specialize___gen_inner_stmts_translate_next_call_objObject *)cpy_r_r57)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 520, CPyStatic_specialize___globals);
        goto CPyL86;
    }
    if (((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r57;
    cpy_r_r59 = 1;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 520, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    cpy_r_r60 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 526, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r60);
CPyL45: ;
    cpy_r_r61 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r60)->_indices;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 526, CPyStatic_specialize___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r62);
CPyL46: ;
    cpy_r_r63 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r62)->_sequences;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 526, CPyStatic_specialize___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r64);
CPyL47: ;
    cpy_r_r65 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r64)->_condlists;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 526, CPyStatic_specialize___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r66);
CPyL48: ;
    cpy_r_r67 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r66)->_is_async;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = CPyModule_builtins;
    cpy_r_r69 = CPyStatics[794]; /* 'zip' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 526, CPyStatic_specialize___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r71[4] = {cpy_r_r61, cpy_r_r63, cpy_r_r65, cpy_r_r67};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 4, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 526, CPyStatic_specialize___globals);
        goto CPyL90;
    }
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r74 = PySequence_List(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 526, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    cpy_r_loop_params = cpy_r_r74;
    cpy_r_r75 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 527, CPyStatic_specialize___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r75);
CPyL52: ;
    cpy_r_r76 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen_inner_stmts", 527, CPyStatic_specialize___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r76);
CPyL53: ;
    cpy_r_r77 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 527, CPyStatic_specialize___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r77);
CPyL54: ;
    cpy_r_r78 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r77)->_line;
    CPyTagged_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = CPyDef_for_helpers___comprehension_helper(cpy_r_r75, cpy_r_loop_params, cpy_r_r76, cpy_r_r78);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r76);
    CPyTagged_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 527, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    cpy_r_r80 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r81 = cpy_r_default_val != cpy_r_r80;
    if (!cpy_r_r81) goto CPyL94;
    cpy_r_r82 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 533, CPyStatic_specialize___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r82);
CPyL57: ;
    cpy_r_r83 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "retval", 533, CPyStatic_specialize___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r83);
CPyL58: ;
    if (likely(cpy_r_default_val != Py_None))
        cpy_r_r84 = cpy_r_default_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 533, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_default_val);
        goto CPyL96;
    }
    cpy_r_r85 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "gen", 533, CPyStatic_specialize___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r85);
CPyL60: ;
    cpy_r_r86 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r85)->_left_expr;
    cpy_r_r87 = ((mypy___nodes___ContextObject *)cpy_r_r86)->_line;
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "Expression", "line", 533, CPyStatic_specialize___globals);
        goto CPyL98;
    }
    CPyTagged_INCREF(cpy_r_r87);
CPyL61: ;
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = CPyDef_builder___IRBuilder___assign(cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r87);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    CPyTagged_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 533, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r89 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 534, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r89);
CPyL63: ;
    cpy_r_r90 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "exit_block", 534, CPyStatic_specialize___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r90);
CPyL64: ;
    cpy_r_r91 = CPyDef_builder___IRBuilder___goto(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 534, CPyStatic_specialize___globals);
        goto CPyL77;
    } else
        goto CPyL71;
CPyL65: ;
    cpy_r_r92 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 536, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r92);
CPyL66: ;
    cpy_r_r93 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r94 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r94);
    cpy_r_r95 = Py_None;
    cpy_r_r96 = CPyDef_ops___RaiseStandardError(cpy_r_r93, cpy_r_r95, cpy_r_r94);
    CPyTagged_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 536, CPyStatic_specialize___globals);
        goto CPyL100;
    }
    cpy_r_r97 = CPyDef_builder___IRBuilder___add(cpy_r_r92, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 536, CPyStatic_specialize___globals);
        goto CPyL77;
    } else
        goto CPyL101;
CPyL68: ;
    cpy_r_r98 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 537, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r98);
CPyL69: ;
    cpy_r_r99 = CPY_INT_TAG;
    cpy_r_r100 = CPyDef_ops___Unreachable(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 537, CPyStatic_specialize___globals);
        goto CPyL102;
    }
    cpy_r_r101 = CPyDef_builder___IRBuilder___add(cpy_r_r98, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 537, CPyStatic_specialize___globals);
        goto CPyL77;
    } else
        goto CPyL103;
CPyL71: ;
    cpy_r_r102 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "builder", 539, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r102);
CPyL72: ;
    cpy_r_r103 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_exit_block;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "translate_next_call", "translate_next_call_env", "exit_block", 539, CPyStatic_specialize___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r103);
CPyL73: ;
    cpy_r_r104 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 539, CPyStatic_specialize___globals);
        goto CPyL77;
    }
    cpy_r_r105 = ((mypyc___irbuild___specialize___translate_next_call_envObject *)cpy_r_r0)->_retval;
    if (unlikely(cpy_r_r105 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'retval' of 'translate_next_call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r105);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 540, CPyStatic_specialize___globals);
        goto CPyL76;
    }
CPyL75: ;
    return cpy_r_r105;
CPyL76: ;
    cpy_r_r106 = NULL;
    return cpy_r_r106;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL76;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL76;
CPyL83: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL23;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r45);
    goto CPyL76;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    goto CPyL76;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r57);
    goto CPyL76;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r61);
    goto CPyL76;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    goto CPyL76;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r65);
    goto CPyL76;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r67);
    goto CPyL76;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL76;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r75);
    goto CPyL76;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL76;
CPyL94: ;
    CPy_DECREF(cpy_r_default_val);
    goto CPyL65;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_default_val);
    CPy_DecRef(cpy_r_r82);
    goto CPyL76;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    goto CPyL76;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r84);
    goto CPyL76;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    goto CPyL76;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r89);
    goto CPyL76;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    goto CPyL76;
CPyL101: ;
    CPy_DECREF(cpy_r_r97);
    goto CPyL68;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r98);
    goto CPyL76;
CPyL103: ;
    CPy_DECREF(cpy_r_r101);
    goto CPyL71;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r102);
    goto CPyL76;
}

PyObject *CPyPy_specialize___translate_next_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_next_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_next_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_next_call", 500, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_isinstance(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_irs;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_ir;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_can_borrow;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 4;
    if (!cpy_r_r4) goto CPyL50;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 553, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 553, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r10 = PyList_New(2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 553, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r12 = cpy_r_r6;
    cpy_r_r13 = cpy_r_r12 + 8;
    CPy_INCREF(cpy_r_r8);
    *(PyObject * *)cpy_r_r13 = cpy_r_r8;
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r5, cpy_r_r10, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 553, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 553, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    if (!cpy_r_r15) goto CPyL50;
    cpy_r_r16 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r17 = CPyList_GetItemShortBorrow(cpy_r_r16, 2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 554, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_r18 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL15;
CPyL14: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL15: ;
    if (!cpy_r_r22) goto CPyL17;
    cpy_r_r27 = cpy_r_r22;
    goto CPyL18;
CPyL17: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL18: ;
    if (!cpy_r_r27) goto CPyL20;
    cpy_r_r32 = cpy_r_r27;
    goto CPyL21;
CPyL20: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL21: ;
    if (!cpy_r_r32) goto CPyL50;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPyDef_types___AnyType(10, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 556, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r44 = CPyList_GetItemShort(cpy_r_r43, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 556, CPyStatic_specialize___globals);
        goto CPyL55;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_nodes___Expression)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 556, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r44);
        goto CPyL55;
    }
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r42, cpy_r_r45, cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 556, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_r48 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r49 = CPyList_GetItemShort(cpy_r_r48, 2);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 558, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    if ((Py_TYPE(cpy_r_r49) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r49) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r49) == CPyType_nodes___RefExpr))
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL10455;
    if (Py_TYPE(cpy_r_r49) == CPyType_nodes___TupleExpr)
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL10455;
    CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 558, CPyStatic_specialize___globals, "union[mypy.nodes.RefExpr, mypy.nodes.TupleExpr]", cpy_r_r49);
    goto CPyL51;
__LL10455: ;
    cpy_r_r51 = CPyDef_builder___IRBuilder___flatten_classes(cpy_r_builder, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 558, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    cpy_r_irs = cpy_r_r51;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_irs != cpy_r_r52;
    if (!cpy_r_r53) goto CPyL56;
    cpy_r_r54 = 1;
    CPy_INCREF(cpy_r_irs);
    if (likely(cpy_r_irs != Py_None))
        cpy_r_r55 = cpy_r_irs;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 562, CPyStatic_specialize___globals, "list", cpy_r_irs);
        goto CPyL57;
    }
    cpy_r_r56 = 0;
CPyL32: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL58;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_class_ir___ClassIR))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 560, CPyStatic_specialize___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r61);
        goto CPyL59;
    }
    cpy_r_ir = cpy_r_r62;
    cpy_r_r63 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    if (cpy_r_r63) {
        goto CPyL36;
    } else
        goto CPyL60;
CPyL35: ;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL40;
CPyL36: ;
    cpy_r_r65 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python;
    cpy_r_r66 = cpy_r_r65 ^ 1;
    if (cpy_r_r66) {
        goto CPyL38;
    } else
        goto CPyL61;
CPyL37: ;
    cpy_r_r67 = cpy_r_r66;
    goto CPyL39;
CPyL38: ;
    cpy_r_r68 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_allow_interpreted_subclasses;
    CPy_DECREF(cpy_r_ir);
    cpy_r_r69 = cpy_r_r68 ^ 1;
    cpy_r_r67 = cpy_r_r69;
CPyL39: ;
    cpy_r_r64 = cpy_r_r67;
CPyL40: ;
    cpy_r_r70 = cpy_r_r64 ^ 1;
    if (cpy_r_r70) {
        goto CPyL62;
    } else
        goto CPyL42;
CPyL41: ;
    cpy_r_r54 = 0;
    goto CPyL43;
CPyL42: ;
    cpy_r_r71 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r71;
    goto CPyL32;
CPyL43: ;
    cpy_r_can_borrow = cpy_r_r54;
    cpy_r_r72 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r73 = CPyList_GetItemShort(cpy_r_r72, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 564, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_nodes___Expression)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 564, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r73);
        goto CPyL57;
    }
    cpy_r_r75 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r74, cpy_r_can_borrow);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 564, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (likely(cpy_r_r75 != Py_None))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 564, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r75);
        goto CPyL57;
    }
    cpy_r_obj = cpy_r_r76;
    cpy_r_r77 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r77);
    if (likely(cpy_r_irs != Py_None))
        cpy_r_r78 = cpy_r_irs;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 565, CPyStatic_specialize___globals, "list", cpy_r_irs);
        goto CPyL63;
    }
    cpy_r_r79 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyDef_ll_builder___LowLevelIRBuilder___isinstance_helper(cpy_r_r77, cpy_r_obj, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r78);
    CPyTagged_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 565, CPyStatic_specialize___globals);
        goto CPyL51;
    }
    return cpy_r_r80;
CPyL50: ;
    cpy_r_r81 = Py_None;
    CPy_INCREF(cpy_r_r81);
    return cpy_r_r81;
CPyL51: ;
    cpy_r_r82 = NULL;
    return cpy_r_r82;
CPyL52: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL2;
CPyL53: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
CPyL54: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL51;
CPyL56: ;
    CPy_DECREF(cpy_r_irs);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_irs);
    goto CPyL51;
CPyL58: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_irs);
    CPy_DecRef(cpy_r_r55);
    goto CPyL51;
CPyL60: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL35;
CPyL61: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL37;
CPyL62: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL41;
CPyL63: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r77);
    goto CPyL51;
}

PyObject *CPyPy_specialize___translate_isinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_isinstance", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_isinstance(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_isinstance", 544, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_dict_setdefault(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_data_type;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
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
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_callee_dict;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_key_val;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    CPyTagged cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 4;
    if (!cpy_r_r4) goto CPyL60;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 584, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 584, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r10 = PyList_New(2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 584, CPyStatic_specialize___globals);
        goto CPyL64;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r12 = cpy_r_r6;
    cpy_r_r13 = cpy_r_r12 + 8;
    CPy_INCREF(cpy_r_r8);
    *(PyObject * *)cpy_r_r13 = cpy_r_r8;
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r5, cpy_r_r10, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 584, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 584, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (!cpy_r_r15) goto CPyL60;
    cpy_r_r16 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL60;
    cpy_r_r20 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_r20, 2);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 587, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_nodes___Expression)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 587, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r21);
        goto CPyL61;
    }
    cpy_r_arg = cpy_r_r22;
    cpy_r_r23 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___ListExpr))
        cpy_r_r27 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 589, CPyStatic_specialize___globals, "mypy.nodes.ListExpr", cpy_r_arg);
        goto CPyL65;
    }
    cpy_r_r28 = ((mypy___nodes___ListExprObject *)cpy_r_r27)->_items;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r32 = cpy_r_r31 != 0;
    if (!cpy_r_r32) goto CPyL18;
    cpy_r_r33 = Py_None;
    CPy_INCREF(cpy_r_r33);
    return cpy_r_r33;
CPyL18: ;
    cpy_r_r34 = CPyStatic_specialize___globals;
    cpy_r_r35 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 591, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_rtypes___RPrimitive))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 591, CPyStatic_specialize___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r36);
        goto CPyL61;
    }
    cpy_r_r38 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_ops___Integer(2, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 591, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    cpy_r_data_type = cpy_r_r39;
    goto CPyL48;
CPyL22: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___DictExpr))
        cpy_r_r44 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 593, CPyStatic_specialize___globals, "mypy.nodes.DictExpr", cpy_r_arg);
        goto CPyL65;
    }
    cpy_r_r45 = ((mypy___nodes___DictExprObject *)cpy_r_r44)->_items;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r45)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r49 = cpy_r_r48 != 0;
    if (!cpy_r_r49) goto CPyL26;
    cpy_r_r50 = Py_None;
    CPy_INCREF(cpy_r_r50);
    return cpy_r_r50;
CPyL26: ;
    cpy_r_r51 = CPyStatic_specialize___globals;
    cpy_r_r52 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 595, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_rtypes___RPrimitive))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 595, CPyStatic_specialize___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r53);
        goto CPyL61;
    }
    cpy_r_r55 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_ops___Integer(4, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 595, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    cpy_r_data_type = cpy_r_r56;
    goto CPyL48;
CPyL30: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r61 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 598, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL65;
    }
    cpy_r_r62 = ((mypy___nodes___CallExprObject *)cpy_r_r61)->_callee;
    cpy_r_r63 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_r62)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r67 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 599, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL65;
    }
    cpy_r_r68 = ((mypy___nodes___CallExprObject *)cpy_r_r67)->_callee;
    CPy_INCREF(cpy_r_r68);
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_nodes___NameExpr))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 599, CPyStatic_specialize___globals, "mypy.nodes.NameExpr", cpy_r_r68);
        goto CPyL65;
    }
    cpy_r_r70 = CPY_GET_ATTR(cpy_r_r69, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 599, CPyStatic_specialize___globals);
        goto CPyL65;
    }
CPyL36: ;
    cpy_r_r71 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r72 = PyUnicode_Compare(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 == -1;
    if (!cpy_r_r73) goto CPyL39;
    cpy_r_r74 = PyErr_Occurred();
    cpy_r_r75 = cpy_r_r74 != NULL;
    if (!cpy_r_r75) goto CPyL39;
    cpy_r_r76 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 599, CPyStatic_specialize___globals);
        goto CPyL65;
    }
CPyL39: ;
    cpy_r_r77 = cpy_r_r72 == 0;
    if (!cpy_r_r77) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___CallExpr))
        cpy_r_r78 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 601, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_arg);
        goto CPyL65;
    }
    cpy_r_r79 = ((mypy___nodes___CallExprObject *)cpy_r_r78)->_args;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_r79)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r83 = cpy_r_r82 != 0;
    if (!cpy_r_r83) goto CPyL43;
    cpy_r_r84 = Py_None;
    CPy_INCREF(cpy_r_r84);
    return cpy_r_r84;
CPyL43: ;
    cpy_r_r85 = CPyStatic_specialize___globals;
    cpy_r_r86 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 603, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_rtypes___RPrimitive))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 603, CPyStatic_specialize___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r87);
        goto CPyL61;
    }
    cpy_r_r89 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyDef_ops___Integer(6, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    CPyTagged_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 603, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    cpy_r_data_type = cpy_r_r90;
    goto CPyL48;
CPyL47: ;
    cpy_r_r91 = Py_None;
    CPy_INCREF(cpy_r_r91);
    return cpy_r_r91;
CPyL48: ;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r92 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 607, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL67;
    }
    cpy_r_r93 = ((mypy___nodes___MemberExprObject *)cpy_r_r92)->_expr;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = 2;
    cpy_r_r95 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 607, CPyStatic_specialize___globals);
        goto CPyL67;
    }
    if (likely(cpy_r_r95 != Py_None))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 607, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r95);
        goto CPyL67;
    }
    cpy_r_callee_dict = cpy_r_r96;
    cpy_r_r97 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r98 = CPyList_GetItemShort(cpy_r_r97, 0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 608, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_nodes___Expression)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 608, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r98);
        goto CPyL68;
    }
    cpy_r_r100 = 2;
    cpy_r_r101 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 608, CPyStatic_specialize___globals);
        goto CPyL68;
    }
    if (likely(cpy_r_r101 != Py_None))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 608, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r101);
        goto CPyL68;
    }
    cpy_r_key_val = cpy_r_r102;
    cpy_r_r103 = CPyStatic_specialize___globals;
    cpy_r_r104 = CPyStatics[8539]; /* 'dict_setdefault_spec_init_op' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 610, CPyStatic_specialize___globals);
        goto CPyL69;
    }
    if (likely(PyTuple_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 610, CPyStatic_specialize___globals, "tuple", cpy_r_r105);
        goto CPyL69;
    }
    cpy_r_r107 = PyList_New(3);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 610, CPyStatic_specialize___globals);
        goto CPyL70;
    }
    cpy_r_r108 = (CPyPtr)&((PyListObject *)cpy_r_r107)->ob_item;
    cpy_r_r109 = *(CPyPtr *)cpy_r_r108;
    *(PyObject * *)cpy_r_r109 = cpy_r_callee_dict;
    cpy_r_r110 = cpy_r_r109 + 8;
    *(PyObject * *)cpy_r_r110 = cpy_r_key_val;
    cpy_r_r111 = cpy_r_r109 + 16;
    *(PyObject * *)cpy_r_r111 = cpy_r_data_type;
    cpy_r_r112 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r112);
    cpy_r_r113 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r106, cpy_r_r107, cpy_r_r112);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r107);
    CPyTagged_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 609, CPyStatic_specialize___globals);
        goto CPyL61;
    }
    return cpy_r_r113;
CPyL60: ;
    cpy_r_r114 = Py_None;
    CPy_INCREF(cpy_r_r114);
    return cpy_r_r114;
CPyL61: ;
    cpy_r_r115 = NULL;
    return cpy_r_r115;
CPyL62: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL2;
CPyL63: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
CPyL64: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL61;
CPyL65: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL61;
CPyL66: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL47;
CPyL67: ;
    CPy_DecRef(cpy_r_data_type);
    goto CPyL61;
CPyL68: ;
    CPy_DecRef(cpy_r_data_type);
    CPy_DecRef(cpy_r_callee_dict);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_data_type);
    CPy_DecRef(cpy_r_callee_dict);
    CPy_DecRef(cpy_r_key_val);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_data_type);
    CPy_DecRef(cpy_r_callee_dict);
    CPy_DecRef(cpy_r_key_val);
    CPy_DecRef(cpy_r_r106);
    goto CPyL61;
}

PyObject *CPyPy_specialize___translate_dict_setdefault(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_dict_setdefault", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_dict_setdefault(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_dict_setdefault", 570, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_str_format(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_format_str;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_tokens;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_format_ops;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_substitutions;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r4 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 619, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL21;
    }
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_r4)->_expr;
    cpy_r_r6 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL20;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 620, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r13 = CPyList_Count(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 620, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    cpy_r_r14 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r13 == cpy_r_r17;
    if (!cpy_r_r18) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r19 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 622, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL21;
    }
    cpy_r_r20 = ((mypy___nodes___MemberExprObject *)cpy_r_r19)->_expr;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___StrExpr))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 622, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_r20);
        goto CPyL21;
    }
    cpy_r_r22 = ((mypy___nodes___StrExprObject *)cpy_r_r21)->_value;
    CPy_INCREF(cpy_r_r22);
    cpy_r_format_str = cpy_r_r22;
    cpy_r_r23 = CPyDef_format_str_tokenizer___tokenizer_format_call(cpy_r_format_str);
    CPy_DECREF(cpy_r_format_str);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 623, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    cpy_r_tokens = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_tokens == cpy_r_r24;
    if (cpy_r_r25) {
        goto CPyL23;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL13: ;
    PyObject *__tmp10456;
    if (unlikely(!(PyTuple_Check(cpy_r_tokens) && PyTuple_GET_SIZE(cpy_r_tokens) == 2))) {
        __tmp10456 = NULL;
        goto __LL10457;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_tokens, 0))))
        __tmp10456 = PyTuple_GET_ITEM(cpy_r_tokens, 0);
    else {
        __tmp10456 = NULL;
    }
    if (__tmp10456 == NULL) goto __LL10457;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_tokens, 1))))
        __tmp10456 = PyTuple_GET_ITEM(cpy_r_tokens, 1);
    else {
        __tmp10456 = NULL;
    }
    if (__tmp10456 == NULL) goto __LL10457;
    __tmp10456 = cpy_r_tokens;
__LL10457: ;
    if (unlikely(__tmp10456 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_tokens); cpy_r_r27 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10458 = PyTuple_GET_ITEM(cpy_r_tokens, 0);
        CPy_INCREF(__tmp10458);
        PyObject *__tmp10459;
        if (likely(PyList_Check(__tmp10458)))
            __tmp10459 = __tmp10458;
        else {
            CPy_TypeError("list", __tmp10458); 
            __tmp10459 = NULL;
        }
        cpy_r_r27.f0 = __tmp10459;
        PyObject *__tmp10460 = PyTuple_GET_ITEM(cpy_r_tokens, 1);
        CPy_INCREF(__tmp10460);
        PyObject *__tmp10461;
        if (likely(PyList_Check(__tmp10460)))
            __tmp10461 = __tmp10460;
        else {
            CPy_TypeError("list", __tmp10460); 
            __tmp10461 = NULL;
        }
        cpy_r_r27.f1 = __tmp10461;
    }
    CPy_DECREF(cpy_r_tokens);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 626, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    cpy_r_r28 = cpy_r_r27.f0;
    CPy_INCREF(cpy_r_r28);
    cpy_r_literals = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f1;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r27.f0);
    CPy_DECREF(cpy_r_r27.f1);
    cpy_r_format_ops = cpy_r_r29;
    cpy_r_r30 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_format_str_tokenizer___convert_format_expr_to_str(cpy_r_builder, cpy_r_format_ops, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_format_ops);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 628, CPyStatic_specialize___globals);
        goto CPyL24;
    }
    cpy_r_substitutions = cpy_r_r32;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_substitutions == cpy_r_r33;
    if (cpy_r_r34) {
        goto CPyL25;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r35 = Py_None;
    CPy_INCREF(cpy_r_r35);
    return cpy_r_r35;
CPyL17: ;
    if (likely(cpy_r_substitutions != Py_None))
        cpy_r_r36 = cpy_r_substitutions;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 631, CPyStatic_specialize___globals, "list", cpy_r_substitutions);
        goto CPyL24;
    }
    cpy_r_r37 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_format_str_tokenizer___join_formatted_strings(cpy_r_builder, cpy_r_literals, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 631, CPyStatic_specialize___globals);
        goto CPyL21;
    }
    return cpy_r_r38;
CPyL20: ;
    cpy_r_r39 = Py_None;
    CPy_INCREF(cpy_r_r39);
    return cpy_r_r39;
CPyL21: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL22: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL4;
CPyL23: ;
    CPy_DECREF(cpy_r_tokens);
    goto CPyL12;
CPyL24: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL21;
CPyL25: ;
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_substitutions);
    goto CPyL16;
}

PyObject *CPyPy_specialize___translate_str_format(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_str_format", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_str_format(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_str_format", 616, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_fstring(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_format_ops;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_exprs;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyPtr cpy_r_r123;
    int64_t cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    CPyTagged cpy_r_r163;
    CPyTagged cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_substitutions;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL93;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r4 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 645, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL94;
    }
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_r4)->_expr;
    cpy_r_r6 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL93;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r10 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 646, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL94;
    }
    cpy_r_r11 = ((mypy___nodes___MemberExprObject *)cpy_r_r10)->_expr;
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___StrExpr))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 646, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_r11);
        goto CPyL94;
    }
    cpy_r_r13 = ((mypy___nodes___StrExprObject *)cpy_r_r12)->_value;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL8;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 646, CPyStatic_specialize___globals);
        goto CPyL94;
    }
CPyL8: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL93;
    cpy_r_r21 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL95;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 647, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 647, CPyStatic_specialize___globals);
        goto CPyL96;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    CPy_INCREF(cpy_r_r22);
    *(PyObject * *)cpy_r_r26 = cpy_r_r22;
    cpy_r_r27 = PyObject_RichCompare(cpy_r_r21, cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 647, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 647, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    if (!cpy_r_r28) goto CPyL93;
    cpy_r_r29 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r30 = CPyList_GetItemShortBorrow(cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 648, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    cpy_r_r31 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL93;
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r36 = CPyList_GetItemShortBorrow(cpy_r_r35, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 650, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___ListExpr))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 650, CPyStatic_specialize___globals, "mypy.nodes.ListExpr", cpy_r_r36);
        goto CPyL94;
    }
    cpy_r_r38 = ((mypy___nodes___ListExprObject *)cpy_r_r37)->_items;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = 0;
CPyL21: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r38)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL97;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_r38, cpy_r_r39);
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_nodes___Expression)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 650, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r44);
        goto CPyL98;
    }
    cpy_r_item = cpy_r_r45;
    cpy_r_r46 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (cpy_r_r49) goto CPyL99;
    cpy_r_r50 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL100;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r54 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 654, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r55 = ((mypy___nodes___CallExprObject *)cpy_r_r54)->_callee;
    cpy_r_r56 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r55)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r60 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 654, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r61 = ((mypy___nodes___CallExprObject *)cpy_r_r60)->_callee;
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_nodes___MemberExpr))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 654, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_r61);
        goto CPyL101;
    }
    cpy_r_r63 = ((mypy___nodes___MemberExprObject *)cpy_r_r62)->_name;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyStatics[193]; /* 'format' */
    cpy_r_r65 = PyUnicode_Compare(cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r66 = cpy_r_r65 == -1;
    if (!cpy_r_r66) goto CPyL32;
    cpy_r_r67 = PyErr_Occurred();
    cpy_r_r68 = cpy_r_r67 != NULL;
    if (!cpy_r_r68) goto CPyL32;
    cpy_r_r69 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 654, CPyStatic_specialize___globals);
        goto CPyL101;
    }
CPyL32: ;
    cpy_r_r70 = cpy_r_r65 != 0;
    if (cpy_r_r70) {
        goto CPyL102;
    } else
        goto CPyL34;
CPyL33: ;
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r72 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r73 = ((mypy___nodes___CallExprObject *)cpy_r_r72)->_callee;
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_nodes___MemberExpr))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_r73);
        goto CPyL101;
    }
    cpy_r_r75 = ((mypy___nodes___MemberExprObject *)cpy_r_r74)->_expr;
    cpy_r_r76 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_r75)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    if (!cpy_r_r79) goto CPyL103;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r80 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r81 = ((mypy___nodes___CallExprObject *)cpy_r_r80)->_callee;
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_nodes___MemberExpr))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals, "mypy.nodes.MemberExpr", cpy_r_r81);
        goto CPyL101;
    }
    cpy_r_r83 = ((mypy___nodes___MemberExprObject *)cpy_r_r82)->_expr;
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_nodes___StrExpr))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_r83);
        goto CPyL101;
    }
    cpy_r_r85 = ((mypy___nodes___StrExprObject *)cpy_r_r84)->_value;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r87 = PyUnicode_Compare(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 == -1;
    if (!cpy_r_r88) goto CPyL43;
    cpy_r_r89 = PyErr_Occurred();
    cpy_r_r90 = cpy_r_r89 != NULL;
    if (!cpy_r_r90) goto CPyL43;
    cpy_r_r91 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 657, CPyStatic_specialize___globals);
        goto CPyL101;
    }
CPyL43: ;
    cpy_r_r92 = cpy_r_r87 != 0;
    if (cpy_r_r92) {
        goto CPyL103;
    } else
        goto CPyL45;
CPyL44: ;
    cpy_r_r93 = Py_None;
    CPy_INCREF(cpy_r_r93);
    return cpy_r_r93;
CPyL45: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r94 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r95 = ((mypy___nodes___CallExprObject *)cpy_r_r94)->_args;
    cpy_r_r96 = CPyList_GetItemShortBorrow(cpy_r_r95, 2);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals);
        goto CPyL101;
    }
    cpy_r_r97 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (!cpy_r_r100) goto CPyL104;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r101 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL101;
    }
    cpy_r_r102 = ((mypy___nodes___CallExprObject *)cpy_r_r101)->_args;
    cpy_r_r103 = CPyList_GetItemShortBorrow(cpy_r_r102, 2);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals);
        goto CPyL101;
    }
    if (likely(Py_TYPE(cpy_r_r103) == CPyType_nodes___StrExpr))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_r103);
        goto CPyL101;
    }
    cpy_r_r105 = ((mypy___nodes___StrExprObject *)cpy_r_r104)->_value;
    CPy_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_item);
    cpy_r_r106 = CPyStatics[163]; /* '' */
    cpy_r_r107 = PyUnicode_Compare(cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 == -1;
    if (!cpy_r_r108) goto CPyL54;
    cpy_r_r109 = PyErr_Occurred();
    cpy_r_r110 = cpy_r_r109 != NULL;
    if (!cpy_r_r110) goto CPyL54;
    cpy_r_r111 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 661, CPyStatic_specialize___globals);
        goto CPyL98;
    }
CPyL54: ;
    cpy_r_r112 = cpy_r_r107 != 0;
    if (cpy_r_r112) {
        goto CPyL105;
    } else
        goto CPyL57;
CPyL55: ;
    cpy_r_r113 = Py_None;
    CPy_INCREF(cpy_r_r113);
    return cpy_r_r113;
CPyL56: ;
    cpy_r_r114 = Py_None;
    CPy_INCREF(cpy_r_r114);
    return cpy_r_r114;
CPyL57: ;
    cpy_r_r115 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r115;
    goto CPyL21;
CPyL58: ;
    cpy_r_r116 = PyList_New(0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 666, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    cpy_r_format_ops = cpy_r_r116;
    cpy_r_r117 = PyList_New(0);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 667, CPyStatic_specialize___globals);
        goto CPyL106;
    }
    cpy_r_exprs = cpy_r_r117;
    cpy_r_r118 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r119 = CPyList_GetItemShortBorrow(cpy_r_r118, 0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 669, CPyStatic_specialize___globals);
        goto CPyL107;
    }
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_nodes___ListExpr))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 669, CPyStatic_specialize___globals, "mypy.nodes.ListExpr", cpy_r_r119);
        goto CPyL107;
    }
    cpy_r_r121 = ((mypy___nodes___ListExprObject *)cpy_r_r120)->_items;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = 0;
CPyL63: ;
    cpy_r_r123 = (CPyPtr)&((PyVarObject *)cpy_r_r121)->ob_size;
    cpy_r_r124 = *(int64_t *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 << 1;
    cpy_r_r126 = (Py_ssize_t)cpy_r_r122 < (Py_ssize_t)cpy_r_r125;
    if (!cpy_r_r126) goto CPyL108;
    cpy_r_r127 = CPyList_GetItemUnsafe(cpy_r_r121, cpy_r_r122);
    if (likely(PyObject_TypeCheck(cpy_r_r127, CPyType_nodes___Expression)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 669, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r127);
        goto CPyL109;
    }
    cpy_r_item = cpy_r_r128;
    cpy_r_r129 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r130 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r131 = *(PyObject * *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 == cpy_r_r129;
    if (!cpy_r_r132) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___StrExpr))
        cpy_r_r133 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 670, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_item);
        goto CPyL110;
    }
    cpy_r_r134 = ((mypy___nodes___StrExprObject *)cpy_r_r133)->_value;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = CPyStatics[163]; /* '' */
    cpy_r_r136 = PyUnicode_Compare(cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 == -1;
    if (!cpy_r_r137) goto CPyL70;
    cpy_r_r138 = PyErr_Occurred();
    cpy_r_r139 = cpy_r_r138 != NULL;
    if (!cpy_r_r139) goto CPyL70;
    cpy_r_r140 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 670, CPyStatic_specialize___globals);
        goto CPyL110;
    }
CPyL70: ;
    cpy_r_r141 = cpy_r_r136 != 0;
    if (!cpy_r_r141) goto CPyL77;
    cpy_r_r142 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r142 == NULL)) {
        goto CPyL111;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 671, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r144 = PyList_Append(cpy_r_format_ops, cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 671, CPyStatic_specialize___globals);
        goto CPyL110;
    }
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___StrExpr))
        cpy_r_r146 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 672, CPyStatic_specialize___globals, "mypy.nodes.StrExpr", cpy_r_item);
        goto CPyL109;
    }
    cpy_r_r147 = PyList_Append(cpy_r_exprs, cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 672, CPyStatic_specialize___globals);
        goto CPyL109;
    } else
        goto CPyL86;
CPyL77: ;
    cpy_r_r149 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r150 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r151 = *(PyObject * *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 == cpy_r_r149;
    if (!cpy_r_r152) goto CPyL112;
    cpy_r_r153 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r153 == NULL)) {
        goto CPyL113;
    } else
        goto CPyL81;
CPyL79: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 674, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r155 = PyList_Append(cpy_r_format_ops, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 674, CPyStatic_specialize___globals);
        goto CPyL110;
    }
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___CallExpr))
        cpy_r_r157 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 675, CPyStatic_specialize___globals, "mypy.nodes.CallExpr", cpy_r_item);
        goto CPyL110;
    }
    cpy_r_r158 = ((mypy___nodes___CallExprObject *)cpy_r_r157)->_args;
    cpy_r_r159 = CPyList_GetItemShort(cpy_r_r158, 0);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 675, CPyStatic_specialize___globals);
        goto CPyL110;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r159, CPyType_nodes___Expression)))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 675, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r159);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_item);
    cpy_r_r161 = PyList_Append(cpy_r_exprs, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 675, CPyStatic_specialize___globals);
        goto CPyL109;
    }
CPyL86: ;
    cpy_r_r163 = cpy_r_r122 + 2;
    cpy_r_r122 = cpy_r_r163;
    goto CPyL63;
CPyL87: ;
    cpy_r_r164 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r164);
    cpy_r_r165 = CPyDef_format_str_tokenizer___convert_format_expr_to_str(cpy_r_builder, cpy_r_format_ops, cpy_r_exprs, cpy_r_r164);
    CPy_DECREF(cpy_r_format_ops);
    CPy_DECREF(cpy_r_exprs);
    CPyTagged_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 677, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    cpy_r_substitutions = cpy_r_r165;
    cpy_r_r166 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r167 = cpy_r_substitutions == cpy_r_r166;
    if (cpy_r_r167) {
        goto CPyL114;
    } else
        goto CPyL90;
CPyL89: ;
    cpy_r_r168 = Py_None;
    CPy_INCREF(cpy_r_r168);
    return cpy_r_r168;
CPyL90: ;
    if (likely(cpy_r_substitutions != Py_None))
        cpy_r_r169 = cpy_r_substitutions;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 681, CPyStatic_specialize___globals, "list", cpy_r_substitutions);
        goto CPyL94;
    }
    cpy_r_r170 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r170);
    cpy_r_r171 = Py_None;
    cpy_r_r172 = CPyDef_format_str_tokenizer___join_formatted_strings(cpy_r_builder, cpy_r_r171, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    CPyTagged_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 681, CPyStatic_specialize___globals);
        goto CPyL94;
    }
    return cpy_r_r172;
CPyL93: ;
    cpy_r_r173 = Py_None;
    CPy_INCREF(cpy_r_r173);
    return cpy_r_r173;
CPyL94: ;
    cpy_r_r174 = NULL;
    return cpy_r_r174;
CPyL95: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL10;
CPyL96: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL94;
CPyL97: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL58;
CPyL98: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL94;
CPyL99: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL57;
CPyL100: ;
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_item);
    goto CPyL56;
CPyL101: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_item);
    goto CPyL94;
CPyL102: ;
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_item);
    goto CPyL33;
CPyL103: ;
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_item);
    goto CPyL44;
CPyL104: ;
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_item);
    goto CPyL55;
CPyL105: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL55;
CPyL106: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL94;
CPyL107: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    goto CPyL94;
CPyL108: ;
    CPy_DECREF(cpy_r_r121);
    goto CPyL87;
CPyL109: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_r121);
    goto CPyL94;
CPyL110: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_r121);
    goto CPyL94;
CPyL111: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_r121);
    goto CPyL72;
CPyL112: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL86;
CPyL113: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_r121);
    goto CPyL79;
CPyL114: ;
    CPy_DECREF(cpy_r_substitutions);
    goto CPyL89;
}

PyObject *CPyPy_specialize___translate_fstring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_fstring", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_fstring(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_fstring", 636, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_i64(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 687, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 687, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL50;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 687, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 689, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 689, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL50;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 690, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 691, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (cpy_r_r16) {
        goto CPyL54;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r17);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 692, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 692, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL50;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 693, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (cpy_r_r20) goto CPyL55;
    cpy_r_r21 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 693, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (cpy_r_r21) {
        goto CPyL55;
    } else
        goto CPyL28;
CPyL20: ;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r22);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 694, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 694, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL50;
    }
    cpy_r_val = cpy_r_r24;
    cpy_r_r25 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 695, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_ops___Extend(cpy_r_val, cpy_r_r25, 1, cpy_r_r27);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 695, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 695, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    return cpy_r_r29;
CPyL28: ;
    cpy_r_r30 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 696, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (cpy_r_r30) {
        goto CPyL57;
    } else
        goto CPyL38;
CPyL30: ;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r31);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 697, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 697, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r32);
        goto CPyL50;
    }
    cpy_r_val = cpy_r_r33;
    cpy_r_r34 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL58;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 698, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r36 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_ops___Extend(cpy_r_val, cpy_r_r34, 0, cpy_r_r36);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 698, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 698, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    return cpy_r_r38;
CPyL38: ;
    cpy_r_r39 = CPyDef_rtypes___is_int_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 699, CPyStatic_specialize___globals);
        goto CPyL53;
    }
    if (cpy_r_r39) goto CPyL59;
    cpy_r_r40 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 699, CPyStatic_specialize___globals);
        goto CPyL52;
    }
    if (!cpy_r_r40) goto CPyL60;
CPyL42: ;
    cpy_r_r41 = 2;
    cpy_r_r42 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r41);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 700, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_r42 != Py_None))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i64", 700, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r42);
        goto CPyL50;
    }
    cpy_r_val = cpy_r_r43;
    cpy_r_r44 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL61;
    } else
        goto CPyL47;
CPyL45: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 701, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r46 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_val, cpy_r_r44, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 701, CPyStatic_specialize___globals);
        goto CPyL50;
    }
    return cpy_r_r48;
CPyL49: ;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    return cpy_r_r49;
CPyL50: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL51: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL52: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL50;
CPyL54: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL13;
CPyL55: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL20;
CPyL56: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL23;
CPyL57: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL30;
CPyL58: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL33;
CPyL59: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL42;
CPyL60: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL49;
CPyL61: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL45;
}

PyObject *CPyPy_specialize___translate_i64(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_i64", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_i64(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i64", 686, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_i32(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 707, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 707, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL62;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 707, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 709, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 709, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL62;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 710, CPyStatic_specialize___globals);
        goto CPyL64;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 711, CPyStatic_specialize___globals);
        goto CPyL65;
    }
    if (cpy_r_r16) {
        goto CPyL66;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r17);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 712, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 712, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL62;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 713, CPyStatic_specialize___globals);
        goto CPyL65;
    }
    if (cpy_r_r20) {
        goto CPyL67;
    } else
        goto CPyL26;
CPyL18: ;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r21);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 714, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 714, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r22);
        goto CPyL62;
    }
    cpy_r_val = cpy_r_r23;
    cpy_r_r24 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 715, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r26 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyDef_ops___Truncate(cpy_r_val, cpy_r_r24, cpy_r_r26);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 715, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 715, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    return cpy_r_r28;
CPyL26: ;
    cpy_r_r29 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 716, CPyStatic_specialize___globals);
        goto CPyL65;
    }
    if (cpy_r_r29) {
        goto CPyL69;
    } else
        goto CPyL36;
CPyL28: ;
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r30);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 717, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 717, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r31);
        goto CPyL62;
    }
    cpy_r_val = cpy_r_r32;
    cpy_r_r33 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 718, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_ops___Extend(cpy_r_val, cpy_r_r33, 1, cpy_r_r35);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 718, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 718, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    return cpy_r_r37;
CPyL36: ;
    cpy_r_r38 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 719, CPyStatic_specialize___globals);
        goto CPyL65;
    }
    if (cpy_r_r38) {
        goto CPyL71;
    } else
        goto CPyL46;
CPyL38: ;
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r39);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 720, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 720, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r40);
        goto CPyL62;
    }
    cpy_r_val = cpy_r_r41;
    cpy_r_r42 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r42 == NULL)) {
        goto CPyL72;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 721, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r44 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyDef_ops___Extend(cpy_r_val, cpy_r_r42, 0, cpy_r_r44);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 721, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    cpy_r_r46 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 721, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    return cpy_r_r46;
CPyL46: ;
    cpy_r_r47 = CPyDef_rtypes___is_int_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 722, CPyStatic_specialize___globals);
        goto CPyL65;
    }
    if (cpy_r_r47) goto CPyL73;
    cpy_r_r48 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 722, CPyStatic_specialize___globals);
        goto CPyL64;
    }
    if (!cpy_r_r48) goto CPyL74;
CPyL50: ;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r49);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 723, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i32", 723, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r50);
        goto CPyL62;
    }
    cpy_r_val = cpy_r_r51;
    cpy_r_r52 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL75;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 724, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r54 = CPyDef_specialize___truncate_literal(cpy_r_val, cpy_r_r52);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 724, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    cpy_r_val = cpy_r_r54;
    cpy_r_r55 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 725, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r57 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r57);
    cpy_r_r58 = 2;
    cpy_r_r59 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_val, cpy_r_r55, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 725, CPyStatic_specialize___globals);
        goto CPyL62;
    }
    return cpy_r_r59;
CPyL61: ;
    cpy_r_r60 = Py_None;
    CPy_INCREF(cpy_r_r60);
    return cpy_r_r60;
CPyL62: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL63: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL64: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL62;
CPyL65: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL62;
CPyL66: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL13;
CPyL67: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL18;
CPyL68: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL21;
CPyL69: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL28;
CPyL70: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL31;
CPyL71: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL38;
CPyL72: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL41;
CPyL73: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL50;
CPyL74: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL61;
CPyL75: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL53;
CPyL76: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL57;
}

PyObject *CPyPy_specialize___translate_i32(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_i32", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_i32(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i32", 706, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_i16(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 731, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 731, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL54;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 731, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 733, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 733, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL54;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 734, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 735, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (cpy_r_r16) {
        goto CPyL58;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r17);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 736, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 736, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL54;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 737, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (cpy_r_r20) goto CPyL59;
    cpy_r_r21 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 737, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (cpy_r_r21) {
        goto CPyL59;
    } else
        goto CPyL28;
CPyL20: ;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r22);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 738, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 738, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL54;
    }
    cpy_r_val = cpy_r_r24;
    cpy_r_r25 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 739, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_ops___Truncate(cpy_r_val, cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 739, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 739, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    return cpy_r_r29;
CPyL28: ;
    cpy_r_r30 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 740, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (cpy_r_r30) {
        goto CPyL61;
    } else
        goto CPyL38;
CPyL30: ;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r31);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 741, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 741, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r32);
        goto CPyL54;
    }
    cpy_r_val = cpy_r_r33;
    cpy_r_r34 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 742, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r36 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_ops___Extend(cpy_r_val, cpy_r_r34, 0, cpy_r_r36);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 742, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 742, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    return cpy_r_r38;
CPyL38: ;
    cpy_r_r39 = CPyDef_rtypes___is_int_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 743, CPyStatic_specialize___globals);
        goto CPyL57;
    }
    if (cpy_r_r39) goto CPyL63;
    cpy_r_r40 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 743, CPyStatic_specialize___globals);
        goto CPyL56;
    }
    if (!cpy_r_r40) goto CPyL64;
CPyL42: ;
    cpy_r_r41 = 2;
    cpy_r_r42 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r41);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 744, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    if (likely(cpy_r_r42 != Py_None))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_i16", 744, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r42);
        goto CPyL54;
    }
    cpy_r_val = cpy_r_r43;
    cpy_r_r44 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL47;
CPyL45: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 745, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r46 = CPyDef_specialize___truncate_literal(cpy_r_val, cpy_r_r44);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 745, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    cpy_r_val = cpy_r_r46;
    cpy_r_r47 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r47 == NULL)) {
        goto CPyL66;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 746, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r49 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r49);
    cpy_r_r50 = 2;
    cpy_r_r51 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_val, cpy_r_r47, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 746, CPyStatic_specialize___globals);
        goto CPyL54;
    }
    return cpy_r_r51;
CPyL53: ;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    return cpy_r_r52;
CPyL54: ;
    cpy_r_r53 = NULL;
    return cpy_r_r53;
CPyL55: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL56: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL54;
CPyL57: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL54;
CPyL58: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL13;
CPyL59: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL20;
CPyL60: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL23;
CPyL61: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL30;
CPyL62: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL33;
CPyL63: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL42;
CPyL64: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL45;
CPyL66: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL49;
}

PyObject *CPyPy_specialize___translate_i16(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_i16", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_i16(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_i16", 730, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_u8(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 752, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_u8", 752, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL46;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL47;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 752, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 754, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_u8", 754, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL46;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 755, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 756, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    if (cpy_r_r16) {
        goto CPyL50;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r17);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 757, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_u8", 757, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL46;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 759, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    if (cpy_r_r20) goto CPyL51;
    cpy_r_r21 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 760, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    if (cpy_r_r21) goto CPyL51;
    cpy_r_r22 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 761, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    if (cpy_r_r22) {
        goto CPyL51;
    } else
        goto CPyL30;
CPyL22: ;
    cpy_r_r23 = 2;
    cpy_r_r24 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r23);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 763, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_u8", 763, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r24);
        goto CPyL46;
    }
    cpy_r_val = cpy_r_r25;
    cpy_r_r26 = CPyStatic_rtypes___uint8_rprimitive;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint8_rprimitive\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 764, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_ops___Truncate(cpy_r_val, cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 764, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    cpy_r_r30 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 764, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    return cpy_r_r30;
CPyL30: ;
    cpy_r_r31 = CPyDef_rtypes___is_int_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 765, CPyStatic_specialize___globals);
        goto CPyL49;
    }
    if (cpy_r_r31) goto CPyL53;
    cpy_r_r32 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 765, CPyStatic_specialize___globals);
        goto CPyL48;
    }
    if (!cpy_r_r32) goto CPyL54;
CPyL34: ;
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r33);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 766, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_u8", 766, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r34);
        goto CPyL46;
    }
    cpy_r_val = cpy_r_r35;
    cpy_r_r36 = CPyStatic_rtypes___uint8_rprimitive;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint8_rprimitive\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 767, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r38 = CPyDef_specialize___truncate_literal(cpy_r_val, cpy_r_r36);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 767, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    cpy_r_val = cpy_r_r38;
    cpy_r_r39 = CPyStatic_rtypes___uint8_rprimitive;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint8_rprimitive\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 768, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r41 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r41);
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_val, cpy_r_r39, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 768, CPyStatic_specialize___globals);
        goto CPyL46;
    }
    return cpy_r_r43;
CPyL45: ;
    cpy_r_r44 = Py_None;
    CPy_INCREF(cpy_r_r44);
    return cpy_r_r44;
CPyL46: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL47: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL48: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL13;
CPyL51: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL22;
CPyL52: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL25;
CPyL53: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL34;
CPyL54: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL37;
CPyL56: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL41;
}

PyObject *CPyPy_specialize___translate_u8(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_u8", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_u8(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_u8", 751, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___truncate_literal(PyObject *cpy_r_value, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_x;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_max_unsigned;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    CPy_INCREF(cpy_r_value);
    return cpy_r_value;
CPyL2: ;
    CPy_INCREF(cpy_r_value);
    if (likely(Py_TYPE(cpy_r_value) == CPyType_ops___Integer))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "truncate_literal", 779, CPyStatic_specialize___globals, "mypyc.ir.ops.Integer", cpy_r_value);
        goto CPyL16;
    }
    cpy_r_r5 = CPyDef_ops___Integer___numeric_value(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "truncate_literal", 779, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    cpy_r_x = cpy_r_r5;
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_rtype)->_size;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "truncate_literal", "RPrimitive", "size", 780, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPyTagged_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyTagged_Multiply(cpy_r_r6, 16);
    CPyTagged_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyTagged_Lshift(2, cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "truncate_literal", 780, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    cpy_r_r9 = CPyTagged_Subtract(cpy_r_r8, 2);
    CPyTagged_DECREF(cpy_r_r8);
    cpy_r_max_unsigned = cpy_r_r9;
    cpy_r_r10 = CPyTagged_And(cpy_r_x, cpy_r_max_unsigned);
    CPyTagged_DECREF(cpy_r_x);
    cpy_r_x = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_rtype)->_is_signed;
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AttributeError("mypyc/irbuild/specialize.py", "truncate_literal", "RPrimitive", "is_signed", 782, CPyStatic_specialize___globals);
        goto CPyL18;
    }
CPyL7: ;
    if (!cpy_r_r11) goto CPyL19;
CPyL8: ;
    cpy_r_r12 = CPyTagged_Add(cpy_r_max_unsigned, 2);
    cpy_r_r13 = CPyTagged_Rshift(cpy_r_r12, 2);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "truncate_literal", -1, CPyStatic_specialize___globals);
        goto CPyL18;
    }
    cpy_r_r14 = cpy_r_x & 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL11;
    cpy_r_r16 = cpy_r_r13 & 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL12;
CPyL11: ;
    cpy_r_r18 = CPyTagged_IsLt_(cpy_r_x, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    if (cpy_r_r18) {
        goto CPyL19;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r19 = (Py_ssize_t)cpy_r_x >= (Py_ssize_t)cpy_r_r13;
    CPyTagged_DECREF(cpy_r_r13);
    if (!cpy_r_r19) goto CPyL19;
CPyL13: ;
    cpy_r_r20 = CPyTagged_Add(cpy_r_max_unsigned, 2);
    CPyTagged_DECREF(cpy_r_max_unsigned);
    cpy_r_r21 = CPyTagged_Subtract(cpy_r_x, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_x);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_x = cpy_r_r21;
CPyL14: ;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___Integer(cpy_r_x, cpy_r_rtype, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "truncate_literal", 785, CPyStatic_specialize___globals);
        goto CPyL16;
    }
    return cpy_r_r23;
CPyL16: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_x);
    goto CPyL16;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_x);
    CPyTagged_DecRef(cpy_r_max_unsigned);
    goto CPyL16;
CPyL19: ;
    CPyTagged_DECREF(cpy_r_max_unsigned);
    goto CPyL14;
}

PyObject *CPyPy_specialize___truncate_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", "rtype", 0};
    static CPyArg_Parser parser = {"OO:truncate_literal", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(Py_TYPE(obj_rtype) == CPyType_rtypes___RPrimitive))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___truncate_literal(arg_value, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "truncate_literal", 772, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_int(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 790, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_int", 790, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL25;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL26;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 790, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 792, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_int", 792, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL25;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 793, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 795, CPyStatic_specialize___globals);
        goto CPyL28;
    }
    if (cpy_r_r16) goto CPyL29;
    cpy_r_r17 = CPyDef_rtypes___is_int_rprimitive(cpy_r_arg_type);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 796, CPyStatic_specialize___globals);
        goto CPyL28;
    }
    if (cpy_r_r17) goto CPyL29;
    cpy_r_r18 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 797, CPyStatic_specialize___globals);
        goto CPyL27;
    }
    if (!cpy_r_r18) goto CPyL30;
CPyL17: ;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r19);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 799, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_int", 799, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r20);
        goto CPyL25;
    }
    cpy_r_src = cpy_r_r21;
    cpy_r_r22 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 800, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r24 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_src, cpy_r_r22, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_src);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 800, CPyStatic_specialize___globals);
        goto CPyL25;
    }
    return cpy_r_r26;
CPyL24: ;
    cpy_r_r27 = Py_None;
    CPy_INCREF(cpy_r_r27);
    return cpy_r_r27;
CPyL25: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL26: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL27: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL25;
CPyL29: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL17;
CPyL30: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_src);
    goto CPyL20;
}

PyObject *CPyPy_specialize___translate_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_int", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_int(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_int", 789, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_bool(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 806, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_bool", 806, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 806, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 808, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_bool", 808, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r15);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 809, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_bool", 809, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r16);
        goto CPyL14;
    }
    cpy_r_src = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_ll_builder___LowLevelIRBuilder___bool_value(cpy_r_r18, cpy_r_src);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 810, CPyStatic_specialize___globals);
        goto CPyL14;
    }
    return cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL15: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_specialize___translate_bool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_bool", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_bool(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_bool", 805, CPyStatic_specialize___globals);
    return NULL;
}

PyObject *CPyDef_specialize___translate_float(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_type;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 815, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___ArgKind))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_float", 815, CPyStatic_specialize___globals, "mypy.nodes.ArgKind", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL18;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 815, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r10) goto CPyL8;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 817, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_float", 817, CPyStatic_specialize___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL17;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 818, CPyStatic_specialize___globals);
        goto CPyL19;
    }
    cpy_r_arg_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_rtypes___is_float_rprimitive(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 819, CPyStatic_specialize___globals);
        goto CPyL19;
    }
    if (!cpy_r_r16) goto CPyL20;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r17);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 821, CPyStatic_specialize___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/specialize.py", "translate_float", 821, CPyStatic_specialize___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL17;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL17: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL18: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
CPyL19: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL16;
}

PyObject *CPyPy_specialize___translate_float(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_float", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_callee)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_specialize___translate_float(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/specialize.py", "translate_float", 814, CPyStatic_specialize___globals);
    return NULL;
}

char CPyDef_specialize_____top_level__(void) {
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
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T2OO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
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
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject **cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject **cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject **cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
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
    int32_t cpy_r_r173;
    char cpy_r_r174;
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
    int32_t cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject **cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject **cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject **cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject **cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject **cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject **cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject **cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject **cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject **cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject **cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject **cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject **cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject **cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject **cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    int32_t cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject **cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    int32_t cpy_r_r334;
    char cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject **cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject **cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject **cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject **cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject **cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    int32_t cpy_r_r378;
    char cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject **cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    int32_t cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject **cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    int32_t cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    char cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject **cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    int32_t cpy_r_r418;
    char cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject **cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    int32_t cpy_r_r432;
    char cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject **cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    int32_t cpy_r_r446;
    char cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject **cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    int32_t cpy_r_r459;
    char cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject **cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    int32_t cpy_r_r472;
    char cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject **cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    int32_t cpy_r_r485;
    char cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject **cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    int32_t cpy_r_r498;
    char cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject **cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    int32_t cpy_r_r511;
    char cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject **cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    int32_t cpy_r_r524;
    char cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject **cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    int32_t cpy_r_r537;
    char cpy_r_r538;
    char cpy_r_r539;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", -1, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_specialize___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 15, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10213]; /* ('Callable', 'Optional') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_specialize___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 17, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10214]; /* ('ARG_NAMED', 'ARG_POS', 'CallExpr', 'DictExpr',
                                      'Expression', 'GeneratorExpr', 'IntExpr', 'ListExpr',
                                      'MemberExpr', 'NameExpr', 'RefExpr', 'StrExpr',
                                      'TupleExpr') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_specialize___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 19, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10162]; /* ('AnyType', 'TypeOfAny') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_specialize___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 34, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10215]; /* ('BasicBlock', 'Extend', 'Integer',
                                      'RaiseStandardError', 'Register', 'Truncate',
                                      'Unreachable', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_specialize___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 35, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10216]; /* ('RInstance', 'RPrimitive', 'RTuple', 'RType',
                                      'bool_rprimitive', 'c_int_rprimitive',
                                      'dict_rprimitive', 'int16_rprimitive',
                                      'int32_rprimitive', 'int64_rprimitive',
                                      'int_rprimitive', 'is_bool_rprimitive',
                                      'is_dict_rprimitive', 'is_fixed_width_rtype',
                                      'is_float_rprimitive', 'is_int16_rprimitive',
                                      'is_int32_rprimitive', 'is_int64_rprimitive',
                                      'is_int_rprimitive', 'is_list_rprimitive',
                                      'is_uint8_rprimitive', 'list_rprimitive',
                                      'set_rprimitive', 'str_rprimitive',
                                      'uint8_rprimitive') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_specialize___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 45, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r30 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r31 = CPyStatic_specialize___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 72, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10217]; /* ('comprehension_helper',
                                      'sequence_from_generator_preallocate_helper',
                                      'translate_list_comprehension',
                                      'translate_set_comprehension') */
    cpy_r_r34 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r35 = CPyStatic_specialize___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 73, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___irbuild___for_helpers = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___irbuild___for_helpers);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10218]; /* ('FormatOp', 'convert_format_expr_to_str',
                                      'join_formatted_strings', 'tokenizer_format_call') */
    cpy_r_r38 = CPyStatics[8254]; /* 'mypyc.irbuild.format_str_tokenizer' */
    cpy_r_r39 = CPyStatic_specialize___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 79, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___irbuild___format_str_tokenizer = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___irbuild___format_str_tokenizer);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10219]; /* ('dict_items_op', 'dict_keys_op',
                                      'dict_setdefault_spec_init_op', 'dict_values_op') */
    cpy_r_r42 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r43 = CPyStatic_specialize___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 85, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10220]; /* ('new_list_set_item_op',) */
    cpy_r_r46 = CPyStatics[8104]; /* 'mypyc.primitives.list_ops' */
    cpy_r_r47 = CPyStatic_specialize___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 91, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___primitives___list_ops = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___primitives___list_ops);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10221]; /* ('new_tuple_set_item_op',) */
    cpy_r_r50 = CPyStatics[8262]; /* 'mypyc.primitives.tuple_ops' */
    cpy_r_r51 = CPyStatic_specialize___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 92, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPyModule_mypyc___primitives___tuple_ops = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___primitives___tuple_ops);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatic_specialize___globals;
    cpy_r_r54 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r56 = CPyStatics[8053]; /* 'IRBuilder' */
    cpy_r_r57 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r58 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r59 = PyList_New(3);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL188;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    CPy_INCREF(cpy_r_r56);
    *(PyObject * *)cpy_r_r61 = cpy_r_r56;
    cpy_r_r62 = cpy_r_r61 + 8;
    CPy_INCREF(cpy_r_r57);
    *(PyObject * *)cpy_r_r62 = cpy_r_r57;
    cpy_r_r63 = cpy_r_r61 + 16;
    CPy_INCREF(cpy_r_r58);
    *(PyObject * *)cpy_r_r63 = cpy_r_r58;
    cpy_r_r64 = CPyStatic_specialize___globals;
    cpy_r_r65 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL189;
    }
    cpy_r_r67 = (PyObject *)CPyType_ops___Value;
    cpy_r_r68 = PyObject_GetItem(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL189;
    }
    cpy_r_r69.f0 = cpy_r_r59;
    cpy_r_r69.f1 = cpy_r_r68;
    CPy_INCREF(cpy_r_r69.f0);
    CPy_INCREF(cpy_r_r69.f1);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = PyTuple_New(2);
    if (unlikely(cpy_r_r70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10462 = cpy_r_r69.f0;
    PyTuple_SET_ITEM(cpy_r_r70, 0, __tmp10462);
    PyObject *__tmp10463 = cpy_r_r69.f1;
    PyTuple_SET_ITEM(cpy_r_r70, 1, __tmp10463);
    cpy_r_r71 = PyObject_GetItem(cpy_r_r55, cpy_r_r70);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r72 = CPyStatic_specialize___globals;
    cpy_r_r73 = CPyStatics[8542]; /* 'Specializer' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 101, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r76 = PyDict_New();
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 107, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r77 = CPyStatic_specialize___globals;
    cpy_r_r78 = CPyStatics[8532]; /* 'specializers' */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r77, cpy_r_r78, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 107, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r81 = CPyStatic_specialize___globals;
    cpy_r_r82 = CPyStatics[8543]; /* 'translate_globals' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 158, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r84 = CPyStatics[8544]; /* 'builtins.globals' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_specialize___specialize_function(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 158, CPyStatic_specialize___globals);
        goto CPyL190;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r83};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 158, CPyStatic_specialize___globals);
        goto CPyL190;
    }
    CPy_DECREF(cpy_r_r83);
    cpy_r_r90 = CPyStatic_specialize___globals;
    cpy_r_r91 = CPyStatics[8543]; /* 'translate_globals' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r90, cpy_r_r91, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 158, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r94 = CPyStatic_specialize___globals;
    cpy_r_r95 = CPyStatics[8545]; /* 'translate_builtins_with_unary_dunder' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r97 = CPyStatics[6457]; /* 'mypy_extensions.u8' */
    cpy_r_r98 = NULL;
    cpy_r_r99 = CPyDef_specialize___specialize_function(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 172, CPyStatic_specialize___globals);
        goto CPyL191;
    }
    PyObject *cpy_r_r100[1] = {cpy_r_r96};
    cpy_r_r101 = (PyObject **)&cpy_r_r100;
    cpy_r_r102 = _PyObject_Vectorcall(cpy_r_r99, cpy_r_r101, 1, 0);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL191;
    }
    CPy_DECREF(cpy_r_r96);
    cpy_r_r103 = CPyStatics[6456]; /* 'mypy_extensions.i16' */
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPyDef_specialize___specialize_function(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 171, CPyStatic_specialize___globals);
        goto CPyL192;
    }
    PyObject *cpy_r_r106[1] = {cpy_r_r102};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = _PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 1, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r102);
    cpy_r_r109 = CPyStatics[6455]; /* 'mypy_extensions.i32' */
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_specialize___specialize_function(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 170, CPyStatic_specialize___globals);
        goto CPyL193;
    }
    PyObject *cpy_r_r112[1] = {cpy_r_r108};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL193;
    }
    CPy_DECREF(cpy_r_r108);
    cpy_r_r115 = CPyStatics[6454]; /* 'mypy_extensions.i64' */
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPyDef_specialize___specialize_function(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 169, CPyStatic_specialize___globals);
        goto CPyL194;
    }
    PyObject *cpy_r_r118[1] = {cpy_r_r114};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = _PyObject_Vectorcall(cpy_r_r117, cpy_r_r119, 1, 0);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r114);
    cpy_r_r121 = CPyStatics[1181]; /* 'builtins.complex' */
    cpy_r_r122 = NULL;
    cpy_r_r123 = CPyDef_specialize___specialize_function(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 168, CPyStatic_specialize___globals);
        goto CPyL195;
    }
    PyObject *cpy_r_r124[1] = {cpy_r_r120};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r123, cpy_r_r125, 1, 0);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL195;
    }
    CPy_DECREF(cpy_r_r120);
    cpy_r_r127 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r128 = NULL;
    cpy_r_r129 = CPyDef_specialize___specialize_function(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 167, CPyStatic_specialize___globals);
        goto CPyL196;
    }
    PyObject *cpy_r_r130[1] = {cpy_r_r126};
    cpy_r_r131 = (PyObject **)&cpy_r_r130;
    cpy_r_r132 = _PyObject_Vectorcall(cpy_r_r129, cpy_r_r131, 1, 0);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL196;
    }
    CPy_DECREF(cpy_r_r126);
    cpy_r_r133 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r134 = NULL;
    cpy_r_r135 = CPyDef_specialize___specialize_function(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 166, CPyStatic_specialize___globals);
        goto CPyL197;
    }
    PyObject *cpy_r_r136[1] = {cpy_r_r132};
    cpy_r_r137 = (PyObject **)&cpy_r_r136;
    cpy_r_r138 = _PyObject_Vectorcall(cpy_r_r135, cpy_r_r137, 1, 0);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL197;
    }
    CPy_DECREF(cpy_r_r132);
    cpy_r_r139 = CPyStatics[8546]; /* 'builtins.abs' */
    cpy_r_r140 = NULL;
    cpy_r_r141 = CPyDef_specialize___specialize_function(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL198;
    }
    PyObject *cpy_r_r142[1] = {cpy_r_r138};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = _PyObject_Vectorcall(cpy_r_r141, cpy_r_r143, 1, 0);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL198;
    }
    CPy_DECREF(cpy_r_r138);
    cpy_r_r145 = CPyStatic_specialize___globals;
    cpy_r_r146 = CPyStatics[8545]; /* 'translate_builtins_with_unary_dunder' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 165, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r149 = CPyStatic_specialize___globals;
    cpy_r_r150 = CPyStatics[8547]; /* 'translate_len' */
    cpy_r_r151 = CPyDict_GetItem(cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 195, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r152 = CPyStatics[8548]; /* 'builtins.len' */
    cpy_r_r153 = NULL;
    cpy_r_r154 = CPyDef_specialize___specialize_function(cpy_r_r152, cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 195, CPyStatic_specialize___globals);
        goto CPyL199;
    }
    PyObject *cpy_r_r155[1] = {cpy_r_r151};
    cpy_r_r156 = (PyObject **)&cpy_r_r155;
    cpy_r_r157 = _PyObject_Vectorcall(cpy_r_r154, cpy_r_r156, 1, 0);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 195, CPyStatic_specialize___globals);
        goto CPyL199;
    }
    CPy_DECREF(cpy_r_r151);
    cpy_r_r158 = CPyStatic_specialize___globals;
    cpy_r_r159 = CPyStatics[8547]; /* 'translate_len' */
    cpy_r_r160 = CPyDict_SetItem(cpy_r_r158, cpy_r_r159, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 195, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r162 = CPyStatic_specialize___globals;
    cpy_r_r163 = CPyStatics[8549]; /* 'dict_methods_fast_path' */
    cpy_r_r164 = CPyDict_GetItem(cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 215, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r165 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_specialize___specialize_function(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 215, CPyStatic_specialize___globals);
        goto CPyL200;
    }
    PyObject *cpy_r_r168[1] = {cpy_r_r164};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = _PyObject_Vectorcall(cpy_r_r167, cpy_r_r169, 1, 0);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 215, CPyStatic_specialize___globals);
        goto CPyL200;
    }
    CPy_DECREF(cpy_r_r164);
    cpy_r_r171 = CPyStatic_specialize___globals;
    cpy_r_r172 = CPyStatics[8549]; /* 'dict_methods_fast_path' */
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r171, cpy_r_r172, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 215, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r175 = CPyStatic_specialize___globals;
    cpy_r_r176 = CPyStatics[8550]; /* 'translate_list_from_generator_call' */
    cpy_r_r177 = CPyDict_GetItem(cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 246, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r178 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r179 = NULL;
    cpy_r_r180 = CPyDef_specialize___specialize_function(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 246, CPyStatic_specialize___globals);
        goto CPyL201;
    }
    PyObject *cpy_r_r181[1] = {cpy_r_r177};
    cpy_r_r182 = (PyObject **)&cpy_r_r181;
    cpy_r_r183 = _PyObject_Vectorcall(cpy_r_r180, cpy_r_r182, 1, 0);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 246, CPyStatic_specialize___globals);
        goto CPyL201;
    }
    CPy_DECREF(cpy_r_r177);
    cpy_r_r184 = CPyStatic_specialize___globals;
    cpy_r_r185 = CPyStatics[8550]; /* 'translate_list_from_generator_call' */
    cpy_r_r186 = CPyDict_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 246, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r188 = CPyStatic_specialize___globals;
    cpy_r_r189 = CPyStatics[8551]; /* 'translate_tuple_from_generator_call' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 271, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r191 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r192 = NULL;
    cpy_r_r193 = CPyDef_specialize___specialize_function(cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 271, CPyStatic_specialize___globals);
        goto CPyL202;
    }
    PyObject *cpy_r_r194[1] = {cpy_r_r190};
    cpy_r_r195 = (PyObject **)&cpy_r_r194;
    cpy_r_r196 = _PyObject_Vectorcall(cpy_r_r193, cpy_r_r195, 1, 0);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 271, CPyStatic_specialize___globals);
        goto CPyL202;
    }
    CPy_DECREF(cpy_r_r190);
    cpy_r_r197 = CPyStatic_specialize___globals;
    cpy_r_r198 = CPyStatics[8551]; /* 'translate_tuple_from_generator_call' */
    cpy_r_r199 = CPyDict_SetItem(cpy_r_r197, cpy_r_r198, cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 271, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r201 = CPyStatic_specialize___globals;
    cpy_r_r202 = CPyStatics[8552]; /* 'translate_set_from_generator_call' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 296, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r204 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r205 = NULL;
    cpy_r_r206 = CPyDef_specialize___specialize_function(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 296, CPyStatic_specialize___globals);
        goto CPyL203;
    }
    PyObject *cpy_r_r207[1] = {cpy_r_r203};
    cpy_r_r208 = (PyObject **)&cpy_r_r207;
    cpy_r_r209 = _PyObject_Vectorcall(cpy_r_r206, cpy_r_r208, 1, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 296, CPyStatic_specialize___globals);
        goto CPyL203;
    }
    CPy_DECREF(cpy_r_r203);
    cpy_r_r210 = CPyStatic_specialize___globals;
    cpy_r_r211 = CPyStatics[8552]; /* 'translate_set_from_generator_call' */
    cpy_r_r212 = CPyDict_SetItem(cpy_r_r210, cpy_r_r211, cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 296, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r214 = CPyStatic_specialize___globals;
    cpy_r_r215 = CPyStatics[8553]; /* 'faster_min_max' */
    cpy_r_r216 = CPyDict_GetItem(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 314, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r217 = CPyStatics[8554]; /* 'builtins.max' */
    cpy_r_r218 = NULL;
    cpy_r_r219 = CPyDef_specialize___specialize_function(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 315, CPyStatic_specialize___globals);
        goto CPyL204;
    }
    PyObject *cpy_r_r220[1] = {cpy_r_r216};
    cpy_r_r221 = (PyObject **)&cpy_r_r220;
    cpy_r_r222 = _PyObject_Vectorcall(cpy_r_r219, cpy_r_r221, 1, 0);
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 314, CPyStatic_specialize___globals);
        goto CPyL204;
    }
    CPy_DECREF(cpy_r_r216);
    cpy_r_r223 = CPyStatics[8538]; /* 'builtins.min' */
    cpy_r_r224 = NULL;
    cpy_r_r225 = CPyDef_specialize___specialize_function(cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 314, CPyStatic_specialize___globals);
        goto CPyL205;
    }
    PyObject *cpy_r_r226[1] = {cpy_r_r222};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = _PyObject_Vectorcall(cpy_r_r225, cpy_r_r227, 1, 0);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 314, CPyStatic_specialize___globals);
        goto CPyL205;
    }
    CPy_DECREF(cpy_r_r222);
    cpy_r_r229 = CPyStatic_specialize___globals;
    cpy_r_r230 = CPyStatics[8553]; /* 'faster_min_max' */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r229, cpy_r_r230, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 314, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r233 = CPyStatic_specialize___globals;
    cpy_r_r234 = CPyStatics[8555]; /* 'translate_safe_generator_call' */
    cpy_r_r235 = CPyDict_GetItem(cpy_r_r233, cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r236 = CPyStatics[1308]; /* 'update' */
    cpy_r_r237 = CPyStatic_rtypes___set_rprimitive;
    if (unlikely(cpy_r_r237 == NULL)) {
        goto CPyL206;
    } else
        goto CPyL75;
CPyL73: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r238 = 0;
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 352, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r239 = CPyDef_specialize___specialize_function(cpy_r_r236, cpy_r_r237);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 352, CPyStatic_specialize___globals);
        goto CPyL207;
    }
    PyObject *cpy_r_r240[1] = {cpy_r_r235};
    cpy_r_r241 = (PyObject **)&cpy_r_r240;
    cpy_r_r242 = _PyObject_Vectorcall(cpy_r_r239, cpy_r_r241, 1, 0);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL207;
    }
    CPy_DECREF(cpy_r_r235);
    cpy_r_r243 = CPyStatics[1308]; /* 'update' */
    cpy_r_r244 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r244 == NULL)) {
        goto CPyL208;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r245 = 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 351, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r246 = CPyDef_specialize___specialize_function(cpy_r_r243, cpy_r_r244);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 351, CPyStatic_specialize___globals);
        goto CPyL209;
    }
    PyObject *cpy_r_r247[1] = {cpy_r_r242};
    cpy_r_r248 = (PyObject **)&cpy_r_r247;
    cpy_r_r249 = _PyObject_Vectorcall(cpy_r_r246, cpy_r_r248, 1, 0);
    CPy_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL209;
    }
    CPy_DECREF(cpy_r_r242);
    cpy_r_r250 = CPyStatics[1307]; /* 'extend' */
    cpy_r_r251 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r251 == NULL)) {
        goto CPyL210;
    } else
        goto CPyL85;
CPyL83: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r252 = 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 350, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL85: ;
    cpy_r_r253 = CPyDef_specialize___specialize_function(cpy_r_r250, cpy_r_r251);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 350, CPyStatic_specialize___globals);
        goto CPyL211;
    }
    PyObject *cpy_r_r254[1] = {cpy_r_r249};
    cpy_r_r255 = (PyObject **)&cpy_r_r254;
    cpy_r_r256 = _PyObject_Vectorcall(cpy_r_r253, cpy_r_r255, 1, 0);
    CPy_DECREF(cpy_r_r253);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL211;
    }
    CPy_DECREF(cpy_r_r249);
    cpy_r_r257 = CPyStatics[175]; /* 'join' */
    cpy_r_r258 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r258 == NULL)) {
        goto CPyL212;
    } else
        goto CPyL90;
CPyL88: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r259 = 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 349, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r260 = CPyDef_specialize___specialize_function(cpy_r_r257, cpy_r_r258);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 349, CPyStatic_specialize___globals);
        goto CPyL213;
    }
    PyObject *cpy_r_r261[1] = {cpy_r_r256};
    cpy_r_r262 = (PyObject **)&cpy_r_r261;
    cpy_r_r263 = _PyObject_Vectorcall(cpy_r_r260, cpy_r_r262, 1, 0);
    CPy_DECREF(cpy_r_r260);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL213;
    }
    CPy_DECREF(cpy_r_r256);
    cpy_r_r264 = CPyStatics[799]; /* 'collections.OrderedDict' */
    cpy_r_r265 = NULL;
    cpy_r_r266 = CPyDef_specialize___specialize_function(cpy_r_r264, cpy_r_r265);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 348, CPyStatic_specialize___globals);
        goto CPyL214;
    }
    PyObject *cpy_r_r267[1] = {cpy_r_r263};
    cpy_r_r268 = (PyObject **)&cpy_r_r267;
    cpy_r_r269 = _PyObject_Vectorcall(cpy_r_r266, cpy_r_r268, 1, 0);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL214;
    }
    CPy_DECREF(cpy_r_r263);
    cpy_r_r270 = CPyStatics[8556]; /* 'builtins.sorted' */
    cpy_r_r271 = NULL;
    cpy_r_r272 = CPyDef_specialize___specialize_function(cpy_r_r270, cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 347, CPyStatic_specialize___globals);
        goto CPyL215;
    }
    PyObject *cpy_r_r273[1] = {cpy_r_r269};
    cpy_r_r274 = (PyObject **)&cpy_r_r273;
    cpy_r_r275 = _PyObject_Vectorcall(cpy_r_r272, cpy_r_r274, 1, 0);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL215;
    }
    CPy_DECREF(cpy_r_r269);
    cpy_r_r276 = CPyStatics[8554]; /* 'builtins.max' */
    cpy_r_r277 = NULL;
    cpy_r_r278 = CPyDef_specialize___specialize_function(cpy_r_r276, cpy_r_r277);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 346, CPyStatic_specialize___globals);
        goto CPyL216;
    }
    PyObject *cpy_r_r279[1] = {cpy_r_r275};
    cpy_r_r280 = (PyObject **)&cpy_r_r279;
    cpy_r_r281 = _PyObject_Vectorcall(cpy_r_r278, cpy_r_r280, 1, 0);
    CPy_DECREF(cpy_r_r278);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL216;
    }
    CPy_DECREF(cpy_r_r275);
    cpy_r_r282 = CPyStatics[8538]; /* 'builtins.min' */
    cpy_r_r283 = NULL;
    cpy_r_r284 = CPyDef_specialize___specialize_function(cpy_r_r282, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 345, CPyStatic_specialize___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r285[1] = {cpy_r_r281};
    cpy_r_r286 = (PyObject **)&cpy_r_r285;
    cpy_r_r287 = _PyObject_Vectorcall(cpy_r_r284, cpy_r_r286, 1, 0);
    CPy_DECREF(cpy_r_r284);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL217;
    }
    CPy_DECREF(cpy_r_r281);
    cpy_r_r288 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r289 = NULL;
    cpy_r_r290 = CPyDef_specialize___specialize_function(cpy_r_r288, cpy_r_r289);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 344, CPyStatic_specialize___globals);
        goto CPyL218;
    }
    PyObject *cpy_r_r291[1] = {cpy_r_r287};
    cpy_r_r292 = (PyObject **)&cpy_r_r291;
    cpy_r_r293 = _PyObject_Vectorcall(cpy_r_r290, cpy_r_r292, 1, 0);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL218;
    }
    CPy_DECREF(cpy_r_r287);
    cpy_r_r294 = CPyStatics[889]; /* 'builtins.frozenset' */
    cpy_r_r295 = NULL;
    cpy_r_r296 = CPyDef_specialize___specialize_function(cpy_r_r294, cpy_r_r295);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 343, CPyStatic_specialize___globals);
        goto CPyL219;
    }
    PyObject *cpy_r_r297[1] = {cpy_r_r293};
    cpy_r_r298 = (PyObject **)&cpy_r_r297;
    cpy_r_r299 = _PyObject_Vectorcall(cpy_r_r296, cpy_r_r298, 1, 0);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL219;
    }
    CPy_DECREF(cpy_r_r293);
    cpy_r_r300 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r301 = NULL;
    cpy_r_r302 = CPyDef_specialize___specialize_function(cpy_r_r300, cpy_r_r301);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL220;
    }
    PyObject *cpy_r_r303[1] = {cpy_r_r299};
    cpy_r_r304 = (PyObject **)&cpy_r_r303;
    cpy_r_r305 = _PyObject_Vectorcall(cpy_r_r302, cpy_r_r304, 1, 0);
    CPy_DECREF(cpy_r_r302);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL220;
    }
    CPy_DECREF(cpy_r_r299);
    cpy_r_r306 = CPyStatic_specialize___globals;
    cpy_r_r307 = CPyStatics[8555]; /* 'translate_safe_generator_call' */
    cpy_r_r308 = CPyDict_SetItem(cpy_r_r306, cpy_r_r307, cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 342, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r310 = CPyStatic_specialize___globals;
    cpy_r_r311 = CPyStatics[8557]; /* 'translate_any_call' */
    cpy_r_r312 = CPyDict_GetItem(cpy_r_r310, cpy_r_r311);
    if (unlikely(cpy_r_r312 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 389, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r313 = CPyStatics[6267]; /* 'builtins.any' */
    cpy_r_r314 = NULL;
    cpy_r_r315 = CPyDef_specialize___specialize_function(cpy_r_r313, cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 389, CPyStatic_specialize___globals);
        goto CPyL221;
    }
    PyObject *cpy_r_r316[1] = {cpy_r_r312};
    cpy_r_r317 = (PyObject **)&cpy_r_r316;
    cpy_r_r318 = _PyObject_Vectorcall(cpy_r_r315, cpy_r_r317, 1, 0);
    CPy_DECREF(cpy_r_r315);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 389, CPyStatic_specialize___globals);
        goto CPyL221;
    }
    CPy_DECREF(cpy_r_r312);
    cpy_r_r319 = CPyStatic_specialize___globals;
    cpy_r_r320 = CPyStatics[8557]; /* 'translate_any_call' */
    cpy_r_r321 = CPyDict_SetItem(cpy_r_r319, cpy_r_r320, cpy_r_r318);
    CPy_DECREF(cpy_r_r318);
    cpy_r_r322 = cpy_r_r321 >= 0;
    if (unlikely(!cpy_r_r322)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 389, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r323 = CPyStatic_specialize___globals;
    cpy_r_r324 = CPyStatics[8558]; /* 'translate_all_call' */
    cpy_r_r325 = CPyDict_GetItem(cpy_r_r323, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 400, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r326 = CPyStatics[8559]; /* 'builtins.all' */
    cpy_r_r327 = NULL;
    cpy_r_r328 = CPyDef_specialize___specialize_function(cpy_r_r326, cpy_r_r327);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 400, CPyStatic_specialize___globals);
        goto CPyL222;
    }
    PyObject *cpy_r_r329[1] = {cpy_r_r325};
    cpy_r_r330 = (PyObject **)&cpy_r_r329;
    cpy_r_r331 = _PyObject_Vectorcall(cpy_r_r328, cpy_r_r330, 1, 0);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 400, CPyStatic_specialize___globals);
        goto CPyL222;
    }
    CPy_DECREF(cpy_r_r325);
    cpy_r_r332 = CPyStatic_specialize___globals;
    cpy_r_r333 = CPyStatics[8558]; /* 'translate_all_call' */
    cpy_r_r334 = CPyDict_SetItem(cpy_r_r332, cpy_r_r333, cpy_r_r331);
    CPy_DECREF(cpy_r_r331);
    cpy_r_r335 = cpy_r_r334 >= 0;
    if (unlikely(!cpy_r_r335)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 400, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r336 = CPyStatic_specialize___globals;
    cpy_r_r337 = CPyStatics[8560]; /* 'translate_sum_call' */
    cpy_r_r338 = CPyDict_GetItem(cpy_r_r336, cpy_r_r337);
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 443, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r339 = CPyStatics[8561]; /* 'builtins.sum' */
    cpy_r_r340 = NULL;
    cpy_r_r341 = CPyDef_specialize___specialize_function(cpy_r_r339, cpy_r_r340);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 443, CPyStatic_specialize___globals);
        goto CPyL223;
    }
    PyObject *cpy_r_r342[1] = {cpy_r_r338};
    cpy_r_r343 = (PyObject **)&cpy_r_r342;
    cpy_r_r344 = _PyObject_Vectorcall(cpy_r_r341, cpy_r_r343, 1, 0);
    CPy_DECREF(cpy_r_r341);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 443, CPyStatic_specialize___globals);
        goto CPyL223;
    }
    CPy_DECREF(cpy_r_r338);
    cpy_r_r345 = CPyStatic_specialize___globals;
    cpy_r_r346 = CPyStatics[8560]; /* 'translate_sum_call' */
    cpy_r_r347 = CPyDict_SetItem(cpy_r_r345, cpy_r_r346, cpy_r_r344);
    CPy_DECREF(cpy_r_r344);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 443, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r349 = CPyStatic_specialize___globals;
    cpy_r_r350 = CPyStatics[8562]; /* 'translate_dataclasses_field_call' */
    cpy_r_r351 = CPyDict_GetItem(cpy_r_r349, cpy_r_r350);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r352 = CPyStatics[8563]; /* 'attr.Factory' */
    cpy_r_r353 = NULL;
    cpy_r_r354 = CPyDef_specialize___specialize_function(cpy_r_r352, cpy_r_r353);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 485, CPyStatic_specialize___globals);
        goto CPyL224;
    }
    PyObject *cpy_r_r355[1] = {cpy_r_r351};
    cpy_r_r356 = (PyObject **)&cpy_r_r355;
    cpy_r_r357 = _PyObject_Vectorcall(cpy_r_r354, cpy_r_r356, 1, 0);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL224;
    }
    CPy_DECREF(cpy_r_r351);
    cpy_r_r358 = CPyStatics[4459]; /* 'attr.attrib' */
    cpy_r_r359 = NULL;
    cpy_r_r360 = CPyDef_specialize___specialize_function(cpy_r_r358, cpy_r_r359);
    if (unlikely(cpy_r_r360 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 484, CPyStatic_specialize___globals);
        goto CPyL225;
    }
    PyObject *cpy_r_r361[1] = {cpy_r_r357};
    cpy_r_r362 = (PyObject **)&cpy_r_r361;
    cpy_r_r363 = _PyObject_Vectorcall(cpy_r_r360, cpy_r_r362, 1, 0);
    CPy_DECREF(cpy_r_r360);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL225;
    }
    CPy_DECREF(cpy_r_r357);
    cpy_r_r364 = CPyStatics[4458]; /* 'attr.ib' */
    cpy_r_r365 = NULL;
    cpy_r_r366 = CPyDef_specialize___specialize_function(cpy_r_r364, cpy_r_r365);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 483, CPyStatic_specialize___globals);
        goto CPyL226;
    }
    PyObject *cpy_r_r367[1] = {cpy_r_r363};
    cpy_r_r368 = (PyObject **)&cpy_r_r367;
    cpy_r_r369 = _PyObject_Vectorcall(cpy_r_r366, cpy_r_r368, 1, 0);
    CPy_DECREF(cpy_r_r366);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL226;
    }
    CPy_DECREF(cpy_r_r363);
    cpy_r_r370 = CPyStatics[4536]; /* 'dataclasses.field' */
    cpy_r_r371 = NULL;
    cpy_r_r372 = CPyDef_specialize___specialize_function(cpy_r_r370, cpy_r_r371);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL227;
    }
    PyObject *cpy_r_r373[1] = {cpy_r_r369};
    cpy_r_r374 = (PyObject **)&cpy_r_r373;
    cpy_r_r375 = _PyObject_Vectorcall(cpy_r_r372, cpy_r_r374, 1, 0);
    CPy_DECREF(cpy_r_r372);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL227;
    }
    CPy_DECREF(cpy_r_r369);
    cpy_r_r376 = CPyStatic_specialize___globals;
    cpy_r_r377 = CPyStatics[8562]; /* 'translate_dataclasses_field_call' */
    cpy_r_r378 = CPyDict_SetItem(cpy_r_r376, cpy_r_r377, cpy_r_r375);
    CPy_DECREF(cpy_r_r375);
    cpy_r_r379 = cpy_r_r378 >= 0;
    if (unlikely(!cpy_r_r379)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 482, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r380 = CPyStatic_specialize___globals;
    cpy_r_r381 = CPyStatics[8564]; /* 'translate_next_call' */
    cpy_r_r382 = CPyDict_GetItem(cpy_r_r380, cpy_r_r381);
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 499, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r383 = CPyStatics[8565]; /* 'builtins.next' */
    cpy_r_r384 = NULL;
    cpy_r_r385 = CPyDef_specialize___specialize_function(cpy_r_r383, cpy_r_r384);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 499, CPyStatic_specialize___globals);
        goto CPyL228;
    }
    PyObject *cpy_r_r386[1] = {cpy_r_r382};
    cpy_r_r387 = (PyObject **)&cpy_r_r386;
    cpy_r_r388 = _PyObject_Vectorcall(cpy_r_r385, cpy_r_r387, 1, 0);
    CPy_DECREF(cpy_r_r385);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 499, CPyStatic_specialize___globals);
        goto CPyL228;
    }
    CPy_DECREF(cpy_r_r382);
    cpy_r_r389 = CPyStatic_specialize___globals;
    cpy_r_r390 = CPyStatics[8564]; /* 'translate_next_call' */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r389, cpy_r_r390, cpy_r_r388);
    CPy_DECREF(cpy_r_r388);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 499, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r393 = CPyStatic_specialize___globals;
    cpy_r_r394 = CPyStatics[8566]; /* 'translate_isinstance' */
    cpy_r_r395 = CPyDict_GetItem(cpy_r_r393, cpy_r_r394);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 543, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r396 = CPyStatics[855]; /* 'builtins.isinstance' */
    cpy_r_r397 = NULL;
    cpy_r_r398 = CPyDef_specialize___specialize_function(cpy_r_r396, cpy_r_r397);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 543, CPyStatic_specialize___globals);
        goto CPyL229;
    }
    PyObject *cpy_r_r399[1] = {cpy_r_r395};
    cpy_r_r400 = (PyObject **)&cpy_r_r399;
    cpy_r_r401 = _PyObject_Vectorcall(cpy_r_r398, cpy_r_r400, 1, 0);
    CPy_DECREF(cpy_r_r398);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 543, CPyStatic_specialize___globals);
        goto CPyL229;
    }
    CPy_DECREF(cpy_r_r395);
    cpy_r_r402 = CPyStatic_specialize___globals;
    cpy_r_r403 = CPyStatics[8566]; /* 'translate_isinstance' */
    cpy_r_r404 = CPyDict_SetItem(cpy_r_r402, cpy_r_r403, cpy_r_r401);
    CPy_DECREF(cpy_r_r401);
    cpy_r_r405 = cpy_r_r404 >= 0;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 543, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r406 = CPyStatic_specialize___globals;
    cpy_r_r407 = CPyStatics[8567]; /* 'translate_dict_setdefault' */
    cpy_r_r408 = CPyDict_GetItem(cpy_r_r406, cpy_r_r407);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 569, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r409 = CPyStatics[8568]; /* 'setdefault' */
    cpy_r_r410 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r410 == NULL)) {
        goto CPyL230;
    } else
        goto CPyL141;
CPyL139: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r411 = 0;
    if (unlikely(!cpy_r_r411)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 569, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL141: ;
    cpy_r_r412 = CPyDef_specialize___specialize_function(cpy_r_r409, cpy_r_r410);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 569, CPyStatic_specialize___globals);
        goto CPyL231;
    }
    PyObject *cpy_r_r413[1] = {cpy_r_r408};
    cpy_r_r414 = (PyObject **)&cpy_r_r413;
    cpy_r_r415 = _PyObject_Vectorcall(cpy_r_r412, cpy_r_r414, 1, 0);
    CPy_DECREF(cpy_r_r412);
    if (unlikely(cpy_r_r415 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 569, CPyStatic_specialize___globals);
        goto CPyL231;
    }
    CPy_DECREF(cpy_r_r408);
    cpy_r_r416 = CPyStatic_specialize___globals;
    cpy_r_r417 = CPyStatics[8567]; /* 'translate_dict_setdefault' */
    cpy_r_r418 = CPyDict_SetItem(cpy_r_r416, cpy_r_r417, cpy_r_r415);
    CPy_DECREF(cpy_r_r415);
    cpy_r_r419 = cpy_r_r418 >= 0;
    if (unlikely(!cpy_r_r419)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 569, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r420 = CPyStatic_specialize___globals;
    cpy_r_r421 = CPyStatics[8569]; /* 'translate_str_format' */
    cpy_r_r422 = CPyDict_GetItem(cpy_r_r420, cpy_r_r421);
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 615, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r423 = CPyStatics[193]; /* 'format' */
    cpy_r_r424 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r424 == NULL)) {
        goto CPyL232;
    } else
        goto CPyL148;
CPyL146: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r425 = 0;
    if (unlikely(!cpy_r_r425)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 615, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL148: ;
    cpy_r_r426 = CPyDef_specialize___specialize_function(cpy_r_r423, cpy_r_r424);
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 615, CPyStatic_specialize___globals);
        goto CPyL233;
    }
    PyObject *cpy_r_r427[1] = {cpy_r_r422};
    cpy_r_r428 = (PyObject **)&cpy_r_r427;
    cpy_r_r429 = _PyObject_Vectorcall(cpy_r_r426, cpy_r_r428, 1, 0);
    CPy_DECREF(cpy_r_r426);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 615, CPyStatic_specialize___globals);
        goto CPyL233;
    }
    CPy_DECREF(cpy_r_r422);
    cpy_r_r430 = CPyStatic_specialize___globals;
    cpy_r_r431 = CPyStatics[8569]; /* 'translate_str_format' */
    cpy_r_r432 = CPyDict_SetItem(cpy_r_r430, cpy_r_r431, cpy_r_r429);
    CPy_DECREF(cpy_r_r429);
    cpy_r_r433 = cpy_r_r432 >= 0;
    if (unlikely(!cpy_r_r433)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 615, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r434 = CPyStatic_specialize___globals;
    cpy_r_r435 = CPyStatics[8570]; /* 'translate_fstring' */
    cpy_r_r436 = CPyDict_GetItem(cpy_r_r434, cpy_r_r435);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 635, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r437 = CPyStatics[175]; /* 'join' */
    cpy_r_r438 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r438 == NULL)) {
        goto CPyL234;
    } else
        goto CPyL155;
CPyL153: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r439 = 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 635, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    CPy_Unreachable();
CPyL155: ;
    cpy_r_r440 = CPyDef_specialize___specialize_function(cpy_r_r437, cpy_r_r438);
    if (unlikely(cpy_r_r440 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 635, CPyStatic_specialize___globals);
        goto CPyL235;
    }
    PyObject *cpy_r_r441[1] = {cpy_r_r436};
    cpy_r_r442 = (PyObject **)&cpy_r_r441;
    cpy_r_r443 = _PyObject_Vectorcall(cpy_r_r440, cpy_r_r442, 1, 0);
    CPy_DECREF(cpy_r_r440);
    if (unlikely(cpy_r_r443 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 635, CPyStatic_specialize___globals);
        goto CPyL235;
    }
    CPy_DECREF(cpy_r_r436);
    cpy_r_r444 = CPyStatic_specialize___globals;
    cpy_r_r445 = CPyStatics[8570]; /* 'translate_fstring' */
    cpy_r_r446 = CPyDict_SetItem(cpy_r_r444, cpy_r_r445, cpy_r_r443);
    CPy_DECREF(cpy_r_r443);
    cpy_r_r447 = cpy_r_r446 >= 0;
    if (unlikely(!cpy_r_r447)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 635, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r448 = CPyStatic_specialize___globals;
    cpy_r_r449 = CPyStatics[8571]; /* 'translate_i64' */
    cpy_r_r450 = CPyDict_GetItem(cpy_r_r448, cpy_r_r449);
    if (unlikely(cpy_r_r450 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 685, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r451 = CPyStatics[6454]; /* 'mypy_extensions.i64' */
    cpy_r_r452 = NULL;
    cpy_r_r453 = CPyDef_specialize___specialize_function(cpy_r_r451, cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 685, CPyStatic_specialize___globals);
        goto CPyL236;
    }
    PyObject *cpy_r_r454[1] = {cpy_r_r450};
    cpy_r_r455 = (PyObject **)&cpy_r_r454;
    cpy_r_r456 = _PyObject_Vectorcall(cpy_r_r453, cpy_r_r455, 1, 0);
    CPy_DECREF(cpy_r_r453);
    if (unlikely(cpy_r_r456 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 685, CPyStatic_specialize___globals);
        goto CPyL236;
    }
    CPy_DECREF(cpy_r_r450);
    cpy_r_r457 = CPyStatic_specialize___globals;
    cpy_r_r458 = CPyStatics[8571]; /* 'translate_i64' */
    cpy_r_r459 = CPyDict_SetItem(cpy_r_r457, cpy_r_r458, cpy_r_r456);
    CPy_DECREF(cpy_r_r456);
    cpy_r_r460 = cpy_r_r459 >= 0;
    if (unlikely(!cpy_r_r460)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 685, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r461 = CPyStatic_specialize___globals;
    cpy_r_r462 = CPyStatics[8572]; /* 'translate_i32' */
    cpy_r_r463 = CPyDict_GetItem(cpy_r_r461, cpy_r_r462);
    if (unlikely(cpy_r_r463 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 705, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r464 = CPyStatics[6455]; /* 'mypy_extensions.i32' */
    cpy_r_r465 = NULL;
    cpy_r_r466 = CPyDef_specialize___specialize_function(cpy_r_r464, cpy_r_r465);
    if (unlikely(cpy_r_r466 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 705, CPyStatic_specialize___globals);
        goto CPyL237;
    }
    PyObject *cpy_r_r467[1] = {cpy_r_r463};
    cpy_r_r468 = (PyObject **)&cpy_r_r467;
    cpy_r_r469 = _PyObject_Vectorcall(cpy_r_r466, cpy_r_r468, 1, 0);
    CPy_DECREF(cpy_r_r466);
    if (unlikely(cpy_r_r469 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 705, CPyStatic_specialize___globals);
        goto CPyL237;
    }
    CPy_DECREF(cpy_r_r463);
    cpy_r_r470 = CPyStatic_specialize___globals;
    cpy_r_r471 = CPyStatics[8572]; /* 'translate_i32' */
    cpy_r_r472 = CPyDict_SetItem(cpy_r_r470, cpy_r_r471, cpy_r_r469);
    CPy_DECREF(cpy_r_r469);
    cpy_r_r473 = cpy_r_r472 >= 0;
    if (unlikely(!cpy_r_r473)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 705, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r474 = CPyStatic_specialize___globals;
    cpy_r_r475 = CPyStatics[8573]; /* 'translate_i16' */
    cpy_r_r476 = CPyDict_GetItem(cpy_r_r474, cpy_r_r475);
    if (unlikely(cpy_r_r476 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 729, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r477 = CPyStatics[6456]; /* 'mypy_extensions.i16' */
    cpy_r_r478 = NULL;
    cpy_r_r479 = CPyDef_specialize___specialize_function(cpy_r_r477, cpy_r_r478);
    if (unlikely(cpy_r_r479 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 729, CPyStatic_specialize___globals);
        goto CPyL238;
    }
    PyObject *cpy_r_r480[1] = {cpy_r_r476};
    cpy_r_r481 = (PyObject **)&cpy_r_r480;
    cpy_r_r482 = _PyObject_Vectorcall(cpy_r_r479, cpy_r_r481, 1, 0);
    CPy_DECREF(cpy_r_r479);
    if (unlikely(cpy_r_r482 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 729, CPyStatic_specialize___globals);
        goto CPyL238;
    }
    CPy_DECREF(cpy_r_r476);
    cpy_r_r483 = CPyStatic_specialize___globals;
    cpy_r_r484 = CPyStatics[8573]; /* 'translate_i16' */
    cpy_r_r485 = CPyDict_SetItem(cpy_r_r483, cpy_r_r484, cpy_r_r482);
    CPy_DECREF(cpy_r_r482);
    cpy_r_r486 = cpy_r_r485 >= 0;
    if (unlikely(!cpy_r_r486)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 729, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r487 = CPyStatic_specialize___globals;
    cpy_r_r488 = CPyStatics[8574]; /* 'translate_u8' */
    cpy_r_r489 = CPyDict_GetItem(cpy_r_r487, cpy_r_r488);
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 750, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r490 = CPyStatics[6457]; /* 'mypy_extensions.u8' */
    cpy_r_r491 = NULL;
    cpy_r_r492 = CPyDef_specialize___specialize_function(cpy_r_r490, cpy_r_r491);
    if (unlikely(cpy_r_r492 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 750, CPyStatic_specialize___globals);
        goto CPyL239;
    }
    PyObject *cpy_r_r493[1] = {cpy_r_r489};
    cpy_r_r494 = (PyObject **)&cpy_r_r493;
    cpy_r_r495 = _PyObject_Vectorcall(cpy_r_r492, cpy_r_r494, 1, 0);
    CPy_DECREF(cpy_r_r492);
    if (unlikely(cpy_r_r495 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 750, CPyStatic_specialize___globals);
        goto CPyL239;
    }
    CPy_DECREF(cpy_r_r489);
    cpy_r_r496 = CPyStatic_specialize___globals;
    cpy_r_r497 = CPyStatics[8574]; /* 'translate_u8' */
    cpy_r_r498 = CPyDict_SetItem(cpy_r_r496, cpy_r_r497, cpy_r_r495);
    CPy_DECREF(cpy_r_r495);
    cpy_r_r499 = cpy_r_r498 >= 0;
    if (unlikely(!cpy_r_r499)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 750, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r500 = CPyStatic_specialize___globals;
    cpy_r_r501 = CPyStatics[8575]; /* 'translate_int' */
    cpy_r_r502 = CPyDict_GetItem(cpy_r_r500, cpy_r_r501);
    if (unlikely(cpy_r_r502 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 788, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r503 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r504 = NULL;
    cpy_r_r505 = CPyDef_specialize___specialize_function(cpy_r_r503, cpy_r_r504);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 788, CPyStatic_specialize___globals);
        goto CPyL240;
    }
    PyObject *cpy_r_r506[1] = {cpy_r_r502};
    cpy_r_r507 = (PyObject **)&cpy_r_r506;
    cpy_r_r508 = _PyObject_Vectorcall(cpy_r_r505, cpy_r_r507, 1, 0);
    CPy_DECREF(cpy_r_r505);
    if (unlikely(cpy_r_r508 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 788, CPyStatic_specialize___globals);
        goto CPyL240;
    }
    CPy_DECREF(cpy_r_r502);
    cpy_r_r509 = CPyStatic_specialize___globals;
    cpy_r_r510 = CPyStatics[8575]; /* 'translate_int' */
    cpy_r_r511 = CPyDict_SetItem(cpy_r_r509, cpy_r_r510, cpy_r_r508);
    CPy_DECREF(cpy_r_r508);
    cpy_r_r512 = cpy_r_r511 >= 0;
    if (unlikely(!cpy_r_r512)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 788, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r513 = CPyStatic_specialize___globals;
    cpy_r_r514 = CPyStatics[8576]; /* 'translate_bool' */
    cpy_r_r515 = CPyDict_GetItem(cpy_r_r513, cpy_r_r514);
    if (unlikely(cpy_r_r515 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 804, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r516 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r517 = NULL;
    cpy_r_r518 = CPyDef_specialize___specialize_function(cpy_r_r516, cpy_r_r517);
    if (unlikely(cpy_r_r518 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 804, CPyStatic_specialize___globals);
        goto CPyL241;
    }
    PyObject *cpy_r_r519[1] = {cpy_r_r515};
    cpy_r_r520 = (PyObject **)&cpy_r_r519;
    cpy_r_r521 = _PyObject_Vectorcall(cpy_r_r518, cpy_r_r520, 1, 0);
    CPy_DECREF(cpy_r_r518);
    if (unlikely(cpy_r_r521 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 804, CPyStatic_specialize___globals);
        goto CPyL241;
    }
    CPy_DECREF(cpy_r_r515);
    cpy_r_r522 = CPyStatic_specialize___globals;
    cpy_r_r523 = CPyStatics[8576]; /* 'translate_bool' */
    cpy_r_r524 = CPyDict_SetItem(cpy_r_r522, cpy_r_r523, cpy_r_r521);
    CPy_DECREF(cpy_r_r521);
    cpy_r_r525 = cpy_r_r524 >= 0;
    if (unlikely(!cpy_r_r525)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 804, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r526 = CPyStatic_specialize___globals;
    cpy_r_r527 = CPyStatics[8577]; /* 'translate_float' */
    cpy_r_r528 = CPyDict_GetItem(cpy_r_r526, cpy_r_r527);
    if (unlikely(cpy_r_r528 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 813, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    cpy_r_r529 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r530 = NULL;
    cpy_r_r531 = CPyDef_specialize___specialize_function(cpy_r_r529, cpy_r_r530);
    if (unlikely(cpy_r_r531 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 813, CPyStatic_specialize___globals);
        goto CPyL242;
    }
    PyObject *cpy_r_r532[1] = {cpy_r_r528};
    cpy_r_r533 = (PyObject **)&cpy_r_r532;
    cpy_r_r534 = _PyObject_Vectorcall(cpy_r_r531, cpy_r_r533, 1, 0);
    CPy_DECREF(cpy_r_r531);
    if (unlikely(cpy_r_r534 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 813, CPyStatic_specialize___globals);
        goto CPyL242;
    }
    CPy_DECREF(cpy_r_r528);
    cpy_r_r535 = CPyStatic_specialize___globals;
    cpy_r_r536 = CPyStatics[8577]; /* 'translate_float' */
    cpy_r_r537 = CPyDict_SetItem(cpy_r_r535, cpy_r_r536, cpy_r_r534);
    CPy_DECREF(cpy_r_r534);
    cpy_r_r538 = cpy_r_r537 >= 0;
    if (unlikely(!cpy_r_r538)) {
        CPy_AddTraceback("mypyc/irbuild/specialize.py", "<module>", 813, CPyStatic_specialize___globals);
        goto CPyL187;
    }
    return 1;
CPyL187: ;
    cpy_r_r539 = 2;
    return cpy_r_r539;
CPyL188: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL187;
CPyL189: ;
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r59);
    goto CPyL187;
CPyL190: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL187;
CPyL191: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL187;
CPyL192: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL187;
CPyL193: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL187;
CPyL194: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL187;
CPyL195: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL187;
CPyL196: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL187;
CPyL197: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL187;
CPyL198: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL187;
CPyL199: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL187;
CPyL200: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL187;
CPyL201: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL187;
CPyL202: ;
    CPy_DecRef(cpy_r_r190);
    goto CPyL187;
CPyL203: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL187;
CPyL204: ;
    CPy_DecRef(cpy_r_r216);
    goto CPyL187;
CPyL205: ;
    CPy_DecRef(cpy_r_r222);
    goto CPyL187;
CPyL206: ;
    CPy_DecRef(cpy_r_r235);
    goto CPyL73;
CPyL207: ;
    CPy_DecRef(cpy_r_r235);
    goto CPyL187;
CPyL208: ;
    CPy_DecRef(cpy_r_r242);
    goto CPyL78;
CPyL209: ;
    CPy_DecRef(cpy_r_r242);
    goto CPyL187;
CPyL210: ;
    CPy_DecRef(cpy_r_r249);
    goto CPyL83;
CPyL211: ;
    CPy_DecRef(cpy_r_r249);
    goto CPyL187;
CPyL212: ;
    CPy_DecRef(cpy_r_r256);
    goto CPyL88;
CPyL213: ;
    CPy_DecRef(cpy_r_r256);
    goto CPyL187;
CPyL214: ;
    CPy_DecRef(cpy_r_r263);
    goto CPyL187;
CPyL215: ;
    CPy_DecRef(cpy_r_r269);
    goto CPyL187;
CPyL216: ;
    CPy_DecRef(cpy_r_r275);
    goto CPyL187;
CPyL217: ;
    CPy_DecRef(cpy_r_r281);
    goto CPyL187;
CPyL218: ;
    CPy_DecRef(cpy_r_r287);
    goto CPyL187;
CPyL219: ;
    CPy_DecRef(cpy_r_r293);
    goto CPyL187;
CPyL220: ;
    CPy_DecRef(cpy_r_r299);
    goto CPyL187;
CPyL221: ;
    CPy_DecRef(cpy_r_r312);
    goto CPyL187;
CPyL222: ;
    CPy_DecRef(cpy_r_r325);
    goto CPyL187;
CPyL223: ;
    CPy_DecRef(cpy_r_r338);
    goto CPyL187;
CPyL224: ;
    CPy_DecRef(cpy_r_r351);
    goto CPyL187;
CPyL225: ;
    CPy_DecRef(cpy_r_r357);
    goto CPyL187;
CPyL226: ;
    CPy_DecRef(cpy_r_r363);
    goto CPyL187;
CPyL227: ;
    CPy_DecRef(cpy_r_r369);
    goto CPyL187;
CPyL228: ;
    CPy_DecRef(cpy_r_r382);
    goto CPyL187;
CPyL229: ;
    CPy_DecRef(cpy_r_r395);
    goto CPyL187;
CPyL230: ;
    CPy_DecRef(cpy_r_r408);
    goto CPyL139;
CPyL231: ;
    CPy_DecRef(cpy_r_r408);
    goto CPyL187;
CPyL232: ;
    CPy_DecRef(cpy_r_r422);
    goto CPyL146;
CPyL233: ;
    CPy_DecRef(cpy_r_r422);
    goto CPyL187;
CPyL234: ;
    CPy_DecRef(cpy_r_r436);
    goto CPyL153;
CPyL235: ;
    CPy_DecRef(cpy_r_r436);
    goto CPyL187;
CPyL236: ;
    CPy_DecRef(cpy_r_r450);
    goto CPyL187;
CPyL237: ;
    CPy_DecRef(cpy_r_r463);
    goto CPyL187;
CPyL238: ;
    CPy_DecRef(cpy_r_r476);
    goto CPyL187;
CPyL239: ;
    CPy_DecRef(cpy_r_r489);
    goto CPyL187;
CPyL240: ;
    CPy_DecRef(cpy_r_r502);
    goto CPyL187;
CPyL241: ;
    CPy_DecRef(cpy_r_r515);
    goto CPyL187;
CPyL242: ;
    CPy_DecRef(cpy_r_r528);
    goto CPyL187;
}
