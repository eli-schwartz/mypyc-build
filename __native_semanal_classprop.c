#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *semanal_classprop___calculate_class_abstract_status_env_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_classprop___calculate_class_abstract_status_env(void);

static PyObject *
semanal_classprop___calculate_class_abstract_status_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_classprop___calculate_class_abstract_status_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_classprop___calculate_class_abstract_status_env_setup(type);
}

static int
semanal_classprop___calculate_class_abstract_status_env_traverse(mypy___semanal_classprop___calculate_class_abstract_status_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_typ);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_report);
    Py_VISIT(self->_concrete);
    Py_VISIT(self->_abstract);
    Py_VISIT(self->_abstract_in_this_class);
    Py_VISIT(self->_base);
    Py_VISIT(self->_name);
    Py_VISIT(self->_symnode);
    Py_VISIT(self->_node);
    Py_VISIT(self->_func);
    return 0;
}

static int
semanal_classprop___calculate_class_abstract_status_env_clear(mypy___semanal_classprop___calculate_class_abstract_status_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_typ);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_report);
    Py_CLEAR(self->_concrete);
    Py_CLEAR(self->_abstract);
    Py_CLEAR(self->_abstract_in_this_class);
    Py_CLEAR(self->_base);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_symnode);
    Py_CLEAR(self->_node);
    Py_CLEAR(self->_func);
    return 0;
}

static void
semanal_classprop___calculate_class_abstract_status_env_dealloc(mypy___semanal_classprop___calculate_class_abstract_status_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_classprop___calculate_class_abstract_status_env_dealloc)
    semanal_classprop___calculate_class_abstract_status_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_classprop___calculate_class_abstract_status_env_vtable[1];
static bool
CPyDef_semanal_classprop___calculate_class_abstract_status_env_trait_vtable_setup(void)
{
    CPyVTableItem semanal_classprop___calculate_class_abstract_status_env_vtable_scratch[] = {
        NULL
    };
    memcpy(semanal_classprop___calculate_class_abstract_status_env_vtable, semanal_classprop___calculate_class_abstract_status_env_vtable_scratch, sizeof(semanal_classprop___calculate_class_abstract_status_env_vtable));
    return 1;
}

static PyMethodDef semanal_classprop___calculate_class_abstract_status_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_classprop___calculate_class_abstract_status_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "calculate_class_abstract_status_env",
    .tp_new = semanal_classprop___calculate_class_abstract_status_env_new,
    .tp_dealloc = (destructor)semanal_classprop___calculate_class_abstract_status_env_dealloc,
    .tp_traverse = (traverseproc)semanal_classprop___calculate_class_abstract_status_env_traverse,
    .tp_clear = (inquiry)semanal_classprop___calculate_class_abstract_status_env_clear,
    .tp_methods = semanal_classprop___calculate_class_abstract_status_env_methods,
    .tp_basicsize = sizeof(mypy___semanal_classprop___calculate_class_abstract_status_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_classprop___calculate_class_abstract_status_env_template = &CPyType_semanal_classprop___calculate_class_abstract_status_env_template_;

static PyObject *
semanal_classprop___calculate_class_abstract_status_env_setup(PyTypeObject *type)
{
    mypy___semanal_classprop___calculate_class_abstract_status_envObject *self;
    self = (mypy___semanal_classprop___calculate_class_abstract_status_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_classprop___calculate_class_abstract_status_env_vtable;
    self->_is_stub_file = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_classprop___calculate_class_abstract_status_env(void)
{
    PyObject *self = semanal_classprop___calculate_class_abstract_status_env_setup(CPyType_semanal_classprop___calculate_class_abstract_status_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_classprop___report_calculate_class_abstract_status_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_classprop___report_calculate_class_abstract_status_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_classprop___report_calculate_class_abstract_status_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj(void);

static PyObject *
semanal_classprop___report_calculate_class_abstract_status_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_classprop___report_calculate_class_abstract_status_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_classprop___report_calculate_class_abstract_status_obj_setup(type);
}

static int
semanal_classprop___report_calculate_class_abstract_status_obj_traverse(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject))));
    return 0;
}

static int
semanal_classprop___report_calculate_class_abstract_status_obj_clear(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject))));
    return 0;
}

static void
semanal_classprop___report_calculate_class_abstract_status_obj_dealloc(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_classprop___report_calculate_class_abstract_status_obj_dealloc)
    semanal_classprop___report_calculate_class_abstract_status_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_classprop___report_calculate_class_abstract_status_obj_vtable[2];
static bool
CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_classprop___report_calculate_class_abstract_status_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____get__,
    };
    memcpy(semanal_classprop___report_calculate_class_abstract_status_obj_vtable, semanal_classprop___report_calculate_class_abstract_status_obj_vtable_scratch, sizeof(semanal_classprop___report_calculate_class_abstract_status_obj_vtable));
    return 1;
}

static PyMethodDef semanal_classprop___report_calculate_class_abstract_status_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_classprop___report_calculate_class_abstract_status_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_classprop___report_calculate_class_abstract_status_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_classprop___report_calculate_class_abstract_status_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "report_calculate_class_abstract_status_obj",
    .tp_new = semanal_classprop___report_calculate_class_abstract_status_obj_new,
    .tp_dealloc = (destructor)semanal_classprop___report_calculate_class_abstract_status_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_classprop___report_calculate_class_abstract_status_obj_traverse,
    .tp_clear = (inquiry)semanal_classprop___report_calculate_class_abstract_status_obj_clear,
    .tp_methods = semanal_classprop___report_calculate_class_abstract_status_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_classprop___report_calculate_class_abstract_status_obj,
    .tp_members = semanal_classprop___report_calculate_class_abstract_status_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_classprop___report_calculate_class_abstract_status_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_classprop___report_calculate_class_abstract_status_obj_template = &CPyType_semanal_classprop___report_calculate_class_abstract_status_obj_template_;

static PyObject *
semanal_classprop___report_calculate_class_abstract_status_obj_setup(PyTypeObject *type)
{
    mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *self;
    self = (mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_classprop___report_calculate_class_abstract_status_obj_vtable;
    self->vectorcall = CPyPy_semanal_classprop___report_calculate_class_abstract_status_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj(void)
{
    PyObject *self = semanal_classprop___report_calculate_class_abstract_status_obj_setup(CPyType_semanal_classprop___report_calculate_class_abstract_status_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *semanal_classprop___check_protocol_status_env_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_classprop___check_protocol_status_env(void);

static PyObject *
semanal_classprop___check_protocol_status_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_classprop___check_protocol_status_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_classprop___check_protocol_status_env_setup(type);
}

static int
semanal_classprop___check_protocol_status_env_traverse(mypy___semanal_classprop___check_protocol_status_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_info);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_report);
    Py_VISIT(self->_type);
    return 0;
}

static int
semanal_classprop___check_protocol_status_env_clear(mypy___semanal_classprop___check_protocol_status_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_report);
    Py_CLEAR(self->_type);
    return 0;
}

static void
semanal_classprop___check_protocol_status_env_dealloc(mypy___semanal_classprop___check_protocol_status_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_classprop___check_protocol_status_env_dealloc)
    semanal_classprop___check_protocol_status_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_classprop___check_protocol_status_env_vtable[1];
static bool
CPyDef_semanal_classprop___check_protocol_status_env_trait_vtable_setup(void)
{
    CPyVTableItem semanal_classprop___check_protocol_status_env_vtable_scratch[] = {
        NULL
    };
    memcpy(semanal_classprop___check_protocol_status_env_vtable, semanal_classprop___check_protocol_status_env_vtable_scratch, sizeof(semanal_classprop___check_protocol_status_env_vtable));
    return 1;
}

static PyMethodDef semanal_classprop___check_protocol_status_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_classprop___check_protocol_status_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_protocol_status_env",
    .tp_new = semanal_classprop___check_protocol_status_env_new,
    .tp_dealloc = (destructor)semanal_classprop___check_protocol_status_env_dealloc,
    .tp_traverse = (traverseproc)semanal_classprop___check_protocol_status_env_traverse,
    .tp_clear = (inquiry)semanal_classprop___check_protocol_status_env_clear,
    .tp_methods = semanal_classprop___check_protocol_status_env_methods,
    .tp_basicsize = sizeof(mypy___semanal_classprop___check_protocol_status_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_classprop___check_protocol_status_env_template = &CPyType_semanal_classprop___check_protocol_status_env_template_;

static PyObject *
semanal_classprop___check_protocol_status_env_setup(PyTypeObject *type)
{
    mypy___semanal_classprop___check_protocol_status_envObject *self;
    self = (mypy___semanal_classprop___check_protocol_status_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_classprop___check_protocol_status_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_classprop___check_protocol_status_env(void)
{
    PyObject *self = semanal_classprop___check_protocol_status_env_setup(CPyType_semanal_classprop___check_protocol_status_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_classprop___report_check_protocol_status_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_classprop___report_check_protocol_status_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_classprop___report_check_protocol_status_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_classprop___report_check_protocol_status_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_classprop___report_check_protocol_status_obj(void);

static PyObject *
semanal_classprop___report_check_protocol_status_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_classprop___report_check_protocol_status_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_classprop___report_check_protocol_status_obj_setup(type);
}

static int
semanal_classprop___report_check_protocol_status_obj_traverse(mypy___semanal_classprop___report_check_protocol_status_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject))));
    return 0;
}

static int
semanal_classprop___report_check_protocol_status_obj_clear(mypy___semanal_classprop___report_check_protocol_status_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject))));
    return 0;
}

static void
semanal_classprop___report_check_protocol_status_obj_dealloc(mypy___semanal_classprop___report_check_protocol_status_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_classprop___report_check_protocol_status_obj_dealloc)
    semanal_classprop___report_check_protocol_status_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_classprop___report_check_protocol_status_obj_vtable[2];
static bool
CPyDef_semanal_classprop___report_check_protocol_status_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_classprop___report_check_protocol_status_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_classprop___report_check_protocol_status_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_classprop___report_check_protocol_status_obj_____get__,
    };
    memcpy(semanal_classprop___report_check_protocol_status_obj_vtable, semanal_classprop___report_check_protocol_status_obj_vtable_scratch, sizeof(semanal_classprop___report_check_protocol_status_obj_vtable));
    return 1;
}

static PyMethodDef semanal_classprop___report_check_protocol_status_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_classprop___report_check_protocol_status_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_classprop___report_check_protocol_status_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_classprop___report_check_protocol_status_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "report_check_protocol_status_obj",
    .tp_new = semanal_classprop___report_check_protocol_status_obj_new,
    .tp_dealloc = (destructor)semanal_classprop___report_check_protocol_status_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_classprop___report_check_protocol_status_obj_traverse,
    .tp_clear = (inquiry)semanal_classprop___report_check_protocol_status_obj_clear,
    .tp_methods = semanal_classprop___report_check_protocol_status_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_classprop___report_check_protocol_status_obj,
    .tp_members = semanal_classprop___report_check_protocol_status_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_classprop___report_check_protocol_status_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_classprop___report_check_protocol_status_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_classprop___report_check_protocol_status_obj_template = &CPyType_semanal_classprop___report_check_protocol_status_obj_template_;

static PyObject *
semanal_classprop___report_check_protocol_status_obj_setup(PyTypeObject *type)
{
    mypy___semanal_classprop___report_check_protocol_status_objObject *self;
    self = (mypy___semanal_classprop___report_check_protocol_status_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_classprop___report_check_protocol_status_obj_vtable;
    self->vectorcall = CPyPy_semanal_classprop___report_check_protocol_status_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_classprop___report_check_protocol_status_obj(void)
{
    PyObject *self = semanal_classprop___report_check_protocol_status_obj_setup(CPyType_semanal_classprop___report_check_protocol_status_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef semanal_classpropmodule_methods[] = {
    {"calculate_class_abstract_status", (PyCFunction)CPyPy_semanal_classprop___calculate_class_abstract_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_protocol_status", (PyCFunction)CPyPy_semanal_classprop___check_protocol_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_class_vars", (PyCFunction)CPyPy_semanal_classprop___calculate_class_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_type_promotion", (PyCFunction)CPyPy_semanal_classprop___add_type_promotion, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_classpropmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_classprop",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_classpropmodule_methods
};

PyObject *CPyInit_mypy___semanal_classprop(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_classprop_internal) {
        Py_INCREF(CPyModule_mypy___semanal_classprop_internal);
        return CPyModule_mypy___semanal_classprop_internal;
    }
    CPyModule_mypy___semanal_classprop_internal = PyModule_Create(&semanal_classpropmodule);
    if (unlikely(CPyModule_mypy___semanal_classprop_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_classprop_internal, "__name__");
    CPyStatic_semanal_classprop___globals = PyModule_GetDict(CPyModule_mypy___semanal_classprop_internal);
    if (unlikely(CPyStatic_semanal_classprop___globals == NULL))
        goto fail;
    CPyType_semanal_classprop___calculate_class_abstract_status_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_classprop___calculate_class_abstract_status_env_template, NULL, modname);
    if (unlikely(!CPyType_semanal_classprop___calculate_class_abstract_status_env))
        goto fail;
    CPyType_semanal_classprop___report_calculate_class_abstract_status_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_classprop___report_calculate_class_abstract_status_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_classprop___report_calculate_class_abstract_status_obj))
        goto fail;
    CPyType_semanal_classprop___check_protocol_status_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_classprop___check_protocol_status_env_template, NULL, modname);
    if (unlikely(!CPyType_semanal_classprop___check_protocol_status_env))
        goto fail;
    CPyType_semanal_classprop___report_check_protocol_status_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_classprop___report_check_protocol_status_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_classprop___report_check_protocol_status_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_classprop_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_classprop_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_classprop_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_semanal_classprop___TYPE_PROMOTIONS);
    CPyStatic_semanal_classprop___TYPE_PROMOTIONS = NULL;
    Py_CLEAR(CPyType_semanal_classprop___calculate_class_abstract_status_env);
    Py_CLEAR(CPyType_semanal_classprop___report_calculate_class_abstract_status_obj);
    Py_CLEAR(CPyType_semanal_classprop___check_protocol_status_env);
    Py_CLEAR(CPyType_semanal_classprop___report_check_protocol_status_obj);
    return NULL;
}

PyObject *CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_classprop___report_calculate_class_abstract_status_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "__get__", -1, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_message, PyObject *cpy_r_severity) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_report;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "report_calculate_class_abstract_status_obj", "__mypyc_env__", 104, CPyStatic_semanal_classprop___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "calculate_class_abstract_status_env", "report", -1, CPyStatic_semanal_classprop___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_report = cpy_r_r1;
    CPy_DECREF(cpy_r_report);
    cpy_r_r2 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_errors;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "calculate_class_abstract_status_env", "errors", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "calculate_class_abstract_status_env", "typ", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_line;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL11;
    }
CPyL5: ;
    cpy_r_r5 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typ' of 'calculate_class_abstract_status_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
CPyL6: ;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_column;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'column' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = NULL;
    cpy_r_r9 = 2;
    cpy_r_r10 = NULL;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = NULL;
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_mypy___errors___Errors___report(cpy_r_r2, cpy_r_r4, cpy_r_r7, cpy_r_message, cpy_r_r8, cpy_r_r9, cpy_r_severity, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 105, CPyStatic_semanal_classprop___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_semanal_classprop___report_calculate_class_abstract_status_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"message", "severity", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_message;
    PyObject *obj_severity;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_message, &obj_severity)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_severity;
    if (likely(PyUnicode_Check(obj_severity)))
        arg_severity = obj_severity;
    else {
        CPy_TypeError("str", obj_severity); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj_____call__(arg___mypyc_self__, arg_message, arg_severity);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "report", 104, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___calculate_class_abstract_status(PyObject *cpy_r_typ, char cpy_r_is_stub_file, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_concrete;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_abstract;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_abstract_in_this_class;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T4CIOO cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_name;
    PyObject *cpy_r_symnode;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    int64_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    int64_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    tuple_T2OI cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyPtr cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    tuple_T2OI cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    CPyPtr cpy_r_r139;
    int64_t cpy_r_r140;
    CPyTagged cpy_r_r141;
    char cpy_r_r142;
    CPyPtr cpy_r_r143;
    int64_t cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject **cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyPtr cpy_r_r158;
    int64_t cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyTagged cpy_r_r161;
    CPyPtr cpy_r_r162;
    int64_t cpy_r_r163;
    CPyTagged cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    tuple_T2OI cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_attr;
    CPyTagged cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r__;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    CPyTagged cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_attrs;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject **cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject **cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    CPyPtr cpy_r_r195;
    int64_t cpy_r_r196;
    CPyTagged cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject **cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    CPyPtr cpy_r_r207;
    int64_t cpy_r_r208;
    PyObject *cpy_r_r209;
    CPyTagged cpy_r_r210;
    CPyPtr cpy_r_r211;
    int64_t cpy_r_r212;
    CPyTagged cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    tuple_T2OI cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_attr_2;
    CPyTagged cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r___2;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    char cpy_r_r223;
    CPyTagged cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    CPyTagged cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyTagged cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    CPyTagged cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    char cpy_r_r248;
    cpy_r_r0 = CPyDef_semanal_classprop___calculate_class_abstract_status_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 42, CPyStatic_semanal_classprop___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_typ);
    if (((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ);
    }
    ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ = cpy_r_typ;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 42, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_errors);
    if (((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_errors != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_errors);
    }
    ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_errors = cpy_r_errors;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 42, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    cpy_r_r3 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 49, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_typeddict_type;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typeddict_type' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 49, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
CPyL5: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r6) {
        goto CPyL148;
    } else
        goto CPyL7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 51, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    cpy_r_concrete = cpy_r_r7;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 53, CPyStatic_semanal_classprop___globals);
        goto CPyL149;
    }
    cpy_r_abstract = cpy_r_r8;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 54, CPyStatic_semanal_classprop___globals);
        goto CPyL150;
    }
    cpy_r_abstract_in_this_class = cpy_r_r9;
    cpy_r_r10 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 55, CPyStatic_semanal_classprop___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_is_newtype;
    if (unlikely(cpy_r_r11 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_newtype' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 55, CPyStatic_semanal_classprop___globals);
        goto CPyL151;
    }
CPyL12: ;
    if (cpy_r_r11) {
        goto CPyL152;
    } else
        goto CPyL17;
CPyL13: ;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 59, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    cpy_r_r13 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r13 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typ' of 'calculate_class_abstract_status_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r13);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 59, CPyStatic_semanal_classprop___globals);
        goto CPyL153;
    }
CPyL15: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r13)->_abstract_attributes != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r13)->_abstract_attributes);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r13)->_abstract_attributes = cpy_r_r12;
    cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 59, CPyStatic_semanal_classprop___globals);
        goto CPyL146;
    }
    return 1;
CPyL17: ;
    cpy_r_r15 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 61, CPyStatic_semanal_classprop___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r15);
CPyL18: ;
    cpy_r_r16 = ((mypy___nodes___TypeInfoObject *)cpy_r_r15)->_mro;
    if (unlikely(cpy_r_r16 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'mro' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 61, CPyStatic_semanal_classprop___globals);
        goto CPyL151;
    }
CPyL19: ;
    cpy_r_r17 = 0;
CPyL20: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL154;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely((Py_TYPE(cpy_r_r22) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r22) == CPyType_nodes___TypeInfo)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 61, CPyStatic_semanal_classprop___globals, "mypy.nodes.TypeInfo", cpy_r_r22);
        goto CPyL155;
    }
    cpy_r_base = cpy_r_r23;
    cpy_r_r24 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "TypeInfo", "names", 62, CPyStatic_semanal_classprop___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r24);
CPyL23: ;
    cpy_r_r25 = 0;
    cpy_r_r26 = PyDict_Size(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = CPyDict_GetItemsIter(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 62, CPyStatic_semanal_classprop___globals);
        goto CPyL157;
    }
CPyL24: ;
    cpy_r_r29 = CPyDict_NextItem(cpy_r_r28, cpy_r_r25);
    cpy_r_r30 = cpy_r_r29.f1;
    cpy_r_r25 = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f0;
    if (!cpy_r_r31) goto CPyL158;
    cpy_r_r32 = cpy_r_r29.f2;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = cpy_r_r29.f3;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r29.f2);
    CPy_DECREF(cpy_r_r29.f3);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r34 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 62, CPyStatic_semanal_classprop___globals, "str", cpy_r_r32);
        goto CPyL159;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___SymbolTableNode))
        cpy_r_r35 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 62, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_r33);
        goto CPyL160;
    }
    cpy_r_name = cpy_r_r34;
    cpy_r_symnode = cpy_r_r35;
    cpy_r_r36 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_symnode);
    cpy_r_node = cpy_r_r36;
    cpy_r_r37 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r41 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 69, CPyStatic_semanal_classprop___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL161;
    }
    cpy_r_r42 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r41)->_items;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r45 != 0;
    if (!cpy_r_r46) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r47 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 70, CPyStatic_semanal_classprop___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL161;
    }
    cpy_r_r48 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r47)->_items;
    cpy_r_r49 = CPyList_GetItemShort(cpy_r_r48, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 70, CPyStatic_semanal_classprop___globals);
        goto CPyL161;
    }
    if (Py_TYPE(cpy_r_r49) == CPyType_nodes___FuncDef)
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL5763;
    if (Py_TYPE(cpy_r_r49) == CPyType_nodes___Decorator)
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL5763;
    CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 70, CPyStatic_semanal_classprop___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r49);
    goto CPyL161;
__LL5763: ;
    cpy_r_func = cpy_r_r50;
    goto CPyL36;
CPyL34: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    cpy_r_func = cpy_r_r51;
    goto CPyL36;
CPyL35: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_func = cpy_r_node;
CPyL36: ;
    cpy_r_r52 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___Decorator))
        cpy_r_r56 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 76, CPyStatic_semanal_classprop___globals, "mypy.nodes.Decorator", cpy_r_func);
        goto CPyL162;
    }
    cpy_r_r57 = ((mypy___nodes___DecoratorObject *)cpy_r_r56)->_func;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_func);
    cpy_r_func = cpy_r_r57;
CPyL39: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    if (cpy_r_r61) {
        goto CPyL163;
    } else
        goto CPyL164;
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef))
        cpy_r_r62 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 79, CPyStatic_semanal_classprop___globals, "mypy.nodes.FuncDef", cpy_r_func);
        goto CPyL165;
    }
    cpy_r_r63 = ((mypy___nodes___FuncDefObject *)cpy_r_r62)->_abstract_status;
    if (unlikely(cpy_r_r63 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "FuncDef", "abstract_status", 79, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
CPyL42: ;
    cpy_r_r64 = cpy_r_r63 & 1;
    cpy_r_r65 = cpy_r_r64 == 0;
    if (!cpy_r_r65) goto CPyL44;
    cpy_r_r66 = cpy_r_r63 == 2;
    cpy_r_r67 = cpy_r_r66;
    goto CPyL45;
CPyL44: ;
    cpy_r_r68 = CPyTagged_IsEq_(cpy_r_r63, 2);
    cpy_r_r67 = cpy_r_r68;
CPyL45: ;
    if (!cpy_r_r67) goto CPyL47;
    cpy_r_r69 = cpy_r_r67;
    goto CPyL53;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef))
        cpy_r_r70 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 79, CPyStatic_semanal_classprop___globals, "mypy.nodes.FuncDef", cpy_r_func);
        goto CPyL165;
    }
    cpy_r_r71 = ((mypy___nodes___FuncDefObject *)cpy_r_r70)->_abstract_status;
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "FuncDef", "abstract_status", 79, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
CPyL49: ;
    cpy_r_r72 = cpy_r_r71 & 1;
    cpy_r_r73 = cpy_r_r72 == 0;
    if (!cpy_r_r73) goto CPyL51;
    cpy_r_r74 = cpy_r_r71 == 4;
    cpy_r_r75 = cpy_r_r74;
    goto CPyL52;
CPyL51: ;
    cpy_r_r76 = CPyTagged_IsEq_(cpy_r_r71, 4);
    cpy_r_r75 = cpy_r_r76;
CPyL52: ;
    cpy_r_r69 = cpy_r_r75;
CPyL53: ;
    if (!cpy_r_r69) goto CPyL166;
    cpy_r_r77 = PySet_Contains(cpy_r_concrete, cpy_r_name);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 80, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
    cpy_r_r79 = cpy_r_r77;
    cpy_r_r80 = cpy_r_r79 ^ 1;
    if (!cpy_r_r80) goto CPyL166;
    cpy_r_r81 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 82, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_r81);
CPyL57: ;
    ((mypy___nodes___TypeInfoObject *)cpy_r_r81)->_is_abstract = 1;
    cpy_r_r82 = 1;
    CPy_DECREF(cpy_r_r81);
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 82, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef))
        cpy_r_r83 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 83, CPyStatic_semanal_classprop___globals, "mypy.nodes.FuncDef", cpy_r_func);
        goto CPyL165;
    }
    cpy_r_r84 = ((mypy___nodes___FuncDefObject *)cpy_r_r83)->_abstract_status;
    if (unlikely(cpy_r_r84 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "FuncDef", "abstract_status", 83, CPyStatic_semanal_classprop___globals);
        goto CPyL165;
    }
    CPyTagged_INCREF(cpy_r_r84);
CPyL60: ;
    CPy_DECREF(cpy_r_func);
    cpy_r_r85.f0 = cpy_r_name;
    cpy_r_r85.f1 = cpy_r_r84;
    CPy_INCREF(cpy_r_r85.f0);
    CPyTagged_INCREF(cpy_r_r85.f1);
    CPyTagged_DECREF(cpy_r_r84);
    cpy_r_r86 = PyTuple_New(2);
    if (unlikely(cpy_r_r86 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5764 = cpy_r_r85.f0;
    PyTuple_SET_ITEM(cpy_r_r86, 0, __tmp5764);
    PyObject *__tmp5765 = CPyTagged_StealAsObject(cpy_r_r85.f1);
    PyTuple_SET_ITEM(cpy_r_r86, 1, __tmp5765);
    cpy_r_r87 = PyList_Append(cpy_r_abstract, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 83, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    cpy_r_r89 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 84, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r89);
CPyL62: ;
    cpy_r_r90 = cpy_r_base == cpy_r_r89;
    CPy_DECREF(cpy_r_r89);
    if (!cpy_r_r90) goto CPyL75;
    cpy_r_r91 = PyList_Append(cpy_r_abstract_in_this_class, cpy_r_name);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 85, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    } else
        goto CPyL75;
CPyL64: ;
    cpy_r_r93 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r94 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r95 = *(PyObject * *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 == cpy_r_r93;
    if (!cpy_r_r96) goto CPyL168;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r97 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 87, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL161;
    }
    cpy_r_r98 = ((mypy___nodes___VarObject *)cpy_r_r97)->_is_abstract_var;
    CPy_DECREF(cpy_r_node);
    if (!cpy_r_r98) goto CPyL75;
CPyL67: ;
    cpy_r_r99 = PySet_Contains(cpy_r_concrete, cpy_r_name);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 87, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    cpy_r_r101 = cpy_r_r99;
    cpy_r_r102 = cpy_r_r101 ^ 1;
    if (!cpy_r_r102) goto CPyL75;
    cpy_r_r103 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 88, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r103);
CPyL70: ;
    ((mypy___nodes___TypeInfoObject *)cpy_r_r103)->_is_abstract = 1;
    cpy_r_r104 = 1;
    CPy_DECREF(cpy_r_r103);
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 88, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    cpy_r_r105.f0 = cpy_r_name;
    cpy_r_r105.f1 = 2;
    CPy_INCREF(cpy_r_r105.f0);
    CPyTagged_INCREF(cpy_r_r105.f1);
    cpy_r_r106 = PyTuple_New(2);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5766 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp5766);
    PyObject *__tmp5767 = CPyTagged_StealAsObject(cpy_r_r105.f1);
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp5767);
    cpy_r_r107 = PyList_Append(cpy_r_abstract, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 89, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    cpy_r_r109 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 90, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r109);
CPyL73: ;
    cpy_r_r110 = cpy_r_base == cpy_r_r109;
    CPy_DECREF(cpy_r_r109);
    if (!cpy_r_r110) goto CPyL75;
    cpy_r_r111 = PyList_Append(cpy_r_abstract_in_this_class, cpy_r_name);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 91, CPyStatic_semanal_classprop___globals);
        goto CPyL167;
    }
CPyL75: ;
    cpy_r_r113 = PySet_Add(cpy_r_concrete, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 92, CPyStatic_semanal_classprop___globals);
        goto CPyL169;
    }
    cpy_r_r115 = CPyDict_CheckSize(cpy_r_r24, cpy_r_r27);
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 62, CPyStatic_semanal_classprop___globals);
        goto CPyL169;
    } else
        goto CPyL24;
CPyL77: ;
    cpy_r_r116 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 62, CPyStatic_semanal_classprop___globals);
        goto CPyL155;
    }
    cpy_r_r117 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r117;
    goto CPyL20;
CPyL79: ;
    cpy_r_r118 = CPyModule_builtins;
    cpy_r_r119 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 96, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    PyObject *cpy_r_r121[1] = {cpy_r_abstract};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r120, cpy_r_r122, 1, 0);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 96, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 96, CPyStatic_semanal_classprop___globals, "list", cpy_r_r123);
        goto CPyL170;
    }
    cpy_r_r125 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 96, CPyStatic_semanal_classprop___globals);
        goto CPyL171;
    }
    CPy_INCREF(cpy_r_r125);
CPyL83: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r125)->_abstract_attributes != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r125)->_abstract_attributes);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r125)->_abstract_attributes = cpy_r_r124;
    cpy_r_r126 = 1;
    CPy_DECREF(cpy_r_r125);
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 96, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    if (!cpy_r_is_stub_file) goto CPyL172;
    cpy_r_r127 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 98, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r127);
CPyL86: ;
    cpy_r_r128 = ((mypy___nodes___TypeInfoObject *)cpy_r_r127)->_declared_metaclass;
    if (unlikely(cpy_r_r128 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'declared_metaclass' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r128);
    }
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 98, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
CPyL87: ;
    cpy_r_r129 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r130 = cpy_r_r128 != cpy_r_r129;
    CPy_DECREF(cpy_r_r128);
    if (!cpy_r_r130) goto CPyL94;
    cpy_r_r131 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 98, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r131);
CPyL89: ;
    cpy_r_r132 = ((mypy___nodes___TypeInfoObject *)cpy_r_r131)->_declared_metaclass;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "TypeInfo", "declared_metaclass", 98, CPyStatic_semanal_classprop___globals);
        goto CPyL173;
    }
CPyL90: ;
    if (likely(cpy_r_r132 != Py_None))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 98, CPyStatic_semanal_classprop___globals, "mypy.types.Instance", cpy_r_r132);
        goto CPyL173;
    }
    cpy_r_r134 = ((mypy___types___InstanceObject *)cpy_r_r133)->_type;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r135 = CPyStatics[732]; /* 'abc.ABCMeta' */
    cpy_r_r136 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 98, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    if (cpy_r_r136) {
        goto CPyL174;
    } else
        goto CPyL94;
CPyL93: ;
    return 1;
CPyL94: ;
    cpy_r_r137 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 100, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r137);
CPyL95: ;
    cpy_r_r138 = ((mypy___nodes___TypeInfoObject *)cpy_r_r137)->_is_protocol;
    if (unlikely(cpy_r_r138 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_protocol' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 100, CPyStatic_semanal_classprop___globals);
        goto CPyL170;
    }
CPyL96: ;
    if (cpy_r_r138) {
        goto CPyL175;
    } else
        goto CPyL98;
CPyL97: ;
    return 1;
CPyL98: ;
    cpy_r_r139 = (CPyPtr)&((PyVarObject *)cpy_r_abstract)->ob_size;
    cpy_r_r140 = *(int64_t *)cpy_r_r139;
    cpy_r_r141 = cpy_r_r140 << 1;
    cpy_r_r142 = cpy_r_r141 != 0;
    if (!cpy_r_r142) goto CPyL172;
    cpy_r_r143 = (CPyPtr)&((PyVarObject *)cpy_r_abstract_in_this_class)->ob_size;
    cpy_r_r144 = *(int64_t *)cpy_r_r143;
    CPy_DECREF(cpy_r_abstract_in_this_class);
    cpy_r_r145 = cpy_r_r144 << 1;
    cpy_r_r146 = cpy_r_r145 != 0;
    if (cpy_r_r146) goto CPyL121;
    cpy_r_r147 = CPyDef_semanal_classprop___report_calculate_class_abstract_status_obj();
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 104, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *)cpy_r_r147)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *)cpy_r_r147)->___mypyc_env__);
    }
    ((mypy___semanal_classprop___report_calculate_class_abstract_status_objObject *)cpy_r_r147)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r148 = 1;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 104, CPyStatic_semanal_classprop___globals);
        goto CPyL177;
    }
    if (((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report);
    }
    ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report = cpy_r_r147;
    cpy_r_r149 = 1;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 104, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    cpy_r_r150 = CPyStatics[71]; /* ', ' */
    cpy_r_r151 = CPyModule_builtins;
    cpy_r_r152 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    PyObject *cpy_r_r154[1] = {cpy_r_abstract};
    cpy_r_r155 = (PyObject **)&cpy_r_r154;
    cpy_r_r156 = _PyObject_Vectorcall(cpy_r_r153, cpy_r_r155, 1, 0);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    if (likely(PyList_Check(cpy_r_r156)))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals, "list", cpy_r_r156);
        goto CPyL176;
    }
    cpy_r_r158 = (CPyPtr)&((PyVarObject *)cpy_r_r157)->ob_size;
    cpy_r_r159 = *(int64_t *)cpy_r_r158;
    cpy_r_r160 = PyList_New(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL178;
    }
    cpy_r_r161 = 0;
CPyL108: ;
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_r157)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = (Py_ssize_t)cpy_r_r161 < (Py_ssize_t)cpy_r_r164;
    if (!cpy_r_r165) goto CPyL179;
    cpy_r_r166 = CPyList_GetItemUnsafe(cpy_r_r157, cpy_r_r161);
    PyObject *__tmp5768;
    if (unlikely(!(PyTuple_Check(cpy_r_r166) && PyTuple_GET_SIZE(cpy_r_r166) == 2))) {
        __tmp5768 = NULL;
        goto __LL5769;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r166, 0))))
        __tmp5768 = PyTuple_GET_ITEM(cpy_r_r166, 0);
    else {
        __tmp5768 = NULL;
    }
    if (__tmp5768 == NULL) goto __LL5769;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r166, 1))))
        __tmp5768 = PyTuple_GET_ITEM(cpy_r_r166, 1);
    else {
        __tmp5768 = NULL;
    }
    if (__tmp5768 == NULL) goto __LL5769;
    __tmp5768 = cpy_r_r166;
__LL5769: ;
    if (unlikely(__tmp5768 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r166); cpy_r_r167 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp5770 = PyTuple_GET_ITEM(cpy_r_r166, 0);
        CPy_INCREF(__tmp5770);
        PyObject *__tmp5771;
        if (likely(PyUnicode_Check(__tmp5770)))
            __tmp5771 = __tmp5770;
        else {
            CPy_TypeError("str", __tmp5770); 
            __tmp5771 = NULL;
        }
        cpy_r_r167.f0 = __tmp5771;
        PyObject *__tmp5772 = PyTuple_GET_ITEM(cpy_r_r166, 1);
        CPyTagged __tmp5773;
        if (likely(PyLong_Check(__tmp5772)))
            __tmp5773 = CPyTagged_FromObject(__tmp5772);
        else {
            CPy_TypeError("int", __tmp5772); __tmp5773 = CPY_INT_TAG;
        }
        cpy_r_r167.f1 = __tmp5773;
    }
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL180;
    }
    cpy_r_r168 = cpy_r_r167.f0;
    CPy_INCREF(cpy_r_r168);
    cpy_r_attr = cpy_r_r168;
    cpy_r_r169 = cpy_r_r167.f1;
    CPyTagged_INCREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r167.f0);
    CPyTagged_DECREF(cpy_r_r167.f1);
    cpy_r_r170 = CPyTagged_StealAsObject(cpy_r_r169);
    cpy_r__ = cpy_r_r170;
    CPy_DECREF(cpy_r__);
    cpy_r_r171 = CPyStatics[178]; /* '"' */
    cpy_r_r172 = CPyStatics[178]; /* '"' */
    cpy_r_r173 = CPyStr_Build(3, cpy_r_r171, cpy_r_attr, cpy_r_r172);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL180;
    }
    cpy_r_r174 = CPyList_SetItemUnsafe(cpy_r_r160, cpy_r_r161, cpy_r_r173);
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL180;
    }
    cpy_r_r175 = cpy_r_r161 + 2;
    cpy_r_r161 = cpy_r_r175;
    goto CPyL108;
CPyL113: ;
    cpy_r_r176 = PyUnicode_Join(cpy_r_r150, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 107, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    cpy_r_attrs = cpy_r_r176;
    cpy_r_r177 = CPyStatics[5153]; /* 'Class ' */
    cpy_r_r178 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 108, CPyStatic_semanal_classprop___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r178);
CPyL115: ;
    cpy_r_r179 = CPY_GET_ATTR(cpy_r_r178, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 108, CPyStatic_semanal_classprop___globals);
        goto CPyL181;
    }
CPyL116: ;
    cpy_r_r180 = CPyStatics[5154]; /* ' has abstract attributes ' */
    cpy_r_r181 = CPyStr_Build(4, cpy_r_r177, cpy_r_r179, cpy_r_r180, cpy_r_attrs);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_attrs);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 108, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    cpy_r_r182 = CPyStatics[401]; /* 'error' */
    cpy_r_r183 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "report", 108, CPyStatic_semanal_classprop___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r183);
CPyL118: ;
    PyObject *cpy_r_r184[2] = {cpy_r_r181, cpy_r_r182};
    cpy_r_r185 = (PyObject **)&cpy_r_r184;
    cpy_r_r186 = _PyObject_Vectorcall(cpy_r_r183, cpy_r_r185, 2, 0);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 108, CPyStatic_semanal_classprop___globals);
        goto CPyL182;
    } else
        goto CPyL183;
CPyL119: ;
    CPy_DECREF(cpy_r_r181);
    cpy_r_r187 = CPyStatics[5155]; /* ("If it is meant to be abstract, add 'abc.ABCMeta' as "
                                      'an explicit metaclass') */
    cpy_r_r188 = CPyStatics[413]; /* 'note' */
    cpy_r_r189 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_report;
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "report", 109, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r189);
CPyL120: ;
    PyObject *cpy_r_r190[2] = {cpy_r_r187, cpy_r_r188};
    cpy_r_r191 = (PyObject **)&cpy_r_r190;
    cpy_r_r192 = _PyObject_Vectorcall(cpy_r_r189, cpy_r_r191, 2, 0);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 109, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    } else
        goto CPyL184;
CPyL121: ;
    cpy_r_r193 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 112, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r193);
CPyL122: ;
    cpy_r_r194 = ((mypy___nodes___TypeInfoObject *)cpy_r_r193)->_is_final;
    if (unlikely(cpy_r_r194 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_final' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 112, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
CPyL123: ;
    if (!cpy_r_r194) goto CPyL185;
CPyL124: ;
    cpy_r_r195 = (CPyPtr)&((PyVarObject *)cpy_r_abstract)->ob_size;
    cpy_r_r196 = *(int64_t *)cpy_r_r195;
    cpy_r_r197 = cpy_r_r196 << 1;
    cpy_r_r198 = cpy_r_r197 != 0;
    if (!cpy_r_r198) goto CPyL185;
    cpy_r_r199 = CPyStatics[71]; /* ', ' */
    cpy_r_r200 = CPyModule_builtins;
    cpy_r_r201 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r202 = CPyObject_GetAttr(cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    PyObject *cpy_r_r203[1] = {cpy_r_abstract};
    cpy_r_r204 = (PyObject **)&cpy_r_r203;
    cpy_r_r205 = _PyObject_Vectorcall(cpy_r_r202, cpy_r_r204, 1, 0);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL176;
    }
    CPy_DECREF(cpy_r_abstract);
    if (likely(PyList_Check(cpy_r_r205)))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals, "list", cpy_r_r205);
        goto CPyL147;
    }
    cpy_r_r207 = (CPyPtr)&((PyVarObject *)cpy_r_r206)->ob_size;
    cpy_r_r208 = *(int64_t *)cpy_r_r207;
    cpy_r_r209 = PyList_New(cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL186;
    }
    cpy_r_r210 = 0;
CPyL130: ;
    cpy_r_r211 = (CPyPtr)&((PyVarObject *)cpy_r_r206)->ob_size;
    cpy_r_r212 = *(int64_t *)cpy_r_r211;
    cpy_r_r213 = cpy_r_r212 << 1;
    cpy_r_r214 = (Py_ssize_t)cpy_r_r210 < (Py_ssize_t)cpy_r_r213;
    if (!cpy_r_r214) goto CPyL187;
    cpy_r_r215 = CPyList_GetItemUnsafe(cpy_r_r206, cpy_r_r210);
    PyObject *__tmp5774;
    if (unlikely(!(PyTuple_Check(cpy_r_r215) && PyTuple_GET_SIZE(cpy_r_r215) == 2))) {
        __tmp5774 = NULL;
        goto __LL5775;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r215, 0))))
        __tmp5774 = PyTuple_GET_ITEM(cpy_r_r215, 0);
    else {
        __tmp5774 = NULL;
    }
    if (__tmp5774 == NULL) goto __LL5775;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r215, 1))))
        __tmp5774 = PyTuple_GET_ITEM(cpy_r_r215, 1);
    else {
        __tmp5774 = NULL;
    }
    if (__tmp5774 == NULL) goto __LL5775;
    __tmp5774 = cpy_r_r215;
__LL5775: ;
    if (unlikely(__tmp5774 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r215); cpy_r_r216 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp5776 = PyTuple_GET_ITEM(cpy_r_r215, 0);
        CPy_INCREF(__tmp5776);
        PyObject *__tmp5777;
        if (likely(PyUnicode_Check(__tmp5776)))
            __tmp5777 = __tmp5776;
        else {
            CPy_TypeError("str", __tmp5776); 
            __tmp5777 = NULL;
        }
        cpy_r_r216.f0 = __tmp5777;
        PyObject *__tmp5778 = PyTuple_GET_ITEM(cpy_r_r215, 1);
        CPyTagged __tmp5779;
        if (likely(PyLong_Check(__tmp5778)))
            __tmp5779 = CPyTagged_FromObject(__tmp5778);
        else {
            CPy_TypeError("int", __tmp5778); __tmp5779 = CPY_INT_TAG;
        }
        cpy_r_r216.f1 = __tmp5779;
    }
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r216.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL188;
    }
    cpy_r_r217 = cpy_r_r216.f0;
    CPy_INCREF(cpy_r_r217);
    cpy_r_attr_2 = cpy_r_r217;
    cpy_r_r218 = cpy_r_r216.f1;
    CPyTagged_INCREF(cpy_r_r218);
    CPy_DECREF(cpy_r_r216.f0);
    CPyTagged_DECREF(cpy_r_r216.f1);
    cpy_r_r219 = CPyTagged_StealAsObject(cpy_r_r218);
    cpy_r___2 = cpy_r_r219;
    CPy_DECREF(cpy_r___2);
    cpy_r_r220 = CPyStatics[178]; /* '"' */
    cpy_r_r221 = CPyStatics[178]; /* '"' */
    cpy_r_r222 = CPyStr_Build(3, cpy_r_r220, cpy_r_attr_2, cpy_r_r221);
    CPy_DECREF(cpy_r_attr_2);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL188;
    }
    cpy_r_r223 = CPyList_SetItemUnsafe(cpy_r_r209, cpy_r_r210, cpy_r_r222);
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL188;
    }
    cpy_r_r224 = cpy_r_r210 + 2;
    cpy_r_r210 = cpy_r_r224;
    goto CPyL130;
CPyL135: ;
    cpy_r_r225 = PyUnicode_Join(cpy_r_r199, cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 113, CPyStatic_semanal_classprop___globals);
        goto CPyL147;
    }
    cpy_r_attrs = cpy_r_r225;
    cpy_r_r226 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_errors;
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "errors", 114, CPyStatic_semanal_classprop___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r226);
CPyL137: ;
    cpy_r_r227 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r227);
CPyL138: ;
    cpy_r_r228 = ((mypy___nodes___TypeInfoObject *)cpy_r_r227)->_line;
    if (unlikely(cpy_r_r228 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r228);
    }
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL190;
    }
CPyL139: ;
    cpy_r_r229 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_abstract_status", "calculate_class_abstract_status_env", "typ", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL191;
    }
    CPy_INCREF(cpy_r_r229);
CPyL140: ;
    cpy_r_r230 = ((mypy___nodes___TypeInfoObject *)cpy_r_r229)->_column;
    if (unlikely(cpy_r_r230 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'column' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r230);
    }
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r230 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL191;
    }
CPyL141: ;
    cpy_r_r231 = CPyStatics[5156]; /* 'Final class ' */
    cpy_r_r232 = ((mypy___semanal_classprop___calculate_class_abstract_status_envObject *)cpy_r_r0)->_typ;
    if (unlikely(cpy_r_r232 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typ' of 'calculate_class_abstract_status_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r232);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL192;
    }
CPyL142: ;
    cpy_r_r233 = CPY_GET_ATTR(cpy_r_r232, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL192;
    }
CPyL143: ;
    cpy_r_r234 = CPyStatics[5154]; /* ' has abstract attributes ' */
    cpy_r_r235 = CPyStr_Build(4, cpy_r_r231, cpy_r_r233, cpy_r_r234, cpy_r_attrs);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_attrs);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 115, CPyStatic_semanal_classprop___globals);
        goto CPyL193;
    }
    cpy_r_r236 = CPyTagged_StealAsObject(cpy_r_r230);
    cpy_r_r237 = NULL;
    cpy_r_r238 = 2;
    cpy_r_r239 = NULL;
    cpy_r_r240 = NULL;
    cpy_r_r241 = 2;
    cpy_r_r242 = 2;
    cpy_r_r243 = NULL;
    cpy_r_r244 = CPY_INT_TAG;
    cpy_r_r245 = NULL;
    cpy_r_r246 = NULL;
    cpy_r_r247 = CPyDef_mypy___errors___Errors___report(cpy_r_r226, cpy_r_r228, cpy_r_r236, cpy_r_r235, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246);
    CPyTagged_DECREF(cpy_r_r228);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r235);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r247 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 114, CPyStatic_semanal_classprop___globals);
        goto CPyL146;
    }
CPyL145: ;
    return 1;
CPyL146: ;
    cpy_r_r248 = 2;
    return cpy_r_r248;
CPyL147: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL146;
CPyL148: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL149: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    goto CPyL146;
CPyL150: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    goto CPyL146;
CPyL151: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    goto CPyL146;
CPyL152: ;
    CPy_DECREF(cpy_r_concrete);
    CPy_DECREF(cpy_r_abstract);
    CPy_DECREF(cpy_r_abstract_in_this_class);
    goto CPyL13;
CPyL153: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL146;
CPyL154: ;
    CPy_DECREF(cpy_r_concrete);
    CPy_DECREF(cpy_r_r16);
    goto CPyL79;
CPyL155: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    goto CPyL146;
CPyL156: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    goto CPyL146;
CPyL157: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    goto CPyL146;
CPyL158: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29.f2);
    CPy_DECREF(cpy_r_r29.f3);
    goto CPyL77;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r33);
    goto CPyL146;
CPyL160: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r34);
    goto CPyL146;
CPyL161: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL146;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_func);
    goto CPyL146;
CPyL163: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL40;
CPyL164: ;
    CPy_DECREF(cpy_r_func);
    goto CPyL64;
CPyL165: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_func);
    goto CPyL146;
CPyL166: ;
    CPy_DECREF(cpy_r_func);
    goto CPyL75;
CPyL167: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_name);
    goto CPyL146;
CPyL168: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL75;
CPyL169: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    goto CPyL146;
CPyL170: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    goto CPyL146;
CPyL171: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r124);
    goto CPyL146;
CPyL172: ;
    CPy_DECREF(cpy_r_abstract_in_this_class);
    goto CPyL121;
CPyL173: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_abstract_in_this_class);
    CPy_DecRef(cpy_r_r131);
    goto CPyL146;
CPyL174: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_abstract);
    CPy_DECREF(cpy_r_abstract_in_this_class);
    goto CPyL93;
CPyL175: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_abstract);
    CPy_DECREF(cpy_r_abstract_in_this_class);
    goto CPyL97;
CPyL176: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    goto CPyL146;
CPyL177: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_r147);
    goto CPyL146;
CPyL178: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_r157);
    goto CPyL146;
CPyL179: ;
    CPy_DECREF(cpy_r_r157);
    goto CPyL113;
CPyL180: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r160);
    goto CPyL146;
CPyL181: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_attrs);
    goto CPyL146;
CPyL182: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_abstract);
    CPy_DecRef(cpy_r_r181);
    goto CPyL146;
CPyL183: ;
    CPy_DECREF(cpy_r_r186);
    goto CPyL119;
CPyL184: ;
    CPy_DECREF(cpy_r_r192);
    goto CPyL121;
CPyL185: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_abstract);
    goto CPyL145;
CPyL186: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r206);
    goto CPyL146;
CPyL187: ;
    CPy_DECREF(cpy_r_r206);
    goto CPyL135;
CPyL188: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r209);
    goto CPyL146;
CPyL189: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attrs);
    goto CPyL146;
CPyL190: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r226);
    goto CPyL146;
CPyL191: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r226);
    CPyTagged_DecRef(cpy_r_r228);
    goto CPyL146;
CPyL192: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r226);
    CPyTagged_DecRef(cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r230);
    goto CPyL146;
CPyL193: ;
    CPy_DecRef(cpy_r_r226);
    CPyTagged_DecRef(cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r230);
    goto CPyL146;
}

PyObject *CPyPy_semanal_classprop___calculate_class_abstract_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "is_stub_file", "errors", 0};
    static CPyArg_Parser parser = {"OOO:calculate_class_abstract_status", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_is_stub_file;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_is_stub_file, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    char arg_is_stub_file;
    if (unlikely(!PyBool_Check(obj_is_stub_file))) {
        CPy_TypeError("bool", obj_is_stub_file); goto fail;
    } else
        arg_is_stub_file = obj_is_stub_file == Py_True;
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___calculate_class_abstract_status(arg_typ, arg_is_stub_file, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_abstract_status", 42, CPyStatic_semanal_classprop___globals);
    return NULL;
}

PyObject *CPyDef_semanal_classprop___report_check_protocol_status_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_classprop___report_check_protocol_status_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_classprop___report_check_protocol_status_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "__get__", -1, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___report_check_protocol_status_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_message, PyObject *cpy_r_severity) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_report;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___semanal_classprop___report_check_protocol_status_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "report_check_protocol_status_obj", "__mypyc_env__", 125, CPyStatic_semanal_classprop___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_report;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "check_protocol_status_env", "report", -1, CPyStatic_semanal_classprop___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_report = cpy_r_r1;
    CPy_DECREF(cpy_r_report);
    cpy_r_r2 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_errors;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "check_protocol_status_env", "errors", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "report", "check_protocol_status_env", "info", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_line;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL11;
    }
CPyL5: ;
    cpy_r_r5 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'info' of 'check_protocol_status_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
CPyL6: ;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_column;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'column' of 'TypeInfo' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = NULL;
    cpy_r_r9 = 2;
    cpy_r_r10 = NULL;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = NULL;
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_mypy___errors___Errors___report(cpy_r_r2, cpy_r_r4, cpy_r_r7, cpy_r_message, cpy_r_r8, cpy_r_r9, cpy_r_severity, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "report", 126, CPyStatic_semanal_classprop___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_semanal_classprop___report_check_protocol_status_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"message", "severity", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_message;
    PyObject *obj_severity;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_message, &obj_severity)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_severity;
    if (likely(PyUnicode_Check(obj_severity)))
        arg_severity = obj_severity;
    else {
        CPy_TypeError("str", obj_severity); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___report_check_protocol_status_obj_____call__(arg___mypyc_self__, arg_message, arg_severity);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "report", 125, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___check_protocol_status(PyObject *cpy_r_info, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyDef_semanal_classprop___check_protocol_status_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 119, CPyStatic_semanal_classprop___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_info);
    if (((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info = cpy_r_info;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 119, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_errors);
    if (((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_errors != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_errors);
    }
    ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_errors = cpy_r_errors;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 119, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
    cpy_r_r3 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "check_protocol_status", "check_protocol_status_env", "info", 121, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_is_protocol;
    if (unlikely(cpy_r_r4 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_protocol' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 121, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
CPyL5: ;
    if (!cpy_r_r4) goto CPyL27;
CPyL6: ;
    cpy_r_r5 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "check_protocol_status", "check_protocol_status_env", "info", 122, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_bases;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'bases' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 122, CPyStatic_semanal_classprop___globals);
        goto CPyL26;
    }
CPyL8: ;
    cpy_r_r7 = 0;
CPyL9: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL28;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_types___Instance))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "check_protocol_status", 122, CPyStatic_semanal_classprop___globals, "mypy.types.Instance", cpy_r_r12);
        goto CPyL29;
    }
    cpy_r_type = cpy_r_r13;
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_type)->_type;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_is_protocol;
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "check_protocol_status", "TypeInfo", "is_protocol", 123, CPyStatic_semanal_classprop___globals);
        goto CPyL30;
    }
CPyL12: ;
    if (cpy_r_r15) goto CPyL31;
CPyL13: ;
    cpy_r_r16 = ((mypy___types___InstanceObject *)cpy_r_type)->_type;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_type);
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 123, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    }
CPyL14: ;
    cpy_r_r18 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL17;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL17;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 123, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    }
CPyL17: ;
    cpy_r_r24 = cpy_r_r19 != 0;
    if (!cpy_r_r24) goto CPyL23;
    cpy_r_r25 = CPyDef_semanal_classprop___report_check_protocol_status_obj();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 125, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_classprop___report_check_protocol_status_objObject *)cpy_r_r25)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___report_check_protocol_status_objObject *)cpy_r_r25)->___mypyc_env__);
    }
    ((mypy___semanal_classprop___report_check_protocol_status_objObject *)cpy_r_r25)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 125, CPyStatic_semanal_classprop___globals);
        goto CPyL32;
    }
    if (((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_report != NULL) {
        CPy_DECREF(((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_report);
    }
    ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_report = cpy_r_r25;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 125, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    }
    cpy_r_r28 = CPyStatics[5157]; /* 'All bases of a protocol must be protocols' */
    cpy_r_r29 = CPyStatics[401]; /* 'error' */
    cpy_r_r30 = ((mypy___semanal_classprop___check_protocol_status_envObject *)cpy_r_r0)->_report;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "check_protocol_status", "check_protocol_status_env", "report", 128, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r30);
CPyL22: ;
    PyObject *cpy_r_r31[2] = {cpy_r_r28, cpy_r_r29};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 2, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 128, CPyStatic_semanal_classprop___globals);
        goto CPyL29;
    } else
        goto CPyL33;
CPyL23: ;
    cpy_r_r34 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r34;
    goto CPyL9;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r6);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_type);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r25);
    goto CPyL25;
CPyL33: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL23;
}

PyObject *CPyPy_semanal_classprop___check_protocol_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "errors", 0};
    static CPyArg_Parser parser = {"OO:check_protocol_status", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___check_protocol_status(arg_info, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "check_protocol_status", 119, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___calculate_class_vars(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_name;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_member;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_vars", "TypeInfo", "names", 141, CPyStatic_semanal_classprop___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_r0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 141, CPyStatic_semanal_classprop___globals);
        goto CPyL35;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL36;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 141, CPyStatic_semanal_classprop___globals, "str", cpy_r_r8);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 141, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_r9);
        goto CPyL38;
    }
    cpy_r_name = cpy_r_r10;
    cpy_r_sym = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_sym);
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r17 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 143, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL40;
    }
    cpy_r_r18 = ((mypy___nodes___VarObject *)cpy_r_r17)->_info;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 143, CPyStatic_semanal_classprop___globals);
        goto CPyL40;
    }
    if (!cpy_r_r19) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 143, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL40;
    }
    cpy_r_r21 = ((mypy___nodes___VarObject *)cpy_r_r20)->_is_inferred;
    if (!cpy_r_r21) goto CPyL39;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r22 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 143, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL40;
    }
    cpy_r_r23 = ((mypy___nodes___VarObject *)cpy_r_r22)->_is_classvar;
    if (cpy_r_r23) goto CPyL39;
CPyL13: ;
    cpy_r_r24 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "calculate_class_vars", "TypeInfo", "mro", 144, CPyStatic_semanal_classprop___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r24);
CPyL14: ;
    cpy_r_r25 = CPyList_GetSlice(cpy_r_r24, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 144, CPyStatic_semanal_classprop___globals);
        goto CPyL40;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 144, CPyStatic_semanal_classprop___globals, "list", cpy_r_r25);
        goto CPyL40;
    }
    cpy_r_r27 = 0;
CPyL17: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL41;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_r26, cpy_r_r27);
    if (likely((Py_TYPE(cpy_r_r32) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r32) == CPyType_nodes___TypeInfo)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 144, CPyStatic_semanal_classprop___globals, "mypy.nodes.TypeInfo", cpy_r_r32);
        goto CPyL42;
    }
    cpy_r_base = cpy_r_r33;
    cpy_r_r34 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r34 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r34);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 145, CPyStatic_semanal_classprop___globals);
        goto CPyL42;
    }
CPyL20: ;
    cpy_r_r35 = CPyDict_GetWithNone(cpy_r_r34, cpy_r_name);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 145, CPyStatic_semanal_classprop___globals);
        goto CPyL42;
    }
    if (Py_TYPE(cpy_r_r35) == CPyType_nodes___SymbolTableNode)
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL5780;
    if (cpy_r_r35 == Py_None)
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL5780;
    CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 145, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r35);
    goto CPyL42;
__LL5780: ;
    cpy_r_member = cpy_r_r36;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_member != cpy_r_r37;
    if (!cpy_r_r38) goto CPyL43;
    if (likely(cpy_r_member != Py_None))
        cpy_r_r39 = cpy_r_member;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 146, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_member);
        goto CPyL44;
    }
    cpy_r_r40 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r39)->_node;
    cpy_r_r41 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL43;
    if (likely(cpy_r_member != Py_None))
        cpy_r_r45 = cpy_r_member;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 146, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_member);
        goto CPyL44;
    }
    cpy_r_r46 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r45)->_node;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_nodes___Var))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 146, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_r46);
        goto CPyL44;
    }
    cpy_r_r48 = ((mypy___nodes___VarObject *)cpy_r_r47)->_is_classvar;
    CPy_DECREF(cpy_r_member);
    if (!cpy_r_r48) goto CPyL30;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r49 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 147, CPyStatic_semanal_classprop___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL42;
    }
    ((mypy___nodes___VarObject *)cpy_r_r49)->_is_classvar = 1;
CPyL30: ;
    cpy_r_r51 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r51;
    goto CPyL17;
CPyL31: ;
    cpy_r_r52 = CPyDict_CheckSize(cpy_r_r0, cpy_r_r3);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 141, CPyStatic_semanal_classprop___globals);
        goto CPyL45;
    } else
        goto CPyL2;
CPyL32: ;
    cpy_r_r53 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 141, CPyStatic_semanal_classprop___globals);
        goto CPyL34;
    }
    return 1;
CPyL34: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL39: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL34;
CPyL41: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r26);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r26);
    goto CPyL34;
CPyL43: ;
    CPy_DECREF(cpy_r_member);
    goto CPyL30;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_member);
    goto CPyL34;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL34;
}

PyObject *CPyPy_semanal_classprop___calculate_class_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:calculate_class_vars", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___calculate_class_vars(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "calculate_class_vars", 131, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop___add_type_promotion(PyObject *cpy_r_info, PyObject *cpy_r_module_names, PyObject *cpy_r_options, PyObject *cpy_r_builtin_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_promote_targets;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_target_sym;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_target_info;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T4OOOO cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_int_sym;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyTagged cpy_r_r111;
    CPyTagged cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    CPyPtr cpy_r_r128;
    int64_t cpy_r_r129;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "add_type_promotion", "TypeInfo", "defn", 157, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_defn = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 158, CPyStatic_semanal_classprop___globals);
        goto CPyL80;
    }
    cpy_r_promote_targets = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_decorators;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL81;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 159, CPyStatic_semanal_classprop___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL82;
    }
    cpy_r_decorator = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_decorator)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL83;
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___CallExpr))
        cpy_r_r14 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 161, CPyStatic_semanal_classprop___globals, "mypy.nodes.CallExpr", cpy_r_decorator);
        goto CPyL84;
    }
    cpy_r_r15 = ((mypy___nodes___CallExprObject *)cpy_r_r14)->_analyzed;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_decorator);
    cpy_r_analyzed = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_nodes___PromoteExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_analyzed)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL85;
    if (likely(Py_TYPE(cpy_r_analyzed) == CPyType_nodes___PromoteExpr))
        cpy_r_r20 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 164, CPyStatic_semanal_classprop___globals, "mypy.nodes.PromoteExpr", cpy_r_analyzed);
        goto CPyL86;
    }
    cpy_r_r21 = ((mypy___nodes___PromoteExprObject *)cpy_r_r20)->_type;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_analyzed);
    cpy_r_r22 = PyList_Append(cpy_r_promote_targets, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 164, CPyStatic_semanal_classprop___globals);
        goto CPyL82;
    }
CPyL10: ;
    cpy_r_r24 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r24;
    goto CPyL3;
CPyL11: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_promote_targets)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (cpy_r_r28) goto CPyL52;
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 166, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
CPyL13: ;
    cpy_r_r30 = CPyStatic_semanal_classprop___TYPE_PROMOTIONS;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL88;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_PROMOTIONS\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 166, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r32 = PyDict_Contains(cpy_r_r30, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 166, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL52;
    cpy_r_r35 = CPyStatic_semanal_classprop___TYPE_PROMOTIONS;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL89;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_PROMOTIONS\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
CPyL22: ;
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals, "str", cpy_r_r38);
        goto CPyL87;
    }
    cpy_r_r40 = CPyDict_GetWithNone(cpy_r_module_names, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    if (Py_TYPE(cpy_r_r40) == CPyType_nodes___SymbolTableNode)
        cpy_r_r41 = cpy_r_r40;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL5781;
    if (cpy_r_r40 == Py_None)
        cpy_r_r41 = cpy_r_r40;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL5781;
    CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 167, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r40);
    goto CPyL87;
__LL5781: ;
    cpy_r_target_sym = cpy_r_r41;
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 168, CPyStatic_semanal_classprop___globals);
        goto CPyL90;
    }
CPyL27: ;
    cpy_r_r43 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r44 = PyUnicode_Compare(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL30;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL30;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 168, CPyStatic_semanal_classprop___globals);
        goto CPyL90;
    }
CPyL30: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    if (!cpy_r_r49) goto CPyL33;
    cpy_r_r50 = ((mypy___options___OptionsObject *)cpy_r_options)->_disable_bytearray_promotion;
    if (cpy_r_r50) {
        goto CPyL91;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    cpy_r_target_sym = cpy_r_r51;
    goto CPyL40;
CPyL33: ;
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 170, CPyStatic_semanal_classprop___globals);
        goto CPyL90;
    }
CPyL34: ;
    cpy_r_r53 = CPyStatics[1291]; /* 'builtins.memoryview' */
    cpy_r_r54 = PyUnicode_Compare(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 == -1;
    if (!cpy_r_r55) goto CPyL37;
    cpy_r_r56 = PyErr_Occurred();
    cpy_r_r57 = cpy_r_r56 != NULL;
    if (!cpy_r_r57) goto CPyL37;
    cpy_r_r58 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 170, CPyStatic_semanal_classprop___globals);
        goto CPyL90;
    }
CPyL37: ;
    cpy_r_r59 = cpy_r_r54 == 0;
    if (!cpy_r_r59) goto CPyL40;
    cpy_r_r60 = ((mypy___options___OptionsObject *)cpy_r_options)->_disable_memoryview_promotion;
    if (cpy_r_r60) {
        goto CPyL92;
    } else
        goto CPyL40;
CPyL39: ;
    cpy_r_r61 = Py_None;
    CPy_INCREF(cpy_r_r61);
    cpy_r_target_sym = cpy_r_r61;
CPyL40: ;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_target_sym != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL93;
    if (likely(cpy_r_target_sym != Py_None))
        cpy_r_r64 = cpy_r_target_sym;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 174, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_target_sym);
        goto CPyL90;
    }
    cpy_r_r65 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r64)->_node;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_target_sym);
    cpy_r_target_info = cpy_r_r65;
    cpy_r_r66 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_target_info)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL44;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL45;
CPyL44: ;
    cpy_r_r71 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_target_info)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    cpy_r_r70 = cpy_r_r74;
CPyL45: ;
    if (cpy_r_r70) {
        goto CPyL48;
    } else
        goto CPyL94;
CPyL46: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 175, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL48: ;
    if (likely((Py_TYPE(cpy_r_target_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_target_info) == CPyType_nodes___TypeInfo)))
        cpy_r_r76 = cpy_r_target_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 176, CPyStatic_semanal_classprop___globals, "mypy.nodes.TypeInfo", cpy_r_target_info);
        goto CPyL87;
    }
    cpy_r_r77 = PyList_New(0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 176, CPyStatic_semanal_classprop___globals);
        goto CPyL95;
    }
    cpy_r_r78 = CPY_INT_TAG;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_types___Instance(cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 176, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    cpy_r_r83 = PyList_Append(cpy_r_promote_targets, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 176, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
CPyL52: ;
    cpy_r_r85 = CPY_GET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 180, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
CPyL53: ;
    cpy_r_r86 = CPyStatic_types___MYPYC_NATIVE_INT_NAMES;
    if (unlikely(cpy_r_r86.f0 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MYPYC_NATIVE_INT_NAMES\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 180, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL56: ;
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_INCREF(cpy_r_r86.f2);
    CPy_INCREF(cpy_r_r86.f3);
    cpy_r_r88 = PyTuple_New(4);
    if (unlikely(cpy_r_r88 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5782 = cpy_r_r86.f0;
    PyTuple_SET_ITEM(cpy_r_r88, 0, __tmp5782);
    PyObject *__tmp5783 = cpy_r_r86.f1;
    PyTuple_SET_ITEM(cpy_r_r88, 1, __tmp5783);
    PyObject *__tmp5784 = cpy_r_r86.f2;
    PyTuple_SET_ITEM(cpy_r_r88, 2, __tmp5784);
    PyObject *__tmp5785 = cpy_r_r86.f3;
    PyTuple_SET_ITEM(cpy_r_r88, 3, __tmp5785);
    cpy_r_r89 = PySequence_Contains(cpy_r_r88, cpy_r_r85);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 180, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    cpy_r_r91 = cpy_r_r89;
    if (!cpy_r_r91) goto CPyL75;
    cpy_r_r92 = CPyStatics[5158]; /* 'int' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_builtin_names, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 181, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_nodes___SymbolTableNode))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 181, CPyStatic_semanal_classprop___globals, "mypy.nodes.SymbolTableNode", cpy_r_r93);
        goto CPyL87;
    }
    cpy_r_int_sym = cpy_r_r94;
    cpy_r_r95 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_int_sym)->_node;
    cpy_r_r96 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_r95)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (!cpy_r_r99) goto CPyL62;
    cpy_r_r100 = cpy_r_r99;
    goto CPyL63;
CPyL62: ;
    cpy_r_r101 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r102 = (CPyPtr)&((PyObject *)cpy_r_r95)->ob_type;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 == cpy_r_r101;
    cpy_r_r100 = cpy_r_r104;
CPyL63: ;
    if (cpy_r_r100) {
        goto CPyL66;
    } else
        goto CPyL97;
CPyL64: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 182, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r106 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_int_sym)->_node;
    if (likely((Py_TYPE(cpy_r_r106) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r106) == CPyType_nodes___TypeInfo)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 183, CPyStatic_semanal_classprop___globals, "mypy.nodes.TypeInfo", cpy_r_r106);
        goto CPyL98;
    }
    cpy_r_r108 = ((mypy___nodes___TypeInfoObject *)cpy_r_r107)->__promote;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "add_type_promotion", "TypeInfo", "_promote", 183, CPyStatic_semanal_classprop___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r108);
CPyL68: ;
    cpy_r_r109 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = PyList_New(0);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 183, CPyStatic_semanal_classprop___globals);
        goto CPyL99;
    }
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPY_INT_TAG;
    cpy_r_r113 = NULL;
    cpy_r_r114 = NULL;
    cpy_r_r115 = CPyDef_types___Instance(cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 183, CPyStatic_semanal_classprop___globals);
        goto CPyL100;
    }
    cpy_r_r116 = PyList_Append(cpy_r_r108, cpy_r_r115);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 183, CPyStatic_semanal_classprop___globals);
        goto CPyL98;
    }
    cpy_r_r118 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_int_sym)->_node;
    CPy_INCREF(cpy_r_r118);
    CPy_DECREF(cpy_r_int_sym);
    if (likely((Py_TYPE(cpy_r_r118) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r118) == CPyType_nodes___TypeInfo)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_classprop.py", "add_type_promotion", 184, CPyStatic_semanal_classprop___globals, "mypy.nodes.TypeInfo", cpy_r_r118);
        goto CPyL87;
    }
    cpy_r_r120 = PyList_New(0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 184, CPyStatic_semanal_classprop___globals);
        goto CPyL101;
    }
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = CPyDef_types___Instance(cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 184, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    cpy_r_r126 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r126)->_alt_promote != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r126)->_alt_promote);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r126)->_alt_promote = cpy_r_r125;
    cpy_r_r127 = 1;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 184, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
CPyL75: ;
    cpy_r_r128 = (CPyPtr)&((PyVarObject *)cpy_r_promote_targets)->ob_size;
    cpy_r_r129 = *(int64_t *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 << 1;
    cpy_r_r131 = cpy_r_r130 != 0;
    if (!cpy_r_r131) goto CPyL102;
    cpy_r_r132 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info;
    cpy_r_r133 = ((mypy___nodes___TypeInfoObject *)cpy_r_r132)->__promote;
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AttributeError("mypy/semanal_classprop.py", "add_type_promotion", "TypeInfo", "_promote", 186, CPyStatic_semanal_classprop___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r133);
CPyL77: ;
    CPy_DECREF(cpy_r_defn);
    cpy_r_r134 = CPyList_Extend(cpy_r_r133, cpy_r_promote_targets);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_promote_targets);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 186, CPyStatic_semanal_classprop___globals);
        goto CPyL79;
    } else
        goto CPyL103;
CPyL78: ;
    return 1;
CPyL79: ;
    cpy_r_r135 = 2;
    return cpy_r_r135;
CPyL80: ;
    CPy_DecRef(cpy_r_defn);
    goto CPyL79;
CPyL81: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL11;
CPyL82: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r2);
    goto CPyL79;
CPyL83: ;
    CPy_DECREF(cpy_r_decorator);
    goto CPyL10;
CPyL84: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_decorator);
    goto CPyL79;
CPyL85: ;
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL10;
CPyL86: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_analyzed);
    goto CPyL79;
CPyL87: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    goto CPyL79;
CPyL88: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r29);
    goto CPyL14;
CPyL89: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    goto CPyL19;
CPyL90: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_target_sym);
    goto CPyL79;
CPyL91: ;
    CPy_DECREF(cpy_r_target_sym);
    goto CPyL32;
CPyL92: ;
    CPy_DECREF(cpy_r_target_sym);
    goto CPyL39;
CPyL93: ;
    CPy_DECREF(cpy_r_target_sym);
    goto CPyL52;
CPyL94: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_promote_targets);
    CPy_DECREF(cpy_r_target_info);
    goto CPyL46;
CPyL95: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r76);
    goto CPyL79;
CPyL96: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r85);
    goto CPyL54;
CPyL97: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_promote_targets);
    CPy_DECREF(cpy_r_int_sym);
    goto CPyL64;
CPyL98: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_int_sym);
    goto CPyL79;
CPyL99: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_int_sym);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    goto CPyL79;
CPyL100: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_int_sym);
    CPy_DecRef(cpy_r_r108);
    goto CPyL79;
CPyL101: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_promote_targets);
    CPy_DecRef(cpy_r_r119);
    goto CPyL79;
CPyL102: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_promote_targets);
    goto CPyL78;
CPyL103: ;
    CPy_DECREF(cpy_r_r134);
    goto CPyL78;
}

PyObject *CPyPy_semanal_classprop___add_type_promotion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "module_names", "options", "builtin_names", 0};
    static CPyArg_Parser parser = {"OOOO:add_type_promotion", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_module_names;
    PyObject *obj_options;
    PyObject *obj_builtin_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_module_names, &obj_options, &obj_builtin_names)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_module_names;
    if (likely(PyDict_Check(obj_module_names)))
        arg_module_names = obj_module_names;
    else {
        CPy_TypeError("dict", obj_module_names); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_builtin_names;
    if (likely(PyDict_Check(obj_builtin_names)))
        arg_builtin_names = obj_builtin_names;
    else {
        CPy_TypeError("dict", obj_builtin_names); 
        goto fail;
    }
    char retval = CPyDef_semanal_classprop___add_type_promotion(arg_info, arg_module_names, arg_options, arg_builtin_names);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_classprop.py", "add_type_promotion", 150, CPyStatic_semanal_classprop___globals);
    return NULL;
}

char CPyDef_semanal_classprop_____top_level__(void) {
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
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", -1, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_classprop___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 6, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_semanal_classprop___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 8, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r14 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r15 = CPyStatic_semanal_classprop___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 10, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_mypy___errors = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9688]; /* ('IMPLICITLY_ABSTRACT', 'IS_ABSTRACT', 'CallExpr',
                                     'Decorator', 'FuncDef', 'Node', 'OverloadedFuncDef',
                                     'PromoteExpr', 'SymbolTable', 'TypeInfo', 'Var') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_semanal_classprop___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 11, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r22 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r23 = CPyStatic_semanal_classprop___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 24, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_mypy___options = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9689]; /* ('MYPYC_NATIVE_INT_NAMES', 'Instance', 'ProperType') */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_semanal_classprop___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 25, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r30 = CPyStatics[5159]; /* 'float' */
    cpy_r_r31 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r32 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r33 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r34 = CPyStatics[5160]; /* 'bytes' */
    cpy_r_r35 = CPyStatics[1291]; /* 'builtins.memoryview' */
    cpy_r_r36 = CPyStatics[5160]; /* 'bytes' */
    cpy_r_r37 = CPyDict_Build(4, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 34, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    CPyStatic_semanal_classprop___TYPE_PROMOTIONS = cpy_r_r37;
    CPy_INCREF(CPyStatic_semanal_classprop___TYPE_PROMOTIONS);
    cpy_r_r38 = CPyStatic_semanal_classprop___globals;
    cpy_r_r39 = CPyStatics[5161]; /* 'TYPE_PROMOTIONS' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/semanal_classprop.py", "<module>", 34, CPyStatic_semanal_classprop___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
}
