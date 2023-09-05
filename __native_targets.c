#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *targets___AssignmentTarget_setup(PyTypeObject *type);
PyObject *CPyDef_targets___AssignmentTarget(void);

static PyObject *
targets___AssignmentTarget_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_targets___AssignmentTarget) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return targets___AssignmentTarget_setup(type);
}

static int
targets___AssignmentTarget_traverse(mypyc___irbuild___targets___AssignmentTargetObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    return 0;
}

static int
targets___AssignmentTarget_clear(mypyc___irbuild___targets___AssignmentTargetObject *self)
{
    Py_CLEAR(self->_type);
    return 0;
}

static void
targets___AssignmentTarget_dealloc(mypyc___irbuild___targets___AssignmentTargetObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, targets___AssignmentTarget_dealloc)
    targets___AssignmentTarget_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem targets___AssignmentTarget_vtable[1];
static bool
CPyDef_targets___AssignmentTarget_trait_vtable_setup(void)
{
    CPyVTableItem targets___AssignmentTarget_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_targets___AssignmentTarget_____mypyc_defaults_setup,
    };
    memcpy(targets___AssignmentTarget_vtable, targets___AssignmentTarget_vtable_scratch, sizeof(targets___AssignmentTarget_vtable));
    return 1;
}

static PyObject *
targets___AssignmentTarget_get_type(mypyc___irbuild___targets___AssignmentTargetObject *self, void *closure);
static int
targets___AssignmentTarget_set_type(mypyc___irbuild___targets___AssignmentTargetObject *self, PyObject *value, void *closure);

static PyGetSetDef targets___AssignmentTarget_getseters[] = {
    {"type",
     (getter)targets___AssignmentTarget_get_type, (setter)targets___AssignmentTarget_set_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef targets___AssignmentTarget_methods[] = {
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_targets___AssignmentTarget_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_targets___AssignmentTarget_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignmentTarget",
    .tp_new = targets___AssignmentTarget_new,
    .tp_dealloc = (destructor)targets___AssignmentTarget_dealloc,
    .tp_traverse = (traverseproc)targets___AssignmentTarget_traverse,
    .tp_clear = (inquiry)targets___AssignmentTarget_clear,
    .tp_getset = targets___AssignmentTarget_getseters,
    .tp_methods = targets___AssignmentTarget_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___targets___AssignmentTargetObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_targets___AssignmentTarget_template = &CPyType_targets___AssignmentTarget_template_;

static PyObject *
targets___AssignmentTarget_setup(PyTypeObject *type)
{
    mypyc___irbuild___targets___AssignmentTargetObject *self;
    self = (mypyc___irbuild___targets___AssignmentTargetObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = targets___AssignmentTarget_vtable;
    if (CPyDef_targets___AssignmentTarget_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_targets___AssignmentTarget(void)
{
    PyObject *self = targets___AssignmentTarget_setup(CPyType_targets___AssignmentTarget);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
targets___AssignmentTarget_get_type(mypyc___irbuild___targets___AssignmentTargetObject *self, void *closure)
{
    if (unlikely(self->_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type' of 'AssignmentTarget' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type);
    PyObject *retval = self->_type;
    return retval;
}

static int
targets___AssignmentTarget_set_type(mypyc___irbuild___targets___AssignmentTargetObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTarget' object attribute 'type' cannot be deleted");
        return -1;
    }
    if (self->_type != NULL) {
        CPy_DECREF(self->_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_rtypes___RType)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type = tmp;
    return 0;
}

static int
targets___AssignmentTargetRegister_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *targets___AssignmentTargetRegister_setup(PyTypeObject *type);
PyObject *CPyDef_targets___AssignmentTargetRegister(PyObject *cpy_r_register);

static PyObject *
targets___AssignmentTargetRegister_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_targets___AssignmentTargetRegister) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = targets___AssignmentTargetRegister_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_targets___AssignmentTargetRegister_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
targets___AssignmentTargetRegister_traverse(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    Py_VISIT(self->_register);
    return 0;
}

static int
targets___AssignmentTargetRegister_clear(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self)
{
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_register);
    return 0;
}

static void
targets___AssignmentTargetRegister_dealloc(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, targets___AssignmentTargetRegister_dealloc)
    targets___AssignmentTargetRegister_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem targets___AssignmentTargetRegister_vtable[3];
static bool
CPyDef_targets___AssignmentTargetRegister_trait_vtable_setup(void)
{
    CPyVTableItem targets___AssignmentTargetRegister_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_targets___AssignmentTargetRegister_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetRegister_____init__,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetRegister_____mypyc_defaults_setup,
    };
    memcpy(targets___AssignmentTargetRegister_vtable, targets___AssignmentTargetRegister_vtable_scratch, sizeof(targets___AssignmentTargetRegister_vtable));
    return 1;
}

static PyObject *
targets___AssignmentTargetRegister_get_register(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self, void *closure);
static int
targets___AssignmentTargetRegister_set_register(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self, PyObject *value, void *closure);

static PyGetSetDef targets___AssignmentTargetRegister_getseters[] = {
    {"register",
     (getter)targets___AssignmentTargetRegister_get_register, (setter)targets___AssignmentTargetRegister_set_register,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef targets___AssignmentTargetRegister_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_targets___AssignmentTargetRegister_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_targets___AssignmentTargetRegister_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_targets___AssignmentTargetRegister_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignmentTargetRegister",
    .tp_new = targets___AssignmentTargetRegister_new,
    .tp_dealloc = (destructor)targets___AssignmentTargetRegister_dealloc,
    .tp_traverse = (traverseproc)targets___AssignmentTargetRegister_traverse,
    .tp_clear = (inquiry)targets___AssignmentTargetRegister_clear,
    .tp_getset = targets___AssignmentTargetRegister_getseters,
    .tp_methods = targets___AssignmentTargetRegister_methods,
    .tp_init = targets___AssignmentTargetRegister_init,
    .tp_basicsize = sizeof(mypyc___irbuild___targets___AssignmentTargetRegisterObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_targets___AssignmentTargetRegister_template = &CPyType_targets___AssignmentTargetRegister_template_;

static PyObject *
targets___AssignmentTargetRegister_setup(PyTypeObject *type)
{
    mypyc___irbuild___targets___AssignmentTargetRegisterObject *self;
    self = (mypyc___irbuild___targets___AssignmentTargetRegisterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = targets___AssignmentTargetRegister_vtable;
    if (CPyDef_targets___AssignmentTargetRegister_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_targets___AssignmentTargetRegister(PyObject *cpy_r_register)
{
    PyObject *self = targets___AssignmentTargetRegister_setup(CPyType_targets___AssignmentTargetRegister);
    if (self == NULL)
        return NULL;
    char res = CPyDef_targets___AssignmentTargetRegister_____init__(self, cpy_r_register);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
targets___AssignmentTargetRegister_get_register(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self, void *closure)
{
    if (unlikely(self->_register == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'register' of 'AssignmentTargetRegister' undefined");
        return NULL;
    }
    CPy_INCREF(self->_register);
    PyObject *retval = self->_register;
    return retval;
}

static int
targets___AssignmentTargetRegister_set_register(mypyc___irbuild___targets___AssignmentTargetRegisterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetRegister' object attribute 'register' cannot be deleted");
        return -1;
    }
    if (self->_register != NULL) {
        CPy_DECREF(self->_register);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___Register))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_register = tmp;
    return 0;
}

static int
targets___AssignmentTargetIndex_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *targets___AssignmentTargetIndex_setup(PyTypeObject *type);
PyObject *CPyDef_targets___AssignmentTargetIndex(PyObject *cpy_r_base, PyObject *cpy_r_index);

static PyObject *
targets___AssignmentTargetIndex_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_targets___AssignmentTargetIndex) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = targets___AssignmentTargetIndex_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_targets___AssignmentTargetIndex_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
targets___AssignmentTargetIndex_traverse(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    Py_VISIT(self->_base);
    Py_VISIT(self->_index);
    return 0;
}

static int
targets___AssignmentTargetIndex_clear(mypyc___irbuild___targets___AssignmentTargetIndexObject *self)
{
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_base);
    Py_CLEAR(self->_index);
    return 0;
}

static void
targets___AssignmentTargetIndex_dealloc(mypyc___irbuild___targets___AssignmentTargetIndexObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, targets___AssignmentTargetIndex_dealloc)
    targets___AssignmentTargetIndex_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem targets___AssignmentTargetIndex_vtable[3];
static bool
CPyDef_targets___AssignmentTargetIndex_trait_vtable_setup(void)
{
    CPyVTableItem targets___AssignmentTargetIndex_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_targets___AssignmentTargetIndex_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetIndex_____init__,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetIndex_____mypyc_defaults_setup,
    };
    memcpy(targets___AssignmentTargetIndex_vtable, targets___AssignmentTargetIndex_vtable_scratch, sizeof(targets___AssignmentTargetIndex_vtable));
    return 1;
}

static PyObject *
targets___AssignmentTargetIndex_get_base(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, void *closure);
static int
targets___AssignmentTargetIndex_set_base(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, PyObject *value, void *closure);
static PyObject *
targets___AssignmentTargetIndex_get_index(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, void *closure);
static int
targets___AssignmentTargetIndex_set_index(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, PyObject *value, void *closure);

static PyGetSetDef targets___AssignmentTargetIndex_getseters[] = {
    {"base",
     (getter)targets___AssignmentTargetIndex_get_base, (setter)targets___AssignmentTargetIndex_set_base,
     NULL, NULL},
    {"index",
     (getter)targets___AssignmentTargetIndex_get_index, (setter)targets___AssignmentTargetIndex_set_index,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef targets___AssignmentTargetIndex_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_targets___AssignmentTargetIndex_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_targets___AssignmentTargetIndex_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_targets___AssignmentTargetIndex_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignmentTargetIndex",
    .tp_new = targets___AssignmentTargetIndex_new,
    .tp_dealloc = (destructor)targets___AssignmentTargetIndex_dealloc,
    .tp_traverse = (traverseproc)targets___AssignmentTargetIndex_traverse,
    .tp_clear = (inquiry)targets___AssignmentTargetIndex_clear,
    .tp_getset = targets___AssignmentTargetIndex_getseters,
    .tp_methods = targets___AssignmentTargetIndex_methods,
    .tp_init = targets___AssignmentTargetIndex_init,
    .tp_basicsize = sizeof(mypyc___irbuild___targets___AssignmentTargetIndexObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_targets___AssignmentTargetIndex_template = &CPyType_targets___AssignmentTargetIndex_template_;

static PyObject *
targets___AssignmentTargetIndex_setup(PyTypeObject *type)
{
    mypyc___irbuild___targets___AssignmentTargetIndexObject *self;
    self = (mypyc___irbuild___targets___AssignmentTargetIndexObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = targets___AssignmentTargetIndex_vtable;
    if (CPyDef_targets___AssignmentTargetIndex_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_targets___AssignmentTargetIndex(PyObject *cpy_r_base, PyObject *cpy_r_index)
{
    PyObject *self = targets___AssignmentTargetIndex_setup(CPyType_targets___AssignmentTargetIndex);
    if (self == NULL)
        return NULL;
    char res = CPyDef_targets___AssignmentTargetIndex_____init__(self, cpy_r_base, cpy_r_index);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
targets___AssignmentTargetIndex_get_base(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, void *closure)
{
    if (unlikely(self->_base == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'base' of 'AssignmentTargetIndex' undefined");
        return NULL;
    }
    CPy_INCREF(self->_base);
    PyObject *retval = self->_base;
    return retval;
}

static int
targets___AssignmentTargetIndex_set_base(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetIndex' object attribute 'base' cannot be deleted");
        return -1;
    }
    if (self->_base != NULL) {
        CPy_DECREF(self->_base);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_base = tmp;
    return 0;
}

static PyObject *
targets___AssignmentTargetIndex_get_index(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, void *closure)
{
    if (unlikely(self->_index == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index' of 'AssignmentTargetIndex' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index);
    PyObject *retval = self->_index;
    return retval;
}

static int
targets___AssignmentTargetIndex_set_index(mypyc___irbuild___targets___AssignmentTargetIndexObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetIndex' object attribute 'index' cannot be deleted");
        return -1;
    }
    if (self->_index != NULL) {
        CPy_DECREF(self->_index);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index = tmp;
    return 0;
}

static int
targets___AssignmentTargetAttr_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *targets___AssignmentTargetAttr_setup(PyTypeObject *type);
PyObject *CPyDef_targets___AssignmentTargetAttr(PyObject *cpy_r_obj, PyObject *cpy_r_attr, char cpy_r_can_borrow);

static PyObject *
targets___AssignmentTargetAttr_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_targets___AssignmentTargetAttr) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = targets___AssignmentTargetAttr_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_targets___AssignmentTargetAttr_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
targets___AssignmentTargetAttr_traverse(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    Py_VISIT(self->_obj);
    Py_VISIT(self->_attr);
    Py_VISIT(self->_obj_type);
    return 0;
}

static int
targets___AssignmentTargetAttr_clear(mypyc___irbuild___targets___AssignmentTargetAttrObject *self)
{
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_obj);
    Py_CLEAR(self->_attr);
    Py_CLEAR(self->_obj_type);
    return 0;
}

static void
targets___AssignmentTargetAttr_dealloc(mypyc___irbuild___targets___AssignmentTargetAttrObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, targets___AssignmentTargetAttr_dealloc)
    targets___AssignmentTargetAttr_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem targets___AssignmentTargetAttr_vtable[3];
static bool
CPyDef_targets___AssignmentTargetAttr_trait_vtable_setup(void)
{
    CPyVTableItem targets___AssignmentTargetAttr_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_targets___AssignmentTargetAttr_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetAttr_____init__,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetAttr_____mypyc_defaults_setup,
    };
    memcpy(targets___AssignmentTargetAttr_vtable, targets___AssignmentTargetAttr_vtable_scratch, sizeof(targets___AssignmentTargetAttr_vtable));
    return 1;
}

static PyObject *
targets___AssignmentTargetAttr_get_obj(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure);
static int
targets___AssignmentTargetAttr_set_obj(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure);
static PyObject *
targets___AssignmentTargetAttr_get_attr(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure);
static int
targets___AssignmentTargetAttr_set_attr(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure);
static PyObject *
targets___AssignmentTargetAttr_get_can_borrow(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure);
static int
targets___AssignmentTargetAttr_set_can_borrow(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure);
static PyObject *
targets___AssignmentTargetAttr_get_obj_type(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure);
static int
targets___AssignmentTargetAttr_set_obj_type(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure);

static PyGetSetDef targets___AssignmentTargetAttr_getseters[] = {
    {"obj",
     (getter)targets___AssignmentTargetAttr_get_obj, (setter)targets___AssignmentTargetAttr_set_obj,
     NULL, NULL},
    {"attr",
     (getter)targets___AssignmentTargetAttr_get_attr, (setter)targets___AssignmentTargetAttr_set_attr,
     NULL, NULL},
    {"can_borrow",
     (getter)targets___AssignmentTargetAttr_get_can_borrow, (setter)targets___AssignmentTargetAttr_set_can_borrow,
     NULL, NULL},
    {"obj_type",
     (getter)targets___AssignmentTargetAttr_get_obj_type, (setter)targets___AssignmentTargetAttr_set_obj_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef targets___AssignmentTargetAttr_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_targets___AssignmentTargetAttr_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_targets___AssignmentTargetAttr_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_targets___AssignmentTargetAttr_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignmentTargetAttr",
    .tp_new = targets___AssignmentTargetAttr_new,
    .tp_dealloc = (destructor)targets___AssignmentTargetAttr_dealloc,
    .tp_traverse = (traverseproc)targets___AssignmentTargetAttr_traverse,
    .tp_clear = (inquiry)targets___AssignmentTargetAttr_clear,
    .tp_getset = targets___AssignmentTargetAttr_getseters,
    .tp_methods = targets___AssignmentTargetAttr_methods,
    .tp_init = targets___AssignmentTargetAttr_init,
    .tp_basicsize = sizeof(mypyc___irbuild___targets___AssignmentTargetAttrObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_targets___AssignmentTargetAttr_template = &CPyType_targets___AssignmentTargetAttr_template_;

static PyObject *
targets___AssignmentTargetAttr_setup(PyTypeObject *type)
{
    mypyc___irbuild___targets___AssignmentTargetAttrObject *self;
    self = (mypyc___irbuild___targets___AssignmentTargetAttrObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = targets___AssignmentTargetAttr_vtable;
    self->_can_borrow = 2;
    if (CPyDef_targets___AssignmentTargetAttr_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_targets___AssignmentTargetAttr(PyObject *cpy_r_obj, PyObject *cpy_r_attr, char cpy_r_can_borrow)
{
    PyObject *self = targets___AssignmentTargetAttr_setup(CPyType_targets___AssignmentTargetAttr);
    if (self == NULL)
        return NULL;
    char res = CPyDef_targets___AssignmentTargetAttr_____init__(self, cpy_r_obj, cpy_r_attr, cpy_r_can_borrow);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
targets___AssignmentTargetAttr_get_obj(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure)
{
    if (unlikely(self->_obj == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'obj' of 'AssignmentTargetAttr' undefined");
        return NULL;
    }
    CPy_INCREF(self->_obj);
    PyObject *retval = self->_obj;
    return retval;
}

static int
targets___AssignmentTargetAttr_set_obj(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetAttr' object attribute 'obj' cannot be deleted");
        return -1;
    }
    if (self->_obj != NULL) {
        CPy_DECREF(self->_obj);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_obj = tmp;
    return 0;
}

static PyObject *
targets___AssignmentTargetAttr_get_attr(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure)
{
    if (unlikely(self->_attr == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'attr' of 'AssignmentTargetAttr' undefined");
        return NULL;
    }
    CPy_INCREF(self->_attr);
    PyObject *retval = self->_attr;
    return retval;
}

static int
targets___AssignmentTargetAttr_set_attr(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetAttr' object attribute 'attr' cannot be deleted");
        return -1;
    }
    if (self->_attr != NULL) {
        CPy_DECREF(self->_attr);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_attr = tmp;
    return 0;
}

static PyObject *
targets___AssignmentTargetAttr_get_can_borrow(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure)
{
    PyObject *retval = self->_can_borrow ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
targets___AssignmentTargetAttr_set_can_borrow(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetAttr' object attribute 'can_borrow' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_can_borrow = tmp;
    return 0;
}

static PyObject *
targets___AssignmentTargetAttr_get_obj_type(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, void *closure)
{
    if (unlikely(self->_obj_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'obj_type' of 'AssignmentTargetAttr' undefined");
        return NULL;
    }
    CPy_INCREF(self->_obj_type);
    PyObject *retval = self->_obj_type;
    return retval;
}

static int
targets___AssignmentTargetAttr_set_obj_type(mypyc___irbuild___targets___AssignmentTargetAttrObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetAttr' object attribute 'obj_type' cannot be deleted");
        return -1;
    }
    if (self->_obj_type != NULL) {
        CPy_DECREF(self->_obj_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_rtypes___RType)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_obj_type = tmp;
    return 0;
}

static int
targets___AssignmentTargetTuple_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *targets___AssignmentTargetTuple_setup(PyTypeObject *type);
PyObject *CPyDef_targets___AssignmentTargetTuple(PyObject *cpy_r_items, PyObject *cpy_r_star_idx);

static PyObject *
targets___AssignmentTargetTuple_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_targets___AssignmentTargetTuple) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = targets___AssignmentTargetTuple_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_targets___AssignmentTargetTuple_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
targets___AssignmentTargetTuple_traverse(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    Py_VISIT(self->_items);
    Py_VISIT(self->_star_idx);
    return 0;
}

static int
targets___AssignmentTargetTuple_clear(mypyc___irbuild___targets___AssignmentTargetTupleObject *self)
{
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_items);
    Py_CLEAR(self->_star_idx);
    return 0;
}

static void
targets___AssignmentTargetTuple_dealloc(mypyc___irbuild___targets___AssignmentTargetTupleObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, targets___AssignmentTargetTuple_dealloc)
    targets___AssignmentTargetTuple_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem targets___AssignmentTargetTuple_vtable[3];
static bool
CPyDef_targets___AssignmentTargetTuple_trait_vtable_setup(void)
{
    CPyVTableItem targets___AssignmentTargetTuple_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_targets___AssignmentTargetTuple_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetTuple_____init__,
        (CPyVTableItem)CPyDef_targets___AssignmentTargetTuple_____mypyc_defaults_setup,
    };
    memcpy(targets___AssignmentTargetTuple_vtable, targets___AssignmentTargetTuple_vtable_scratch, sizeof(targets___AssignmentTargetTuple_vtable));
    return 1;
}

static PyObject *
targets___AssignmentTargetTuple_get_items(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, void *closure);
static int
targets___AssignmentTargetTuple_set_items(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, PyObject *value, void *closure);
static PyObject *
targets___AssignmentTargetTuple_get_star_idx(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, void *closure);
static int
targets___AssignmentTargetTuple_set_star_idx(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, PyObject *value, void *closure);

static PyGetSetDef targets___AssignmentTargetTuple_getseters[] = {
    {"items",
     (getter)targets___AssignmentTargetTuple_get_items, (setter)targets___AssignmentTargetTuple_set_items,
     NULL, NULL},
    {"star_idx",
     (getter)targets___AssignmentTargetTuple_get_star_idx, (setter)targets___AssignmentTargetTuple_set_star_idx,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef targets___AssignmentTargetTuple_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_targets___AssignmentTargetTuple_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_targets___AssignmentTargetTuple_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_targets___AssignmentTargetTuple_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignmentTargetTuple",
    .tp_new = targets___AssignmentTargetTuple_new,
    .tp_dealloc = (destructor)targets___AssignmentTargetTuple_dealloc,
    .tp_traverse = (traverseproc)targets___AssignmentTargetTuple_traverse,
    .tp_clear = (inquiry)targets___AssignmentTargetTuple_clear,
    .tp_getset = targets___AssignmentTargetTuple_getseters,
    .tp_methods = targets___AssignmentTargetTuple_methods,
    .tp_init = targets___AssignmentTargetTuple_init,
    .tp_basicsize = sizeof(mypyc___irbuild___targets___AssignmentTargetTupleObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_targets___AssignmentTargetTuple_template = &CPyType_targets___AssignmentTargetTuple_template_;

static PyObject *
targets___AssignmentTargetTuple_setup(PyTypeObject *type)
{
    mypyc___irbuild___targets___AssignmentTargetTupleObject *self;
    self = (mypyc___irbuild___targets___AssignmentTargetTupleObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = targets___AssignmentTargetTuple_vtable;
    if (CPyDef_targets___AssignmentTargetTuple_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_targets___AssignmentTargetTuple(PyObject *cpy_r_items, PyObject *cpy_r_star_idx)
{
    PyObject *self = targets___AssignmentTargetTuple_setup(CPyType_targets___AssignmentTargetTuple);
    if (self == NULL)
        return NULL;
    char res = CPyDef_targets___AssignmentTargetTuple_____init__(self, cpy_r_items, cpy_r_star_idx);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
targets___AssignmentTargetTuple_get_items(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, void *closure)
{
    if (unlikely(self->_items == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'items' of 'AssignmentTargetTuple' undefined");
        return NULL;
    }
    CPy_INCREF(self->_items);
    PyObject *retval = self->_items;
    return retval;
}

static int
targets___AssignmentTargetTuple_set_items(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetTuple' object attribute 'items' cannot be deleted");
        return -1;
    }
    if (self->_items != NULL) {
        CPy_DECREF(self->_items);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_items = tmp;
    return 0;
}

static PyObject *
targets___AssignmentTargetTuple_get_star_idx(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, void *closure)
{
    if (unlikely(self->_star_idx == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'star_idx' of 'AssignmentTargetTuple' undefined");
        return NULL;
    }
    CPy_INCREF(self->_star_idx);
    PyObject *retval = self->_star_idx;
    return retval;
}

static int
targets___AssignmentTargetTuple_set_star_idx(mypyc___irbuild___targets___AssignmentTargetTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AssignmentTargetTuple' object attribute 'star_idx' cannot be deleted");
        return -1;
    }
    if (self->_star_idx != NULL) {
        CPy_DECREF(self->_star_idx);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10585;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10585;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL10585: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_star_idx = tmp;
    return 0;
}
static PyMethodDef targetsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef targetsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.targets",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    targetsmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___targets(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___targets_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___targets_internal);
        return CPyModule_mypyc___irbuild___targets_internal;
    }
    CPyModule_mypyc___irbuild___targets_internal = PyModule_Create(&targetsmodule);
    if (unlikely(CPyModule_mypyc___irbuild___targets_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___targets_internal, "__name__");
    CPyStatic_targets___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___targets_internal);
    if (unlikely(CPyStatic_targets___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_targets_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___targets_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___targets_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_targets___AssignmentTarget);
    Py_CLEAR(CPyType_targets___AssignmentTargetRegister);
    Py_CLEAR(CPyType_targets___AssignmentTargetIndex);
    Py_CLEAR(CPyType_targets___AssignmentTargetAttr);
    Py_CLEAR(CPyType_targets___AssignmentTargetTuple);
    return NULL;
}

char CPyDef_targets___AssignmentTarget_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___targets___AssignmentTargetObject *)cpy_r___mypyc_self__)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_targets___AssignmentTarget_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(PyObject_TypeCheck(obj___mypyc_self__, CPyType_targets___AssignmentTarget)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTarget", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTarget_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__mypyc_defaults_setup", -1, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetRegister_____init__(PyObject *cpy_r_self, PyObject *cpy_r_register) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_register);
    ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_self)->_register = cpy_r_register;
    cpy_r_r0 = ((mypyc___ir___ops___RegisterObject *)cpy_r_register)->_type;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_self)->_type);
    ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_self)->_type = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_targets___AssignmentTargetRegister_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"register", 0};
    PyObject *obj_register;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_register)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_targets___AssignmentTargetRegister))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetRegister", obj_self); 
        goto fail;
    }
    PyObject *arg_register;
    if (likely(Py_TYPE(obj_register) == CPyType_ops___Register))
        arg_register = obj_register;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_register); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetRegister_____init__(arg_self, arg_register);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 19, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetRegister_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r___mypyc_self__)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_targets___AssignmentTargetRegister_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_targets___AssignmentTargetRegister))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetRegister", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetRegister_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__mypyc_defaults_setup", -1, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetIndex_____init__(PyObject *cpy_r_self, PyObject *cpy_r_base, PyObject *cpy_r_index) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPy_INCREF(cpy_r_base);
    ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_self)->_base = cpy_r_base;
    CPy_INCREF(cpy_r_index);
    ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_self)->_index = cpy_r_index;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 32, CPyStatic_targets___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_self)->_type);
    ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_self)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_targets___AssignmentTargetIndex_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"base", "index", 0};
    PyObject *obj_base;
    PyObject *obj_index;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_base, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_targets___AssignmentTargetIndex))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetIndex", obj_self); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(PyObject_TypeCheck(obj_base, CPyType_ops___Value)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_base); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_ops___Value)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_index); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetIndex_____init__(arg_self, arg_base, arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 27, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetIndex_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r___mypyc_self__)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_targets___AssignmentTargetIndex_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_targets___AssignmentTargetIndex))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetIndex", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetIndex_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__mypyc_defaults_setup", -1, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetAttr_____init__(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_attr, char cpy_r_can_borrow) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    if (cpy_r_can_borrow != 2) goto CPyL2;
    cpy_r_can_borrow = 0;
CPyL2: ;
    CPy_INCREF(cpy_r_obj);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_obj = cpy_r_obj;
    CPy_INCREF(cpy_r_attr);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_attr = cpy_r_attr;
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_can_borrow = cpy_r_can_borrow;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_obj)->_type;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypyc___ir___ops___ValueObject *)cpy_r_obj)->_type;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_rtypes___RInstance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/targets.py", "__init__", 42, CPyStatic_targets___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r6)->_class_ir;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_class_ir___ClassIR___has_attr(cpy_r_r7, cpy_r_attr);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 42, CPyStatic_targets___globals);
        goto CPyL18;
    }
    if (!cpy_r_r8) goto CPyL10;
    cpy_r_r9 = ((mypyc___ir___ops___ValueObject *)cpy_r_obj)->_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_rtypes___RInstance))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/targets.py", "__init__", 44, CPyStatic_targets___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r9);
        goto CPyL18;
    }
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_obj_type = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___ops___ValueObject *)cpy_r_obj)->_type;
    CPy_INCREF(cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_rtypes___RInstance))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/targets.py", "__init__", 45, CPyStatic_targets___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r11);
        goto CPyL18;
    }
    cpy_r_r13 = CPyDef_rtypes___RInstance___attr_type(cpy_r_r12, cpy_r_attr);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 45, CPyStatic_targets___globals);
        goto CPyL18;
    }
    CPy_DECREF(((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_type);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_type = cpy_r_r13;
    goto CPyL17;
CPyL10: ;
    cpy_r_r15 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r15 != NULL)) goto CPyL13;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 48, CPyStatic_targets___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL13: ;
    CPy_INCREF(cpy_r_r15);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_obj_type = cpy_r_r15;
    cpy_r_r17 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r17 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 49, CPyStatic_targets___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL16: ;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_type);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_self)->_type = cpy_r_r17;
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
}

PyObject *CPyPy_targets___AssignmentTargetAttr_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "attr", "can_borrow", 0};
    PyObject *obj_obj;
    PyObject *obj_attr;
    PyObject *obj_can_borrow = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|O", "__init__", kwlist, &obj_obj, &obj_attr, &obj_can_borrow)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_targets___AssignmentTargetAttr))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetAttr", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyObject_TypeCheck(obj_obj, CPyType_ops___Value)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_obj); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char arg_can_borrow;
    if (obj_can_borrow == NULL) {
        arg_can_borrow = 2;
    } else if (unlikely(!PyBool_Check(obj_can_borrow))) {
        CPy_TypeError("bool", obj_can_borrow); goto fail;
    } else
        arg_can_borrow = obj_can_borrow == Py_True;
    char retval = CPyDef_targets___AssignmentTargetAttr_____init__(arg_self, arg_obj, arg_attr, arg_can_borrow);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 38, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetAttr_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r___mypyc_self__)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_targets___AssignmentTargetAttr_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_targets___AssignmentTargetAttr))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetAttr", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetAttr_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__mypyc_defaults_setup", -1, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetTuple_____init__(PyObject *cpy_r_self, PyObject *cpy_r_items, PyObject *cpy_r_star_idx) {
    PyObject *cpy_r_r0;
    if (cpy_r_star_idx != NULL) goto CPyL3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_star_idx = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_items);
    ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_self)->_items = cpy_r_items;
    ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_self)->_star_idx = cpy_r_star_idx;
    return 1;
CPyL3: ;
    CPy_INCREF(cpy_r_star_idx);
    goto CPyL2;
}

PyObject *CPyPy_targets___AssignmentTargetTuple_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"items", "star_idx", 0};
    PyObject *obj_items;
    PyObject *obj_star_idx = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_items, &obj_star_idx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_targets___AssignmentTargetTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetTuple", obj_self); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *arg_star_idx;
    if (obj_star_idx == NULL) {
        arg_star_idx = NULL;
        goto __LL10586;
    }
    if (PyLong_Check(obj_star_idx))
        arg_star_idx = obj_star_idx;
    else {
        arg_star_idx = NULL;
    }
    if (arg_star_idx != NULL) goto __LL10586;
    if (obj_star_idx == Py_None)
        arg_star_idx = obj_star_idx;
    else {
        arg_star_idx = NULL;
    }
    if (arg_star_idx != NULL) goto __LL10586;
    CPy_TypeError("int or None", obj_star_idx); 
    goto fail;
__LL10586: ;
    char retval = CPyDef_targets___AssignmentTargetTuple_____init__(arg_self, arg_items, arg_star_idx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__init__", 55, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets___AssignmentTargetTuple_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r___mypyc_self__)->_type = cpy_r_r0;
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_targets___AssignmentTargetTuple_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_targets___AssignmentTargetTuple))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetTuple", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_targets___AssignmentTargetTuple_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/targets.py", "__mypyc_defaults_setup", -1, CPyStatic_targets___globals);
    return NULL;
}

char CPyDef_targets_____top_level__(void) {
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
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
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
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL36;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_targets___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 1, CPyStatic_targets___globals);
        goto CPyL36;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10235]; /* ('Register', 'Value') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_targets___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 3, CPyStatic_targets___globals);
        goto CPyL36;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10236]; /* ('RInstance', 'RType', 'object_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_targets___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 4, CPyStatic_targets___globals);
        goto CPyL36;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r19 = (PyObject *)CPyType_targets___AssignmentTarget_template;
    cpy_r_r20 = CPyType_FromTemplate(cpy_r_r19, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 7, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r21 = CPyDef_targets___AssignmentTarget_trait_vtable_setup();
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL37;
    }
    cpy_r_r22 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r23 = CPyStatics[802]; /* 'type' */
    cpy_r_r24 = PyTuple_Pack(1, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 7, CPyStatic_targets___globals);
        goto CPyL37;
    }
    cpy_r_r25 = PyObject_SetAttr(cpy_r_r20, cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 7, CPyStatic_targets___globals);
        goto CPyL37;
    }
    CPyType_targets___AssignmentTarget = (PyTypeObject *)cpy_r_r20;
    CPy_INCREF(CPyType_targets___AssignmentTarget);
    cpy_r_r27 = CPyStatic_targets___globals;
    cpy_r_r28 = CPyStatics[8093]; /* 'AssignmentTarget' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 7, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r31 = (PyObject *)CPyType_targets___AssignmentTarget;
    cpy_r_r32 = PyTuple_Pack(1, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 13, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r33 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r34 = (PyObject *)CPyType_targets___AssignmentTargetRegister_template;
    cpy_r_r35 = CPyType_FromTemplate(cpy_r_r34, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 13, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r36 = CPyDef_targets___AssignmentTargetRegister_trait_vtable_setup();
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL38;
    }
    cpy_r_r37 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r38 = CPyStatics[8346]; /* 'register' */
    cpy_r_r39 = CPyStatics[802]; /* 'type' */
    cpy_r_r40 = PyTuple_Pack(2, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 13, CPyStatic_targets___globals);
        goto CPyL38;
    }
    cpy_r_r41 = PyObject_SetAttr(cpy_r_r35, cpy_r_r37, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 13, CPyStatic_targets___globals);
        goto CPyL38;
    }
    CPyType_targets___AssignmentTargetRegister = (PyTypeObject *)cpy_r_r35;
    CPy_INCREF(CPyType_targets___AssignmentTargetRegister);
    cpy_r_r43 = CPyStatic_targets___globals;
    cpy_r_r44 = CPyStatics[8096]; /* 'AssignmentTargetRegister' */
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 13, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r47 = (PyObject *)CPyType_targets___AssignmentTarget;
    cpy_r_r48 = PyTuple_Pack(1, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 24, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r49 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r50 = (PyObject *)CPyType_targets___AssignmentTargetIndex_template;
    cpy_r_r51 = CPyType_FromTemplate(cpy_r_r50, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 24, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r52 = CPyDef_targets___AssignmentTargetIndex_trait_vtable_setup();
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL39;
    }
    cpy_r_r53 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r54 = CPyStatics[3966]; /* 'base' */
    cpy_r_r55 = CPyStatics[56]; /* 'index' */
    cpy_r_r56 = CPyStatics[802]; /* 'type' */
    cpy_r_r57 = PyTuple_Pack(3, cpy_r_r54, cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 24, CPyStatic_targets___globals);
        goto CPyL39;
    }
    cpy_r_r58 = PyObject_SetAttr(cpy_r_r51, cpy_r_r53, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 24, CPyStatic_targets___globals);
        goto CPyL39;
    }
    CPyType_targets___AssignmentTargetIndex = (PyTypeObject *)cpy_r_r51;
    CPy_INCREF(CPyType_targets___AssignmentTargetIndex);
    cpy_r_r60 = CPyStatic_targets___globals;
    cpy_r_r61 = CPyStatics[8095]; /* 'AssignmentTargetIndex' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 24, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r64 = (PyObject *)CPyType_targets___AssignmentTarget;
    cpy_r_r65 = PyTuple_Pack(1, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 35, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r66 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r67 = (PyObject *)CPyType_targets___AssignmentTargetAttr_template;
    cpy_r_r68 = CPyType_FromTemplate(cpy_r_r67, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 35, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r69 = CPyDef_targets___AssignmentTargetAttr_trait_vtable_setup();
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL40;
    }
    cpy_r_r70 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r71 = CPyStatics[7838]; /* 'obj' */
    cpy_r_r72 = CPyStatics[2363]; /* 'attr' */
    cpy_r_r73 = CPyStatics[8134]; /* 'can_borrow' */
    cpy_r_r74 = CPyStatics[8601]; /* 'obj_type' */
    cpy_r_r75 = CPyStatics[802]; /* 'type' */
    cpy_r_r76 = PyTuple_Pack(5, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 35, CPyStatic_targets___globals);
        goto CPyL40;
    }
    cpy_r_r77 = PyObject_SetAttr(cpy_r_r68, cpy_r_r70, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 35, CPyStatic_targets___globals);
        goto CPyL40;
    }
    CPyType_targets___AssignmentTargetAttr = (PyTypeObject *)cpy_r_r68;
    CPy_INCREF(CPyType_targets___AssignmentTargetAttr);
    cpy_r_r79 = CPyStatic_targets___globals;
    cpy_r_r80 = CPyStatics[8094]; /* 'AssignmentTargetAttr' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 35, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r83 = (PyObject *)CPyType_targets___AssignmentTarget;
    cpy_r_r84 = PyTuple_Pack(1, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 52, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r85 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r86 = (PyObject *)CPyType_targets___AssignmentTargetTuple_template;
    cpy_r_r87 = CPyType_FromTemplate(cpy_r_r86, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 52, CPyStatic_targets___globals);
        goto CPyL36;
    }
    cpy_r_r88 = CPyDef_targets___AssignmentTargetTuple_trait_vtable_setup();
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", -1, CPyStatic_targets___globals);
        goto CPyL41;
    }
    cpy_r_r89 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r90 = CPyStatics[219]; /* 'items' */
    cpy_r_r91 = CPyStatics[8602]; /* 'star_idx' */
    cpy_r_r92 = CPyStatics[802]; /* 'type' */
    cpy_r_r93 = PyTuple_Pack(3, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 52, CPyStatic_targets___globals);
        goto CPyL41;
    }
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r87, cpy_r_r89, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 52, CPyStatic_targets___globals);
        goto CPyL41;
    }
    CPyType_targets___AssignmentTargetTuple = (PyTypeObject *)cpy_r_r87;
    CPy_INCREF(CPyType_targets___AssignmentTargetTuple);
    cpy_r_r96 = CPyStatic_targets___globals;
    cpy_r_r97 = CPyStatics[8097]; /* 'AssignmentTargetTuple' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/irbuild/targets.py", "<module>", 52, CPyStatic_targets___globals);
        goto CPyL36;
    }
    return 1;
CPyL36: ;
    cpy_r_r100 = 2;
    return cpy_r_r100;
CPyL37: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL36;
}
