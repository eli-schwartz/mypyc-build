#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *rtypes___RType_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RType(void);

static PyObject *
rtypes___RType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RType) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return rtypes___RType_setup(type);
}

static int
rtypes___RType_traverse(mypyc___ir___rtypes___RTypeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    return 0;
}

static int
rtypes___RType_clear(mypyc___ir___rtypes___RTypeObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    return 0;
}

static void
rtypes___RType_dealloc(mypyc___ir___rtypes___RTypeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RType_dealloc)
    rtypes___RType_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RType_vtable[6];
static bool
CPyDef_rtypes___RType_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RType_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RType___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RType_____str__,
        (CPyVTableItem)CPyDef_rtypes___RType_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RType___serialize,
        (CPyVTableItem)CPyDef_rtypes___RType_____mypyc_defaults_setup,
    };
    memcpy(rtypes___RType_vtable, rtypes___RType_vtable_scratch, sizeof(rtypes___RType_vtable));
    return 1;
}

static PyObject *
rtypes___RType_get_name(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set_name(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RType_get_is_unboxed(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set_is_unboxed(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RType_get_c_undefined(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set_c_undefined(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RType_get_is_refcounted(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set_is_refcounted(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RType_get__ctype(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set__ctype(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RType_get_error_overlap(mypyc___ir___rtypes___RTypeObject *self, void *closure);
static int
rtypes___RType_set_error_overlap(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RType_getseters[] = {
    {"name",
     (getter)rtypes___RType_get_name, (setter)rtypes___RType_set_name,
     NULL, NULL},
    {"is_unboxed",
     (getter)rtypes___RType_get_is_unboxed, (setter)rtypes___RType_set_is_unboxed,
     NULL, NULL},
    {"c_undefined",
     (getter)rtypes___RType_get_c_undefined, (setter)rtypes___RType_set_c_undefined,
     NULL, NULL},
    {"is_refcounted",
     (getter)rtypes___RType_get_is_refcounted, (setter)rtypes___RType_set_is_refcounted,
     NULL, NULL},
    {"_ctype",
     (getter)rtypes___RType_get__ctype, (setter)rtypes___RType_set__ctype,
     NULL, NULL},
    {"error_overlap",
     (getter)rtypes___RType_get_error_overlap, (setter)rtypes___RType_set_error_overlap,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RType_methods[] = {
    {"accept",
     (PyCFunction)CPyPy_rtypes___RType___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"short_name",
     (PyCFunction)CPyPy_rtypes___RType___short_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_rtypes___RType_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RType_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RType___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RType_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RType_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RType",
    .tp_new = rtypes___RType_new,
    .tp_dealloc = (destructor)rtypes___RType_dealloc,
    .tp_traverse = (traverseproc)rtypes___RType_traverse,
    .tp_clear = (inquiry)rtypes___RType_clear,
    .tp_getset = rtypes___RType_getseters,
    .tp_methods = rtypes___RType_methods,
    .tp_str = CPyDef_rtypes___RType_____str__,
    .tp_repr = CPyDef_rtypes___RType_____repr__,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RTypeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RType_template = &CPyType_rtypes___RType_template_;

static PyObject *
rtypes___RType_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RTypeObject *self;
    self = (mypyc___ir___rtypes___RTypeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RType_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    if (CPyDef_rtypes___RType_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RType(void)
{
    PyObject *self = rtypes___RType_setup(CPyType_rtypes___RType);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
rtypes___RType_get_name(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'RType' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
rtypes___RType_set_name(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
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
    self->_name = tmp;
    return 0;
}

static PyObject *
rtypes___RType_get_is_unboxed(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    PyObject *retval = self->_is_unboxed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RType_set_is_unboxed(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute 'is_unboxed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_unboxed = tmp;
    return 0;
}

static PyObject *
rtypes___RType_get_c_undefined(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    if (unlikely(self->_c_undefined == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'c_undefined' of 'RType' undefined");
        return NULL;
    }
    CPy_INCREF(self->_c_undefined);
    PyObject *retval = self->_c_undefined;
    return retval;
}

static int
rtypes___RType_set_c_undefined(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute 'c_undefined' cannot be deleted");
        return -1;
    }
    if (self->_c_undefined != NULL) {
        CPy_DECREF(self->_c_undefined);
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
    self->_c_undefined = tmp;
    return 0;
}

static PyObject *
rtypes___RType_get_is_refcounted(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    PyObject *retval = self->_is_refcounted ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RType_set_is_refcounted(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute 'is_refcounted' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_refcounted = tmp;
    return 0;
}

static PyObject *
rtypes___RType_get__ctype(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    if (unlikely(self->__ctype == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_ctype' of 'RType' undefined");
        return NULL;
    }
    CPy_INCREF(self->__ctype);
    PyObject *retval = self->__ctype;
    return retval;
}

static int
rtypes___RType_set__ctype(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute '_ctype' cannot be deleted");
        return -1;
    }
    if (self->__ctype != NULL) {
        CPy_DECREF(self->__ctype);
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
    self->__ctype = tmp;
    return 0;
}

static PyObject *
rtypes___RType_get_error_overlap(mypyc___ir___rtypes___RTypeObject *self, void *closure)
{
    PyObject *retval = self->_error_overlap ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RType_set_error_overlap(mypyc___ir___rtypes___RTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RType' object attribute 'error_overlap' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_error_overlap = tmp;
    return 0;
}

PyMemberDef rtypes___RTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___ir___rtypes___RTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___ir___rtypes___RTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *rtypes___RTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RTypeVisitor(void);

static PyObject *
rtypes___RTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return rtypes___RTypeVisitor_setup(type);
}

static int
rtypes___RTypeVisitor_traverse(mypyc___ir___rtypes___RTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___ir___rtypes___RTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___rtypes___RTypeVisitorObject))));
    return 0;
}

static int
rtypes___RTypeVisitor_clear(mypyc___ir___rtypes___RTypeVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___ir___rtypes___RTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___rtypes___RTypeVisitorObject))));
    return 0;
}

static void
rtypes___RTypeVisitor_dealloc(mypyc___ir___rtypes___RTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RTypeVisitor_dealloc)
    rtypes___RTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RTypeVisitor_vtable[7];
static bool
CPyDef_rtypes___RTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RTypeVisitor_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rprimitive,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rinstance,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_runion,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rtuple,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rstruct,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rarray,
        (CPyVTableItem)CPyDef_rtypes___RTypeVisitor___visit_rvoid,
    };
    memcpy(rtypes___RTypeVisitor_vtable, rtypes___RTypeVisitor_vtable_scratch, sizeof(rtypes___RTypeVisitor_vtable));
    return 1;
}


static PyGetSetDef rtypes___RTypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RTypeVisitor_methods[] = {
    {"visit_rprimitive",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rprimitive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rinstance",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rinstance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_runion",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_runion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rtuple",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rstruct",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rstruct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rarray",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rarray,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rvoid",
     (PyCFunction)CPyPy_rtypes___RTypeVisitor___visit_rvoid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RTypeVisitor",
    .tp_new = rtypes___RTypeVisitor_new,
    .tp_dealloc = (destructor)rtypes___RTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)rtypes___RTypeVisitor_traverse,
    .tp_clear = (inquiry)rtypes___RTypeVisitor_clear,
    .tp_getset = rtypes___RTypeVisitor_getseters,
    .tp_methods = rtypes___RTypeVisitor_methods,
    .tp_members = rtypes___RTypeVisitor_members,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___ir___rtypes___RTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___ir___rtypes___RTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RTypeVisitor_template = &CPyType_rtypes___RTypeVisitor_template_;

static PyObject *
rtypes___RTypeVisitor_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RTypeVisitorObject *self;
    self = (mypyc___ir___rtypes___RTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RTypeVisitor_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RTypeVisitor(void)
{
    PyObject *self = rtypes___RTypeVisitor_setup(CPyType_rtypes___RTypeVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static Py_ssize_t CPyDunder___hash__rtypes___RVoid(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RVoid_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static PyObject *CPyDunder__RichCompare_rtypes___RVoid(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RVoid))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RVoid_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RVoid))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RVoid_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RVoid_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RVoid(void);

static PyObject *
rtypes___RVoid_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RVoid) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return rtypes___RVoid_setup(type);
}

static int
rtypes___RVoid_traverse(mypyc___ir___rtypes___RVoidObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_name);
    Py_VISIT(self->_ctype);
    return 0;
}

static int
rtypes___RVoid_clear(mypyc___ir___rtypes___RVoidObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_ctype);
    return 0;
}

static void
rtypes___RVoid_dealloc(mypyc___ir___rtypes___RVoidObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RVoid_dealloc)
    rtypes___RVoid_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RVoid_vtable[12];
static bool
CPyDef_rtypes___RVoid_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RVoid_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RVoid___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RType_____str__,
        (CPyVTableItem)CPyDef_rtypes___RType_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RVoid___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RVoid_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RVoid___accept,
        (CPyVTableItem)CPyDef_rtypes___RVoid___serialize,
        (CPyVTableItem)CPyDef_rtypes___RVoid_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RVoid_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RVoid_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RVoid_____ne__,
    };
    memcpy(rtypes___RVoid_vtable, rtypes___RVoid_vtable_scratch, sizeof(rtypes___RVoid_vtable));
    return 1;
}

static PyObject *
rtypes___RVoid_get_is_unboxed(mypyc___ir___rtypes___RVoidObject *self, void *closure);
static int
rtypes___RVoid_set_is_unboxed(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RVoid_get_name(mypyc___ir___rtypes___RVoidObject *self, void *closure);
static int
rtypes___RVoid_set_name(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RVoid_get_ctype(mypyc___ir___rtypes___RVoidObject *self, void *closure);
static int
rtypes___RVoid_set_ctype(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RVoid_getseters[] = {
    {"is_unboxed",
     (getter)rtypes___RVoid_get_is_unboxed, (setter)rtypes___RVoid_set_is_unboxed,
     NULL, NULL},
    {"name",
     (getter)rtypes___RVoid_get_name, (setter)rtypes___RVoid_set_name,
     NULL, NULL},
    {"ctype",
     (getter)rtypes___RVoid_get_ctype, (setter)rtypes___RVoid_set_ctype,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RVoid_methods[] = {
    {"accept",
     (PyCFunction)CPyPy_rtypes___RVoid___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RVoid___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RVoid_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RVoid_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RVoid_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RVoid_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RVoid_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RVoid",
    .tp_new = rtypes___RVoid_new,
    .tp_dealloc = (destructor)rtypes___RVoid_dealloc,
    .tp_traverse = (traverseproc)rtypes___RVoid_traverse,
    .tp_clear = (inquiry)rtypes___RVoid_clear,
    .tp_getset = rtypes___RVoid_getseters,
    .tp_methods = rtypes___RVoid_methods,
    .tp_hash = CPyDunder___hash__rtypes___RVoid,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RVoid,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RVoidObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RVoid_template = &CPyType_rtypes___RVoid_template_;

static PyObject *
rtypes___RVoid_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RVoidObject *self;
    self = (mypyc___ir___rtypes___RVoidObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RVoid_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_is_unboxed = 2;
    if (CPyDef_rtypes___RVoid_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RVoid(void)
{
    PyObject *self = rtypes___RVoid_setup(CPyType_rtypes___RVoid);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
rtypes___RVoid_get_is_unboxed(mypyc___ir___rtypes___RVoidObject *self, void *closure)
{
    PyObject *retval = self->_is_unboxed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RVoid_set_is_unboxed(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RVoid' object attribute 'is_unboxed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_unboxed = tmp;
    return 0;
}

static PyObject *
rtypes___RVoid_get_name(mypyc___ir___rtypes___RVoidObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'RVoid' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
rtypes___RVoid_set_name(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RVoid' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
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
    self->_name = tmp;
    return 0;
}

static PyObject *
rtypes___RVoid_get_ctype(mypyc___ir___rtypes___RVoidObject *self, void *closure)
{
    if (unlikely(self->_ctype == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ctype' of 'RVoid' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ctype);
    PyObject *retval = self->_ctype;
    return retval;
}

static int
rtypes___RVoid_set_ctype(mypyc___ir___rtypes___RVoidObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RVoid' object attribute 'ctype' cannot be deleted");
        return -1;
    }
    if (self->_ctype != NULL) {
        CPy_DECREF(self->_ctype);
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
    self->_ctype = tmp;
    return 0;
}

static Py_ssize_t CPyDunder___hash__rtypes___RPrimitive(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RPrimitive_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RPrimitive_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RPrimitive(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RPrimitive))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RPrimitive_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RPrimitive))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RPrimitive_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RPrimitive_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RPrimitive(PyObject *cpy_r_name, char cpy_r_is_unboxed, char cpy_r_is_refcounted, char cpy_r_is_native_int, char cpy_r_is_signed, PyObject *cpy_r_ctype, CPyTagged cpy_r_size, char cpy_r_error_overlap);

static PyObject *
rtypes___RPrimitive_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RPrimitive) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RPrimitive_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RPrimitive_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RPrimitive_traverse(mypyc___ir___rtypes___RPrimitiveObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    if (CPyTagged_CheckLong(self->_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_size));
    }
    return 0;
}

static int
rtypes___RPrimitive_clear(mypyc___ir___rtypes___RPrimitiveObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    if (CPyTagged_CheckLong(self->_size)) {
        CPyTagged __tmp = self->_size;
        self->_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
rtypes___RPrimitive_dealloc(mypyc___ir___rtypes___RPrimitiveObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RPrimitive_dealloc)
    rtypes___RPrimitive_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RPrimitive_vtable[14];
static bool
CPyDef_rtypes___RPrimitive_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RPrimitive_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RPrimitive___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RType_____str__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____init__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive___accept,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive___serialize,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RPrimitive_____ne__,
    };
    memcpy(rtypes___RPrimitive_vtable, rtypes___RPrimitive_vtable_scratch, sizeof(rtypes___RPrimitive_vtable));
    return 1;
}

static PyObject *
rtypes___RPrimitive_get_is_native_int(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure);
static int
rtypes___RPrimitive_set_is_native_int(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RPrimitive_get_is_signed(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure);
static int
rtypes___RPrimitive_set_is_signed(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RPrimitive_get_size(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure);
static int
rtypes___RPrimitive_set_size(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RPrimitive_getseters[] = {
    {"is_native_int",
     (getter)rtypes___RPrimitive_get_is_native_int, (setter)rtypes___RPrimitive_set_is_native_int,
     NULL, NULL},
    {"is_signed",
     (getter)rtypes___RPrimitive_get_is_signed, (setter)rtypes___RPrimitive_set_is_signed,
     NULL, NULL},
    {"size",
     (getter)rtypes___RPrimitive_get_size, (setter)rtypes___RPrimitive_set_size,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RPrimitive_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RPrimitive___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RPrimitive___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RPrimitive_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RPrimitive_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RPrimitive",
    .tp_new = rtypes___RPrimitive_new,
    .tp_dealloc = (destructor)rtypes___RPrimitive_dealloc,
    .tp_traverse = (traverseproc)rtypes___RPrimitive_traverse,
    .tp_clear = (inquiry)rtypes___RPrimitive_clear,
    .tp_getset = rtypes___RPrimitive_getseters,
    .tp_methods = rtypes___RPrimitive_methods,
    .tp_hash = CPyDunder___hash__rtypes___RPrimitive,
    .tp_init = rtypes___RPrimitive_init,
    .tp_repr = CPyDef_rtypes___RPrimitive_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RPrimitive,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RPrimitiveObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RPrimitive_template = &CPyType_rtypes___RPrimitive_template_;

static PyObject *
rtypes___RPrimitive_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RPrimitiveObject *self;
    self = (mypyc___ir___rtypes___RPrimitiveObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RPrimitive_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_is_native_int = 2;
    self->_is_signed = 2;
    self->_size = CPY_INT_TAG;
    if (CPyDef_rtypes___RPrimitive_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RPrimitive(PyObject *cpy_r_name, char cpy_r_is_unboxed, char cpy_r_is_refcounted, char cpy_r_is_native_int, char cpy_r_is_signed, PyObject *cpy_r_ctype, CPyTagged cpy_r_size, char cpy_r_error_overlap)
{
    PyObject *self = rtypes___RPrimitive_setup(CPyType_rtypes___RPrimitive);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RPrimitive_____init__(self, cpy_r_name, cpy_r_is_unboxed, cpy_r_is_refcounted, cpy_r_is_native_int, cpy_r_is_signed, cpy_r_ctype, cpy_r_size, cpy_r_error_overlap);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RPrimitive_get_is_native_int(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure)
{
    if (unlikely(self->_is_native_int == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_native_int' of 'RPrimitive' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_native_int ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RPrimitive_set_is_native_int(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RPrimitive' object attribute 'is_native_int' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_native_int = tmp;
    return 0;
}

static PyObject *
rtypes___RPrimitive_get_is_signed(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure)
{
    if (unlikely(self->_is_signed == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_signed' of 'RPrimitive' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_signed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RPrimitive_set_is_signed(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RPrimitive' object attribute 'is_signed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_signed = tmp;
    return 0;
}

static PyObject *
rtypes___RPrimitive_get_size(mypyc___ir___rtypes___RPrimitiveObject *self, void *closure)
{
    if (unlikely(self->_size == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'size' of 'RPrimitive' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_size);
    PyObject *retval = CPyTagged_StealAsObject(self->_size);
    return retval;
}

static int
rtypes___RPrimitive_set_size(mypyc___ir___rtypes___RPrimitiveObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RPrimitive' object attribute 'size' cannot be deleted");
        return -1;
    }
    if (self->_size != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_size);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_size = tmp;
    return 0;
}

PyMemberDef rtypes___TupleNameVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___ir___rtypes___TupleNameVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___ir___rtypes___TupleNameVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *rtypes___TupleNameVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___TupleNameVisitor(void);

static PyObject *
rtypes___TupleNameVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___TupleNameVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return rtypes___TupleNameVisitor_setup(type);
}

static int
rtypes___TupleNameVisitor_traverse(mypyc___ir___rtypes___TupleNameVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___ir___rtypes___TupleNameVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___rtypes___TupleNameVisitorObject))));
    return 0;
}

static int
rtypes___TupleNameVisitor_clear(mypyc___ir___rtypes___TupleNameVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___ir___rtypes___TupleNameVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___rtypes___TupleNameVisitorObject))));
    return 0;
}

static void
rtypes___TupleNameVisitor_dealloc(mypyc___ir___rtypes___TupleNameVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___TupleNameVisitor_dealloc)
    rtypes___TupleNameVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___TupleNameVisitor_vtable[14];
static bool
CPyDef_rtypes___TupleNameVisitor_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___TupleNameVisitor_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rprimitive__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rinstance__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_runion__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rtuple__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rstruct__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rarray__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rvoid__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rinstance,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_runion,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rprimitive,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rtuple,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rstruct,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rarray,
        (CPyVTableItem)CPyDef_rtypes___TupleNameVisitor___visit_rvoid,
    };
    memcpy(rtypes___TupleNameVisitor_vtable, rtypes___TupleNameVisitor_vtable_scratch, sizeof(rtypes___TupleNameVisitor_vtable));
    return 1;
}


static PyGetSetDef rtypes___TupleNameVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___TupleNameVisitor_methods[] = {
    {"visit_rinstance",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rinstance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_runion",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_runion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rprimitive",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rprimitive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rtuple",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rstruct",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rstruct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rarray",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rarray,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rvoid",
     (PyCFunction)CPyPy_rtypes___TupleNameVisitor___visit_rvoid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___TupleNameVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TupleNameVisitor",
    .tp_new = rtypes___TupleNameVisitor_new,
    .tp_dealloc = (destructor)rtypes___TupleNameVisitor_dealloc,
    .tp_traverse = (traverseproc)rtypes___TupleNameVisitor_traverse,
    .tp_clear = (inquiry)rtypes___TupleNameVisitor_clear,
    .tp_getset = rtypes___TupleNameVisitor_getseters,
    .tp_methods = rtypes___TupleNameVisitor_methods,
    .tp_members = rtypes___TupleNameVisitor_members,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___TupleNameVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___ir___rtypes___TupleNameVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___ir___rtypes___TupleNameVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___TupleNameVisitor_template = &CPyType_rtypes___TupleNameVisitor_template_;

static PyObject *
rtypes___TupleNameVisitor_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___TupleNameVisitorObject *self;
    self = (mypyc___ir___rtypes___TupleNameVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___TupleNameVisitor_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___TupleNameVisitor(void)
{
    PyObject *self = rtypes___TupleNameVisitor_setup(CPyType_rtypes___TupleNameVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static Py_ssize_t CPyDunder___hash__rtypes___RTuple(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RTuple_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RTuple_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RTuple(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RTuple))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RTuple_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RTuple))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RTuple_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RTuple_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RTuple(PyObject *cpy_r_types);

static PyObject *
rtypes___RTuple_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RTuple) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RTuple_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RTuple_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RTuple_traverse(mypyc___ir___rtypes___RTupleObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_types);
    Py_VISIT(self->_unique_id);
    Py_VISIT(self->_struct_name);
    return 0;
}

static int
rtypes___RTuple_clear(mypyc___ir___rtypes___RTupleObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_types);
    Py_CLEAR(self->_unique_id);
    Py_CLEAR(self->_struct_name);
    return 0;
}

static void
rtypes___RTuple_dealloc(mypyc___ir___rtypes___RTupleObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RTuple_dealloc)
    rtypes___RTuple_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RTuple_vtable[16];
static bool
CPyDef_rtypes___RTuple_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RTuple_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RTuple___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____str__,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RTuple___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____init__,
        (CPyVTableItem)CPyDef_rtypes___RTuple___accept,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____str__,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RTuple___serialize,
        (CPyVTableItem)CPyDef_rtypes___RTuple___deserialize,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RTuple_____ne__,
    };
    memcpy(rtypes___RTuple_vtable, rtypes___RTuple_vtable_scratch, sizeof(rtypes___RTuple_vtable));
    return 1;
}

static PyObject *
rtypes___RTuple_get_is_unboxed(mypyc___ir___rtypes___RTupleObject *self, void *closure);
static int
rtypes___RTuple_set_is_unboxed(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RTuple_get_types(mypyc___ir___rtypes___RTupleObject *self, void *closure);
static int
rtypes___RTuple_set_types(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RTuple_get_unique_id(mypyc___ir___rtypes___RTupleObject *self, void *closure);
static int
rtypes___RTuple_set_unique_id(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RTuple_get_struct_name(mypyc___ir___rtypes___RTupleObject *self, void *closure);
static int
rtypes___RTuple_set_struct_name(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RTuple_getseters[] = {
    {"is_unboxed",
     (getter)rtypes___RTuple_get_is_unboxed, (setter)rtypes___RTuple_set_is_unboxed,
     NULL, NULL},
    {"types",
     (getter)rtypes___RTuple_get_types, (setter)rtypes___RTuple_set_types,
     NULL, NULL},
    {"unique_id",
     (getter)rtypes___RTuple_get_unique_id, (setter)rtypes___RTuple_set_unique_id,
     NULL, NULL},
    {"struct_name",
     (getter)rtypes___RTuple_get_struct_name, (setter)rtypes___RTuple_set_struct_name,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RTuple_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RTuple_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RTuple___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_rtypes___RTuple_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RTuple_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RTuple_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RTuple_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RTuple___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_rtypes___RTuple___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RTuple_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RTuple_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RTuple_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RTuple",
    .tp_new = rtypes___RTuple_new,
    .tp_dealloc = (destructor)rtypes___RTuple_dealloc,
    .tp_traverse = (traverseproc)rtypes___RTuple_traverse,
    .tp_clear = (inquiry)rtypes___RTuple_clear,
    .tp_getset = rtypes___RTuple_getseters,
    .tp_methods = rtypes___RTuple_methods,
    .tp_hash = CPyDunder___hash__rtypes___RTuple,
    .tp_init = rtypes___RTuple_init,
    .tp_str = CPyDef_rtypes___RTuple_____str__,
    .tp_repr = CPyDef_rtypes___RTuple_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RTuple,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RTupleObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RTuple_template = &CPyType_rtypes___RTuple_template_;

static PyObject *
rtypes___RTuple_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RTupleObject *self;
    self = (mypyc___ir___rtypes___RTupleObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RTuple_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_is_unboxed = 2;
    if (CPyDef_rtypes___RTuple_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RTuple(PyObject *cpy_r_types)
{
    PyObject *self = rtypes___RTuple_setup(CPyType_rtypes___RTuple);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RTuple_____init__(self, cpy_r_types);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RTuple_get_is_unboxed(mypyc___ir___rtypes___RTupleObject *self, void *closure)
{
    PyObject *retval = self->_is_unboxed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RTuple_set_is_unboxed(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RTuple' object attribute 'is_unboxed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_unboxed = tmp;
    return 0;
}

static PyObject *
rtypes___RTuple_get_types(mypyc___ir___rtypes___RTupleObject *self, void *closure)
{
    if (unlikely(self->_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'types' of 'RTuple' undefined");
        return NULL;
    }
    CPy_INCREF(self->_types);
    PyObject *retval = self->_types;
    return retval;
}

static int
rtypes___RTuple_set_types(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RTuple' object attribute 'types' cannot be deleted");
        return -1;
    }
    if (self->_types != NULL) {
        CPy_DECREF(self->_types);
    }
    PyObject * tmp;
    if (likely(PyTuple_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("tuple", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_types = tmp;
    return 0;
}

static PyObject *
rtypes___RTuple_get_unique_id(mypyc___ir___rtypes___RTupleObject *self, void *closure)
{
    if (unlikely(self->_unique_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'unique_id' of 'RTuple' undefined");
        return NULL;
    }
    CPy_INCREF(self->_unique_id);
    PyObject *retval = self->_unique_id;
    return retval;
}

static int
rtypes___RTuple_set_unique_id(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RTuple' object attribute 'unique_id' cannot be deleted");
        return -1;
    }
    if (self->_unique_id != NULL) {
        CPy_DECREF(self->_unique_id);
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
    self->_unique_id = tmp;
    return 0;
}

static PyObject *
rtypes___RTuple_get_struct_name(mypyc___ir___rtypes___RTupleObject *self, void *closure)
{
    if (unlikely(self->_struct_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'struct_name' of 'RTuple' undefined");
        return NULL;
    }
    CPy_INCREF(self->_struct_name);
    PyObject *retval = self->_struct_name;
    return retval;
}

static int
rtypes___RTuple_set_struct_name(mypyc___ir___rtypes___RTupleObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RTuple' object attribute 'struct_name' cannot be deleted");
        return -1;
    }
    if (self->_struct_name != NULL) {
        CPy_DECREF(self->_struct_name);
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
    self->_struct_name = tmp;
    return 0;
}

static Py_ssize_t CPyDunder___hash__rtypes___RStruct(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RStruct_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RStruct_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RStruct(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RStruct))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RStruct_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RStruct))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RStruct_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RStruct_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RStruct(PyObject *cpy_r_name, PyObject *cpy_r_names, PyObject *cpy_r_types);

static PyObject *
rtypes___RStruct_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RStruct) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RStruct_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RStruct_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RStruct_traverse(mypyc___ir___rtypes___RStructObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_names);
    Py_VISIT(self->_types);
    Py_VISIT(self->_offsets);
    if (CPyTagged_CheckLong(self->_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_size));
    }
    return 0;
}

static int
rtypes___RStruct_clear(mypyc___ir___rtypes___RStructObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_types);
    Py_CLEAR(self->_offsets);
    if (CPyTagged_CheckLong(self->_size)) {
        CPyTagged __tmp = self->_size;
        self->_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
rtypes___RStruct_dealloc(mypyc___ir___rtypes___RStructObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RStruct_dealloc)
    rtypes___RStruct_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RStruct_vtable[16];
static bool
CPyDef_rtypes___RStruct_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RStruct_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RStruct___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____str__,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RStruct___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____init__,
        (CPyVTableItem)CPyDef_rtypes___RStruct___accept,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____str__,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RStruct___serialize,
        (CPyVTableItem)CPyDef_rtypes___RStruct___deserialize,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RStruct_____ne__,
    };
    memcpy(rtypes___RStruct_vtable, rtypes___RStruct_vtable_scratch, sizeof(rtypes___RStruct_vtable));
    return 1;
}

static PyObject *
rtypes___RStruct_get_names(mypyc___ir___rtypes___RStructObject *self, void *closure);
static int
rtypes___RStruct_set_names(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RStruct_get_types(mypyc___ir___rtypes___RStructObject *self, void *closure);
static int
rtypes___RStruct_set_types(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RStruct_get_offsets(mypyc___ir___rtypes___RStructObject *self, void *closure);
static int
rtypes___RStruct_set_offsets(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RStruct_get_size(mypyc___ir___rtypes___RStructObject *self, void *closure);
static int
rtypes___RStruct_set_size(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RStruct_getseters[] = {
    {"names",
     (getter)rtypes___RStruct_get_names, (setter)rtypes___RStruct_set_names,
     NULL, NULL},
    {"types",
     (getter)rtypes___RStruct_get_types, (setter)rtypes___RStruct_set_types,
     NULL, NULL},
    {"offsets",
     (getter)rtypes___RStruct_get_offsets, (setter)rtypes___RStruct_set_offsets,
     NULL, NULL},
    {"size",
     (getter)rtypes___RStruct_get_size, (setter)rtypes___RStruct_set_size,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RStruct_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RStruct_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RStruct___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_rtypes___RStruct_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RStruct_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RStruct_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RStruct_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RStruct___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_rtypes___RStruct___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RStruct_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RStruct_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RStruct_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RStruct",
    .tp_new = rtypes___RStruct_new,
    .tp_dealloc = (destructor)rtypes___RStruct_dealloc,
    .tp_traverse = (traverseproc)rtypes___RStruct_traverse,
    .tp_clear = (inquiry)rtypes___RStruct_clear,
    .tp_getset = rtypes___RStruct_getseters,
    .tp_methods = rtypes___RStruct_methods,
    .tp_hash = CPyDunder___hash__rtypes___RStruct,
    .tp_init = rtypes___RStruct_init,
    .tp_str = CPyDef_rtypes___RStruct_____str__,
    .tp_repr = CPyDef_rtypes___RStruct_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RStruct,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RStructObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RStruct_template = &CPyType_rtypes___RStruct_template_;

static PyObject *
rtypes___RStruct_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RStructObject *self;
    self = (mypyc___ir___rtypes___RStructObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RStruct_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_size = CPY_INT_TAG;
    if (CPyDef_rtypes___RStruct_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RStruct(PyObject *cpy_r_name, PyObject *cpy_r_names, PyObject *cpy_r_types)
{
    PyObject *self = rtypes___RStruct_setup(CPyType_rtypes___RStruct);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RStruct_____init__(self, cpy_r_name, cpy_r_names, cpy_r_types);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RStruct_get_names(mypyc___ir___rtypes___RStructObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'RStruct' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
rtypes___RStruct_set_names(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RStruct' object attribute 'names' cannot be deleted");
        return -1;
    }
    if (self->_names != NULL) {
        CPy_DECREF(self->_names);
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
    self->_names = tmp;
    return 0;
}

static PyObject *
rtypes___RStruct_get_types(mypyc___ir___rtypes___RStructObject *self, void *closure)
{
    if (unlikely(self->_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'types' of 'RStruct' undefined");
        return NULL;
    }
    CPy_INCREF(self->_types);
    PyObject *retval = self->_types;
    return retval;
}

static int
rtypes___RStruct_set_types(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RStruct' object attribute 'types' cannot be deleted");
        return -1;
    }
    if (self->_types != NULL) {
        CPy_DECREF(self->_types);
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
    self->_types = tmp;
    return 0;
}

static PyObject *
rtypes___RStruct_get_offsets(mypyc___ir___rtypes___RStructObject *self, void *closure)
{
    if (unlikely(self->_offsets == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'offsets' of 'RStruct' undefined");
        return NULL;
    }
    CPy_INCREF(self->_offsets);
    PyObject *retval = self->_offsets;
    return retval;
}

static int
rtypes___RStruct_set_offsets(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RStruct' object attribute 'offsets' cannot be deleted");
        return -1;
    }
    if (self->_offsets != NULL) {
        CPy_DECREF(self->_offsets);
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
    self->_offsets = tmp;
    return 0;
}

static PyObject *
rtypes___RStruct_get_size(mypyc___ir___rtypes___RStructObject *self, void *closure)
{
    if (unlikely(self->_size == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'size' of 'RStruct' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_size);
    PyObject *retval = CPyTagged_StealAsObject(self->_size);
    return retval;
}

static int
rtypes___RStruct_set_size(mypyc___ir___rtypes___RStructObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RStruct' object attribute 'size' cannot be deleted");
        return -1;
    }
    if (self->_size != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_size);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_size = tmp;
    return 0;
}

static Py_ssize_t CPyDunder___hash__rtypes___RInstance(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RInstance_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RInstance_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RInstance(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RInstance))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RInstance_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RInstance))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RInstance_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RInstance_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RInstance(PyObject *cpy_r_class_ir);

static PyObject *
rtypes___RInstance_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RInstance) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RInstance_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RInstance_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RInstance_traverse(mypyc___ir___rtypes___RInstanceObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_class_ir);
    return 0;
}

static int
rtypes___RInstance_clear(mypyc___ir___rtypes___RInstanceObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_class_ir);
    return 0;
}

static void
rtypes___RInstance_dealloc(mypyc___ir___rtypes___RInstanceObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RInstance_dealloc)
    rtypes___RInstance_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RInstance_vtable[19];
static bool
CPyDef_rtypes___RInstance_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RInstance_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RInstance___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RType_____str__,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RInstance___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____init__,
        (CPyVTableItem)CPyDef_rtypes___RInstance___accept,
        (CPyVTableItem)CPyDef_rtypes___RInstance___struct_name,
        (CPyVTableItem)CPyDef_rtypes___RInstance___getter_index,
        (CPyVTableItem)CPyDef_rtypes___RInstance___setter_index,
        (CPyVTableItem)CPyDef_rtypes___RInstance___method_index,
        (CPyVTableItem)CPyDef_rtypes___RInstance___attr_type,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RInstance___serialize,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RInstance_____ne__,
    };
    memcpy(rtypes___RInstance_vtable, rtypes___RInstance_vtable_scratch, sizeof(rtypes___RInstance_vtable));
    return 1;
}

static PyObject *
rtypes___RInstance_get_is_unboxed(mypyc___ir___rtypes___RInstanceObject *self, void *closure);
static int
rtypes___RInstance_set_is_unboxed(mypyc___ir___rtypes___RInstanceObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RInstance_get_class_ir(mypyc___ir___rtypes___RInstanceObject *self, void *closure);
static int
rtypes___RInstance_set_class_ir(mypyc___ir___rtypes___RInstanceObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RInstance_getseters[] = {
    {"is_unboxed",
     (getter)rtypes___RInstance_get_is_unboxed, (setter)rtypes___RInstance_set_is_unboxed,
     NULL, NULL},
    {"class_ir",
     (getter)rtypes___RInstance_get_class_ir, (setter)rtypes___RInstance_set_class_ir,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RInstance_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RInstance_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RInstance___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"struct_name",
     (PyCFunction)CPyPy_rtypes___RInstance___struct_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"getter_index",
     (PyCFunction)CPyPy_rtypes___RInstance___getter_index,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"setter_index",
     (PyCFunction)CPyPy_rtypes___RInstance___setter_index,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"method_index",
     (PyCFunction)CPyPy_rtypes___RInstance___method_index,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attr_type",
     (PyCFunction)CPyPy_rtypes___RInstance___attr_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RInstance_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RInstance_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RInstance_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RInstance___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RInstance_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RInstance_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RInstance_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RInstance",
    .tp_new = rtypes___RInstance_new,
    .tp_dealloc = (destructor)rtypes___RInstance_dealloc,
    .tp_traverse = (traverseproc)rtypes___RInstance_traverse,
    .tp_clear = (inquiry)rtypes___RInstance_clear,
    .tp_getset = rtypes___RInstance_getseters,
    .tp_methods = rtypes___RInstance_methods,
    .tp_hash = CPyDunder___hash__rtypes___RInstance,
    .tp_init = rtypes___RInstance_init,
    .tp_repr = CPyDef_rtypes___RInstance_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RInstance,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RInstanceObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RInstance_template = &CPyType_rtypes___RInstance_template_;

static PyObject *
rtypes___RInstance_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RInstanceObject *self;
    self = (mypyc___ir___rtypes___RInstanceObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RInstance_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_is_unboxed = 2;
    if (CPyDef_rtypes___RInstance_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RInstance(PyObject *cpy_r_class_ir)
{
    PyObject *self = rtypes___RInstance_setup(CPyType_rtypes___RInstance);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RInstance_____init__(self, cpy_r_class_ir);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RInstance_get_is_unboxed(mypyc___ir___rtypes___RInstanceObject *self, void *closure)
{
    PyObject *retval = self->_is_unboxed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RInstance_set_is_unboxed(mypyc___ir___rtypes___RInstanceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RInstance' object attribute 'is_unboxed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_unboxed = tmp;
    return 0;
}

static PyObject *
rtypes___RInstance_get_class_ir(mypyc___ir___rtypes___RInstanceObject *self, void *closure)
{
    if (unlikely(self->_class_ir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_ir' of 'RInstance' undefined");
        return NULL;
    }
    CPy_INCREF(self->_class_ir);
    PyObject *retval = self->_class_ir;
    return retval;
}

static int
rtypes___RInstance_set_class_ir(mypyc___ir___rtypes___RInstanceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RInstance' object attribute 'class_ir' cannot be deleted");
        return -1;
    }
    if (self->_class_ir != NULL) {
        CPy_DECREF(self->_class_ir);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_class_ir___ClassIR))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_class_ir = tmp;
    return 0;
}

static Py_ssize_t CPyDunder___hash__rtypes___RUnion(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RUnion_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RUnion_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RUnion(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RUnion))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RUnion_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RUnion))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RUnion_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RUnion_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RUnion(PyObject *cpy_r_items);

static PyObject *
rtypes___RUnion_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RUnion) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RUnion_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RUnion_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RUnion_traverse(mypyc___ir___rtypes___RUnionObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_items);
    Py_VISIT(self->_items_set);
    return 0;
}

static int
rtypes___RUnion_clear(mypyc___ir___rtypes___RUnionObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_items);
    Py_CLEAR(self->_items_set);
    return 0;
}

static void
rtypes___RUnion_dealloc(mypyc___ir___rtypes___RUnionObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RUnion_dealloc)
    rtypes___RUnion_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RUnion_vtable[17];
static bool
CPyDef_rtypes___RUnion_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RUnion_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RUnion___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____str__,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RUnion___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____init__,
        (CPyVTableItem)CPyDef_rtypes___RUnion___make_simplified_union,
        (CPyVTableItem)CPyDef_rtypes___RUnion___accept,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____str__,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RUnion___serialize,
        (CPyVTableItem)CPyDef_rtypes___RUnion___deserialize,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RUnion_____ne__,
    };
    memcpy(rtypes___RUnion_vtable, rtypes___RUnion_vtable_scratch, sizeof(rtypes___RUnion_vtable));
    return 1;
}

static PyObject *
rtypes___RUnion_get_is_unboxed(mypyc___ir___rtypes___RUnionObject *self, void *closure);
static int
rtypes___RUnion_set_is_unboxed(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RUnion_get_items(mypyc___ir___rtypes___RUnionObject *self, void *closure);
static int
rtypes___RUnion_set_items(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RUnion_get_items_set(mypyc___ir___rtypes___RUnionObject *self, void *closure);
static int
rtypes___RUnion_set_items_set(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RUnion_getseters[] = {
    {"is_unboxed",
     (getter)rtypes___RUnion_get_is_unboxed, (setter)rtypes___RUnion_set_is_unboxed,
     NULL, NULL},
    {"items",
     (getter)rtypes___RUnion_get_items, (setter)rtypes___RUnion_set_items,
     NULL, NULL},
    {"items_set",
     (getter)rtypes___RUnion_get_items_set, (setter)rtypes___RUnion_set_items_set,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RUnion_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RUnion_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"make_simplified_union",
     (PyCFunction)CPyPy_rtypes___RUnion___make_simplified_union,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RUnion___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RUnion_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_rtypes___RUnion_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RUnion_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RUnion_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RUnion___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_rtypes___RUnion___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RUnion_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RUnion_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RUnion_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RUnion",
    .tp_new = rtypes___RUnion_new,
    .tp_dealloc = (destructor)rtypes___RUnion_dealloc,
    .tp_traverse = (traverseproc)rtypes___RUnion_traverse,
    .tp_clear = (inquiry)rtypes___RUnion_clear,
    .tp_getset = rtypes___RUnion_getseters,
    .tp_methods = rtypes___RUnion_methods,
    .tp_hash = CPyDunder___hash__rtypes___RUnion,
    .tp_init = rtypes___RUnion_init,
    .tp_str = CPyDef_rtypes___RUnion_____str__,
    .tp_repr = CPyDef_rtypes___RUnion_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RUnion,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RUnionObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RUnion_template = &CPyType_rtypes___RUnion_template_;

static PyObject *
rtypes___RUnion_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RUnionObject *self;
    self = (mypyc___ir___rtypes___RUnionObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RUnion_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_is_unboxed = 2;
    if (CPyDef_rtypes___RUnion_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RUnion(PyObject *cpy_r_items)
{
    PyObject *self = rtypes___RUnion_setup(CPyType_rtypes___RUnion);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RUnion_____init__(self, cpy_r_items);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RUnion_get_is_unboxed(mypyc___ir___rtypes___RUnionObject *self, void *closure)
{
    PyObject *retval = self->_is_unboxed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
rtypes___RUnion_set_is_unboxed(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RUnion' object attribute 'is_unboxed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_unboxed = tmp;
    return 0;
}

static PyObject *
rtypes___RUnion_get_items(mypyc___ir___rtypes___RUnionObject *self, void *closure)
{
    if (unlikely(self->_items == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'items' of 'RUnion' undefined");
        return NULL;
    }
    CPy_INCREF(self->_items);
    PyObject *retval = self->_items;
    return retval;
}

static int
rtypes___RUnion_set_items(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RUnion' object attribute 'items' cannot be deleted");
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
rtypes___RUnion_get_items_set(mypyc___ir___rtypes___RUnionObject *self, void *closure)
{
    if (unlikely(self->_items_set == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'items_set' of 'RUnion' undefined");
        return NULL;
    }
    CPy_INCREF(self->_items_set);
    PyObject *retval = self->_items_set;
    return retval;
}

static int
rtypes___RUnion_set_items_set(mypyc___ir___rtypes___RUnionObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RUnion' object attribute 'items_set' cannot be deleted");
        return -1;
    }
    if (self->_items_set != NULL) {
        CPy_DECREF(self->_items_set);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_items_set = tmp;
    return 0;
}

static Py_ssize_t CPyDunder___hash__rtypes___RArray(PyObject *self) {
    CPyTagged retval = CPyDef_rtypes___RArray_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
rtypes___RArray_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_rtypes___RArray(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RArray))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RArray", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RArray_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_rtypes___RArray))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.ir.rtypes.RArray", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_rtypes___RArray_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *rtypes___RArray_setup(PyTypeObject *type);
PyObject *CPyDef_rtypes___RArray(PyObject *cpy_r_item_type, CPyTagged cpy_r_length);

static PyObject *
rtypes___RArray_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rtypes___RArray) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rtypes___RArray_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rtypes___RArray_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rtypes___RArray_traverse(mypyc___ir___rtypes___RArrayObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_c_undefined);
    Py_VISIT(self->__ctype);
    Py_VISIT(self->_item_type);
    if (CPyTagged_CheckLong(self->_length)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_length));
    }
    return 0;
}

static int
rtypes___RArray_clear(mypyc___ir___rtypes___RArrayObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_c_undefined);
    Py_CLEAR(self->__ctype);
    Py_CLEAR(self->_item_type);
    if (CPyTagged_CheckLong(self->_length)) {
        CPyTagged __tmp = self->_length;
        self->_length = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
rtypes___RArray_dealloc(mypyc___ir___rtypes___RArrayObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rtypes___RArray_dealloc)
    rtypes___RArray_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rtypes___RArray_vtable[16];
static bool
CPyDef_rtypes___RArray_trait_vtable_setup(void)
{
    CPyVTableItem rtypes___RArray_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rtypes___RArray___accept,
        (CPyVTableItem)CPyDef_rtypes___RType___short_name,
        (CPyVTableItem)CPyDef_rtypes___RArray_____str__,
        (CPyVTableItem)CPyDef_rtypes___RArray_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RArray___serialize__RType_glue,
        (CPyVTableItem)CPyDef_rtypes___RArray_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RArray_____init__,
        (CPyVTableItem)CPyDef_rtypes___RArray___accept,
        (CPyVTableItem)CPyDef_rtypes___RArray_____str__,
        (CPyVTableItem)CPyDef_rtypes___RArray_____repr__,
        (CPyVTableItem)CPyDef_rtypes___RArray_____eq__,
        (CPyVTableItem)CPyDef_rtypes___RArray_____hash__,
        (CPyVTableItem)CPyDef_rtypes___RArray___serialize,
        (CPyVTableItem)CPyDef_rtypes___RArray___deserialize,
        (CPyVTableItem)CPyDef_rtypes___RArray_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_rtypes___RArray_____ne__,
    };
    memcpy(rtypes___RArray_vtable, rtypes___RArray_vtable_scratch, sizeof(rtypes___RArray_vtable));
    return 1;
}

static PyObject *
rtypes___RArray_get_item_type(mypyc___ir___rtypes___RArrayObject *self, void *closure);
static int
rtypes___RArray_set_item_type(mypyc___ir___rtypes___RArrayObject *self, PyObject *value, void *closure);
static PyObject *
rtypes___RArray_get_length(mypyc___ir___rtypes___RArrayObject *self, void *closure);
static int
rtypes___RArray_set_length(mypyc___ir___rtypes___RArrayObject *self, PyObject *value, void *closure);

static PyGetSetDef rtypes___RArray_getseters[] = {
    {"item_type",
     (getter)rtypes___RArray_get_item_type, (setter)rtypes___RArray_set_item_type,
     NULL, NULL},
    {"length",
     (getter)rtypes___RArray_get_length, (setter)rtypes___RArray_set_length,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rtypes___RArray_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rtypes___RArray_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_rtypes___RArray___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_rtypes___RArray_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_rtypes___RArray_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_rtypes___RArray_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_rtypes___RArray_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_rtypes___RArray___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_rtypes___RArray___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_rtypes___RArray_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_rtypes___RArray_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rtypes___RArray_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RArray",
    .tp_new = rtypes___RArray_new,
    .tp_dealloc = (destructor)rtypes___RArray_dealloc,
    .tp_traverse = (traverseproc)rtypes___RArray_traverse,
    .tp_clear = (inquiry)rtypes___RArray_clear,
    .tp_getset = rtypes___RArray_getseters,
    .tp_methods = rtypes___RArray_methods,
    .tp_hash = CPyDunder___hash__rtypes___RArray,
    .tp_init = rtypes___RArray_init,
    .tp_str = CPyDef_rtypes___RArray_____str__,
    .tp_repr = CPyDef_rtypes___RArray_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_rtypes___RArray,
    .tp_basicsize = sizeof(mypyc___ir___rtypes___RArrayObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rtypes___RArray_template = &CPyType_rtypes___RArray_template_;

static PyObject *
rtypes___RArray_setup(PyTypeObject *type)
{
    mypyc___ir___rtypes___RArrayObject *self;
    self = (mypyc___ir___rtypes___RArrayObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rtypes___RArray_vtable;
    self->_is_unboxed = 2;
    self->_is_refcounted = 2;
    self->_error_overlap = 2;
    self->_length = CPY_INT_TAG;
    if (CPyDef_rtypes___RArray_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_rtypes___RArray(PyObject *cpy_r_item_type, CPyTagged cpy_r_length)
{
    PyObject *self = rtypes___RArray_setup(CPyType_rtypes___RArray);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rtypes___RArray_____init__(self, cpy_r_item_type, cpy_r_length);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rtypes___RArray_get_item_type(mypyc___ir___rtypes___RArrayObject *self, void *closure)
{
    if (unlikely(self->_item_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'item_type' of 'RArray' undefined");
        return NULL;
    }
    CPy_INCREF(self->_item_type);
    PyObject *retval = self->_item_type;
    return retval;
}

static int
rtypes___RArray_set_item_type(mypyc___ir___rtypes___RArrayObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RArray' object attribute 'item_type' cannot be deleted");
        return -1;
    }
    if (self->_item_type != NULL) {
        CPy_DECREF(self->_item_type);
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
    self->_item_type = tmp;
    return 0;
}

static PyObject *
rtypes___RArray_get_length(mypyc___ir___rtypes___RArrayObject *self, void *closure)
{
    if (unlikely(self->_length == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'length' of 'RArray' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_length);
    PyObject *retval = CPyTagged_StealAsObject(self->_length);
    return retval;
}

static int
rtypes___RArray_set_length(mypyc___ir___rtypes___RArrayObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RArray' object attribute 'length' cannot be deleted");
        return -1;
    }
    if (self->_length != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_length);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_length = tmp;
    return 0;
}
static PyMethodDef rtypesmodule_methods[] = {
    {"deserialize_type", (PyCFunction)CPyPy_rtypes___deserialize_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_tagged", (PyCFunction)CPyPy_rtypes___is_tagged, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_int_rprimitive", (PyCFunction)CPyPy_rtypes___is_int_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_short_int_rprimitive", (PyCFunction)CPyPy_rtypes___is_short_int_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_int16_rprimitive", (PyCFunction)CPyPy_rtypes___is_int16_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_int32_rprimitive", (PyCFunction)CPyPy_rtypes___is_int32_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_int64_rprimitive", (PyCFunction)CPyPy_rtypes___is_int64_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_fixed_width_rtype", (PyCFunction)CPyPy_rtypes___is_fixed_width_rtype, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_uint8_rprimitive", (PyCFunction)CPyPy_rtypes___is_uint8_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_uint32_rprimitive", (PyCFunction)CPyPy_rtypes___is_uint32_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_uint64_rprimitive", (PyCFunction)CPyPy_rtypes___is_uint64_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_c_py_ssize_t_rprimitive", (PyCFunction)CPyPy_rtypes___is_c_py_ssize_t_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_pointer_rprimitive", (PyCFunction)CPyPy_rtypes___is_pointer_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_float_rprimitive", (PyCFunction)CPyPy_rtypes___is_float_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bool_rprimitive", (PyCFunction)CPyPy_rtypes___is_bool_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bit_rprimitive", (PyCFunction)CPyPy_rtypes___is_bit_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_object_rprimitive", (PyCFunction)CPyPy_rtypes___is_object_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_none_rprimitive", (PyCFunction)CPyPy_rtypes___is_none_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_list_rprimitive", (PyCFunction)CPyPy_rtypes___is_list_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_dict_rprimitive", (PyCFunction)CPyPy_rtypes___is_dict_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_set_rprimitive", (PyCFunction)CPyPy_rtypes___is_set_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_str_rprimitive", (PyCFunction)CPyPy_rtypes___is_str_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bytes_rprimitive", (PyCFunction)CPyPy_rtypes___is_bytes_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_tuple_rprimitive", (PyCFunction)CPyPy_rtypes___is_tuple_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_range_rprimitive", (PyCFunction)CPyPy_rtypes___is_range_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_sequence_rprimitive", (PyCFunction)CPyPy_rtypes___is_sequence_rprimitive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compute_rtype_alignment", (PyCFunction)CPyPy_rtypes___compute_rtype_alignment, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compute_rtype_size", (PyCFunction)CPyPy_rtypes___compute_rtype_size, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compute_aligned_offsets_and_size", (PyCFunction)CPyPy_rtypes___compute_aligned_offsets_and_size, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"flatten_nested_unions", (PyCFunction)CPyPy_rtypes___flatten_nested_unions, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"optional_value_type", (PyCFunction)CPyPy_rtypes___optional_value_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_optional_type", (PyCFunction)CPyPy_rtypes___is_optional_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_native_int_range", (PyCFunction)CPyPy_rtypes___check_native_int_range, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef rtypesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.ir.rtypes",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    rtypesmodule_methods
};

PyObject *CPyInit_mypyc___ir___rtypes(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___ir___rtypes_internal) {
        Py_INCREF(CPyModule_mypyc___ir___rtypes_internal);
        return CPyModule_mypyc___ir___rtypes_internal;
    }
    CPyModule_mypyc___ir___rtypes_internal = PyModule_Create(&rtypesmodule);
    if (unlikely(CPyModule_mypyc___ir___rtypes_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___ir___rtypes_internal, "__name__");
    CPyStatic_rtypes___globals = PyModule_GetDict(CPyModule_mypyc___ir___rtypes_internal);
    if (unlikely(CPyStatic_rtypes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_rtypes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___ir___rtypes_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___ir___rtypes_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_rtypes___void_rtype);
    CPyStatic_rtypes___void_rtype = NULL;
    CPyTagged_XDECREF(CPyStatic_rtypes___mypyc___ir___rtypes___RPrimitive_____init_____size);
    CPyStatic_rtypes___mypyc___ir___rtypes___RPrimitive_____init_____size = CPY_INT_TAG;
    CPy_XDECREF(CPyStatic_rtypes___object_rprimitive);
    CPyStatic_rtypes___object_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___object_pointer_rprimitive);
    CPyStatic_rtypes___object_pointer_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___int_rprimitive);
    CPyStatic_rtypes___int_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___short_int_rprimitive);
    CPyStatic_rtypes___short_int_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___int16_rprimitive);
    CPyStatic_rtypes___int16_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___int32_rprimitive);
    CPyStatic_rtypes___int32_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___int64_rprimitive);
    CPyStatic_rtypes___int64_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___uint8_rprimitive);
    CPyStatic_rtypes___uint8_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___u16_rprimitive);
    CPyStatic_rtypes___u16_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___uint32_rprimitive);
    CPyStatic_rtypes___uint32_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___uint64_rprimitive);
    CPyStatic_rtypes___uint64_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___pointer_rprimitive);
    CPyStatic_rtypes___pointer_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___c_pointer_rprimitive);
    CPyStatic_rtypes___c_pointer_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___bitmap_rprimitive);
    CPyStatic_rtypes___bitmap_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___float_rprimitive);
    CPyStatic_rtypes___float_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___bool_rprimitive);
    CPyStatic_rtypes___bool_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___bit_rprimitive);
    CPyStatic_rtypes___bit_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___none_rprimitive);
    CPyStatic_rtypes___none_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___list_rprimitive);
    CPyStatic_rtypes___list_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___dict_rprimitive);
    CPyStatic_rtypes___dict_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___set_rprimitive);
    CPyStatic_rtypes___set_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___str_rprimitive);
    CPyStatic_rtypes___str_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___bytes_rprimitive);
    CPyStatic_rtypes___bytes_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___tuple_rprimitive);
    CPyStatic_rtypes___tuple_rprimitive = NULL;
    CPy_XDECREF(CPyStatic_rtypes___range_rprimitive);
    CPyStatic_rtypes___range_rprimitive = NULL;
    Py_CLEAR(CPyType_rtypes___RType);
    Py_CLEAR(CPyType_rtypes___RTypeVisitor);
    Py_CLEAR(CPyType_rtypes___RVoid);
    Py_CLEAR(CPyType_rtypes___RPrimitive);
    Py_CLEAR(CPyType_rtypes___TupleNameVisitor);
    Py_CLEAR(CPyType_rtypes___RTuple);
    Py_CLEAR(CPyType_rtypes___RStruct);
    Py_CLEAR(CPyType_rtypes___RInstance);
    Py_CLEAR(CPyType_rtypes___RUnion);
    Py_CLEAR(CPyType_rtypes___RArray);
    return NULL;
}

PyObject *CPyDef_rtypes___RType___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 67, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 67, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RType___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RType)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RType___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 66, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RType___short_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "short_name", "RType", "name", 70, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_mypyc___common___short_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "short_name", 70, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RType___short_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":short_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RType)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RType___short_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "short_name", 69, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RType_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__str__", "RType", "name", 73, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_mypyc___common___short_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 73, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RType_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RType)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RType_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 72, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RType_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[1945]; /* '__class__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 76, CPyStatic_rtypes___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyStatics[197]; /* '__name__' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 76, CPyStatic_rtypes___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 76, CPyStatic_rtypes___globals, "str", cpy_r_r3);
        goto CPyL5;
    }
    cpy_r_r5 = CPyStatics[2465]; /* '<' */
    cpy_r_r6 = CPyStatics[840]; /* '>' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 76, CPyStatic_rtypes___globals);
        goto CPyL5;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_rtypes___RType_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RType)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RType_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 75, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RType___serialize(PyObject *cpy_r_self) {
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
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = CPyStatics[6377]; /* 'Cannot serialize ' */
    cpy_r_r1 = CPyStatics[1945]; /* '__class__' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_self, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyStatics[197]; /* '__name__' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals, "str", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[6378]; /* ' instance' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r0, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r7);
    CPy_Raise(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 79, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
}

PyObject *CPyPy_rtypes___RType___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RType)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RType___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 78, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RType_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RTypeObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RTypeObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RTypeObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RType_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(PyObject_TypeCheck(obj___mypyc_self__, CPyType_rtypes___RType)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RType_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___deserialize_type(PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
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
    int32_t cpy_r_r21;
    char cpy_r_r22;
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
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
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
    int32_t cpy_r_r65;
    char cpy_r_r66;
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
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_data, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 92, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL39;
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r4 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 93, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 93, CPyStatic_rtypes___globals);
        goto CPyL64;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 93, CPyStatic_rtypes___globals, "dict", cpy_r_r5);
        goto CPyL64;
    }
    cpy_r_r7 = PyDict_Contains(cpy_r_r6, cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 93, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL14;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    if (likely(PyDict_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals, "dict", cpy_r_r10);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r12 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL65;
    }
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_class_ir___ClassIR))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r13);
        goto CPyL63;
    }
    cpy_r_r15 = CPyDef_rtypes___RInstance(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 94, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    return cpy_r_r15;
CPyL14: ;
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r16 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 95, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r17 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r18 = CPyStatics[7954]; /* 'primitive_map' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 95, CPyStatic_rtypes___globals);
        goto CPyL66;
    }
    if (likely(PyDict_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 95, CPyStatic_rtypes___globals, "dict", cpy_r_r19);
        goto CPyL66;
    }
    cpy_r_r21 = PyDict_Contains(cpy_r_r20, cpy_r_r16);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 95, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL25;
    cpy_r_r24 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r25 = CPyStatics[7954]; /* 'primitive_map' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 96, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    if (likely(PyDict_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 96, CPyStatic_rtypes___globals, "dict", cpy_r_r26);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r28 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 96, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL67;
    }
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 96, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_rtypes___RPrimitive))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 96, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r29);
        goto CPyL63;
    }
    return cpy_r_r30;
CPyL25: ;
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r31 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 97, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r32 = CPyStatics[7337]; /* 'void' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL29;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL29;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 97, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
CPyL29: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL32;
    cpy_r_r39 = CPyDef_rtypes___RVoid();
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 98, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    return cpy_r_r39;
CPyL32: ;
    if (0) goto CPyL55;
    cpy_r_r40 = CPyStatics[7955]; /* "Can't find class " */
    CPy_INCREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r41 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 100, CPyStatic_rtypes___globals, "str", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r42 = CPyStr_Build(2, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 100, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 100, CPyStatic_rtypes___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 100, CPyStatic_rtypes___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_Raise(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 100, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL39: ;
    CPy_INCREF(cpy_r_data);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r49 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 101, CPyStatic_rtypes___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r50 = CPyStatics[3930]; /* '.class' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 101, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r52 = CPyStatics[7023]; /* 'RTuple' */
    cpy_r_r53 = PyObject_RichCompare(cpy_r_r51, cpy_r_r52, 2);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 101, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r54 = PyObject_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 101, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL47;
    cpy_r_r57 = (PyObject *)CPyType_rtypes___RTuple;
    CPy_INCREF(cpy_r_data);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r58 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 102, CPyStatic_rtypes___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r59 = CPyDef_rtypes___RTuple___deserialize(cpy_r_r57, cpy_r_r58, cpy_r_ctx);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 102, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    return cpy_r_r59;
CPyL47: ;
    CPy_INCREF(cpy_r_data);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r60 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 103, CPyStatic_rtypes___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r61 = CPyStatics[3930]; /* '.class' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 103, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r63 = CPyStatics[6762]; /* 'RUnion' */
    cpy_r_r64 = PyObject_RichCompare(cpy_r_r62, cpy_r_r63, 2);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 103, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r65 = PyObject_IsTrue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 103, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL55;
    cpy_r_r68 = (PyObject *)CPyType_rtypes___RUnion;
    CPy_INCREF(cpy_r_data);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r69 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 104, CPyStatic_rtypes___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r70 = CPyDef_rtypes___RUnion___deserialize(cpy_r_r68, cpy_r_r69, cpy_r_ctx);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 104, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    return cpy_r_r70;
CPyL55: ;
    CPy_INCREF(cpy_r_data);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r71 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    cpy_r_r72 = CPyStatics[3930]; /* '.class' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r74 = PyObject_Str(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r75 = CPyStatics[3931]; /* 'unexpected .class ' */
    cpy_r_r76 = CPyStr_Build(2, cpy_r_r75, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    cpy_r_r77 = CPyModule_builtins;
    cpy_r_r78 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_r76};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r76);
    CPy_Raise(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 105, CPyStatic_rtypes___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r83 = NULL;
    return cpy_r_r83;
CPyL64: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL63;
CPyL66: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL63;
CPyL67: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL63;
CPyL68: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL63;
CPyL69: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL63;
}

PyObject *CPyPy_rtypes___deserialize_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize_type", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_data;
    if (PyDict_Check(obj_data))
        arg_data = obj_data;
    else {
        arg_data = NULL;
    }
    if (arg_data != NULL) goto __LL9917;
    if (PyUnicode_Check(obj_data))
        arg_data = obj_data;
    else {
        arg_data = NULL;
    }
    if (arg_data != NULL) goto __LL9917;
    CPy_TypeError("union[dict, str]", obj_data); 
    goto fail;
__LL9917: ;
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___deserialize_type(arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize_type", 82, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rprimitive(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 113, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 113, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RPrimitive))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rprimitive(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 112, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rinstance(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rinstance", 117, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rinstance", 117, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RInstance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rinstance(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rinstance", 116, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_runion(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_runion", 121, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_runion", 121, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_runion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_runion", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_runion(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_runion", 120, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rtuple(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 125, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 125, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rtuple(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 124, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rstruct(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct", 129, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct", 129, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rstruct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RStruct))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rstruct(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct", 128, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rarray(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray", 133, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray", 133, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rarray(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rarray", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RArray))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rarray(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray", 132, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTypeVisitor___visit_rvoid(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid", 137, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid", 137, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RTypeVisitor___visit_rvoid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_rtypes___RTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RVoid))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTypeVisitor___visit_rvoid(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid", 136, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RVoid___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 6, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rvoid */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 152, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RVoid___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RVoid))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RVoid___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 151, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RVoid___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[7337]; /* 'void' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_rtypes___RVoid___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RVoid))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RVoid___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 154, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RVoid___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RVoid___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RVoid___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RVoid))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RVoid___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RVoid_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RVoid;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    cpy_r_r4 = cpy_r_r3 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
}

PyObject *CPyPy_rtypes___RVoid_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RVoid))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RVoid_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 157, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RVoid_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RVoid;
    cpy_r_r1 = CPyObject_Hash(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 161, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RVoid_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RVoid))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RVoid_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 160, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RVoid_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    cpy_r_r0 = CPyStatics[7337]; /* 'void' */
    CPy_INCREF(cpy_r_r0);
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_name = cpy_r_r0;
    cpy_r_r1 = CPyStatics[7337]; /* 'void' */
    CPy_INCREF(cpy_r_r1);
    ((mypyc___ir___rtypes___RVoidObject *)cpy_r___mypyc_self__)->_ctype = cpy_r_r1;
    return 1;
}

PyObject *CPyPy_rtypes___RVoid_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RVoid))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RVoid_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RVoid_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RVoid_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RVoid_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RVoid))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RVoid_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RPrimitive_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, char cpy_r_is_unboxed, char cpy_r_is_refcounted, char cpy_r_is_native_int, char cpy_r_is_signed, PyObject *cpy_r_ctype, CPyTagged cpy_r_size, char cpy_r_error_overlap) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    if (cpy_r_is_native_int != 2) goto CPyL2;
    cpy_r_is_native_int = 0;
CPyL2: ;
    if (cpy_r_is_signed != 2) goto CPyL4;
    cpy_r_is_signed = 0;
CPyL4: ;
    if (cpy_r_ctype != NULL) goto CPyL103;
    cpy_r_r0 = CPyStatics[6916]; /* 'PyObject *' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_ctype = cpy_r_r0;
CPyL6: ;
    if (cpy_r_size != CPY_INT_TAG) goto CPyL104;
    cpy_r_r1 = CPyStatic_rtypes___mypyc___ir___rtypes___RPrimitive_____init_____size;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_size = cpy_r_r1;
CPyL8: ;
    if (cpy_r_error_overlap != 2) goto CPyL10;
    cpy_r_error_overlap = 0;
CPyL10: ;
    cpy_r_r2 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r3 = CPyStatics[7954]; /* 'primitive_map' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 197, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    if (likely(PyDict_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 197, CPyStatic_rtypes___globals, "dict", cpy_r_r4);
        goto CPyL105;
    }
    cpy_r_r6 = CPyDict_SetItem(cpy_r_r5, cpy_r_name, cpy_r_self);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 197, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    CPy_INCREF(cpy_r_name);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name = cpy_r_name;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 199, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_is_unboxed = cpy_r_is_unboxed;
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_is_refcounted = cpy_r_is_refcounted;
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_is_native_int = cpy_r_is_native_int;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 202, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_is_signed = cpy_r_is_signed;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 203, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    CPy_INCREF(cpy_r_ctype);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->__ctype != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->__ctype);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->__ctype = cpy_r_ctype;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 204, CPyStatic_rtypes___globals);
        goto CPyL105;
    }
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_size != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_size);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_size = cpy_r_size;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 205, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_error_overlap = cpy_r_error_overlap;
    cpy_r_r16 = CPyStatics[7956]; /* 'CPyTagged' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL21;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 207, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL21: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (cpy_r_r22) {
        goto CPyL107;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r23 = CPyStatics[7957]; /* 'CPY_INT_TAG' */
    CPy_INCREF(cpy_r_r23);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 208, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL23: ;
    cpy_r_r25 = CPyStatics[7958]; /* 'int16_t' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL26;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL26;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL26: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (!cpy_r_r31) goto CPyL28;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL32;
CPyL28: ;
    cpy_r_r33 = CPyStatics[7959]; /* 'int32_t' */
    cpy_r_r34 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 == -1;
    if (!cpy_r_r35) goto CPyL31;
    cpy_r_r36 = PyErr_Occurred();
    cpy_r_r37 = cpy_r_r36 != NULL;
    if (!cpy_r_r37) goto CPyL31;
    cpy_r_r38 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL31: ;
    cpy_r_r39 = cpy_r_r34 == 0;
    cpy_r_r32 = cpy_r_r39;
CPyL32: ;
    if (!cpy_r_r32) goto CPyL34;
    cpy_r_r40 = cpy_r_r32;
    goto CPyL38;
CPyL34: ;
    cpy_r_r41 = CPyStatics[7960]; /* 'int64_t' */
    cpy_r_r42 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 == -1;
    if (!cpy_r_r43) goto CPyL37;
    cpy_r_r44 = PyErr_Occurred();
    cpy_r_r45 = cpy_r_r44 != NULL;
    if (!cpy_r_r45) goto CPyL37;
    cpy_r_r46 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL37: ;
    cpy_r_r47 = cpy_r_r42 == 0;
    cpy_r_r40 = cpy_r_r47;
CPyL38: ;
    if (cpy_r_r40) {
        goto CPyL108;
    } else
        goto CPyL40;
CPyL39: ;
    cpy_r_r48 = CPyStatics[7961]; /* '-113' */
    CPy_INCREF(cpy_r_r48);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r48;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 212, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL40: ;
    cpy_r_r50 = CPyStatics[7962]; /* 'CPyPtr' */
    cpy_r_r51 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 == -1;
    if (!cpy_r_r52) goto CPyL43;
    cpy_r_r53 = PyErr_Occurred();
    cpy_r_r54 = cpy_r_r53 != NULL;
    if (!cpy_r_r54) goto CPyL43;
    cpy_r_r55 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 213, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL43: ;
    cpy_r_r56 = cpy_r_r51 == 0;
    if (cpy_r_r56) {
        goto CPyL109;
    } else
        goto CPyL45;
CPyL44: ;
    cpy_r_r57 = CPyStatics[3720]; /* '0' */
    CPy_INCREF(cpy_r_r57);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 215, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL45: ;
    cpy_r_r59 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r60 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 == -1;
    if (!cpy_r_r61) goto CPyL48;
    cpy_r_r62 = PyErr_Occurred();
    cpy_r_r63 = cpy_r_r62 != NULL;
    if (!cpy_r_r63) goto CPyL48;
    cpy_r_r64 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 216, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL48: ;
    cpy_r_r65 = cpy_r_r60 == 0;
    if (cpy_r_r65) {
        goto CPyL110;
    } else
        goto CPyL50;
CPyL49: ;
    cpy_r_r66 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r66);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r66;
    cpy_r_r67 = 1;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 218, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL50: ;
    cpy_r_r68 = CPyStatics[7963]; /* 'char' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL53;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL53;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 219, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL53: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (cpy_r_r74) {
        goto CPyL111;
    } else
        goto CPyL55;
CPyL54: ;
    cpy_r_r75 = CPyStatics[6824]; /* '2' */
    CPy_INCREF(cpy_r_r75);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r75;
    cpy_r_r76 = 1;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 220, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL55: ;
    cpy_r_r77 = CPyStatics[7964]; /* 'PyObject **' */
    cpy_r_r78 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 == -1;
    if (!cpy_r_r79) goto CPyL58;
    cpy_r_r80 = PyErr_Occurred();
    cpy_r_r81 = cpy_r_r80 != NULL;
    if (!cpy_r_r81) goto CPyL58;
    cpy_r_r82 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL58: ;
    cpy_r_r83 = cpy_r_r78 == 0;
    if (!cpy_r_r83) goto CPyL60;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL64;
CPyL60: ;
    cpy_r_r85 = CPyStatics[7965]; /* 'void *' */
    cpy_r_r86 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 == -1;
    if (!cpy_r_r87) goto CPyL63;
    cpy_r_r88 = PyErr_Occurred();
    cpy_r_r89 = cpy_r_r88 != NULL;
    if (!cpy_r_r89) goto CPyL63;
    cpy_r_r90 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL63: ;
    cpy_r_r91 = cpy_r_r86 == 0;
    cpy_r_r84 = cpy_r_r91;
CPyL64: ;
    if (cpy_r_r84) {
        goto CPyL112;
    } else
        goto CPyL66;
CPyL65: ;
    cpy_r_r92 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r92);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 222, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL66: ;
    cpy_r_r94 = CPyStatics[7966]; /* 'double' */
    cpy_r_r95 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 == -1;
    if (!cpy_r_r96) goto CPyL69;
    cpy_r_r97 = PyErr_Occurred();
    cpy_r_r98 = cpy_r_r97 != NULL;
    if (!cpy_r_r98) goto CPyL69;
    cpy_r_r99 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 223, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL69: ;
    cpy_r_r100 = cpy_r_r95 == 0;
    if (cpy_r_r100) {
        goto CPyL113;
    } else
        goto CPyL71;
CPyL70: ;
    cpy_r_r101 = CPyStatics[7967]; /* '-113.0' */
    CPy_INCREF(cpy_r_r101);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r101;
    cpy_r_r102 = 1;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 224, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL71: ;
    cpy_r_r103 = CPyStatics[7968]; /* 'uint8_t' */
    cpy_r_r104 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r103);
    cpy_r_r105 = cpy_r_r104 == -1;
    if (!cpy_r_r105) goto CPyL74;
    cpy_r_r106 = PyErr_Occurred();
    cpy_r_r107 = cpy_r_r106 != NULL;
    if (!cpy_r_r107) goto CPyL74;
    cpy_r_r108 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL74: ;
    cpy_r_r109 = cpy_r_r104 == 0;
    if (!cpy_r_r109) goto CPyL76;
    cpy_r_r110 = cpy_r_r109;
    goto CPyL80;
CPyL76: ;
    cpy_r_r111 = CPyStatics[7969]; /* 'uint16_t' */
    cpy_r_r112 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r111);
    cpy_r_r113 = cpy_r_r112 == -1;
    if (!cpy_r_r113) goto CPyL79;
    cpy_r_r114 = PyErr_Occurred();
    cpy_r_r115 = cpy_r_r114 != NULL;
    if (!cpy_r_r115) goto CPyL79;
    cpy_r_r116 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL79: ;
    cpy_r_r117 = cpy_r_r112 == 0;
    cpy_r_r110 = cpy_r_r117;
CPyL80: ;
    if (!cpy_r_r110) goto CPyL82;
    cpy_r_r118 = cpy_r_r110;
    goto CPyL86;
CPyL82: ;
    cpy_r_r119 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r120 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 == -1;
    if (!cpy_r_r121) goto CPyL85;
    cpy_r_r122 = PyErr_Occurred();
    cpy_r_r123 = cpy_r_r122 != NULL;
    if (!cpy_r_r123) goto CPyL85;
    cpy_r_r124 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL85: ;
    cpy_r_r125 = cpy_r_r120 == 0;
    cpy_r_r118 = cpy_r_r125;
CPyL86: ;
    if (!cpy_r_r118) goto CPyL88;
    cpy_r_r126 = cpy_r_r118;
    goto CPyL92;
CPyL88: ;
    cpy_r_r127 = CPyStatics[7970]; /* 'uint64_t' */
    cpy_r_r128 = PyUnicode_Compare(cpy_r_ctype, cpy_r_r127);
    cpy_r_r129 = cpy_r_r128 == -1;
    if (!cpy_r_r129) goto CPyL91;
    cpy_r_r130 = PyErr_Occurred();
    cpy_r_r131 = cpy_r_r130 != NULL;
    if (!cpy_r_r131) goto CPyL91;
    cpy_r_r132 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", -1, CPyStatic_rtypes___globals);
        goto CPyL106;
    }
CPyL91: ;
    cpy_r_r133 = cpy_r_r128 == 0;
    cpy_r_r126 = cpy_r_r133;
CPyL92: ;
    if (cpy_r_r126) {
        goto CPyL114;
    } else
        goto CPyL94;
CPyL93: ;
    cpy_r_r134 = CPyStatics[7971]; /* '239' */
    CPy_INCREF(cpy_r_r134);
    if (((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined);
    }
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_c_undefined = cpy_r_r134;
    cpy_r_r135 = 1;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 226, CPyStatic_rtypes___globals);
        goto CPyL102;
    } else
        goto CPyL101;
CPyL94: ;
    if (0) goto CPyL115;
    cpy_r_r136 = CPyStatics[7972]; /* 'Unrecognized ctype: %r' */
    cpy_r_r137 = PyNumber_Remainder(cpy_r_r136, cpy_r_ctype);
    CPy_DECREF(cpy_r_ctype);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 228, CPyStatic_rtypes___globals);
        goto CPyL102;
    }
    if (likely(PyUnicode_Check(cpy_r_r137)))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 228, CPyStatic_rtypes___globals, "str", cpy_r_r137);
        goto CPyL102;
    }
    cpy_r_r139 = CPyModule_builtins;
    cpy_r_r140 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r141 = CPyObject_GetAttr(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 228, CPyStatic_rtypes___globals);
        goto CPyL116;
    }
    PyObject *cpy_r_r142[1] = {cpy_r_r138};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = _PyObject_Vectorcall(cpy_r_r141, cpy_r_r143, 1, 0);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 228, CPyStatic_rtypes___globals);
        goto CPyL116;
    }
    CPy_DECREF(cpy_r_r138);
    CPy_Raise(cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 228, CPyStatic_rtypes___globals);
        goto CPyL102;
    }
    CPy_Unreachable();
CPyL101: ;
    return 1;
CPyL102: ;
    cpy_r_r145 = 2;
    return cpy_r_r145;
CPyL103: ;
    CPy_INCREF(cpy_r_ctype);
    goto CPyL6;
CPyL104: ;
    CPyTagged_INCREF(cpy_r_size);
    goto CPyL8;
CPyL105: ;
    CPy_DecRef(cpy_r_ctype);
    CPyTagged_DecRef(cpy_r_size);
    goto CPyL102;
CPyL106: ;
    CPy_DecRef(cpy_r_ctype);
    goto CPyL102;
CPyL107: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL22;
CPyL108: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL39;
CPyL109: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL44;
CPyL110: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL49;
CPyL111: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL54;
CPyL112: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL65;
CPyL113: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL70;
CPyL114: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL93;
CPyL115: ;
    CPy_DECREF(cpy_r_ctype);
    goto CPyL101;
CPyL116: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL102;
}

PyObject *CPyPy_rtypes___RPrimitive_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "is_native_int", "is_signed", "ctype", "size", "error_overlap", "is_unboxed", "is_refcounted", 0};
    PyObject *obj_name;
    PyObject *obj_is_unboxed;
    PyObject *obj_is_refcounted;
    PyObject *obj_is_native_int = NULL;
    PyObject *obj_is_signed = NULL;
    PyObject *obj_ctype = NULL;
    PyObject *obj_size = NULL;
    PyObject *obj_error_overlap = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OOOOO@OO", "__init__", kwlist, &obj_name, &obj_is_native_int, &obj_is_signed, &obj_ctype, &obj_size, &obj_error_overlap, &obj_is_unboxed, &obj_is_refcounted)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_is_unboxed;
    if (unlikely(!PyBool_Check(obj_is_unboxed))) {
        CPy_TypeError("bool", obj_is_unboxed); goto fail;
    } else
        arg_is_unboxed = obj_is_unboxed == Py_True;
    char arg_is_refcounted;
    if (unlikely(!PyBool_Check(obj_is_refcounted))) {
        CPy_TypeError("bool", obj_is_refcounted); goto fail;
    } else
        arg_is_refcounted = obj_is_refcounted == Py_True;
    char arg_is_native_int;
    if (obj_is_native_int == NULL) {
        arg_is_native_int = 2;
    } else if (unlikely(!PyBool_Check(obj_is_native_int))) {
        CPy_TypeError("bool", obj_is_native_int); goto fail;
    } else
        arg_is_native_int = obj_is_native_int == Py_True;
    char arg_is_signed;
    if (obj_is_signed == NULL) {
        arg_is_signed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_signed))) {
        CPy_TypeError("bool", obj_is_signed); goto fail;
    } else
        arg_is_signed = obj_is_signed == Py_True;
    PyObject *arg_ctype;
    if (obj_ctype == NULL) {
        arg_ctype = NULL;
    } else if (likely(PyUnicode_Check(obj_ctype)))
        arg_ctype = obj_ctype;
    else {
        CPy_TypeError("str", obj_ctype); 
        goto fail;
    }
    CPyTagged arg_size;
    if (obj_size == NULL) {
        arg_size = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_size)))
        arg_size = CPyTagged_BorrowFromObject(obj_size);
    else {
        CPy_TypeError("int", obj_size); goto fail;
    }
    char arg_error_overlap;
    if (obj_error_overlap == NULL) {
        arg_error_overlap = 2;
    } else if (unlikely(!PyBool_Check(obj_error_overlap))) {
        CPy_TypeError("bool", obj_error_overlap); goto fail;
    } else
        arg_error_overlap = obj_error_overlap == Py_True;
    char retval = CPyDef_rtypes___RPrimitive_____init__(arg_self, arg_name, arg_is_unboxed, arg_is_refcounted, arg_is_native_int, arg_is_signed, arg_ctype, arg_size, arg_error_overlap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 185, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 0, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rprimitive */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 231, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RPrimitive___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RPrimitive___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 230, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "serialize", "RPrimitive", "name", 234, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RPrimitive___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RPrimitive___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 233, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RPrimitive___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RPrimitive___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RPrimitive___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__repr__", "RPrimitive", "name", 237, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[7973]; /* '<RPrimitive ' */
    cpy_r_r2 = CPyStatics[840]; /* '>' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 237, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_rtypes___RPrimitive_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RPrimitive_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 236, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL9;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 240, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_other);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__eq__", "RPrimitive", "name", 240, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__eq__", "RPrimitive", "name", 240, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 240, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
CPyL8: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r14);
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RPrimitive_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RPrimitive_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 239, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RPrimitive_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_self)->_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__hash__", "RPrimitive", "name", 243, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyObject_Hash(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 243, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RPrimitive_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RPrimitive))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RPrimitive_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 242, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RPrimitive_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RPrimitive_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RPrimitive))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RPrimitive_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RPrimitive_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RPrimitive_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RPrimitive_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RPrimitive))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RPrimitive_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_tagged(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_tagged", 461, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL9;
CPyL5: ;
    cpy_r_r4 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r4 != NULL)) goto CPyL8;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_tagged", 461, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r6 = cpy_r_rtype == cpy_r_r4;
    cpy_r_r3 = cpy_r_r6;
CPyL9: ;
    return cpy_r_r3;
CPyL10: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_rtypes___is_tagged(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_tagged", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_tagged(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_tagged", 460, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_int_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int_rprimitive", 465, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_int_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_int_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_int_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int_rprimitive", 464, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_short_int_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_short_int_rprimitive", 469, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_short_int_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_short_int_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_short_int_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_short_int_rprimitive", 468, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_int16_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int16_rprimitive", 473, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_int16_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_int16_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_int16_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int16_rprimitive", 472, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_int32_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
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
    char cpy_r_r18;
    cpy_r_r0 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int32_rprimitive", 477, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL15;
CPyL5: ;
    cpy_r_r4 = CPyStatic_rtypes___globals;
    cpy_r_r5 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int32_rprimitive", 478, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RPrimitive))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_int32_rprimitive", 478, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_r8 = cpy_r_rtype == cpy_r_r7;
    CPy_DECREF(cpy_r_r7);
    if (cpy_r_r8) goto CPyL9;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL14;
CPyL9: ;
    cpy_r_r10 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->__ctype;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_int32_rprimitive", "RType", "_ctype", 478, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = CPyStatics[7959]; /* 'int32_t' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL13;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL13;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int32_rprimitive", 478, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
CPyL13: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    cpy_r_r9 = cpy_r_r17;
CPyL14: ;
    cpy_r_r3 = cpy_r_r9;
CPyL15: ;
    return cpy_r_r3;
CPyL16: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy_rtypes___is_int32_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_int32_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_int32_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int32_rprimitive", 476, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_int64_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
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
    char cpy_r_r18;
    cpy_r_r0 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int64_rprimitive", 483, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL15;
CPyL5: ;
    cpy_r_r4 = CPyStatic_rtypes___globals;
    cpy_r_r5 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int64_rprimitive", 484, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RPrimitive))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_int64_rprimitive", 484, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_r8 = cpy_r_rtype == cpy_r_r7;
    CPy_DECREF(cpy_r_r7);
    if (cpy_r_r8) goto CPyL9;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL14;
CPyL9: ;
    cpy_r_r10 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->__ctype;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_int64_rprimitive", "RType", "_ctype", 484, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = CPyStatics[7960]; /* 'int64_t' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL13;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL13;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int64_rprimitive", 484, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
CPyL13: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    cpy_r_r9 = cpy_r_r17;
CPyL14: ;
    cpy_r_r3 = cpy_r_r9;
CPyL15: ;
    return cpy_r_r3;
CPyL16: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy_rtypes___is_int64_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_int64_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_int64_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_int64_rprimitive", 482, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_fixed_width_rtype(PyObject *cpy_r_rtype) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_fixed_width_rtype", 490, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL13;
CPyL3: ;
    cpy_r_r2 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_fixed_width_rtype", 491, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL12;
CPyL6: ;
    cpy_r_r4 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_fixed_width_rtype", 492, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL11;
CPyL9: ;
    cpy_r_r6 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_fixed_width_rtype", 493, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r5 = cpy_r_r6;
CPyL11: ;
    cpy_r_r3 = cpy_r_r5;
CPyL12: ;
    cpy_r_r1 = cpy_r_r3;
CPyL13: ;
    return cpy_r_r1;
CPyL14: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_rtypes___is_fixed_width_rtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_fixed_width_rtype", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_fixed_width_rtype(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_fixed_width_rtype", 488, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_uint8_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___uint8_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint8_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint8_rprimitive", 498, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_uint8_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_uint8_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_uint8_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint8_rprimitive", 497, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_uint32_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___uint32_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint32_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint32_rprimitive", 502, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_uint32_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_uint32_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_uint32_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint32_rprimitive", 501, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_uint64_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___uint64_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint64_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint64_rprimitive", 506, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_uint64_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_uint64_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_uint64_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_uint64_rprimitive", 505, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_c_py_ssize_t_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatic_rtypes___globals;
    cpy_r_r1 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_c_py_ssize_t_rprimitive", 510, CPyStatic_rtypes___globals);
        goto CPyL3;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_rtypes___RPrimitive))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_c_py_ssize_t_rprimitive", 510, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r2);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_rtype == cpy_r_r3;
    CPy_DECREF(cpy_r_r3);
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_rtypes___is_c_py_ssize_t_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_c_py_ssize_t_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_c_py_ssize_t_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_c_py_ssize_t_rprimitive", 509, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_pointer_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatic_rtypes___pointer_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_pointer_rprimitive", 514, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_rtype == cpy_r_r0;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_pointer_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_pointer_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_pointer_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_pointer_rprimitive", 513, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_float_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_float_rprimitive", 518, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_float_rprimitive", "RPrimitive", "name", 518, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_float_rprimitive", 518, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_float_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_float_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_float_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_float_rprimitive", 517, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_bool_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_bool_rprimitive", 522, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_bool_rprimitive", "RPrimitive", "name", 522, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bool_rprimitive", 522, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_bool_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_bool_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_bool_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bool_rprimitive", 521, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_bit_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_bit_rprimitive", 526, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_bit_rprimitive", "RPrimitive", "name", 526, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[7975]; /* 'bit' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bit_rprimitive", 526, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_bit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_bit_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_bit_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bit_rprimitive", 525, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_object_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_object_rprimitive", 530, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_object_rprimitive", "RPrimitive", "name", 530, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_object_rprimitive", 530, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_object_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_object_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_object_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_object_rprimitive", 529, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_none_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_none_rprimitive", 534, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_none_rprimitive", "RPrimitive", "name", 534, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_none_rprimitive", 534, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_none_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_none_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_none_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_none_rprimitive", 533, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_list_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_list_rprimitive", 538, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_list_rprimitive", "RPrimitive", "name", 538, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_list_rprimitive", 538, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_list_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_list_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_list_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_list_rprimitive", 537, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_dict_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_dict_rprimitive", 542, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_dict_rprimitive", "RPrimitive", "name", 542, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_dict_rprimitive", 542, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_dict_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_dict_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_dict_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_dict_rprimitive", 541, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_set_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_set_rprimitive", 546, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_set_rprimitive", "RPrimitive", "name", 546, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_set_rprimitive", 546, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_set_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_set_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_set_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_set_rprimitive", 545, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_str_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_str_rprimitive", 550, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_str_rprimitive", "RPrimitive", "name", 550, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_str_rprimitive", 550, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_str_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_str_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_str_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_str_rprimitive", 549, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_bytes_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_bytes_rprimitive", 554, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_bytes_rprimitive", "RPrimitive", "name", 554, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bytes_rprimitive", 554, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_bytes_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_bytes_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_bytes_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_bytes_rprimitive", 553, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_tuple_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_tuple_rprimitive", 558, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_tuple_rprimitive", "RPrimitive", "name", 558, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_tuple_rprimitive", 558, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_tuple_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_tuple_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_tuple_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_tuple_rprimitive", 557, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_range_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL8;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_range_rprimitive", 562, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "is_range_rprimitive", "RPrimitive", "name", 562, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[825]; /* 'builtins.range' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_range_rprimitive", 562, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_rtypes___is_range_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_range_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_range_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_range_rprimitive", 561, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_sequence_rprimitive(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL15;
CPyL2: ;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL16;
    }
    cpy_r_r6 = CPyDef_rtypes___is_list_rprimitive(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL14;
CPyL6: ;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r8 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL16;
    }
    cpy_r_r9 = CPyDef_rtypes___is_tuple_rprimitive(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL10: ;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r11 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL16;
    }
    cpy_r_r12 = CPyDef_rtypes___is_str_rprimitive(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 567, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    cpy_r_r10 = cpy_r_r12;
CPyL13: ;
    cpy_r_r7 = cpy_r_r10;
CPyL14: ;
    cpy_r_r4 = cpy_r_r7;
CPyL15: ;
    return cpy_r_r4;
CPyL16: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_rtypes___is_sequence_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_sequence_rprimitive", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_sequence_rprimitive(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_sequence_rprimitive", 565, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rinstance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[7586]; /* 'O' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RInstance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rinstance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rinstance", 574, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rinstance(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RInstance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rinstance__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rinstance__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_runion(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[7586]; /* 'O' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_runion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_runion", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RUnion))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_runion(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_runion", 577, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_runion__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_runion(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_runion__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_runion__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_runion__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_runion__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rprimitive(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 581, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[7956]; /* 'CPyTagged' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 581, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPyStatics[7976]; /* 'I' */
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 583, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = CPyStatics[7963]; /* 'char' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 583, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = CPyStatics[2371]; /* 'C' */
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 585, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = CPyStatics[7960]; /* 'int64_t' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 585, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL16: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r26 = CPyStatics[7977]; /* '8' */
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r27 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 587, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r27);
CPyL19: ;
    cpy_r_r28 = CPyStatics[7959]; /* 'int32_t' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL22;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL22;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 587, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL22: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    if (!cpy_r_r34) goto CPyL24;
    cpy_r_r35 = CPyStatics[7978]; /* '4' */
    CPy_INCREF(cpy_r_r35);
    return cpy_r_r35;
CPyL24: ;
    cpy_r_r36 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 589, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r36);
CPyL25: ;
    cpy_r_r37 = CPyStatics[7958]; /* 'int16_t' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL28;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL28;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 589, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL28: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (!cpy_r_r43) goto CPyL30;
    cpy_r_r44 = CPyStatics[6824]; /* '2' */
    CPy_INCREF(cpy_r_r44);
    return cpy_r_r44;
CPyL30: ;
    cpy_r_r45 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 591, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r45);
CPyL31: ;
    cpy_r_r46 = CPyStatics[7968]; /* 'uint8_t' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL34;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL34;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 591, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL34: ;
    cpy_r_r52 = cpy_r_r47 == 0;
    if (!cpy_r_r52) goto CPyL36;
    cpy_r_r53 = CPyStatics[7979]; /* 'U1' */
    CPy_INCREF(cpy_r_r53);
    return cpy_r_r53;
CPyL36: ;
    cpy_r_r54 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->__ctype;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "visit_rprimitive", "RPrimitive", "_ctype", 593, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r54);
CPyL37: ;
    cpy_r_r55 = CPyStatics[7966]; /* 'double' */
    cpy_r_r56 = PyUnicode_Compare(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = cpy_r_r56 == -1;
    if (!cpy_r_r57) goto CPyL40;
    cpy_r_r58 = PyErr_Occurred();
    cpy_r_r59 = cpy_r_r58 != NULL;
    if (!cpy_r_r59) goto CPyL40;
    cpy_r_r60 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 593, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
CPyL40: ;
    cpy_r_r61 = cpy_r_r56 == 0;
    if (!cpy_r_r61) goto CPyL42;
    cpy_r_r62 = CPyStatics[1467]; /* 'F' */
    CPy_INCREF(cpy_r_r62);
    return cpy_r_r62;
CPyL42: ;
    cpy_r_r63 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_t)->_is_unboxed;
    cpy_r_r64 = cpy_r_r63 ^ 1;
    if (cpy_r_r64) goto CPyL49;
    cpy_r_r65 = PyObject_Str(cpy_r_t);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 595, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    cpy_r_r66 = CPyStatics[7980]; /* ' unexpected unboxed type' */
    cpy_r_r67 = CPyStr_Build(2, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 595, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    cpy_r_r68 = CPyModule_builtins;
    cpy_r_r69 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 595, CPyStatic_rtypes___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r71[1] = {cpy_r_r67};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 595, CPyStatic_rtypes___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r67);
    CPy_Raise(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 595, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r74 = CPyStatics[7586]; /* 'O' */
    CPy_INCREF(cpy_r_r74);
    return cpy_r_r74;
CPyL50: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL51: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL50;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RPrimitive))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rprimitive(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive", 580, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rprimitive(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RPrimitive))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rprimitive__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rprimitive__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rtuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_elem;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_parts;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_t)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL15;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_rtypes___RType)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r9);
        goto CPyL16;
    }
    cpy_r_elem = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_elem, CPyType_rtypes___RType, 0, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_elem, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_elem);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals, "str", cpy_r_r11);
        goto CPyL16;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 599, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL2;
CPyL9: ;
    cpy_r_parts = cpy_r_r3;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_parts)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = CPyTagged_Str(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 600, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    cpy_r_r19 = CPyStatics[163]; /* '' */
    cpy_r_r20 = PyUnicode_Join(cpy_r_r19, cpy_r_parts);
    CPy_DECREF(cpy_r_parts);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 600, CPyStatic_rtypes___globals);
        goto CPyL18;
    }
    cpy_r_r21 = CPyStatics[1088]; /* 'T' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r21, cpy_r_r18, cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 600, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    return cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_parts);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RTuple))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rtuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple", 598, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rtuple(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rtuple__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rtuple__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rstruct(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "RStruct not supported in tuple");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct", 603, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rstruct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RStruct))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rstruct(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct", 602, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rstruct(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RStruct))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rstruct__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rstruct__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rarray(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "RArray not supported in tuple");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray", 606, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rarray(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rarray", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RArray))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rarray(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray", 605, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rarray__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rarray(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rarray__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rarray__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RArray))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rarray__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rarray__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rvoid(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "rvoid in tuple?");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid", 609, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rvoid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_rtypes___RVoid))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rvoid(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid", 608, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___TupleNameVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___TupleNameVisitor___visit_rvoid(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___TupleNameVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___TupleNameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.TupleNameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RVoid))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___TupleNameVisitor___visit_rvoid__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "visit_rvoid__RTypeVisitor_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RTuple_____init__(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_t;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_t_2;
    char cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    cpy_r_r0 = CPyStatics[3659]; /* 'tuple' */
    CPy_INCREF(cpy_r_r0);
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_name = cpy_r_r0;
    cpy_r_r1 = PyList_AsTuple(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 631, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_r3 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL32;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 632, CPyStatic_rtypes___globals);
        goto CPyL33;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_rtypes___RType)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 632, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r9);
        goto CPyL33;
    }
    cpy_r_t = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t)->_is_refcounted;
    CPy_DECREF(cpy_r_t);
    if (cpy_r_r11) {
        goto CPyL34;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r2 = 1;
    goto CPyL8;
CPyL7: ;
    cpy_r_r12 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r12;
    goto CPyL2;
CPyL8: ;
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_is_refcounted = cpy_r_r2;
    cpy_r_r14 = CPyDef_rtypes___TupleNameVisitor();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 636, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    cpy_r_r15 = CPyDef_rtypes___RTuple___accept(cpy_r_self, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 636, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 636, CPyStatic_rtypes___globals, "str", cpy_r_r15);
        goto CPyL31;
    }
    if (((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_unique_id != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_unique_id);
    }
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_unique_id = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 636, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    cpy_r_r18 = CPyStatics[7981]; /* 'tuple_' */
    cpy_r_r19 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_unique_id;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__init__", "RTuple", "unique_id", 638, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r19);
CPyL13: ;
    cpy_r_r20 = CPyStr_Build(2, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 638, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    if (((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_struct_name != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_struct_name);
    }
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_struct_name = cpy_r_r20;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 638, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    cpy_r_r22 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r23 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_struct_name;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "__init__", "RTuple", "struct_name", 639, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r23);
CPyL16: ;
    cpy_r_r24 = CPyStatics[163]; /* '' */
    cpy_r_r25 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r26[3] = {cpy_r_r22, cpy_r_r23, cpy_r_r24};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 639, CPyStatic_rtypes___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 639, CPyStatic_rtypes___globals, "str", cpy_r_r28);
        goto CPyL31;
    }
    if (((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->__ctype != NULL) {
        CPy_DECREF(((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->__ctype);
    }
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->__ctype = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 639, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    cpy_r_r31 = 1;
    cpy_r_r32 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = 0;
CPyL20: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL36;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 640, CPyStatic_rtypes___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_rtypes___RType)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__init__", 640, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r38);
        goto CPyL37;
    }
    cpy_r_t_2 = cpy_r_r39;
    cpy_r_r40 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t_2)->_error_overlap;
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r41 = cpy_r_r40 ^ 1;
    if (cpy_r_r41) {
        goto CPyL38;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r31 = 0;
    goto CPyL26;
CPyL25: ;
    cpy_r_r42 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r42;
    goto CPyL20;
CPyL26: ;
    if (cpy_r_r31) goto CPyL28;
    cpy_r_r43 = cpy_r_r31;
    goto CPyL30;
CPyL28: ;
    cpy_r_r44 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyObject_IsTrue(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 640, CPyStatic_rtypes___globals);
        goto CPyL31;
    }
    cpy_r_r47 = cpy_r_r45;
    cpy_r_r43 = cpy_r_r47;
CPyL30: ;
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_error_overlap = cpy_r_r43;
    return 1;
CPyL31: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL32: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL6;
CPyL35: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL31;
CPyL36: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL26;
CPyL37: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL31;
CPyL38: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL24;
}

PyObject *CPyPy_rtypes___RTuple_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    PyObject *obj_types;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RTuple_____init__(arg_self, arg_types);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 629, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 3, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rtuple */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 643, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RTuple___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 642, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple_____str__(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_r1, cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_rtypes___RType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_typ = cpy_r_r11;
    cpy_r_r12 = PyObject_Str(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_r15 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r16 = CPyStatics[3685]; /* 'tuple[' */
    cpy_r_r17 = CPyStatics[208]; /* ']' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 646, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    return cpy_r_r18;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
}

PyObject *CPyPy_rtypes___RTuple_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 645, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple_____repr__(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL15;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_r1, cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_rtypes___RType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r10);
        goto CPyL16;
    }
    cpy_r_typ = cpy_r_r11;
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[146]; /* 'repr' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_typ};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_typ);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals, "str", cpy_r_r17);
        goto CPyL16;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    cpy_r_r20 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r20;
    goto CPyL2;
CPyL10: ;
    cpy_r_r21 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r22 = CPyStatics[7982]; /* '<RTuple ' */
    cpy_r_r23 = CPyStatics[840]; /* '>' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_r21, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 649, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    return cpy_r_r24;
CPyL13: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_typ);
    goto CPyL13;
}

PyObject *CPyPy_rtypes___RTuple_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 648, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL6;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RTuple))
        cpy_r_r6 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 652, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RTuple", cpy_r_other);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r6)->_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 652, CPyStatic_rtypes___globals);
        goto CPyL7;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 652, CPyStatic_rtypes___globals);
        goto CPyL7;
    }
    cpy_r_r4 = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_rtypes___RTuple_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RTuple_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 651, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RTuple_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9918 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp9918);
    PyObject *__tmp9919 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp9919);
    cpy_r_r4 = CPyObject_Hash(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 655, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = CPY_INT_TAG;
    return cpy_r_r5;
}

PyObject *CPyPy_rtypes___RTuple_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RTuple_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 654, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 658, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 658, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_rtypes___RType)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "serialize", 658, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_x = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_x, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_x); /* serialize */
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 658, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 658, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL8: ;
    cpy_r_types = cpy_r_r3;
    cpy_r_r14 = CPyStatics[3930]; /* '.class' */
    cpy_r_r15 = CPyStatics[7023]; /* 'RTuple' */
    cpy_r_r16 = CPyStatics[114]; /* 'types' */
    cpy_r_r17 = CPyDict_Build(2, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 659, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RTuple___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 657, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RTuple___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RTuple___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RTuple))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    cpy_r_r1 = CPyStatics[114]; /* 'types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_data, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
CPyL3: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL12;
    cpy_r_t = cpy_r_r4;
    if (PyDict_Check(cpy_r_t))
        cpy_r_r5 = cpy_r_t;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9920;
    if (PyUnicode_Check(cpy_r_t))
        cpy_r_r5 = cpy_r_t;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9920;
    CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals, "union[dict, str]", cpy_r_t);
    goto CPyL13;
__LL9920: ;
    cpy_r_r6 = CPyDef_rtypes___deserialize_type(cpy_r_r5, cpy_r_ctx);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r0, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL13;
    } else
        goto CPyL3;
CPyL7: ;
    cpy_r_r9 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 663, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_types = cpy_r_r0;
    cpy_r_r10 = CPyDef_rtypes___RTuple(cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 664, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RTuple___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RTuple___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 662, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RTuple_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    ((mypyc___ir___rtypes___RTupleObject *)cpy_r___mypyc_self__)->_is_unboxed = 1;
    return 1;
}

PyObject *CPyPy_rtypes___RTuple_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RTuple))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RTuple_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RTuple_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RTuple_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RTuple_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RTuple))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RTuple_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___compute_rtype_alignment(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_platform_alignment;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_item;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_max_alignment;
    CPyTagged cpy_r_r66;
    cpy_r_r0 = NULL;
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = CPyStatic_rtypes___globals;
    cpy_r_r2 = CPyStatics[7722]; /* 'PLATFORM_SIZE' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 681, CPyStatic_rtypes___globals);
        goto CPyL51;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 681, CPyStatic_rtypes___globals);
        goto CPyL51;
    }
    cpy_r_platform_alignment = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) {
        goto CPyL52;
    } else
        goto CPyL6;
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RPrimitive))
        cpy_r_r9 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 683, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_typ);
        goto CPyL50;
    }
    cpy_r_r10 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r9)->_size;
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "compute_rtype_alignment", "RPrimitive", "size", 683, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPyTagged_INCREF(cpy_r_r10);
CPyL5: ;
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (cpy_r_r14) {
        goto CPyL53;
    } else
        goto CPyL8;
CPyL7: ;
    return cpy_r_platform_alignment;
CPyL8: ;
    cpy_r_r15 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (cpy_r_r18) {
        goto CPyL54;
    } else
        goto CPyL55;
CPyL9: ;
    return cpy_r_platform_alignment;
CPyL10: ;
    cpy_r_r19 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (cpy_r_r22) {
        goto CPyL56;
    } else
        goto CPyL14;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RArray))
        cpy_r_r23 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 689, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_typ);
        goto CPyL50;
    }
    cpy_r_r24 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r23)->_item_type;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_rtypes___compute_rtype_alignment(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 689, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    return cpy_r_r25;
CPyL14: ;
    cpy_r_r26 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (cpy_r_r29) {
        goto CPyL57;
    } else
        goto CPyL18;
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r30 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 692, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL50;
    }
    cpy_r_r31 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r30)->_types;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PySequence_List(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 692, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    cpy_r_items = cpy_r_r32;
    goto CPyL24;
CPyL18: ;
    cpy_r_r33 = (PyObject *)CPyType_rtypes___RStruct;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (cpy_r_r36) {
        goto CPyL58;
    } else
        goto CPyL21;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RStruct))
        cpy_r_r37 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 694, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_typ);
        goto CPyL50;
    }
    cpy_r_r38 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r37)->_types;
    CPy_INCREF(cpy_r_r38);
    cpy_r_items = cpy_r_r38;
    goto CPyL24;
CPyL21: ;
    if (0) {
        goto CPyL24;
    } else
        goto CPyL59;
CPyL22: ;
    PyErr_SetString(PyExc_AssertionError, "invalid rtype for computing alignment");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 696, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL24: ;
    if (cpy_r_items != NULL) goto CPyL27;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"items\" referenced before assignment");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", -1, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    if (cpy_r_items != NULL) goto CPyL30;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"items\" referenced before assignment");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", -1, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r44 = PyList_New(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL51;
    }
    cpy_r_r45 = 0;
CPyL32: ;
    if (cpy_r_items == NULL) {
        goto CPyL60;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"items\" referenced before assignment");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", -1, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    if (cpy_r_items == NULL) {
        goto CPyL61;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"items\" referenced before assignment");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", -1, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r50 = cpy_r_r48 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL62;
    if (cpy_r_items == NULL) {
        goto CPyL63;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"items\" referenced before assignment");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r45);
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_rtypes___RType)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r53);
        goto CPyL64;
    }
    cpy_r_item = cpy_r_r54;
    cpy_r_r55 = CPyDef_rtypes___compute_rtype_alignment(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL64;
    }
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r57 = CPyList_SetItemUnsafe(cpy_r_r44, cpy_r_r45, cpy_r_r56);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL64;
    }
    cpy_r_r58 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r58;
    goto CPyL32;
CPyL46: ;
    cpy_r_r59 = CPyModule_builtins;
    cpy_r_r60 = CPyStatics[463]; /* 'max' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r62[1] = {cpy_r_r44};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 1, 0);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r44);
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64); cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 697, CPyStatic_rtypes___globals);
        goto CPyL50;
    }
    cpy_r_max_alignment = cpy_r_r65;
    return cpy_r_max_alignment;
CPyL50: ;
    cpy_r_r66 = CPY_INT_TAG;
    return cpy_r_r66;
CPyL51: ;
    CPy_XDecRef(cpy_r_items);
    goto CPyL50;
CPyL52: ;
    CPy_XDECREF(cpy_r_items);
    CPyTagged_DECREF(cpy_r_platform_alignment);
    goto CPyL3;
CPyL53: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL7;
CPyL54: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL9;
CPyL55: ;
    CPyTagged_DECREF(cpy_r_platform_alignment);
    goto CPyL10;
CPyL56: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL11;
CPyL57: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL15;
CPyL58: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL19;
CPyL59: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL22;
CPyL60: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL33;
CPyL61: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL36;
CPyL62: ;
    CPy_XDECREF(cpy_r_items);
    goto CPyL46;
CPyL63: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL40;
CPyL64: ;
    CPy_XDecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r44);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL50;
}

PyObject *CPyPy_rtypes___compute_rtype_alignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:compute_rtype_alignment", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___compute_rtype_alignment(arg_typ);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_alignment", 679, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___compute_rtype_size(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OI cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OI cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_alignment;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_aligned_size;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RPrimitive))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 704, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_typ);
        goto CPyL32;
    }
    cpy_r_r5 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r4)->_size;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "compute_rtype_size", "RPrimitive", "size", 704, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    CPyTagged_INCREF(cpy_r_r5);
CPyL3: ;
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 706, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL32;
    }
    cpy_r_r11 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r10)->_types;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PySequence_List(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 706, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    cpy_r_r13 = CPyDef_rtypes___compute_aligned_offsets_and_size(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 706, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    cpy_r_r14 = cpy_r_r13.f1;
    CPyTagged_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13.f0);
    CPyTagged_DECREF(cpy_r_r13.f1);
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = CPyStatic_rtypes___globals;
    cpy_r_r20 = CPyStatics[7722]; /* 'PLATFORM_SIZE' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 708, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    if (likely(PyLong_Check(cpy_r_r21)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r21);
    else {
        CPy_TypeError("int", cpy_r_r21); cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 708, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    return cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = (PyObject *)CPyType_rtypes___RStruct;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RStruct))
        cpy_r_r27 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 710, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_typ);
        goto CPyL32;
    }
    cpy_r_r28 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r27)->_types;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_rtypes___compute_aligned_offsets_and_size(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 710, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    cpy_r_r30 = cpy_r_r29.f1;
    CPyTagged_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29.f0);
    CPyTagged_DECREF(cpy_r_r29.f1);
    return cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL21;
    cpy_r_r35 = CPyStatic_rtypes___globals;
    cpy_r_r36 = CPyStatics[7722]; /* 'PLATFORM_SIZE' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 712, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 712, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    return cpy_r_r38;
CPyL21: ;
    cpy_r_r39 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL28;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RArray))
        cpy_r_r43 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 714, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_typ);
        goto CPyL32;
    }
    cpy_r_r44 = CPyDef_rtypes___compute_rtype_alignment(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 714, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    cpy_r_alignment = cpy_r_r44;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RArray))
        cpy_r_r45 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 715, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_typ);
        goto CPyL33;
    }
    cpy_r_r46 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r45)->_item_type;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_rtypes___compute_rtype_size(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 715, CPyStatic_rtypes___globals);
        goto CPyL33;
    }
    cpy_r_r48 = CPyTagged_Subtract(cpy_r_alignment, 2);
    cpy_r_r49 = CPyTagged_Add(cpy_r_r47, cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r48);
    cpy_r_r50 = CPyTagged_Subtract(cpy_r_alignment, 2);
    CPyTagged_DECREF(cpy_r_alignment);
    cpy_r_r51 = CPyTagged_Invert(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r50);
    cpy_r_r52 = CPyTagged_And(cpy_r_r49, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r49);
    CPyTagged_DECREF(cpy_r_r51);
    cpy_r_aligned_size = cpy_r_r52;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RArray))
        cpy_r_r53 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 716, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r54 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r53)->_length;
    CPyTagged_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyTagged_Multiply(cpy_r_aligned_size, cpy_r_r54);
    CPyTagged_DECREF(cpy_r_aligned_size);
    CPyTagged_DECREF(cpy_r_r54);
    return cpy_r_r55;
CPyL28: ;
    if (0) goto CPyL31;
    PyErr_SetString(PyExc_AssertionError, "invalid rtype for computing size");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 718, CPyStatic_rtypes___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r57 = CPY_INT_TAG;
    return cpy_r_r57;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_alignment);
    goto CPyL32;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_aligned_size);
    goto CPyL32;
}

PyObject *CPyPy_rtypes___compute_rtype_size(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:compute_rtype_size", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___compute_rtype_size(arg_typ);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_rtype_size", 701, CPyStatic_rtypes___globals);
    return NULL;
}

tuple_T2OI CPyDef_rtypes___compute_aligned_offsets_and_size(PyObject *cpy_r_types) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_typ;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_unaligned_sizes;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_typ_2;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_alignments;
    CPyTagged cpy_r_current_offset;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_offsets;
    CPyTagged cpy_r_final_size;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_i;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_cur_size;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_next_alignment;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyTagged cpy_r_struct_alignment;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    tuple_T2OI cpy_r_r70;
    tuple_T2OI cpy_r_r71;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 727, CPyStatic_rtypes___globals);
        goto CPyL34;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_rtypes___RType)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 727, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r8);
        goto CPyL35;
    }
    cpy_r_typ = cpy_r_r9;
    cpy_r_r10 = CPyDef_rtypes___compute_rtype_size(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 727, CPyStatic_rtypes___globals);
        goto CPyL35;
    }
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 727, CPyStatic_rtypes___globals);
        goto CPyL35;
    }
    cpy_r_r13 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_unaligned_sizes = cpy_r_r2;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = PyList_New(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 728, CPyStatic_rtypes___globals);
        goto CPyL36;
    }
    cpy_r_r17 = 0;
CPyL9: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_rtypes___RType)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 728, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r22);
        goto CPyL37;
    }
    cpy_r_typ_2 = cpy_r_r23;
    cpy_r_r24 = CPyDef_rtypes___compute_rtype_alignment(cpy_r_typ_2);
    CPy_DECREF(cpy_r_typ_2);
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 728, CPyStatic_rtypes___globals);
        goto CPyL37;
    }
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r26 = CPyList_SetItemUnsafe(cpy_r_r16, cpy_r_r17, cpy_r_r25);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 728, CPyStatic_rtypes___globals);
        goto CPyL37;
    }
    cpy_r_r27 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r27;
    goto CPyL9;
CPyL14: ;
    cpy_r_alignments = cpy_r_r16;
    cpy_r_current_offset = 0;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 731, CPyStatic_rtypes___globals);
        goto CPyL38;
    }
    cpy_r_offsets = cpy_r_r28;
    cpy_r_final_size = 0;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_unaligned_sizes)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = 0;
    cpy_r_i = cpy_r_r32;
CPyL16: ;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r33) goto CPyL39;
    CPyTagged_INCREF(cpy_r_current_offset);
    cpy_r_r34 = CPyTagged_StealAsObject(cpy_r_current_offset);
    cpy_r_r35 = PyList_Append(cpy_r_offsets, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 734, CPyStatic_rtypes___globals);
        goto CPyL40;
    }
    cpy_r_r37 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_unaligned_sizes)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = cpy_r_r37 & 1;
    cpy_r_r42 = cpy_r_r41 != 0;
    if (!cpy_r_r42) goto CPyL20;
    cpy_r_r43 = CPyTagged_IsLt_(cpy_r_r37, cpy_r_r40);
    CPyTagged_DECREF(cpy_r_r37);
    if (cpy_r_r43) {
        goto CPyL21;
    } else
        goto CPyL41;
CPyL20: ;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    CPyTagged_DECREF(cpy_r_r37);
    if (!cpy_r_r44) goto CPyL41;
CPyL21: ;
    cpy_r_r45 = CPyList_GetItem(cpy_r_unaligned_sizes, cpy_r_i);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 736, CPyStatic_rtypes___globals);
        goto CPyL40;
    }
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 736, CPyStatic_rtypes___globals);
        goto CPyL40;
    }
    cpy_r_cur_size = cpy_r_r46;
    cpy_r_r47 = CPyTagged_Add(cpy_r_current_offset, cpy_r_cur_size);
    CPyTagged_DECREF(cpy_r_current_offset);
    CPyTagged_DECREF(cpy_r_cur_size);
    cpy_r_current_offset = cpy_r_r47;
    cpy_r_r48 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r49 = CPyList_GetItem(cpy_r_alignments, cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 738, CPyStatic_rtypes___globals);
        goto CPyL42;
    }
    if (likely(PyLong_Check(cpy_r_r49)))
        cpy_r_r50 = CPyTagged_FromObject(cpy_r_r49);
    else {
        CPy_TypeError("int", cpy_r_r49); cpy_r_r50 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 738, CPyStatic_rtypes___globals);
        goto CPyL42;
    }
    cpy_r_next_alignment = cpy_r_r50;
    cpy_r_r51 = CPyTagged_Subtract(cpy_r_next_alignment, 2);
    cpy_r_r52 = CPyTagged_Add(cpy_r_current_offset, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_current_offset);
    CPyTagged_DECREF(cpy_r_r51);
    cpy_r_r53 = CPyTagged_Negate(cpy_r_next_alignment);
    CPyTagged_DECREF(cpy_r_next_alignment);
    cpy_r_r54 = CPyTagged_And(cpy_r_r52, cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r53);
    cpy_r_current_offset = cpy_r_r54;
    goto CPyL32;
CPyL26: ;
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[463]; /* 'max' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 743, CPyStatic_rtypes___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r58[1] = {cpy_r_alignments};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 743, CPyStatic_rtypes___globals);
        goto CPyL43;
    }
    if (likely(PyLong_Check(cpy_r_r60)))
        cpy_r_r61 = CPyTagged_FromObject(cpy_r_r60);
    else {
        CPy_TypeError("int", cpy_r_r60); cpy_r_r61 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 743, CPyStatic_rtypes___globals);
        goto CPyL43;
    }
    cpy_r_struct_alignment = cpy_r_r61;
    cpy_r_r62 = CPyList_GetItemBorrow(cpy_r_unaligned_sizes, cpy_r_i);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 744, CPyStatic_rtypes___globals);
        goto CPyL44;
    }
    if (likely(PyLong_Check(cpy_r_r62)))
        cpy_r_r63 = CPyTagged_FromObject(cpy_r_r62);
    else {
        CPy_TypeError("int", cpy_r_r62); cpy_r_r63 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r63 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 744, CPyStatic_rtypes___globals);
        goto CPyL44;
    }
    cpy_r_r64 = CPyTagged_Add(cpy_r_current_offset, cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_final_size = cpy_r_r64;
    cpy_r_r65 = CPyTagged_Subtract(cpy_r_struct_alignment, 2);
    cpy_r_r66 = CPyTagged_Add(cpy_r_final_size, cpy_r_r65);
    CPyTagged_DECREF(cpy_r_final_size);
    CPyTagged_DECREF(cpy_r_r65);
    cpy_r_r67 = CPyTagged_Negate(cpy_r_struct_alignment);
    CPyTagged_DECREF(cpy_r_struct_alignment);
    cpy_r_r68 = CPyTagged_And(cpy_r_r66, cpy_r_r67);
    CPyTagged_DECREF(cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r67);
    cpy_r_final_size = cpy_r_r68;
CPyL32: ;
    cpy_r_r69 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r69;
    cpy_r_i = cpy_r_r69;
    goto CPyL16;
CPyL33: ;
    cpy_r_r70.f0 = cpy_r_offsets;
    cpy_r_r70.f1 = cpy_r_final_size;
    CPy_INCREF(cpy_r_r70.f0);
    CPyTagged_INCREF(cpy_r_r70.f1);
    CPy_DECREF(cpy_r_offsets);
    CPyTagged_DECREF(cpy_r_final_size);
    return cpy_r_r70;
CPyL34: ;
    tuple_T2OI __tmp9921 = { NULL, CPY_INT_TAG };
    cpy_r_r71 = __tmp9921;
    return cpy_r_r71;
CPyL35: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_r16);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_alignments);
    CPyTagged_DecRef(cpy_r_current_offset);
    goto CPyL34;
CPyL39: ;
    CPy_DECREF(cpy_r_unaligned_sizes);
    CPy_DECREF(cpy_r_alignments);
    CPyTagged_DECREF(cpy_r_current_offset);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_alignments);
    CPyTagged_DecRef(cpy_r_current_offset);
    CPy_DecRef(cpy_r_offsets);
    CPyTagged_DecRef(cpy_r_final_size);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL34;
CPyL41: ;
    CPyTagged_DECREF(cpy_r_final_size);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_alignments);
    CPyTagged_DecRef(cpy_r_current_offset);
    CPy_DecRef(cpy_r_offsets);
    CPyTagged_DecRef(cpy_r_final_size);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_alignments);
    CPyTagged_DecRef(cpy_r_current_offset);
    CPy_DecRef(cpy_r_offsets);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL34;
CPyL44: ;
    CPy_DecRef(cpy_r_unaligned_sizes);
    CPy_DecRef(cpy_r_alignments);
    CPyTagged_DecRef(cpy_r_current_offset);
    CPy_DecRef(cpy_r_offsets);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_struct_alignment);
    goto CPyL34;
}

PyObject *CPyPy_rtypes___compute_aligned_offsets_and_size(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:compute_aligned_offsets_and_size", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    tuple_T2OI retval = CPyDef_rtypes___compute_aligned_offsets_and_size(arg_types);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9922 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9922);
    PyObject *__tmp9923 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp9923);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "compute_aligned_offsets_and_size", 721, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RStruct_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_names, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    tuple_T2OI cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    CPy_INCREF(cpy_r_name);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_names);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names = cpy_r_names;
    CPy_INCREF(cpy_r_types);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types = cpy_r_types;
    cpy_r_r0 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL10;
    cpy_r_r9 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_r12, cpy_r_r16);
    cpy_r_r18 = 0;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_i = cpy_r_r18;
CPyL2: ;
    cpy_r_r19 = cpy_r_r18 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    cpy_r_r21 = cpy_r_r17 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    cpy_r_r23 = cpy_r_r20 & cpy_r_r22;
    if (!cpy_r_r23) goto CPyL4;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r17;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL5;
CPyL4: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_r18, cpy_r_r17);
    cpy_r_r25 = cpy_r_r26;
CPyL5: ;
    if (!cpy_r_r25) goto CPyL13;
    cpy_r_r27 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[7983]; /* '_item' */
    cpy_r_r29 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 759, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r30 = PyUnicode_Concat(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 759, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    cpy_r_r31 = PyList_Append(cpy_r_r27, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 759, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_r33 = CPyTagged_Add(cpy_r_r18, 2);
    CPyTagged_DECREF(cpy_r_r18);
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r18 = cpy_r_r33;
    cpy_r_i = cpy_r_r33;
    goto CPyL2;
CPyL10: ;
    cpy_r_r34 = CPyDef_rtypes___compute_aligned_offsets_and_size(cpy_r_types);
    if (unlikely(cpy_r_r34.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 760, CPyStatic_rtypes___globals);
        goto CPyL12;
    }
    cpy_r_r35 = cpy_r_r34.f0;
    CPy_INCREF(cpy_r_r35);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_offsets = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f1;
    CPyTagged_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r34.f0);
    CPyTagged_DECREF(cpy_r_r34.f1);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_size = cpy_r_r36;
    CPy_INCREF(cpy_r_name);
    ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->__ctype = cpy_r_name;
    return 1;
CPyL12: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL13: ;
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL10;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r27);
    goto CPyL12;
CPyL15: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r18);
    goto CPyL12;
}

PyObject *CPyPy_rtypes___RStruct_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "names", "types", 0};
    PyObject *obj_name;
    PyObject *obj_names;
    PyObject *obj_types;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_name, &obj_names, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyList_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("list", obj_names); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RStruct_____init__(arg_self, arg_name, arg_names, arg_types);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 752, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 4, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rstruct */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 764, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RStruct___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 763, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_r3 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL16;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals, "str", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_name = cpy_r_r16;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_rtypes___RType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r17);
        goto CPyL18;
    }
    cpy_r_typ = cpy_r_r18;
    cpy_r_r19 = CPyStatics[171]; /* ':' */
    cpy_r_r20 = PyUnicode_Concat(cpy_r_name, cpy_r_r19);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL19;
    }
    cpy_r_r21 = PyObject_Str(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    cpy_r_r22 = PyUnicode_Concat(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    cpy_r_r23 = PyList_Append(cpy_r_r2, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    cpy_r_r25 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r25;
    cpy_r_r26 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r26;
    goto CPyL2;
CPyL11: ;
    cpy_r_r27 = PyUnicode_Join(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 770, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_r28 = CPyStatics[1405]; /* '{' */
    cpy_r_r29 = CPyStatics[1406]; /* '}' */
    cpy_r_r30 = CPyStr_Build(4, cpy_r_r0, cpy_r_r28, cpy_r_r27, cpy_r_r29);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 768, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    return cpy_r_r30;
CPyL14: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_typ);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r20);
    goto CPyL14;
}

PyObject *CPyPy_rtypes___RStruct_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 766, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    cpy_r_r3 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL18;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL18;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals, "str", cpy_r_r15);
        goto CPyL19;
    }
    cpy_r_name = cpy_r_r16;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_rtypes___RType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_typ = cpy_r_r18;
    cpy_r_r19 = CPyStatics[171]; /* ':' */
    cpy_r_r20 = PyUnicode_Concat(cpy_r_name, cpy_r_r19);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL21;
    }
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[146]; /* 'repr' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_typ};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_typ);
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals, "str", cpy_r_r26);
        goto CPyL23;
    }
    cpy_r_r28 = PyUnicode_Concat(cpy_r_r20, cpy_r_r27);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL19;
    }
    cpy_r_r29 = PyList_Append(cpy_r_r2, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL19;
    }
    cpy_r_r31 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r31;
    cpy_r_r32 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r32;
    goto CPyL2;
CPyL13: ;
    cpy_r_r33 = PyUnicode_Join(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 776, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    cpy_r_r34 = CPyStatics[7984]; /* '<RStruct ' */
    cpy_r_r35 = CPyStatics[1405]; /* '{' */
    cpy_r_r36 = CPyStatics[7985]; /* '}>' */
    cpy_r_r37 = CPyStr_Build(5, cpy_r_r34, cpy_r_r0, cpy_r_r35, cpy_r_r33, cpy_r_r36);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 774, CPyStatic_rtypes___globals);
        goto CPyL16;
    }
    return cpy_r_r37;
CPyL16: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_typ);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r20);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r20);
    goto CPyL16;
}

PyObject *CPyPy_rtypes___RStruct_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 773, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RStruct;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL19;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RStruct))
        cpy_r_r6 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 782, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_other);
        goto CPyL21;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r6)->_name;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 782, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
CPyL6: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (cpy_r_r13) goto CPyL8;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL18;
CPyL8: ;
    cpy_r_r15 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RStruct))
        cpy_r_r16 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 783, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_other);
        goto CPyL22;
    }
    cpy_r_r17 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r16)->_names;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = PyObject_RichCompare(cpy_r_r15, cpy_r_r17, 2);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 783, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r18))) {
        CPy_TypeError("bool", cpy_r_r18); cpy_r_r19 = 2;
    } else
        cpy_r_r19 = cpy_r_r18 == Py_True;
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 783, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    if (cpy_r_r19) goto CPyL13;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL17;
CPyL13: ;
    cpy_r_r21 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RStruct))
        cpy_r_r22 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 784, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_other);
        goto CPyL23;
    }
    cpy_r_r23 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r22)->_types;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r21, cpy_r_r23, 2);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 784, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 784, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    cpy_r_r20 = cpy_r_r25;
CPyL17: ;
    cpy_r_r14 = cpy_r_r20;
CPyL18: ;
    cpy_r_r4 = cpy_r_r14;
CPyL19: ;
    cpy_r_r26 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL20: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL21: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL20;
}

PyObject *CPyPy_rtypes___RStruct_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RStruct_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 779, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RStruct_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3OOO cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    cpy_r_r0 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_AsTuple(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 788, CPyStatic_rtypes___globals);
        goto CPyL5;
    }
    cpy_r_r3 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyList_AsTuple(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 788, CPyStatic_rtypes___globals);
        goto CPyL6;
    }
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    cpy_r_r5.f2 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_INCREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = PyTuple_New(3);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9924 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp9924);
    PyObject *__tmp9925 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp9925);
    PyObject *__tmp9926 = cpy_r_r5.f2;
    PyTuple_SET_ITEM(cpy_r_r6, 2, __tmp9926);
    cpy_r_r7 = CPyObject_Hash(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 788, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPY_INT_TAG;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RStruct_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RStruct_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 787, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct___serialize(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 791, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RStruct___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 790, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RStruct___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RStruct___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 795, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RStruct___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RStruct___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 794, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RStruct_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RStructObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RStructObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RStructObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RStruct_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RStruct))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RStruct_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RStruct_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RStruct_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RStruct_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RStruct))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RStruct_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RInstance_____init__(PyObject *cpy_r_self, PyObject *cpy_r_class_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_class_ir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 819, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
CPyL1: ;
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_name = cpy_r_r0;
    CPy_INCREF(cpy_r_class_ir);
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_class_ir = cpy_r_class_ir;
    cpy_r_r1 = CPyStatics[6916]; /* 'PyObject *' */
    CPy_INCREF(cpy_r_r1);
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->__ctype = cpy_r_r1;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"class_ir", 0};
    PyObject *obj_class_ir;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_class_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_class_ir;
    if (likely(Py_TYPE(obj_class_ir) == CPyType_class_ir___ClassIR))
        arg_class_ir = obj_class_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_class_ir); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RInstance_____init__(arg_self, arg_class_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 816, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 1, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rinstance */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 824, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RInstance___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 823, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance___struct_name(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_class_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_r0, cpy_r_names);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "struct_name", 827, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance___struct_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:struct_name", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance___struct_name(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "struct_name", 826, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RInstance___getter_index(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_class_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___vtable_entry(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "getter_index", 830, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance___getter_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:getter_index", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RInstance___getter_index(arg_self, arg_name);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "getter_index", 829, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RInstance___setter_index(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = CPyDef_rtypes___RInstance___getter_index(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "setter_index", 833, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    CPyTagged_DECREF(cpy_r_r0);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance___setter_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:setter_index", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RInstance___setter_index(arg_self, arg_name);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "setter_index", 832, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RInstance___method_index(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_class_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___vtable_entry(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "method_index", 836, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance___method_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:method_index", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RInstance___method_index(arg_self, arg_name);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "method_index", 835, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance___attr_type(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_class_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___attr_type(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "attr_type", 839, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance___attr_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:attr_type", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance___attr_type(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "attr_type", 838, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[7986]; /* '<RInstance ' */
    cpy_r_r2 = CPyStatics[840]; /* '>' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 842, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_rtypes___RInstance_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 841, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL7;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RInstance))
        cpy_r_r5 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 845, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RInstance", cpy_r_other);
        goto CPyL8;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r5)->_name;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 845, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
CPyL6: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    cpy_r_r4 = cpy_r_r13;
CPyL7: ;
    cpy_r_r14 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r14);
    return cpy_r_r14;
CPyL8: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
}

PyObject *CPyPy_rtypes___RInstance_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RInstance_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 844, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RInstance_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyObject_Hash(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 848, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_rtypes___RInstance_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RInstance_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 847, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_rtypes___RInstance___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 850, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RInstance___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RInstance___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RInstance))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RInstance___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RInstance_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    ((mypyc___ir___rtypes___RInstanceObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RInstance_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RInstance))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RInstance_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RInstance_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RInstance_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RInstance_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RInstance))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RInstance_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RUnion_____init__(PyObject *cpy_r_self, PyObject *cpy_r_items) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatics[2631]; /* 'union' */
    CPy_INCREF(cpy_r_r0);
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_name = cpy_r_r0;
    CPy_INCREF(cpy_r_items);
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items = cpy_r_items;
    cpy_r_r1 = PyFrozenSet_New(cpy_r_items);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 862, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items_set = cpy_r_r1;
    cpy_r_r2 = CPyStatics[6916]; /* 'PyObject *' */
    CPy_INCREF(cpy_r_r2);
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->__ctype = cpy_r_r2;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___RUnion_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"items", 0};
    PyObject *obj_items;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_items)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RUnion_____init__(arg_self, arg_items);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 859, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion___make_simplified_union(PyObject *cpy_r_items) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_unique_items;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
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
    cpy_r_r0 = CPyDef_rtypes___flatten_nested_unions(cpy_r_items);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 874, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) {
        goto CPyL4;
    } else
        goto CPyL16;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 875, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = (PyObject *)&PyDict_Type;
    cpy_r_r7 = CPyStatics[7987]; /* 'fromkeys' */
    PyObject *cpy_r_r8[2] = {cpy_r_r6, cpy_r_items};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 877, CPyStatic_rtypes___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_items);
    if (likely(PyDict_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 877, CPyStatic_rtypes___globals, "dict", cpy_r_r10);
        goto CPyL15;
    }
    cpy_r_unique_items = cpy_r_r11;
    cpy_r_r12 = PyDict_Size(cpy_r_unique_items);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r13 > (Py_ssize_t)2;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = PySequence_List(cpy_r_unique_items);
    CPy_DECREF(cpy_r_unique_items);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 879, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_r16 = CPyDef_rtypes___RUnion(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 879, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = PyObject_GetIter(cpy_r_unique_items);
    CPy_DECREF(cpy_r_unique_items);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 881, CPyStatic_rtypes___globals);
        goto CPyL15;
    }
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[7988]; /* 'next' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 881, CPyStatic_rtypes___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r17};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 881, CPyStatic_rtypes___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_rtypes___RType)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 881, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r23);
        goto CPyL15;
    }
    return cpy_r_r24;
CPyL15: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL16: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL2;
CPyL17: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL15;
}

PyObject *CPyPy_rtypes___RUnion___make_simplified_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"items", 0};
    static CPyArg_Parser parser = {"O:make_simplified_union", kwlist, 0};
    PyObject *obj_items;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_items)) {
        return NULL;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion___make_simplified_union(arg_items);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "make_simplified_union", 866, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 2, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_runion */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 884, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RUnion___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 883, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion_____repr__(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_rtypes___RType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_item = cpy_r_r11;
    cpy_r_r12 = PyObject_Str(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL2;
CPyL7: ;
    cpy_r_r15 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    cpy_r_r16 = CPyStatics[7989]; /* '<RUnion ' */
    cpy_r_r17 = CPyStatics[840]; /* '>' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 887, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    return cpy_r_r18;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RUnion_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 886, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion_____str__(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_rtypes___RType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_item = cpy_r_r11;
    cpy_r_r12 = PyObject_Str(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL2;
CPyL7: ;
    cpy_r_r15 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    cpy_r_r16 = CPyStatics[7990]; /* 'union[' */
    cpy_r_r17 = CPyStatics[208]; /* ']' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 890, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    return cpy_r_r18;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RUnion_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 889, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL6;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items_set;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RUnion))
        cpy_r_r6 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 894, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_other);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r6)->_items_set;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 894, CPyStatic_rtypes___globals);
        goto CPyL7;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 894, CPyStatic_rtypes___globals);
        goto CPyL7;
    }
    cpy_r_r4 = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_rtypes___RUnion_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RUnion_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 893, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RUnion_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    cpy_r_r0 = CPyStatics[2631]; /* 'union' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items_set;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9927 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp9927);
    PyObject *__tmp9928 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp9928);
    cpy_r_r4 = CPyObject_Hash(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 897, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = CPY_INT_TAG;
    return cpy_r_r5;
}

PyObject *CPyPy_rtypes___RUnion_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RUnion_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 896, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_self)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 900, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_rtypes___RType)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "serialize", 900, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_x = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_x, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_x); /* serialize */
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 900, CPyStatic_rtypes___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 900, CPyStatic_rtypes___globals);
        goto CPyL12;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_types = cpy_r_r3;
    cpy_r_r14 = CPyStatics[3930]; /* '.class' */
    cpy_r_r15 = CPyStatics[6762]; /* 'RUnion' */
    cpy_r_r16 = CPyStatics[114]; /* 'types' */
    cpy_r_r17 = CPyDict_Build(2, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 901, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
}

PyObject *CPyPy_rtypes___RUnion___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 899, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RUnion___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RUnion___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RUnion))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    cpy_r_r1 = CPyStatics[114]; /* 'types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_data, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
CPyL3: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL12;
    cpy_r_t = cpy_r_r4;
    if (PyDict_Check(cpy_r_t))
        cpy_r_r5 = cpy_r_t;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9929;
    if (PyUnicode_Check(cpy_r_t))
        cpy_r_r5 = cpy_r_t;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9929;
    CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals, "union[dict, str]", cpy_r_t);
    goto CPyL13;
__LL9929: ;
    cpy_r_r6 = CPyDef_rtypes___deserialize_type(cpy_r_r5, cpy_r_ctx);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL13;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r0, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL13;
    } else
        goto CPyL3;
CPyL7: ;
    cpy_r_r9 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 905, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_types = cpy_r_r0;
    cpy_r_r10 = CPyDef_rtypes___RUnion(cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 906, CPyStatic_rtypes___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_rtypes___RUnion___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RUnion___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 904, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RUnion_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    ((mypyc___ir___rtypes___RUnionObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RUnion_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RUnion))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RUnion_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RUnion_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RUnion_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RUnion_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RUnion))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RUnion_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___flatten_nested_unions(PyObject *cpy_r_types) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_flat_items;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_rtypes___RType)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 910, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r6);
        goto CPyL19;
    }
    cpy_r_t = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_DECREF(cpy_r_t);
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r0 = 1;
    goto CPyL6;
CPyL5: ;
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL1;
CPyL6: ;
    if (cpy_r_r0) goto CPyL8;
    CPy_INCREF(cpy_r_types);
    return cpy_r_types;
CPyL8: ;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 913, CPyStatic_rtypes___globals);
        goto CPyL19;
    }
    cpy_r_flat_items = cpy_r_r13;
    cpy_r_r14 = 0;
CPyL10: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_rtypes___RType)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 914, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r19);
        goto CPyL20;
    }
    cpy_r_t_2 = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_t_2)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_t_2) == CPyType_rtypes___RUnion))
        cpy_r_r25 = cpy_r_t_2;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 916, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_t_2);
        goto CPyL21;
    }
    cpy_r_r26 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r25)->_items;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r27 = CPyDef_rtypes___flatten_nested_unions(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 916, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
    cpy_r_r28 = CPyList_Extend(cpy_r_flat_items, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 916, CPyStatic_rtypes___globals);
        goto CPyL20;
    } else
        goto CPyL22;
CPyL16: ;
    cpy_r_r29 = PyList_Append(cpy_r_flat_items, cpy_r_t_2);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 918, CPyStatic_rtypes___globals);
        goto CPyL20;
    }
CPyL17: ;
    cpy_r_r31 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r31;
    goto CPyL10;
CPyL18: ;
    return cpy_r_flat_items;
CPyL19: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL20: ;
    CPy_DecRef(cpy_r_flat_items);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_flat_items);
    CPy_DecRef(cpy_r_t_2);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL17;
}

PyObject *CPyPy_rtypes___flatten_nested_unions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:flatten_nested_unions", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___flatten_nested_unions(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "flatten_nested_unions", 909, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___optional_value_type(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RUnion))
        cpy_r_r4 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 927, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_rtype);
        goto CPyL30;
    }
    cpy_r_r5 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r4)->_items;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 == 4;
    if (!cpy_r_r9) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RUnion))
        cpy_r_r10 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_rtype);
        goto CPyL30;
    }
    cpy_r_r11 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r10)->_items;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_rtypes___RType)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r12);
        goto CPyL30;
    }
    cpy_r_r14 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r16 = PyObject_RichCompare(cpy_r_r13, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r17 = 2;
    } else
        cpy_r_r17 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 928, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (!cpy_r_r17) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RUnion))
        cpy_r_r18 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 929, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_rtype);
        goto CPyL30;
    }
    cpy_r_r19 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r18)->_items;
    cpy_r_r20 = CPyList_GetItemShort(cpy_r_r19, 2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 929, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_rtypes___RType)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 929, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r20);
        goto CPyL30;
    }
    return cpy_r_r21;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RUnion))
        cpy_r_r22 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_rtype);
        goto CPyL30;
    }
    cpy_r_r23 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r22)->_items;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, 2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_rtypes___RType)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r24);
        goto CPyL30;
    }
    cpy_r_r26 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r28 = PyObject_RichCompare(cpy_r_r25, cpy_r_r26, 2);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 930, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (!cpy_r_r29) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RUnion))
        cpy_r_r30 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 931, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RUnion", cpy_r_rtype);
        goto CPyL30;
    }
    cpy_r_r31 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r30)->_items;
    cpy_r_r32 = CPyList_GetItemShort(cpy_r_r31, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 931, CPyStatic_rtypes___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_rtypes___RType)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "optional_value_type", 931, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RType", cpy_r_r32);
        goto CPyL30;
    }
    return cpy_r_r33;
CPyL29: ;
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    return cpy_r_r34;
CPyL30: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL31: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL7;
CPyL32: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL20;
}

PyObject *CPyPy_rtypes___optional_value_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:optional_value_type", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___optional_value_type(arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "optional_value_type", 922, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___is_optional_type(PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_rtypes___optional_value_type(cpy_r_rtype);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "is_optional_type", 937, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rtypes___is_optional_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:is_optional_type", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_rtypes___is_optional_type(arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "is_optional_type", 935, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RArray_____init__(PyObject *cpy_r_self, PyObject *cpy_r_item_type, CPyTagged cpy_r_length) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_item_type);
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_item_type = cpy_r_item_type;
    CPyTagged_INCREF(cpy_r_length);
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_length = cpy_r_length;
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_is_refcounted = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RArray_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"item_type", "length", 0};
    PyObject *obj_item_type;
    PyObject *obj_length;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_item_type, &obj_length)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *arg_item_type;
    if (likely(PyObject_TypeCheck(obj_item_type, CPyType_rtypes___RType)))
        arg_item_type = obj_item_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_item_type); 
        goto fail;
    }
    CPyTagged arg_length;
    if (likely(PyLong_Check(obj_length)))
        arg_length = CPyTagged_BorrowFromObject(obj_length);
    else {
        CPy_TypeError("int", obj_length); goto fail;
    }
    char retval = CPyDef_rtypes___RArray_____init__(arg_self, arg_item_type, arg_length);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__init__", 947, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_visitor, CPyType_rtypes___RTypeVisitor, 5, mypyc___ir___rtypes___RTypeVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_rarray */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 954, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RArray___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_rtypes___RTypeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTypeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "accept", 953, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_item_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_Str(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 957, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyStatics[207]; /* '[' */
    cpy_r_r3 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_length;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyTagged_Str(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 957, CPyStatic_rtypes___globals);
        goto CPyL5;
    }
    cpy_r_r5 = CPyStatics[208]; /* ']' */
    cpy_r_r6 = CPyStr_Build(4, cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 957, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RArray_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__str__", 956, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray_____repr__(PyObject *cpy_r_self) {
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
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = CPyStatics[7991]; /* '<RArray ' */
    cpy_r_r2 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r3 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_item_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[163]; /* '' */
    cpy_r_r5 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r6[3] = {cpy_r_r2, cpy_r_r3, cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals, "str", cpy_r_r8);
        goto CPyL7;
    }
    cpy_r_r10 = CPyStatics[207]; /* '[' */
    cpy_r_r11 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r12 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_length;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[163]; /* '' */
    cpy_r_r14 = CPyStatics[193]; /* 'format' */
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r12);
    PyObject *cpy_r_r16[3] = {cpy_r_r11, cpy_r_r15, cpy_r_r13};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r17, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals, "str", cpy_r_r18);
        goto CPyL10;
    }
    cpy_r_r20 = CPyStatics[6415]; /* ']>' */
    cpy_r_r21 = PyList_New(5);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals);
        goto CPyL11;
    }
    cpy_r_r22 = (CPyPtr)&((PyListObject *)cpy_r_r21)->ob_item;
    cpy_r_r23 = *(CPyPtr *)cpy_r_r22;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r23 = cpy_r_r1;
    cpy_r_r24 = cpy_r_r23 + 8;
    *(PyObject * *)cpy_r_r24 = cpy_r_r9;
    cpy_r_r25 = cpy_r_r23 + 16;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r25 = cpy_r_r10;
    cpy_r_r26 = cpy_r_r23 + 24;
    *(PyObject * *)cpy_r_r26 = cpy_r_r19;
    cpy_r_r27 = cpy_r_r23 + 32;
    CPy_INCREF(cpy_r_r20);
    *(PyObject * *)cpy_r_r27 = cpy_r_r20;
    cpy_r_r28 = PyUnicode_Join(cpy_r_r0, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 960, CPyStatic_rtypes___globals);
        goto CPyL7;
    }
    return cpy_r_r28;
CPyL7: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r15);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r19);
    goto CPyL7;
}

PyObject *CPyPy_rtypes___RArray_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__repr__", 959, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL13;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_item_type;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RArray))
        cpy_r_r6 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 965, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_other);
        goto CPyL15;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r6)->_item_type;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 965, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 965, CPyStatic_rtypes___globals);
        goto CPyL14;
    }
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL12;
CPyL7: ;
    cpy_r_r11 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_length;
    if (likely(Py_TYPE(cpy_r_other) == CPyType_rtypes___RArray))
        cpy_r_r12 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "__eq__", 966, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RArray", cpy_r_other);
        goto CPyL14;
    }
    cpy_r_r13 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r12)->_length;
    cpy_r_r14 = cpy_r_r11 & 1;
    cpy_r_r15 = cpy_r_r14 == 0;
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = cpy_r_r11 == cpy_r_r13;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL11;
CPyL10: ;
    cpy_r_r18 = CPyTagged_IsEq_(cpy_r_r11, cpy_r_r13);
    cpy_r_r17 = cpy_r_r18;
CPyL11: ;
    cpy_r_r10 = cpy_r_r17;
CPyL12: ;
    cpy_r_r4 = cpy_r_r10;
CPyL13: ;
    cpy_r_r19 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
}

PyObject *CPyPy_rtypes___RArray_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_rtypes___RArray_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__eq__", 962, CPyStatic_rtypes___globals);
    return NULL;
}

CPyTagged CPyDef_rtypes___RArray_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    tuple_T2OI cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_item_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_self)->_length;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPyTagged_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9930 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp9930);
    PyObject *__tmp9931 = CPyTagged_StealAsObject(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp9931);
    cpy_r_r4 = CPyObject_Hash(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 970, CPyStatic_rtypes___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = CPY_INT_TAG;
    return cpy_r_r5;
}

PyObject *CPyPy_rtypes___RArray_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_rtypes___RArray_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__hash__", 969, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray___serialize(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 973, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RArray___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize", 972, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray___serialize__RType_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_rtypes___RArray___serialize(cpy_r_self);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RArray___serialize__RType_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize__RType_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rtypes___RArray))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray___serialize__RType_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "serialize__RType_glue", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 977, CPyStatic_rtypes___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_rtypes___RArray___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_rtypes___RArray___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "deserialize", 976, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___RArray_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r___mypyc_self__)->_is_unboxed = 0;
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r___mypyc_self__)->_is_refcounted = 1;
    ((mypyc___ir___rtypes___RArrayObject *)cpy_r___mypyc_self__)->_error_overlap = 0;
    return 1;
}

PyObject *CPyPy_rtypes___RArray_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RArray))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_rtypes___RArray_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__mypyc_defaults_setup", -1, CPyStatic_rtypes___globals);
    return NULL;
}

PyObject *CPyDef_rtypes___RArray_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_rtypes___RArray_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_rtypes___RArray_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_rtypes___RArray))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_rtypes___RArray_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "__ne__", -1, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes___check_native_int_range(PyObject *cpy_r_rtype, CPyTagged cpy_r_n) {
    char cpy_r_r0;
    int64_t cpy_r_r1;
    char cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_limit;
    CPyTagged cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_rtype)->_is_signed;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "check_native_int_range", "RPrimitive", "is_signed", 1034, CPyStatic_rtypes___globals);
        goto CPyL26;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL14;
CPyL2: ;
    cpy_r_r1 = 0 & 1;
    cpy_r_r2 = cpy_r_r1 == 0;
    cpy_r_r3 = cpy_r_n & 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    cpy_r_r5 = cpy_r_r2 & cpy_r_r4;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_n;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL5;
CPyL4: ;
    cpy_r_r8 = CPyTagged_IsLt_(cpy_r_n, 0);
    cpy_r_r9 = cpy_r_r8 ^ 1;
    cpy_r_r7 = cpy_r_r9;
CPyL5: ;
    if (cpy_r_r7) goto CPyL7;
    cpy_r_r10 = cpy_r_r7;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_rtype)->_size;
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "check_native_int_range", "RPrimitive", "size", 1035, CPyStatic_rtypes___globals);
        goto CPyL26;
    }
    CPyTagged_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPyTagged_Multiply(16, cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r11);
    cpy_r_r13 = CPyTagged_Lshift(2, cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "check_native_int_range", 1035, CPyStatic_rtypes___globals);
        goto CPyL26;
    }
    cpy_r_r14 = cpy_r_n & 1;
    cpy_r_r15 = cpy_r_r14 == 0;
    cpy_r_r16 = cpy_r_r13 & 1;
    cpy_r_r17 = cpy_r_r16 == 0;
    cpy_r_r18 = cpy_r_r15 & cpy_r_r17;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = (Py_ssize_t)cpy_r_n < (Py_ssize_t)cpy_r_r13;
    CPyTagged_DECREF(cpy_r_r13);
    cpy_r_r20 = cpy_r_r19;
    goto CPyL12;
CPyL11: ;
    cpy_r_r21 = CPyTagged_IsLt_(cpy_r_n, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    cpy_r_r20 = cpy_r_r21;
CPyL12: ;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    return cpy_r_r10;
CPyL14: ;
    cpy_r_r22 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_rtype)->_size;
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/ir/rtypes.py", "check_native_int_range", "RPrimitive", "size", 1037, CPyStatic_rtypes___globals);
        goto CPyL26;
    }
    CPyTagged_INCREF(cpy_r_r22);
CPyL15: ;
    cpy_r_r23 = CPyTagged_Multiply(cpy_r_r22, 16);
    CPyTagged_DECREF(cpy_r_r22);
    cpy_r_r24 = CPyTagged_Subtract(cpy_r_r23, 2);
    CPyTagged_DECREF(cpy_r_r23);
    cpy_r_r25 = CPyTagged_Lshift(2, cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "check_native_int_range", 1037, CPyStatic_rtypes___globals);
        goto CPyL26;
    }
    cpy_r_limit = cpy_r_r25;
    cpy_r_r26 = CPyTagged_Negate(cpy_r_limit);
    cpy_r_r27 = cpy_r_r26 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    cpy_r_r29 = cpy_r_n & 1;
    cpy_r_r30 = cpy_r_r29 == 0;
    cpy_r_r31 = cpy_r_r28 & cpy_r_r30;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r26 <= (Py_ssize_t)cpy_r_n;
    CPyTagged_DECREF(cpy_r_r26);
    cpy_r_r33 = cpy_r_r32;
    goto CPyL19;
CPyL18: ;
    cpy_r_r34 = CPyTagged_IsLt_(cpy_r_n, cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    cpy_r_r35 = cpy_r_r34 ^ 1;
    cpy_r_r33 = cpy_r_r35;
CPyL19: ;
    if (cpy_r_r33) {
        goto CPyL21;
    } else
        goto CPyL27;
CPyL20: ;
    cpy_r_r36 = cpy_r_r33;
    goto CPyL25;
CPyL21: ;
    cpy_r_r37 = cpy_r_n & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    cpy_r_r39 = cpy_r_limit & 1;
    cpy_r_r40 = cpy_r_r39 == 0;
    cpy_r_r41 = cpy_r_r38 & cpy_r_r40;
    if (!cpy_r_r41) goto CPyL23;
    cpy_r_r42 = (Py_ssize_t)cpy_r_n < (Py_ssize_t)cpy_r_limit;
    CPyTagged_DECREF(cpy_r_limit);
    cpy_r_r43 = cpy_r_r42;
    goto CPyL24;
CPyL23: ;
    cpy_r_r44 = CPyTagged_IsLt_(cpy_r_n, cpy_r_limit);
    CPyTagged_DECREF(cpy_r_limit);
    cpy_r_r43 = cpy_r_r44;
CPyL24: ;
    cpy_r_r36 = cpy_r_r43;
CPyL25: ;
    return cpy_r_r36;
CPyL26: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL27: ;
    CPyTagged_DECREF(cpy_r_limit);
    goto CPyL20;
}

PyObject *CPyPy_rtypes___check_native_int_range(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"rtype", "n", 0};
    static CPyArg_Parser parser = {"OO:check_native_int_range", kwlist, 0};
    PyObject *obj_rtype;
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_rtype, &obj_n)) {
        return NULL;
    }
    PyObject *arg_rtype;
    if (likely(Py_TYPE(obj_rtype) == CPyType_rtypes___RPrimitive))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_rtype); 
        goto fail;
    }
    CPyTagged arg_n;
    if (likely(PyLong_Check(obj_n)))
        arg_n = CPyTagged_BorrowFromObject(obj_n);
    else {
        CPy_TypeError("int", obj_n); goto fail;
    }
    char retval = CPyDef_rtypes___check_native_int_range(arg_rtype, arg_n);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/rtypes.py", "check_native_int_range", 1029, CPyStatic_rtypes___globals);
    return NULL;
}

char CPyDef_rtypes_____top_level__(void) {
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
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
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
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
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
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyTagged cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    CPyTagged cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    CPyTagged cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    CPyTagged cpy_r_r181;
    char cpy_r_r182;
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
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    int32_t cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    int32_t cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    int32_t cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    int32_t cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    CPyTagged cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    int32_t cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    char cpy_r_r286;
    char cpy_r_r287;
    CPyTagged cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    int32_t cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    int32_t cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    char cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    char cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    int32_t cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    char cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    int32_t cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    char cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    int32_t cpy_r_r338;
    char cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    CPyTagged cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    int32_t cpy_r_r349;
    char cpy_r_r350;
    PyObject *cpy_r_r351;
    char cpy_r_r352;
    char cpy_r_r353;
    PyObject *cpy_r_r354;
    CPyTagged cpy_r_r355;
    char cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    int32_t cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    CPyTagged cpy_r_r366;
    char cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    int32_t cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    char cpy_r_r375;
    PyObject *cpy_r_r376;
    CPyTagged cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    int32_t cpy_r_r382;
    char cpy_r_r383;
    PyObject *cpy_r_r384;
    char cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    CPyTagged cpy_r_r388;
    char cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    int32_t cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    char cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    CPyTagged cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    int32_t cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    char cpy_r_r407;
    char cpy_r_r408;
    PyObject *cpy_r_r409;
    CPyTagged cpy_r_r410;
    char cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    char cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    int32_t cpy_r_r428;
    char cpy_r_r429;
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
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    int32_t cpy_r_r452;
    char cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    int32_t cpy_r_r456;
    char cpy_r_r457;
    PyObject *cpy_r_r458;
    char cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    char cpy_r_r463;
    PyObject *cpy_r_r464;
    CPyPtr cpy_r_r465;
    CPyPtr cpy_r_r466;
    CPyPtr cpy_r_r467;
    CPyPtr cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    int32_t cpy_r_r472;
    char cpy_r_r473;
    PyObject *cpy_r_r474;
    char cpy_r_r475;
    PyObject *cpy_r_r476;
    char cpy_r_r477;
    PyObject *cpy_r_r478;
    char cpy_r_r479;
    PyObject *cpy_r_r480;
    char cpy_r_r481;
    PyObject *cpy_r_r482;
    CPyPtr cpy_r_r483;
    CPyPtr cpy_r_r484;
    CPyPtr cpy_r_r485;
    CPyPtr cpy_r_r486;
    CPyPtr cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    int32_t cpy_r_r491;
    char cpy_r_r492;
    PyObject *cpy_r_r493;
    char cpy_r_r494;
    PyObject *cpy_r_r495;
    char cpy_r_r496;
    PyObject *cpy_r_r497;
    char cpy_r_r498;
    PyObject *cpy_r_r499;
    CPyPtr cpy_r_r500;
    CPyPtr cpy_r_r501;
    CPyPtr cpy_r_r502;
    CPyPtr cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    int32_t cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    char cpy_r_r514;
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
    int32_t cpy_r_r527;
    char cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    int32_t cpy_r_r531;
    char cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    char cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    int32_t cpy_r_r549;
    char cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    int32_t cpy_r_r553;
    char cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    char cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    int32_t cpy_r_r572;
    char cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    int32_t cpy_r_r576;
    char cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    char cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
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
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    CPyPtr cpy_r_r604;
    CPyPtr cpy_r_r605;
    CPyPtr cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    char cpy_r_r612;
    PyObject *cpy_r_r613;
    CPyPtr cpy_r_r614;
    CPyPtr cpy_r_r615;
    CPyPtr cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    int32_t cpy_r_r620;
    char cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    CPyPtr cpy_r_r626;
    CPyPtr cpy_r_r627;
    CPyPtr cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    CPyPtr cpy_r_r638;
    CPyPtr cpy_r_r639;
    CPyPtr cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    int32_t cpy_r_r644;
    char cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    CPyPtr cpy_r_r650;
    CPyPtr cpy_r_r651;
    CPyPtr cpy_r_r652;
    PyObject *cpy_r_r653;
    char cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    CPyPtr cpy_r_r660;
    CPyPtr cpy_r_r661;
    CPyPtr cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    int32_t cpy_r_r666;
    char cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    PyObject *cpy_r_r674;
    CPyPtr cpy_r_r675;
    CPyPtr cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    int32_t cpy_r_r681;
    char cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    CPyPtr cpy_r_r694;
    CPyPtr cpy_r_r695;
    CPyPtr cpy_r_r696;
    CPyPtr cpy_r_r697;
    CPyPtr cpy_r_r698;
    CPyPtr cpy_r_r699;
    CPyPtr cpy_r_r700;
    CPyPtr cpy_r_r701;
    CPyPtr cpy_r_r702;
    CPyPtr cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    PyObject *cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    char cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    PyObject *cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    char cpy_r_r735;
    PyObject *cpy_r_r736;
    CPyPtr cpy_r_r737;
    CPyPtr cpy_r_r738;
    CPyPtr cpy_r_r739;
    CPyPtr cpy_r_r740;
    CPyPtr cpy_r_r741;
    CPyPtr cpy_r_r742;
    CPyPtr cpy_r_r743;
    CPyPtr cpy_r_r744;
    CPyPtr cpy_r_r745;
    CPyPtr cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject *cpy_r_r748;
    PyObject *cpy_r_r749;
    int32_t cpy_r_r750;
    char cpy_r_r751;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    CPyPtr cpy_r_r757;
    CPyPtr cpy_r_r758;
    CPyPtr cpy_r_r759;
    CPyPtr cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    char cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    CPyPtr cpy_r_r772;
    CPyPtr cpy_r_r773;
    CPyPtr cpy_r_r774;
    CPyPtr cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    PyObject *cpy_r_r778;
    int32_t cpy_r_r779;
    char cpy_r_r780;
    char cpy_r_r781;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_rtypes___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 23, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_rtypes___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 25, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10028]; /* ('TYPE_CHECKING', 'ClassVar', 'Generic', 'TypeVar') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_rtypes___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 26, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10029]; /* ('Final', 'TypeGuard') */
    cpy_r_r18 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r19 = CPyStatic_rtypes___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 27, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_typing_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10030]; /* ('IS_32_BIT_PLATFORM', 'PLATFORM_SIZE', 'JsonDict',
                                      'short_name') */
    cpy_r_r22 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r23 = CPyStatic_rtypes___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 29, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_mypyc___common = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9957]; /* ('NameGenerator',) */
    cpy_r_r26 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r27 = CPyStatic_rtypes___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 30, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyModule_mypyc___namegen = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_rtypes___globals;
    cpy_r_r30 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 32, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 32, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r33 = CPyStatics[1088]; /* 'T' */
    cpy_r_r34 = CPyStatic_rtypes___globals;
    cpy_r_r35 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 36, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r33};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 36, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r40 = CPyStatic_rtypes___globals;
    cpy_r_r41 = CPyStatics[1088]; /* 'T' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 36, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r46 = (PyObject *)CPyType_rtypes___RType_template;
    cpy_r_r47 = CPyType_FromTemplate(cpy_r_r46, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 39, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r48 = CPyDef_rtypes___RType_trait_vtable_setup();
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL265;
    }
    cpy_r_r49 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r50 = CPyStatics[2329]; /* 'name' */
    cpy_r_r51 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r52 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r53 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r54 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r55 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r56 = PyTuple_Pack(6, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 39, CPyStatic_rtypes___globals);
        goto CPyL265;
    }
    cpy_r_r57 = PyObject_SetAttr(cpy_r_r47, cpy_r_r49, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 39, CPyStatic_rtypes___globals);
        goto CPyL265;
    }
    CPyType_rtypes___RType = (PyTypeObject *)cpy_r_r47;
    CPy_INCREF(CPyType_rtypes___RType);
    cpy_r_r59 = CPyStatic_rtypes___globals;
    cpy_r_r60 = CPyStatics[6761]; /* 'RType' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 39, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r63 = CPyStatic_rtypes___globals;
    cpy_r_r64 = CPyStatics[900]; /* 'Generic' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r66 = CPyStatic_rtypes___globals;
    cpy_r_r67 = CPyStatics[1088]; /* 'T' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL266;
    }
    cpy_r_r69 = PyObject_GetItem(cpy_r_r65, cpy_r_r68);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r70 = PyTuple_Pack(1, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r71 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r72 = (PyObject *)CPyType_rtypes___RTypeVisitor_template;
    cpy_r_r73 = CPyType_FromTemplate(cpy_r_r72, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r74 = CPyDef_rtypes___RTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL267;
    }
    cpy_r_r75 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r76 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r77 = PyTuple_Pack(1, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL267;
    }
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r73, cpy_r_r75, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL267;
    }
    CPyType_rtypes___RTypeVisitor = (PyTypeObject *)cpy_r_r73;
    CPy_INCREF(CPyType_rtypes___RTypeVisitor);
    cpy_r_r80 = CPyStatic_rtypes___globals;
    cpy_r_r81 = CPyStatics[7997]; /* 'RTypeVisitor' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 108, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r84 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r85 = PyTuple_Pack(1, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 140, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r86 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r87 = (PyObject *)CPyType_rtypes___RVoid_template;
    cpy_r_r88 = CPyType_FromTemplate(cpy_r_r87, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 140, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r89 = CPyDef_rtypes___RVoid_trait_vtable_setup();
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL268;
    }
    cpy_r_r90 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r91 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r92 = CPyStatics[2329]; /* 'name' */
    cpy_r_r93 = CPyStatics[7341]; /* 'ctype' */
    cpy_r_r94 = CPyStatics[2329]; /* 'name' */
    cpy_r_r95 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r96 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r97 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r98 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r99 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r100 = PyTuple_Pack(9, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 140, CPyStatic_rtypes___globals);
        goto CPyL268;
    }
    cpy_r_r101 = PyObject_SetAttr(cpy_r_r88, cpy_r_r90, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 140, CPyStatic_rtypes___globals);
        goto CPyL268;
    }
    CPyType_rtypes___RVoid = (PyTypeObject *)cpy_r_r88;
    CPy_INCREF(CPyType_rtypes___RVoid);
    cpy_r_r103 = CPyStatic_rtypes___globals;
    cpy_r_r104 = CPyStatics[7814]; /* 'RVoid' */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r103, cpy_r_r104, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 140, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r107 = CPyDef_rtypes___RVoid();
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 165, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___void_rtype = cpy_r_r107;
    CPy_INCREF(CPyStatic_rtypes___void_rtype);
    cpy_r_r108 = CPyStatic_rtypes___globals;
    cpy_r_r109 = CPyStatics[7820]; /* 'void_rtype' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 165, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r112 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r113 = PyTuple_Pack(1, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 168, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r114 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r115 = (PyObject *)CPyType_rtypes___RPrimitive_template;
    cpy_r_r116 = CPyType_FromTemplate(cpy_r_r115, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 168, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r117 = CPyDef_rtypes___RPrimitive_trait_vtable_setup();
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL269;
    }
    cpy_r_r118 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r119 = CPyStatics[7998]; /* 'is_native_int' */
    cpy_r_r120 = CPyStatics[7999]; /* 'is_signed' */
    cpy_r_r121 = CPyStatics[155]; /* 'size' */
    cpy_r_r122 = CPyStatics[2329]; /* 'name' */
    cpy_r_r123 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r124 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r125 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r126 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r127 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r128 = PyTuple_Pack(9, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 168, CPyStatic_rtypes___globals);
        goto CPyL269;
    }
    cpy_r_r129 = PyObject_SetAttr(cpy_r_r116, cpy_r_r118, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 168, CPyStatic_rtypes___globals);
        goto CPyL269;
    }
    CPyType_rtypes___RPrimitive = (PyTypeObject *)cpy_r_r116;
    CPy_INCREF(CPyType_rtypes___RPrimitive);
    cpy_r_r131 = CPyStatic_rtypes___globals;
    cpy_r_r132 = CPyStatics[6760]; /* 'RPrimitive' */
    cpy_r_r133 = CPyDict_SetItem(cpy_r_r131, cpy_r_r132, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 168, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r135 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r136 = PyDict_New();
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 183, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r137 = CPyStatics[7954]; /* 'primitive_map' */
    cpy_r_r138 = PyObject_SetAttr(cpy_r_r135, cpy_r_r137, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 183, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r140 = CPyStatic_rtypes___globals;
    cpy_r_r141 = CPyStatics[7722]; /* 'PLATFORM_SIZE' */
    cpy_r_r142 = CPyDict_GetItem(cpy_r_r140, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 194, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    if (likely(PyLong_Check(cpy_r_r142)))
        cpy_r_r143 = CPyTagged_FromObject(cpy_r_r142);
    else {
        CPy_TypeError("int", cpy_r_r142); cpy_r_r143 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 194, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___mypyc___ir___rtypes___RPrimitive_____init_____size = cpy_r_r143;
    CPyTagged_INCREF(CPyStatic_rtypes___mypyc___ir___rtypes___RPrimitive_____init_____size);
    CPyTagged_DECREF(cpy_r_r143);
    cpy_r_r144 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r145 = 2;
    cpy_r_r146 = 2;
    cpy_r_r147 = NULL;
    cpy_r_r148 = CPY_INT_TAG;
    cpy_r_r149 = 2;
    cpy_r_r150 = CPyDef_rtypes___RPrimitive(cpy_r_r144, 0, 1, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 262, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___object_rprimitive = cpy_r_r150;
    CPy_INCREF(CPyStatic_rtypes___object_rprimitive);
    cpy_r_r151 = CPyStatic_rtypes___globals;
    cpy_r_r152 = CPyStatics[7042]; /* 'object_rprimitive' */
    cpy_r_r153 = CPyDict_SetItem(cpy_r_r151, cpy_r_r152, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 262, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r155 = CPyStatics[8000]; /* 'object_ptr' */
    cpy_r_r156 = CPyStatics[7964]; /* 'PyObject **' */
    cpy_r_r157 = 2;
    cpy_r_r158 = 2;
    cpy_r_r159 = CPY_INT_TAG;
    cpy_r_r160 = 2;
    cpy_r_r161 = CPyDef_rtypes___RPrimitive(cpy_r_r155, 0, 0, cpy_r_r157, cpy_r_r158, cpy_r_r156, cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 265, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___object_pointer_rprimitive = cpy_r_r161;
    CPy_INCREF(CPyStatic_rtypes___object_pointer_rprimitive);
    cpy_r_r162 = CPyStatic_rtypes___globals;
    cpy_r_r163 = CPyStatics[8001]; /* 'object_pointer_rprimitive' */
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r162, cpy_r_r163, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 265, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r166 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r167 = CPyStatics[7956]; /* 'CPyTagged' */
    cpy_r_r168 = 2;
    cpy_r_r169 = 2;
    cpy_r_r170 = CPY_INT_TAG;
    cpy_r_r171 = 2;
    cpy_r_r172 = CPyDef_rtypes___RPrimitive(cpy_r_r166, 1, 1, cpy_r_r168, cpy_r_r169, cpy_r_r167, cpy_r_r170, cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 281, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___int_rprimitive = cpy_r_r172;
    CPy_INCREF(CPyStatic_rtypes___int_rprimitive);
    cpy_r_r173 = CPyStatic_rtypes___globals;
    cpy_r_r174 = CPyStatics[6765]; /* 'int_rprimitive' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r173, cpy_r_r174, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 281, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r177 = CPyStatics[8002]; /* 'short_int' */
    cpy_r_r178 = CPyStatics[7956]; /* 'CPyTagged' */
    cpy_r_r179 = 2;
    cpy_r_r180 = 2;
    cpy_r_r181 = CPY_INT_TAG;
    cpy_r_r182 = 2;
    cpy_r_r183 = CPyDef_rtypes___RPrimitive(cpy_r_r177, 1, 0, cpy_r_r179, cpy_r_r180, cpy_r_r178, cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 288, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___short_int_rprimitive = cpy_r_r183;
    CPy_INCREF(CPyStatic_rtypes___short_int_rprimitive);
    cpy_r_r184 = CPyStatic_rtypes___globals;
    cpy_r_r185 = CPyStatics[7819]; /* 'short_int_rprimitive' */
    cpy_r_r186 = CPyDict_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 288, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r188 = CPyStatics[8003]; /* 'i16' */
    cpy_r_r189 = CPyStatics[7958]; /* 'int16_t' */
    cpy_r_r190 = CPyDef_rtypes___RPrimitive(cpy_r_r188, 1, 0, 1, 1, cpy_r_r189, 4, 1);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 294, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___int16_rprimitive = cpy_r_r190;
    CPy_INCREF(CPyStatic_rtypes___int16_rprimitive);
    cpy_r_r191 = CPyStatic_rtypes___globals;
    cpy_r_r192 = CPyStatics[8004]; /* 'int16_rprimitive' */
    cpy_r_r193 = CPyDict_SetItem(cpy_r_r191, cpy_r_r192, cpy_r_r190);
    CPy_DECREF(cpy_r_r190);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 294, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r195 = CPyStatics[8005]; /* 'i32' */
    cpy_r_r196 = CPyStatics[7959]; /* 'int32_t' */
    cpy_r_r197 = CPyDef_rtypes___RPrimitive(cpy_r_r195, 1, 0, 1, 1, cpy_r_r196, 8, 1);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 304, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___int32_rprimitive = cpy_r_r197;
    CPy_INCREF(CPyStatic_rtypes___int32_rprimitive);
    cpy_r_r198 = CPyStatic_rtypes___globals;
    cpy_r_r199 = CPyStatics[8006]; /* 'int32_rprimitive' */
    cpy_r_r200 = CPyDict_SetItem(cpy_r_r198, cpy_r_r199, cpy_r_r197);
    CPy_DECREF(cpy_r_r197);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 304, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r202 = CPyStatics[8007]; /* 'i64' */
    cpy_r_r203 = CPyStatics[7960]; /* 'int64_t' */
    cpy_r_r204 = CPyDef_rtypes___RPrimitive(cpy_r_r202, 1, 0, 1, 1, cpy_r_r203, 16, 1);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 314, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___int64_rprimitive = cpy_r_r204;
    CPy_INCREF(CPyStatic_rtypes___int64_rprimitive);
    cpy_r_r205 = CPyStatic_rtypes___globals;
    cpy_r_r206 = CPyStatics[8008]; /* 'int64_rprimitive' */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r205, cpy_r_r206, cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 314, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r209 = CPyStatics[8009]; /* 'u8' */
    cpy_r_r210 = CPyStatics[7968]; /* 'uint8_t' */
    cpy_r_r211 = CPyDef_rtypes___RPrimitive(cpy_r_r209, 1, 0, 1, 0, cpy_r_r210, 2, 1);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 324, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___uint8_rprimitive = cpy_r_r211;
    CPy_INCREF(CPyStatic_rtypes___uint8_rprimitive);
    cpy_r_r212 = CPyStatic_rtypes___globals;
    cpy_r_r213 = CPyStatics[8010]; /* 'uint8_rprimitive' */
    cpy_r_r214 = CPyDict_SetItem(cpy_r_r212, cpy_r_r213, cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    cpy_r_r215 = cpy_r_r214 >= 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 324, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r216 = CPyStatics[8011]; /* 'u16' */
    cpy_r_r217 = CPyStatics[7969]; /* 'uint16_t' */
    cpy_r_r218 = CPyDef_rtypes___RPrimitive(cpy_r_r216, 1, 0, 1, 0, cpy_r_r217, 4, 1);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 338, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___u16_rprimitive = cpy_r_r218;
    CPy_INCREF(CPyStatic_rtypes___u16_rprimitive);
    cpy_r_r219 = CPyStatic_rtypes___globals;
    cpy_r_r220 = CPyStatics[8012]; /* 'u16_rprimitive' */
    cpy_r_r221 = CPyDict_SetItem(cpy_r_r219, cpy_r_r220, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 338, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r223 = CPyStatics[8013]; /* 'u32' */
    cpy_r_r224 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r225 = CPyDef_rtypes___RPrimitive(cpy_r_r223, 1, 0, 1, 0, cpy_r_r224, 8, 1);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 348, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___uint32_rprimitive = cpy_r_r225;
    CPy_INCREF(CPyStatic_rtypes___uint32_rprimitive);
    cpy_r_r226 = CPyStatic_rtypes___globals;
    cpy_r_r227 = CPyStatics[8014]; /* 'uint32_rprimitive' */
    cpy_r_r228 = CPyDict_SetItem(cpy_r_r226, cpy_r_r227, cpy_r_r225);
    CPy_DECREF(cpy_r_r225);
    cpy_r_r229 = cpy_r_r228 >= 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 348, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r230 = CPyStatics[8015]; /* 'u64' */
    cpy_r_r231 = CPyStatics[7970]; /* 'uint64_t' */
    cpy_r_r232 = CPyDef_rtypes___RPrimitive(cpy_r_r230, 1, 0, 1, 0, cpy_r_r231, 16, 1);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 358, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___uint64_rprimitive = cpy_r_r232;
    CPy_INCREF(CPyStatic_rtypes___uint64_rprimitive);
    cpy_r_r233 = CPyStatic_rtypes___globals;
    cpy_r_r234 = CPyStatics[8016]; /* 'uint64_rprimitive' */
    cpy_r_r235 = CPyDict_SetItem(cpy_r_r233, cpy_r_r234, cpy_r_r232);
    CPy_DECREF(cpy_r_r232);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 358, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r237 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r237 != NULL)) goto CPyL72;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r238 = 0;
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 370, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r239 = CPyStatic_rtypes___globals;
    cpy_r_r240 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r241 = CPyDict_SetItem(cpy_r_r239, cpy_r_r240, cpy_r_r237);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 370, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r243 = CPyStatic_mypyc___common___IS_32_BIT_PLATFORM;
    if (likely(cpy_r_r243 != 2)) goto CPyL76;
    PyErr_SetString(PyExc_NameError, "value for final name \"IS_32_BIT_PLATFORM\" was not set");
    cpy_r_r244 = 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 372, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL76: ;
    if (!cpy_r_r243) goto CPyL83;
    cpy_r_r245 = CPyStatic_rtypes___uint32_rprimitive;
    if (likely(cpy_r_r245 != NULL)) goto CPyL80;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint32_rprimitive\" was not set");
    cpy_r_r246 = 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 373, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r247 = CPyStatic_rtypes___globals;
    cpy_r_r248 = CPyStatics[8018]; /* 'c_size_t_rprimitive' */
    cpy_r_r249 = CPyDict_SetItem(cpy_r_r247, cpy_r_r248, cpy_r_r245);
    cpy_r_r250 = cpy_r_r249 >= 0;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 373, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r251 = CPyStatics[8019]; /* 'native_int' */
    cpy_r_r252 = CPyStatics[7959]; /* 'int32_t' */
    cpy_r_r253 = 2;
    cpy_r_r254 = CPyDef_rtypes___RPrimitive(cpy_r_r251, 1, 0, 1, 1, cpy_r_r252, 8, cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 374, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r255 = CPyStatic_rtypes___globals;
    cpy_r_r256 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r257 = CPyDict_SetItem(cpy_r_r255, cpy_r_r256, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 374, CPyStatic_rtypes___globals);
        goto CPyL264;
    } else
        goto CPyL89;
CPyL83: ;
    cpy_r_r259 = CPyStatic_rtypes___uint64_rprimitive;
    if (likely(cpy_r_r259 != NULL)) goto CPyL86;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint64_rprimitive\" was not set");
    cpy_r_r260 = 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 384, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r261 = CPyStatic_rtypes___globals;
    cpy_r_r262 = CPyStatics[8018]; /* 'c_size_t_rprimitive' */
    cpy_r_r263 = CPyDict_SetItem(cpy_r_r261, cpy_r_r262, cpy_r_r259);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 384, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r265 = CPyStatics[8019]; /* 'native_int' */
    cpy_r_r266 = CPyStatics[7960]; /* 'int64_t' */
    cpy_r_r267 = 2;
    cpy_r_r268 = CPyDef_rtypes___RPrimitive(cpy_r_r265, 1, 0, 1, 1, cpy_r_r266, 16, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 385, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r269 = CPyStatic_rtypes___globals;
    cpy_r_r270 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r271 = CPyDict_SetItem(cpy_r_r269, cpy_r_r270, cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    cpy_r_r272 = cpy_r_r271 >= 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 385, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
CPyL89: ;
    cpy_r_r273 = CPyStatics[8020]; /* 'ptr' */
    cpy_r_r274 = CPyStatics[7962]; /* 'CPyPtr' */
    cpy_r_r275 = 2;
    cpy_r_r276 = 2;
    cpy_r_r277 = CPY_INT_TAG;
    cpy_r_r278 = 2;
    cpy_r_r279 = CPyDef_rtypes___RPrimitive(cpy_r_r273, 1, 0, cpy_r_r275, cpy_r_r276, cpy_r_r274, cpy_r_r277, cpy_r_r278);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 396, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___pointer_rprimitive = cpy_r_r279;
    CPy_INCREF(CPyStatic_rtypes___pointer_rprimitive);
    cpy_r_r280 = CPyStatic_rtypes___globals;
    cpy_r_r281 = CPyStatics[7818]; /* 'pointer_rprimitive' */
    cpy_r_r282 = CPyDict_SetItem(cpy_r_r280, cpy_r_r281, cpy_r_r279);
    CPy_DECREF(cpy_r_r279);
    cpy_r_r283 = cpy_r_r282 >= 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 396, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r284 = CPyStatics[8021]; /* 'c_ptr' */
    cpy_r_r285 = CPyStatics[7965]; /* 'void *' */
    cpy_r_r286 = 2;
    cpy_r_r287 = 2;
    cpy_r_r288 = CPY_INT_TAG;
    cpy_r_r289 = 2;
    cpy_r_r290 = CPyDef_rtypes___RPrimitive(cpy_r_r284, 0, 0, cpy_r_r286, cpy_r_r287, cpy_r_r285, cpy_r_r288, cpy_r_r289);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 399, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___c_pointer_rprimitive = cpy_r_r290;
    CPy_INCREF(CPyStatic_rtypes___c_pointer_rprimitive);
    cpy_r_r291 = CPyStatic_rtypes___globals;
    cpy_r_r292 = CPyStatics[8022]; /* 'c_pointer_rprimitive' */
    cpy_r_r293 = CPyDict_SetItem(cpy_r_r291, cpy_r_r292, cpy_r_r290);
    CPy_DECREF(cpy_r_r290);
    cpy_r_r294 = cpy_r_r293 >= 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 399, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r295 = CPyStatic_rtypes___uint32_rprimitive;
    if (likely(cpy_r_r295 != NULL)) goto CPyL96;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint32_rprimitive\" was not set");
    cpy_r_r296 = 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 404, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL96: ;
    CPyStatic_rtypes___bitmap_rprimitive = cpy_r_r295;
    CPy_INCREF(CPyStatic_rtypes___bitmap_rprimitive);
    cpy_r_r297 = CPyStatic_rtypes___globals;
    cpy_r_r298 = CPyStatics[7795]; /* 'bitmap_rprimitive' */
    cpy_r_r299 = CPyDict_SetItem(cpy_r_r297, cpy_r_r298, cpy_r_r295);
    cpy_r_r300 = cpy_r_r299 >= 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 404, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r301 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r302 = CPyStatics[7966]; /* 'double' */
    cpy_r_r303 = 2;
    cpy_r_r304 = 2;
    cpy_r_r305 = CPyDef_rtypes___RPrimitive(cpy_r_r301, 1, 0, cpy_r_r303, cpy_r_r304, cpy_r_r302, 16, 1);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 408, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___float_rprimitive = cpy_r_r305;
    CPy_INCREF(CPyStatic_rtypes___float_rprimitive);
    cpy_r_r306 = CPyStatic_rtypes___globals;
    cpy_r_r307 = CPyStatics[7817]; /* 'float_rprimitive' */
    cpy_r_r308 = CPyDict_SetItem(cpy_r_r306, cpy_r_r307, cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 408, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r310 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r311 = CPyStatics[7963]; /* 'char' */
    cpy_r_r312 = 2;
    cpy_r_r313 = 2;
    cpy_r_r314 = 2;
    cpy_r_r315 = CPyDef_rtypes___RPrimitive(cpy_r_r310, 1, 0, cpy_r_r312, cpy_r_r313, cpy_r_r311, 2, cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 420, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___bool_rprimitive = cpy_r_r315;
    CPy_INCREF(CPyStatic_rtypes___bool_rprimitive);
    cpy_r_r316 = CPyStatic_rtypes___globals;
    cpy_r_r317 = CPyStatics[7816]; /* 'bool_rprimitive' */
    cpy_r_r318 = CPyDict_SetItem(cpy_r_r316, cpy_r_r317, cpy_r_r315);
    CPy_DECREF(cpy_r_r315);
    cpy_r_r319 = cpy_r_r318 >= 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 420, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r320 = CPyStatics[7975]; /* 'bit' */
    cpy_r_r321 = CPyStatics[7963]; /* 'char' */
    cpy_r_r322 = 2;
    cpy_r_r323 = 2;
    cpy_r_r324 = 2;
    cpy_r_r325 = CPyDef_rtypes___RPrimitive(cpy_r_r320, 1, 0, cpy_r_r322, cpy_r_r323, cpy_r_r321, 2, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 427, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___bit_rprimitive = cpy_r_r325;
    CPy_INCREF(CPyStatic_rtypes___bit_rprimitive);
    cpy_r_r326 = CPyStatic_rtypes___globals;
    cpy_r_r327 = CPyStatics[7815]; /* 'bit_rprimitive' */
    cpy_r_r328 = CPyDict_SetItem(cpy_r_r326, cpy_r_r327, cpy_r_r325);
    CPy_DECREF(cpy_r_r325);
    cpy_r_r329 = cpy_r_r328 >= 0;
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 427, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r330 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r331 = CPyStatics[7963]; /* 'char' */
    cpy_r_r332 = 2;
    cpy_r_r333 = 2;
    cpy_r_r334 = 2;
    cpy_r_r335 = CPyDef_rtypes___RPrimitive(cpy_r_r330, 1, 0, cpy_r_r332, cpy_r_r333, cpy_r_r331, 2, cpy_r_r334);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 432, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___none_rprimitive = cpy_r_r335;
    CPy_INCREF(CPyStatic_rtypes___none_rprimitive);
    cpy_r_r336 = CPyStatic_rtypes___globals;
    cpy_r_r337 = CPyStatics[8023]; /* 'none_rprimitive' */
    cpy_r_r338 = CPyDict_SetItem(cpy_r_r336, cpy_r_r337, cpy_r_r335);
    CPy_DECREF(cpy_r_r335);
    cpy_r_r339 = cpy_r_r338 >= 0;
    if (unlikely(!cpy_r_r339)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 432, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r340 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r341 = 2;
    cpy_r_r342 = 2;
    cpy_r_r343 = NULL;
    cpy_r_r344 = CPY_INT_TAG;
    cpy_r_r345 = 2;
    cpy_r_r346 = CPyDef_rtypes___RPrimitive(cpy_r_r340, 0, 1, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344, cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 437, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___list_rprimitive = cpy_r_r346;
    CPy_INCREF(CPyStatic_rtypes___list_rprimitive);
    cpy_r_r347 = CPyStatic_rtypes___globals;
    cpy_r_r348 = CPyStatics[6768]; /* 'list_rprimitive' */
    cpy_r_r349 = CPyDict_SetItem(cpy_r_r347, cpy_r_r348, cpy_r_r346);
    CPy_DECREF(cpy_r_r346);
    cpy_r_r350 = cpy_r_r349 >= 0;
    if (unlikely(!cpy_r_r350)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 437, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r351 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r352 = 2;
    cpy_r_r353 = 2;
    cpy_r_r354 = NULL;
    cpy_r_r355 = CPY_INT_TAG;
    cpy_r_r356 = 2;
    cpy_r_r357 = CPyDef_rtypes___RPrimitive(cpy_r_r351, 0, 1, cpy_r_r352, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 440, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___dict_rprimitive = cpy_r_r357;
    CPy_INCREF(CPyStatic_rtypes___dict_rprimitive);
    cpy_r_r358 = CPyStatic_rtypes___globals;
    cpy_r_r359 = CPyStatics[6764]; /* 'dict_rprimitive' */
    cpy_r_r360 = CPyDict_SetItem(cpy_r_r358, cpy_r_r359, cpy_r_r357);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r361 = cpy_r_r360 >= 0;
    if (unlikely(!cpy_r_r361)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 440, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r362 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r363 = 2;
    cpy_r_r364 = 2;
    cpy_r_r365 = NULL;
    cpy_r_r366 = CPY_INT_TAG;
    cpy_r_r367 = 2;
    cpy_r_r368 = CPyDef_rtypes___RPrimitive(cpy_r_r362, 0, 1, cpy_r_r363, cpy_r_r364, cpy_r_r365, cpy_r_r366, cpy_r_r367);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 443, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___set_rprimitive = cpy_r_r368;
    CPy_INCREF(CPyStatic_rtypes___set_rprimitive);
    cpy_r_r369 = CPyStatic_rtypes___globals;
    cpy_r_r370 = CPyStatics[6770]; /* 'set_rprimitive' */
    cpy_r_r371 = CPyDict_SetItem(cpy_r_r369, cpy_r_r370, cpy_r_r368);
    CPy_DECREF(cpy_r_r368);
    cpy_r_r372 = cpy_r_r371 >= 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 443, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r373 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r374 = 2;
    cpy_r_r375 = 2;
    cpy_r_r376 = NULL;
    cpy_r_r377 = CPY_INT_TAG;
    cpy_r_r378 = 2;
    cpy_r_r379 = CPyDef_rtypes___RPrimitive(cpy_r_r373, 0, 1, cpy_r_r374, cpy_r_r375, cpy_r_r376, cpy_r_r377, cpy_r_r378);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 447, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___str_rprimitive = cpy_r_r379;
    CPy_INCREF(CPyStatic_rtypes___str_rprimitive);
    cpy_r_r380 = CPyStatic_rtypes___globals;
    cpy_r_r381 = CPyStatics[6771]; /* 'str_rprimitive' */
    cpy_r_r382 = CPyDict_SetItem(cpy_r_r380, cpy_r_r381, cpy_r_r379);
    CPy_DECREF(cpy_r_r379);
    cpy_r_r383 = cpy_r_r382 >= 0;
    if (unlikely(!cpy_r_r383)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 447, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r384 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r385 = 2;
    cpy_r_r386 = 2;
    cpy_r_r387 = NULL;
    cpy_r_r388 = CPY_INT_TAG;
    cpy_r_r389 = 2;
    cpy_r_r390 = CPyDef_rtypes___RPrimitive(cpy_r_r384, 0, 1, cpy_r_r385, cpy_r_r386, cpy_r_r387, cpy_r_r388, cpy_r_r389);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 450, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___bytes_rprimitive = cpy_r_r390;
    CPy_INCREF(CPyStatic_rtypes___bytes_rprimitive);
    cpy_r_r391 = CPyStatic_rtypes___globals;
    cpy_r_r392 = CPyStatics[6763]; /* 'bytes_rprimitive' */
    cpy_r_r393 = CPyDict_SetItem(cpy_r_r391, cpy_r_r392, cpy_r_r390);
    CPy_DECREF(cpy_r_r390);
    cpy_r_r394 = cpy_r_r393 >= 0;
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 450, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r395 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r396 = 2;
    cpy_r_r397 = 2;
    cpy_r_r398 = NULL;
    cpy_r_r399 = CPY_INT_TAG;
    cpy_r_r400 = 2;
    cpy_r_r401 = CPyDef_rtypes___RPrimitive(cpy_r_r395, 0, 1, cpy_r_r396, cpy_r_r397, cpy_r_r398, cpy_r_r399, cpy_r_r400);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 454, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___tuple_rprimitive = cpy_r_r401;
    CPy_INCREF(CPyStatic_rtypes___tuple_rprimitive);
    cpy_r_r402 = CPyStatic_rtypes___globals;
    cpy_r_r403 = CPyStatics[6772]; /* 'tuple_rprimitive' */
    cpy_r_r404 = CPyDict_SetItem(cpy_r_r402, cpy_r_r403, cpy_r_r401);
    CPy_DECREF(cpy_r_r401);
    cpy_r_r405 = cpy_r_r404 >= 0;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 454, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r406 = CPyStatics[825]; /* 'builtins.range' */
    cpy_r_r407 = 2;
    cpy_r_r408 = 2;
    cpy_r_r409 = NULL;
    cpy_r_r410 = CPY_INT_TAG;
    cpy_r_r411 = 2;
    cpy_r_r412 = CPyDef_rtypes___RPrimitive(cpy_r_r406, 0, 1, cpy_r_r407, cpy_r_r408, cpy_r_r409, cpy_r_r410, cpy_r_r411);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 457, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPyStatic_rtypes___range_rprimitive = cpy_r_r412;
    CPy_INCREF(CPyStatic_rtypes___range_rprimitive);
    cpy_r_r413 = CPyStatic_rtypes___globals;
    cpy_r_r414 = CPyStatics[6769]; /* 'range_rprimitive' */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r413, cpy_r_r414, cpy_r_r412);
    CPy_DECREF(cpy_r_r412);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 457, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r417 = (PyObject *)CPyType_rtypes___RTypeVisitor;
    cpy_r_r418 = (PyObject *)&PyUnicode_Type;
    cpy_r_r419 = PyObject_GetItem(cpy_r_r417, cpy_r_r418);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r420 = PyTuple_Pack(1, cpy_r_r419);
    CPy_DECREF(cpy_r_r419);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r421 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r422 = (PyObject *)CPyType_rtypes___TupleNameVisitor_template;
    cpy_r_r423 = CPyType_FromTemplate(cpy_r_r422, cpy_r_r420, cpy_r_r421);
    CPy_DECREF(cpy_r_r420);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r424 = CPyDef_rtypes___TupleNameVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r424 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL270;
    }
    cpy_r_r425 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r426 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r427 = PyTuple_Pack(1, cpy_r_r426);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL270;
    }
    cpy_r_r428 = PyObject_SetAttr(cpy_r_r423, cpy_r_r425, cpy_r_r427);
    CPy_DECREF(cpy_r_r427);
    cpy_r_r429 = cpy_r_r428 >= 0;
    if (unlikely(!cpy_r_r429)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL270;
    }
    CPyType_rtypes___TupleNameVisitor = (PyTypeObject *)cpy_r_r423;
    CPy_INCREF(CPyType_rtypes___TupleNameVisitor);
    cpy_r_r430 = CPyStatic_rtypes___globals;
    cpy_r_r431 = CPyStatics[8024]; /* 'TupleNameVisitor' */
    cpy_r_r432 = CPyDict_SetItem(cpy_r_r430, cpy_r_r431, cpy_r_r423);
    CPy_DECREF(cpy_r_r423);
    cpy_r_r433 = cpy_r_r432 >= 0;
    if (unlikely(!cpy_r_r433)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 571, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r434 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r435 = PyTuple_Pack(1, cpy_r_r434);
    if (unlikely(cpy_r_r435 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 612, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r436 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r437 = (PyObject *)CPyType_rtypes___RTuple_template;
    cpy_r_r438 = CPyType_FromTemplate(cpy_r_r437, cpy_r_r435, cpy_r_r436);
    CPy_DECREF(cpy_r_r435);
    if (unlikely(cpy_r_r438 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 612, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r439 = CPyDef_rtypes___RTuple_trait_vtable_setup();
    if (unlikely(cpy_r_r439 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL271;
    }
    cpy_r_r440 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r441 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r442 = CPyStatics[114]; /* 'types' */
    cpy_r_r443 = CPyStatics[8025]; /* 'unique_id' */
    cpy_r_r444 = CPyStatics[8026]; /* 'struct_name' */
    cpy_r_r445 = CPyStatics[2329]; /* 'name' */
    cpy_r_r446 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r447 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r448 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r449 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r450 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r451 = PyTuple_Pack(10, cpy_r_r441, cpy_r_r442, cpy_r_r443, cpy_r_r444, cpy_r_r445, cpy_r_r446, cpy_r_r447, cpy_r_r448, cpy_r_r449, cpy_r_r450);
    if (unlikely(cpy_r_r451 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 612, CPyStatic_rtypes___globals);
        goto CPyL271;
    }
    cpy_r_r452 = PyObject_SetAttr(cpy_r_r438, cpy_r_r440, cpy_r_r451);
    CPy_DECREF(cpy_r_r451);
    cpy_r_r453 = cpy_r_r452 >= 0;
    if (unlikely(!cpy_r_r453)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 612, CPyStatic_rtypes___globals);
        goto CPyL271;
    }
    CPyType_rtypes___RTuple = (PyTypeObject *)cpy_r_r438;
    CPy_INCREF(CPyType_rtypes___RTuple);
    cpy_r_r454 = CPyStatic_rtypes___globals;
    cpy_r_r455 = CPyStatics[7023]; /* 'RTuple' */
    cpy_r_r456 = CPyDict_SetItem(cpy_r_r454, cpy_r_r455, cpy_r_r438);
    CPy_DECREF(cpy_r_r438);
    cpy_r_r457 = cpy_r_r456 >= 0;
    if (unlikely(!cpy_r_r457)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 612, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r458 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r458 != NULL)) goto CPyL135;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r459 = 0;
    if (unlikely(!cpy_r_r459)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r460 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r460 != NULL)) goto CPyL138;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL138: ;
    cpy_r_r462 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r462 != NULL)) goto CPyL141;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r463 = 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL141: ;
    cpy_r_r464 = PyList_New(3);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r465 = (CPyPtr)&((PyListObject *)cpy_r_r464)->ob_item;
    cpy_r_r466 = *(CPyPtr *)cpy_r_r465;
    CPy_INCREF(cpy_r_r458);
    *(PyObject * *)cpy_r_r466 = cpy_r_r458;
    cpy_r_r467 = cpy_r_r466 + 8;
    CPy_INCREF(cpy_r_r460);
    *(PyObject * *)cpy_r_r467 = cpy_r_r460;
    cpy_r_r468 = cpy_r_r466 + 16;
    CPy_INCREF(cpy_r_r462);
    *(PyObject * *)cpy_r_r468 = cpy_r_r462;
    cpy_r_r469 = CPyDef_rtypes___RTuple(cpy_r_r464);
    CPy_DECREF(cpy_r_r464);
    if (unlikely(cpy_r_r469 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r470 = CPyStatic_rtypes___globals;
    cpy_r_r471 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r472 = CPyDict_SetItem(cpy_r_r470, cpy_r_r471, cpy_r_r469);
    CPy_DECREF(cpy_r_r469);
    cpy_r_r473 = cpy_r_r472 >= 0;
    if (unlikely(!cpy_r_r473)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 668, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r474 = CPyStatic_rtypes___bool_rprimitive;
    if (likely(cpy_r_r474 != NULL)) goto CPyL147;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r475 = 0;
    if (unlikely(!cpy_r_r475)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 673, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL147: ;
    cpy_r_r476 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r476 != NULL)) goto CPyL150;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r477 = 0;
    if (unlikely(!cpy_r_r477)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 673, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL150: ;
    cpy_r_r478 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r478 != NULL)) goto CPyL153;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r479 = 0;
    if (unlikely(!cpy_r_r479)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 673, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL153: ;
    cpy_r_r480 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r480 != NULL)) goto CPyL156;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r481 = 0;
    if (unlikely(!cpy_r_r481)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 673, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL156: ;
    cpy_r_r482 = PyList_New(4);
    if (unlikely(cpy_r_r482 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 673, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r483 = (CPyPtr)&((PyListObject *)cpy_r_r482)->ob_item;
    cpy_r_r484 = *(CPyPtr *)cpy_r_r483;
    CPy_INCREF(cpy_r_r474);
    *(PyObject * *)cpy_r_r484 = cpy_r_r474;
    cpy_r_r485 = cpy_r_r484 + 8;
    CPy_INCREF(cpy_r_r476);
    *(PyObject * *)cpy_r_r485 = cpy_r_r476;
    cpy_r_r486 = cpy_r_r484 + 16;
    CPy_INCREF(cpy_r_r478);
    *(PyObject * *)cpy_r_r486 = cpy_r_r478;
    cpy_r_r487 = cpy_r_r484 + 24;
    CPy_INCREF(cpy_r_r480);
    *(PyObject * *)cpy_r_r487 = cpy_r_r480;
    cpy_r_r488 = CPyDef_rtypes___RTuple(cpy_r_r482);
    CPy_DECREF(cpy_r_r482);
    if (unlikely(cpy_r_r488 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 672, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r489 = CPyStatic_rtypes___globals;
    cpy_r_r490 = CPyStatics[8028]; /* 'dict_next_rtuple_pair' */
    cpy_r_r491 = CPyDict_SetItem(cpy_r_r489, cpy_r_r490, cpy_r_r488);
    CPy_DECREF(cpy_r_r488);
    cpy_r_r492 = cpy_r_r491 >= 0;
    if (unlikely(!cpy_r_r492)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 672, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r493 = CPyStatic_rtypes___bool_rprimitive;
    if (likely(cpy_r_r493 != NULL)) goto CPyL162;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r494 = 0;
    if (unlikely(!cpy_r_r494)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL162: ;
    cpy_r_r495 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r495 != NULL)) goto CPyL165;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r496 = 0;
    if (unlikely(!cpy_r_r496)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL165: ;
    cpy_r_r497 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r497 != NULL)) goto CPyL168;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r498 = 0;
    if (unlikely(!cpy_r_r498)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL168: ;
    cpy_r_r499 = PyList_New(3);
    if (unlikely(cpy_r_r499 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r500 = (CPyPtr)&((PyListObject *)cpy_r_r499)->ob_item;
    cpy_r_r501 = *(CPyPtr *)cpy_r_r500;
    CPy_INCREF(cpy_r_r493);
    *(PyObject * *)cpy_r_r501 = cpy_r_r493;
    cpy_r_r502 = cpy_r_r501 + 8;
    CPy_INCREF(cpy_r_r495);
    *(PyObject * *)cpy_r_r502 = cpy_r_r495;
    cpy_r_r503 = cpy_r_r501 + 16;
    CPy_INCREF(cpy_r_r497);
    *(PyObject * *)cpy_r_r503 = cpy_r_r497;
    cpy_r_r504 = CPyDef_rtypes___RTuple(cpy_r_r499);
    CPy_DECREF(cpy_r_r499);
    if (unlikely(cpy_r_r504 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r505 = CPyStatic_rtypes___globals;
    cpy_r_r506 = CPyStatics[8029]; /* 'dict_next_rtuple_single' */
    cpy_r_r507 = CPyDict_SetItem(cpy_r_r505, cpy_r_r506, cpy_r_r504);
    CPy_DECREF(cpy_r_r504);
    cpy_r_r508 = cpy_r_r507 >= 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 676, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r509 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r510 = PyTuple_Pack(1, cpy_r_r509);
    if (unlikely(cpy_r_r510 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 749, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r511 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r512 = (PyObject *)CPyType_rtypes___RStruct_template;
    cpy_r_r513 = CPyType_FromTemplate(cpy_r_r512, cpy_r_r510, cpy_r_r511);
    CPy_DECREF(cpy_r_r510);
    if (unlikely(cpy_r_r513 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 749, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r514 = CPyDef_rtypes___RStruct_trait_vtable_setup();
    if (unlikely(cpy_r_r514 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL272;
    }
    cpy_r_r515 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r516 = CPyStatics[2403]; /* 'names' */
    cpy_r_r517 = CPyStatics[114]; /* 'types' */
    cpy_r_r518 = CPyStatics[8030]; /* 'offsets' */
    cpy_r_r519 = CPyStatics[155]; /* 'size' */
    cpy_r_r520 = CPyStatics[2329]; /* 'name' */
    cpy_r_r521 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r522 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r523 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r524 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r525 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r526 = PyTuple_Pack(10, cpy_r_r516, cpy_r_r517, cpy_r_r518, cpy_r_r519, cpy_r_r520, cpy_r_r521, cpy_r_r522, cpy_r_r523, cpy_r_r524, cpy_r_r525);
    if (unlikely(cpy_r_r526 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 749, CPyStatic_rtypes___globals);
        goto CPyL272;
    }
    cpy_r_r527 = PyObject_SetAttr(cpy_r_r513, cpy_r_r515, cpy_r_r526);
    CPy_DECREF(cpy_r_r526);
    cpy_r_r528 = cpy_r_r527 >= 0;
    if (unlikely(!cpy_r_r528)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 749, CPyStatic_rtypes___globals);
        goto CPyL272;
    }
    CPyType_rtypes___RStruct = (PyTypeObject *)cpy_r_r513;
    CPy_INCREF(CPyType_rtypes___RStruct);
    cpy_r_r529 = CPyStatic_rtypes___globals;
    cpy_r_r530 = CPyStatics[7407]; /* 'RStruct' */
    cpy_r_r531 = CPyDict_SetItem(cpy_r_r529, cpy_r_r530, cpy_r_r513);
    CPy_DECREF(cpy_r_r513);
    cpy_r_r532 = cpy_r_r531 >= 0;
    if (unlikely(!cpy_r_r532)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 749, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r533 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r534 = PyTuple_Pack(1, cpy_r_r533);
    if (unlikely(cpy_r_r534 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 798, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r535 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r536 = (PyObject *)CPyType_rtypes___RInstance_template;
    cpy_r_r537 = CPyType_FromTemplate(cpy_r_r536, cpy_r_r534, cpy_r_r535);
    CPy_DECREF(cpy_r_r534);
    if (unlikely(cpy_r_r537 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 798, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r538 = CPyDef_rtypes___RInstance_trait_vtable_setup();
    if (unlikely(cpy_r_r538 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL273;
    }
    cpy_r_r539 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r540 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r541 = CPyStatics[8031]; /* 'class_ir' */
    cpy_r_r542 = CPyStatics[2329]; /* 'name' */
    cpy_r_r543 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r544 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r545 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r546 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r547 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r548 = PyTuple_Pack(8, cpy_r_r540, cpy_r_r541, cpy_r_r542, cpy_r_r543, cpy_r_r544, cpy_r_r545, cpy_r_r546, cpy_r_r547);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 798, CPyStatic_rtypes___globals);
        goto CPyL273;
    }
    cpy_r_r549 = PyObject_SetAttr(cpy_r_r537, cpy_r_r539, cpy_r_r548);
    CPy_DECREF(cpy_r_r548);
    cpy_r_r550 = cpy_r_r549 >= 0;
    if (unlikely(!cpy_r_r550)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 798, CPyStatic_rtypes___globals);
        goto CPyL273;
    }
    CPyType_rtypes___RInstance = (PyTypeObject *)cpy_r_r537;
    CPy_INCREF(CPyType_rtypes___RInstance);
    cpy_r_r551 = CPyStatic_rtypes___globals;
    cpy_r_r552 = CPyStatics[6675]; /* 'RInstance' */
    cpy_r_r553 = CPyDict_SetItem(cpy_r_r551, cpy_r_r552, cpy_r_r537);
    CPy_DECREF(cpy_r_r537);
    cpy_r_r554 = cpy_r_r553 >= 0;
    if (unlikely(!cpy_r_r554)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 798, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r555 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r556 = PyTuple_Pack(1, cpy_r_r555);
    if (unlikely(cpy_r_r556 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 854, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r557 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r558 = (PyObject *)CPyType_rtypes___RUnion_template;
    cpy_r_r559 = CPyType_FromTemplate(cpy_r_r558, cpy_r_r556, cpy_r_r557);
    CPy_DECREF(cpy_r_r556);
    if (unlikely(cpy_r_r559 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 854, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r560 = CPyDef_rtypes___RUnion_trait_vtable_setup();
    if (unlikely(cpy_r_r560 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL274;
    }
    cpy_r_r561 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r562 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r563 = CPyStatics[219]; /* 'items' */
    cpy_r_r564 = CPyStatics[8032]; /* 'items_set' */
    cpy_r_r565 = CPyStatics[2329]; /* 'name' */
    cpy_r_r566 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r567 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r568 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r569 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r570 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r571 = PyTuple_Pack(9, cpy_r_r562, cpy_r_r563, cpy_r_r564, cpy_r_r565, cpy_r_r566, cpy_r_r567, cpy_r_r568, cpy_r_r569, cpy_r_r570);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 854, CPyStatic_rtypes___globals);
        goto CPyL274;
    }
    cpy_r_r572 = PyObject_SetAttr(cpy_r_r559, cpy_r_r561, cpy_r_r571);
    CPy_DECREF(cpy_r_r571);
    cpy_r_r573 = cpy_r_r572 >= 0;
    if (unlikely(!cpy_r_r573)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 854, CPyStatic_rtypes___globals);
        goto CPyL274;
    }
    CPyType_rtypes___RUnion = (PyTypeObject *)cpy_r_r559;
    CPy_INCREF(CPyType_rtypes___RUnion);
    cpy_r_r574 = CPyStatic_rtypes___globals;
    cpy_r_r575 = CPyStatics[6762]; /* 'RUnion' */
    cpy_r_r576 = CPyDict_SetItem(cpy_r_r574, cpy_r_r575, cpy_r_r559);
    CPy_DECREF(cpy_r_r559);
    cpy_r_r577 = cpy_r_r576 >= 0;
    if (unlikely(!cpy_r_r577)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 854, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r578 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r579 = PyTuple_Pack(1, cpy_r_r578);
    if (unlikely(cpy_r_r579 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 940, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r580 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r581 = (PyObject *)CPyType_rtypes___RArray_template;
    cpy_r_r582 = CPyType_FromTemplate(cpy_r_r581, cpy_r_r579, cpy_r_r580);
    CPy_DECREF(cpy_r_r579);
    if (unlikely(cpy_r_r582 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 940, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r583 = CPyDef_rtypes___RArray_trait_vtable_setup();
    if (unlikely(cpy_r_r583 == 2)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", -1, CPyStatic_rtypes___globals);
        goto CPyL275;
    }
    cpy_r_r584 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r585 = CPyStatics[8033]; /* 'item_type' */
    cpy_r_r586 = CPyStatics[8034]; /* 'length' */
    cpy_r_r587 = CPyStatics[2329]; /* 'name' */
    cpy_r_r588 = CPyStatics[7992]; /* 'is_unboxed' */
    cpy_r_r589 = CPyStatics[7993]; /* 'c_undefined' */
    cpy_r_r590 = CPyStatics[7994]; /* 'is_refcounted' */
    cpy_r_r591 = CPyStatics[7995]; /* '_ctype' */
    cpy_r_r592 = CPyStatics[7996]; /* 'error_overlap' */
    cpy_r_r593 = PyTuple_Pack(8, cpy_r_r585, cpy_r_r586, cpy_r_r587, cpy_r_r588, cpy_r_r589, cpy_r_r590, cpy_r_r591, cpy_r_r592);
    if (unlikely(cpy_r_r593 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 940, CPyStatic_rtypes___globals);
        goto CPyL275;
    }
    cpy_r_r594 = PyObject_SetAttr(cpy_r_r582, cpy_r_r584, cpy_r_r593);
    CPy_DECREF(cpy_r_r593);
    cpy_r_r595 = cpy_r_r594 >= 0;
    if (unlikely(!cpy_r_r595)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 940, CPyStatic_rtypes___globals);
        goto CPyL275;
    }
    CPyType_rtypes___RArray = (PyTypeObject *)cpy_r_r582;
    CPy_INCREF(CPyType_rtypes___RArray);
    cpy_r_r596 = CPyStatic_rtypes___globals;
    cpy_r_r597 = CPyStatics[6759]; /* 'RArray' */
    cpy_r_r598 = CPyDict_SetItem(cpy_r_r596, cpy_r_r597, cpy_r_r582);
    CPy_DECREF(cpy_r_r582);
    cpy_r_r599 = cpy_r_r598 >= 0;
    if (unlikely(!cpy_r_r599)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 940, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r600 = CPyStatics[8035]; /* 'PyObject' */
    cpy_r_r601 = CPyStatics[8036]; /* 'ob_refcnt' */
    cpy_r_r602 = CPyStatics[8037]; /* 'ob_type' */
    cpy_r_r603 = PyList_New(2);
    if (unlikely(cpy_r_r603 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 982, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r604 = (CPyPtr)&((PyListObject *)cpy_r_r603)->ob_item;
    cpy_r_r605 = *(CPyPtr *)cpy_r_r604;
    CPy_INCREF(cpy_r_r601);
    *(PyObject * *)cpy_r_r605 = cpy_r_r601;
    cpy_r_r606 = cpy_r_r605 + 8;
    CPy_INCREF(cpy_r_r602);
    *(PyObject * *)cpy_r_r606 = cpy_r_r602;
    cpy_r_r607 = CPyStatic_rtypes___globals;
    cpy_r_r608 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r609 = CPyDict_GetItem(cpy_r_r607, cpy_r_r608);
    if (unlikely(cpy_r_r609 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 983, CPyStatic_rtypes___globals);
        goto CPyL276;
    }
    if (likely(Py_TYPE(cpy_r_r609) == CPyType_rtypes___RPrimitive))
        cpy_r_r610 = cpy_r_r609;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 983, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r609);
        goto CPyL276;
    }
    cpy_r_r611 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r611 == NULL)) {
        goto CPyL277;
    } else
        goto CPyL201;
CPyL199: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r612 = 0;
    if (unlikely(!cpy_r_r612)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 983, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL201: ;
    cpy_r_r613 = PyList_New(2);
    if (unlikely(cpy_r_r613 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 983, CPyStatic_rtypes___globals);
        goto CPyL278;
    }
    cpy_r_r614 = (CPyPtr)&((PyListObject *)cpy_r_r613)->ob_item;
    cpy_r_r615 = *(CPyPtr *)cpy_r_r614;
    *(PyObject * *)cpy_r_r615 = cpy_r_r610;
    cpy_r_r616 = cpy_r_r615 + 8;
    CPy_INCREF(cpy_r_r611);
    *(PyObject * *)cpy_r_r616 = cpy_r_r611;
    cpy_r_r617 = CPyDef_rtypes___RStruct(cpy_r_r600, cpy_r_r603, cpy_r_r613);
    CPy_DECREF(cpy_r_r603);
    CPy_DECREF(cpy_r_r613);
    if (unlikely(cpy_r_r617 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 980, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r618 = CPyStatic_rtypes___globals;
    cpy_r_r619 = CPyStatics[8035]; /* 'PyObject' */
    cpy_r_r620 = CPyDict_SetItem(cpy_r_r618, cpy_r_r619, cpy_r_r617);
    CPy_DECREF(cpy_r_r617);
    cpy_r_r621 = cpy_r_r620 >= 0;
    if (unlikely(!cpy_r_r621)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 980, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r622 = CPyStatics[8038]; /* 'PyVarObject' */
    cpy_r_r623 = CPyStatics[8039]; /* 'ob_base' */
    cpy_r_r624 = CPyStatics[8040]; /* 'ob_size' */
    cpy_r_r625 = PyList_New(2);
    if (unlikely(cpy_r_r625 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r626 = (CPyPtr)&((PyListObject *)cpy_r_r625)->ob_item;
    cpy_r_r627 = *(CPyPtr *)cpy_r_r626;
    CPy_INCREF(cpy_r_r623);
    *(PyObject * *)cpy_r_r627 = cpy_r_r623;
    cpy_r_r628 = cpy_r_r627 + 8;
    CPy_INCREF(cpy_r_r624);
    *(PyObject * *)cpy_r_r628 = cpy_r_r624;
    cpy_r_r629 = CPyStatic_rtypes___globals;
    cpy_r_r630 = CPyStatics[8035]; /* 'PyObject' */
    cpy_r_r631 = CPyDict_GetItem(cpy_r_r629, cpy_r_r630);
    if (unlikely(cpy_r_r631 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals);
        goto CPyL279;
    }
    if (likely(Py_TYPE(cpy_r_r631) == CPyType_rtypes___RStruct))
        cpy_r_r632 = cpy_r_r631;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r631);
        goto CPyL279;
    }
    cpy_r_r633 = CPyStatic_rtypes___globals;
    cpy_r_r634 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r635 = CPyDict_GetItem(cpy_r_r633, cpy_r_r634);
    if (unlikely(cpy_r_r635 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals);
        goto CPyL280;
    }
    if (likely(Py_TYPE(cpy_r_r635) == CPyType_rtypes___RPrimitive))
        cpy_r_r636 = cpy_r_r635;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r635);
        goto CPyL280;
    }
    cpy_r_r637 = PyList_New(2);
    if (unlikely(cpy_r_r637 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 987, CPyStatic_rtypes___globals);
        goto CPyL281;
    }
    cpy_r_r638 = (CPyPtr)&((PyListObject *)cpy_r_r637)->ob_item;
    cpy_r_r639 = *(CPyPtr *)cpy_r_r638;
    *(PyObject * *)cpy_r_r639 = cpy_r_r632;
    cpy_r_r640 = cpy_r_r639 + 8;
    *(PyObject * *)cpy_r_r640 = cpy_r_r636;
    cpy_r_r641 = CPyDef_rtypes___RStruct(cpy_r_r622, cpy_r_r625, cpy_r_r637);
    CPy_DECREF(cpy_r_r625);
    CPy_DECREF(cpy_r_r637);
    if (unlikely(cpy_r_r641 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 986, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r642 = CPyStatic_rtypes___globals;
    cpy_r_r643 = CPyStatics[8038]; /* 'PyVarObject' */
    cpy_r_r644 = CPyDict_SetItem(cpy_r_r642, cpy_r_r643, cpy_r_r641);
    CPy_DECREF(cpy_r_r641);
    cpy_r_r645 = cpy_r_r644 >= 0;
    if (unlikely(!cpy_r_r645)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 986, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r646 = CPyStatics[8041]; /* 'setentry' */
    cpy_r_r647 = CPyStatics[228]; /* 'key' */
    cpy_r_r648 = CPyStatics[156]; /* 'hash' */
    cpy_r_r649 = PyList_New(2);
    if (unlikely(cpy_r_r649 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 991, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r650 = (CPyPtr)&((PyListObject *)cpy_r_r649)->ob_item;
    cpy_r_r651 = *(CPyPtr *)cpy_r_r650;
    CPy_INCREF(cpy_r_r647);
    *(PyObject * *)cpy_r_r651 = cpy_r_r647;
    cpy_r_r652 = cpy_r_r651 + 8;
    CPy_INCREF(cpy_r_r648);
    *(PyObject * *)cpy_r_r652 = cpy_r_r648;
    cpy_r_r653 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r653 == NULL)) {
        goto CPyL282;
    } else
        goto CPyL216;
CPyL214: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r654 = 0;
    if (unlikely(!cpy_r_r654)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 991, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL216: ;
    cpy_r_r655 = CPyStatic_rtypes___globals;
    cpy_r_r656 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r657 = CPyDict_GetItem(cpy_r_r655, cpy_r_r656);
    if (unlikely(cpy_r_r657 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 991, CPyStatic_rtypes___globals);
        goto CPyL283;
    }
    if (likely(Py_TYPE(cpy_r_r657) == CPyType_rtypes___RPrimitive))
        cpy_r_r658 = cpy_r_r657;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 991, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r657);
        goto CPyL283;
    }
    cpy_r_r659 = PyList_New(2);
    if (unlikely(cpy_r_r659 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 991, CPyStatic_rtypes___globals);
        goto CPyL284;
    }
    cpy_r_r660 = (CPyPtr)&((PyListObject *)cpy_r_r659)->ob_item;
    cpy_r_r661 = *(CPyPtr *)cpy_r_r660;
    CPy_INCREF(cpy_r_r653);
    *(PyObject * *)cpy_r_r661 = cpy_r_r653;
    cpy_r_r662 = cpy_r_r661 + 8;
    *(PyObject * *)cpy_r_r662 = cpy_r_r658;
    cpy_r_r663 = CPyDef_rtypes___RStruct(cpy_r_r646, cpy_r_r649, cpy_r_r659);
    CPy_DECREF(cpy_r_r649);
    CPy_DECREF(cpy_r_r659);
    if (unlikely(cpy_r_r663 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 990, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r664 = CPyStatic_rtypes___globals;
    cpy_r_r665 = CPyStatics[8041]; /* 'setentry' */
    cpy_r_r666 = CPyDict_SetItem(cpy_r_r664, cpy_r_r665, cpy_r_r663);
    CPy_DECREF(cpy_r_r663);
    cpy_r_r667 = cpy_r_r666 >= 0;
    if (unlikely(!cpy_r_r667)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 990, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r668 = CPyStatics[8042]; /* 'smalltable' */
    cpy_r_r669 = PyList_New(0);
    if (unlikely(cpy_r_r669 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r670 = CPyStatic_rtypes___globals;
    cpy_r_r671 = CPyStatics[8041]; /* 'setentry' */
    cpy_r_r672 = CPyDict_GetItem(cpy_r_r670, cpy_r_r671);
    if (unlikely(cpy_r_r672 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL285;
    }
    if (likely(Py_TYPE(cpy_r_r672) == CPyType_rtypes___RStruct))
        cpy_r_r673 = cpy_r_r672;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r672);
        goto CPyL285;
    }
    cpy_r_r674 = PyList_New(1);
    if (unlikely(cpy_r_r674 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL286;
    }
    cpy_r_r675 = (CPyPtr)&((PyListObject *)cpy_r_r674)->ob_item;
    cpy_r_r676 = *(CPyPtr *)cpy_r_r675;
    *(PyObject * *)cpy_r_r676 = cpy_r_r673;
    cpy_r_r677 = CPySequence_Multiply(cpy_r_r674, 16);
    CPy_DECREF(cpy_r_r674);
    if (unlikely(cpy_r_r677 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL285;
    }
    cpy_r_r678 = CPyDef_rtypes___RStruct(cpy_r_r668, cpy_r_r669, cpy_r_r677);
    CPy_DECREF(cpy_r_r669);
    CPy_DECREF(cpy_r_r677);
    if (unlikely(cpy_r_r678 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r679 = CPyStatic_rtypes___globals;
    cpy_r_r680 = CPyStatics[8042]; /* 'smalltable' */
    cpy_r_r681 = CPyDict_SetItem(cpy_r_r679, cpy_r_r680, cpy_r_r678);
    CPy_DECREF(cpy_r_r678);
    cpy_r_r682 = cpy_r_r681 >= 0;
    if (unlikely(!cpy_r_r682)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 994, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r683 = CPyStatics[8043]; /* 'PySetObject' */
    cpy_r_r684 = CPyStatics[8039]; /* 'ob_base' */
    cpy_r_r685 = CPyStatics[8044]; /* 'fill' */
    cpy_r_r686 = CPyStatics[8045]; /* 'used' */
    cpy_r_r687 = CPyStatics[8046]; /* 'mask' */
    cpy_r_r688 = CPyStatics[8047]; /* 'table' */
    cpy_r_r689 = CPyStatics[156]; /* 'hash' */
    cpy_r_r690 = CPyStatics[8048]; /* 'finger' */
    cpy_r_r691 = CPyStatics[8042]; /* 'smalltable' */
    cpy_r_r692 = CPyStatics[8049]; /* 'weakreflist' */
    cpy_r_r693 = PyList_New(9);
    if (unlikely(cpy_r_r693 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 998, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r694 = (CPyPtr)&((PyListObject *)cpy_r_r693)->ob_item;
    cpy_r_r695 = *(CPyPtr *)cpy_r_r694;
    CPy_INCREF(cpy_r_r684);
    *(PyObject * *)cpy_r_r695 = cpy_r_r684;
    cpy_r_r696 = cpy_r_r695 + 8;
    CPy_INCREF(cpy_r_r685);
    *(PyObject * *)cpy_r_r696 = cpy_r_r685;
    cpy_r_r697 = cpy_r_r695 + 16;
    CPy_INCREF(cpy_r_r686);
    *(PyObject * *)cpy_r_r697 = cpy_r_r686;
    cpy_r_r698 = cpy_r_r695 + 24;
    CPy_INCREF(cpy_r_r687);
    *(PyObject * *)cpy_r_r698 = cpy_r_r687;
    cpy_r_r699 = cpy_r_r695 + 32;
    CPy_INCREF(cpy_r_r688);
    *(PyObject * *)cpy_r_r699 = cpy_r_r688;
    cpy_r_r700 = cpy_r_r695 + 40;
    CPy_INCREF(cpy_r_r689);
    *(PyObject * *)cpy_r_r700 = cpy_r_r689;
    cpy_r_r701 = cpy_r_r695 + 48;
    CPy_INCREF(cpy_r_r690);
    *(PyObject * *)cpy_r_r701 = cpy_r_r690;
    cpy_r_r702 = cpy_r_r695 + 56;
    CPy_INCREF(cpy_r_r691);
    *(PyObject * *)cpy_r_r702 = cpy_r_r691;
    cpy_r_r703 = cpy_r_r695 + 64;
    CPy_INCREF(cpy_r_r692);
    *(PyObject * *)cpy_r_r703 = cpy_r_r692;
    cpy_r_r704 = CPyStatic_rtypes___globals;
    cpy_r_r705 = CPyStatics[8035]; /* 'PyObject' */
    cpy_r_r706 = CPyDict_GetItem(cpy_r_r704, cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1010, CPyStatic_rtypes___globals);
        goto CPyL287;
    }
    if (likely(Py_TYPE(cpy_r_r706) == CPyType_rtypes___RStruct))
        cpy_r_r707 = cpy_r_r706;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1010, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r706);
        goto CPyL287;
    }
    cpy_r_r708 = CPyStatic_rtypes___globals;
    cpy_r_r709 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r710 = CPyDict_GetItem(cpy_r_r708, cpy_r_r709);
    if (unlikely(cpy_r_r710 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1011, CPyStatic_rtypes___globals);
        goto CPyL288;
    }
    if (likely(Py_TYPE(cpy_r_r710) == CPyType_rtypes___RPrimitive))
        cpy_r_r711 = cpy_r_r710;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1011, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r710);
        goto CPyL288;
    }
    cpy_r_r712 = CPyStatic_rtypes___globals;
    cpy_r_r713 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r714 = CPyDict_GetItem(cpy_r_r712, cpy_r_r713);
    if (unlikely(cpy_r_r714 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1012, CPyStatic_rtypes___globals);
        goto CPyL289;
    }
    if (likely(Py_TYPE(cpy_r_r714) == CPyType_rtypes___RPrimitive))
        cpy_r_r715 = cpy_r_r714;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1012, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r714);
        goto CPyL289;
    }
    cpy_r_r716 = CPyStatic_rtypes___globals;
    cpy_r_r717 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r718 = CPyDict_GetItem(cpy_r_r716, cpy_r_r717);
    if (unlikely(cpy_r_r718 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1013, CPyStatic_rtypes___globals);
        goto CPyL290;
    }
    if (likely(Py_TYPE(cpy_r_r718) == CPyType_rtypes___RPrimitive))
        cpy_r_r719 = cpy_r_r718;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1013, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r718);
        goto CPyL290;
    }
    cpy_r_r720 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r720 == NULL)) {
        goto CPyL291;
    } else
        goto CPyL240;
CPyL238: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r721 = 0;
    if (unlikely(!cpy_r_r721)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1014, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL240: ;
    cpy_r_r722 = CPyStatic_rtypes___globals;
    cpy_r_r723 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r724 = CPyDict_GetItem(cpy_r_r722, cpy_r_r723);
    if (unlikely(cpy_r_r724 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1015, CPyStatic_rtypes___globals);
        goto CPyL292;
    }
    if (likely(Py_TYPE(cpy_r_r724) == CPyType_rtypes___RPrimitive))
        cpy_r_r725 = cpy_r_r724;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1015, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r724);
        goto CPyL292;
    }
    cpy_r_r726 = CPyStatic_rtypes___globals;
    cpy_r_r727 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r728 = CPyDict_GetItem(cpy_r_r726, cpy_r_r727);
    if (unlikely(cpy_r_r728 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1016, CPyStatic_rtypes___globals);
        goto CPyL293;
    }
    if (likely(Py_TYPE(cpy_r_r728) == CPyType_rtypes___RPrimitive))
        cpy_r_r729 = cpy_r_r728;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1016, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r728);
        goto CPyL293;
    }
    cpy_r_r730 = CPyStatic_rtypes___globals;
    cpy_r_r731 = CPyStatics[8042]; /* 'smalltable' */
    cpy_r_r732 = CPyDict_GetItem(cpy_r_r730, cpy_r_r731);
    if (unlikely(cpy_r_r732 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1017, CPyStatic_rtypes___globals);
        goto CPyL294;
    }
    if (likely(Py_TYPE(cpy_r_r732) == CPyType_rtypes___RStruct))
        cpy_r_r733 = cpy_r_r732;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1017, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r732);
        goto CPyL294;
    }
    cpy_r_r734 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r734 == NULL)) {
        goto CPyL295;
    } else
        goto CPyL249;
CPyL247: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r735 = 0;
    if (unlikely(!cpy_r_r735)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1018, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL249: ;
    cpy_r_r736 = PyList_New(9);
    if (unlikely(cpy_r_r736 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1009, CPyStatic_rtypes___globals);
        goto CPyL296;
    }
    cpy_r_r737 = (CPyPtr)&((PyListObject *)cpy_r_r736)->ob_item;
    cpy_r_r738 = *(CPyPtr *)cpy_r_r737;
    *(PyObject * *)cpy_r_r738 = cpy_r_r707;
    cpy_r_r739 = cpy_r_r738 + 8;
    *(PyObject * *)cpy_r_r739 = cpy_r_r711;
    cpy_r_r740 = cpy_r_r738 + 16;
    *(PyObject * *)cpy_r_r740 = cpy_r_r715;
    cpy_r_r741 = cpy_r_r738 + 24;
    *(PyObject * *)cpy_r_r741 = cpy_r_r719;
    cpy_r_r742 = cpy_r_r738 + 32;
    CPy_INCREF(cpy_r_r720);
    *(PyObject * *)cpy_r_r742 = cpy_r_r720;
    cpy_r_r743 = cpy_r_r738 + 40;
    *(PyObject * *)cpy_r_r743 = cpy_r_r725;
    cpy_r_r744 = cpy_r_r738 + 48;
    *(PyObject * *)cpy_r_r744 = cpy_r_r729;
    cpy_r_r745 = cpy_r_r738 + 56;
    *(PyObject * *)cpy_r_r745 = cpy_r_r733;
    cpy_r_r746 = cpy_r_r738 + 64;
    CPy_INCREF(cpy_r_r734);
    *(PyObject * *)cpy_r_r746 = cpy_r_r734;
    cpy_r_r747 = CPyDef_rtypes___RStruct(cpy_r_r683, cpy_r_r693, cpy_r_r736);
    CPy_DECREF(cpy_r_r693);
    CPy_DECREF(cpy_r_r736);
    if (unlikely(cpy_r_r747 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 996, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r748 = CPyStatic_rtypes___globals;
    cpy_r_r749 = CPyStatics[8043]; /* 'PySetObject' */
    cpy_r_r750 = CPyDict_SetItem(cpy_r_r748, cpy_r_r749, cpy_r_r747);
    CPy_DECREF(cpy_r_r747);
    cpy_r_r751 = cpy_r_r750 >= 0;
    if (unlikely(!cpy_r_r751)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 996, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r752 = CPyStatics[8050]; /* 'PyListObject' */
    cpy_r_r753 = CPyStatics[8039]; /* 'ob_base' */
    cpy_r_r754 = CPyStatics[8051]; /* 'ob_item' */
    cpy_r_r755 = CPyStatics[8052]; /* 'allocated' */
    cpy_r_r756 = PyList_New(3);
    if (unlikely(cpy_r_r756 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1024, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r757 = (CPyPtr)&((PyListObject *)cpy_r_r756)->ob_item;
    cpy_r_r758 = *(CPyPtr *)cpy_r_r757;
    CPy_INCREF(cpy_r_r753);
    *(PyObject * *)cpy_r_r758 = cpy_r_r753;
    cpy_r_r759 = cpy_r_r758 + 8;
    CPy_INCREF(cpy_r_r754);
    *(PyObject * *)cpy_r_r759 = cpy_r_r754;
    cpy_r_r760 = cpy_r_r758 + 16;
    CPy_INCREF(cpy_r_r755);
    *(PyObject * *)cpy_r_r760 = cpy_r_r755;
    cpy_r_r761 = CPyStatic_rtypes___globals;
    cpy_r_r762 = CPyStatics[8038]; /* 'PyVarObject' */
    cpy_r_r763 = CPyDict_GetItem(cpy_r_r761, cpy_r_r762);
    if (unlikely(cpy_r_r763 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals);
        goto CPyL297;
    }
    if (likely(Py_TYPE(cpy_r_r763) == CPyType_rtypes___RStruct))
        cpy_r_r764 = cpy_r_r763;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r763);
        goto CPyL297;
    }
    cpy_r_r765 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r765 == NULL)) {
        goto CPyL298;
    } else
        goto CPyL258;
CPyL256: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r766 = 0;
    if (unlikely(!cpy_r_r766)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    CPy_Unreachable();
CPyL258: ;
    cpy_r_r767 = CPyStatic_rtypes___globals;
    cpy_r_r768 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r769 = CPyDict_GetItem(cpy_r_r767, cpy_r_r768);
    if (unlikely(cpy_r_r769 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals);
        goto CPyL299;
    }
    if (likely(Py_TYPE(cpy_r_r769) == CPyType_rtypes___RPrimitive))
        cpy_r_r770 = cpy_r_r769;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r769);
        goto CPyL299;
    }
    cpy_r_r771 = PyList_New(3);
    if (unlikely(cpy_r_r771 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1025, CPyStatic_rtypes___globals);
        goto CPyL300;
    }
    cpy_r_r772 = (CPyPtr)&((PyListObject *)cpy_r_r771)->ob_item;
    cpy_r_r773 = *(CPyPtr *)cpy_r_r772;
    *(PyObject * *)cpy_r_r773 = cpy_r_r764;
    cpy_r_r774 = cpy_r_r773 + 8;
    CPy_INCREF(cpy_r_r765);
    *(PyObject * *)cpy_r_r774 = cpy_r_r765;
    cpy_r_r775 = cpy_r_r773 + 16;
    *(PyObject * *)cpy_r_r775 = cpy_r_r770;
    cpy_r_r776 = CPyDef_rtypes___RStruct(cpy_r_r752, cpy_r_r756, cpy_r_r771);
    CPy_DECREF(cpy_r_r756);
    CPy_DECREF(cpy_r_r771);
    if (unlikely(cpy_r_r776 == NULL)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1022, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    cpy_r_r777 = CPyStatic_rtypes___globals;
    cpy_r_r778 = CPyStatics[8050]; /* 'PyListObject' */
    cpy_r_r779 = CPyDict_SetItem(cpy_r_r777, cpy_r_r778, cpy_r_r776);
    CPy_DECREF(cpy_r_r776);
    cpy_r_r780 = cpy_r_r779 >= 0;
    if (unlikely(!cpy_r_r780)) {
        CPy_AddTraceback("mypyc/ir/rtypes.py", "<module>", 1022, CPyStatic_rtypes___globals);
        goto CPyL264;
    }
    return 1;
CPyL264: ;
    cpy_r_r781 = 2;
    return cpy_r_r781;
CPyL265: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL264;
CPyL266: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL264;
CPyL267: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL264;
CPyL268: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL264;
CPyL269: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL264;
CPyL270: ;
    CPy_DecRef(cpy_r_r423);
    goto CPyL264;
CPyL271: ;
    CPy_DecRef(cpy_r_r438);
    goto CPyL264;
CPyL272: ;
    CPy_DecRef(cpy_r_r513);
    goto CPyL264;
CPyL273: ;
    CPy_DecRef(cpy_r_r537);
    goto CPyL264;
CPyL274: ;
    CPy_DecRef(cpy_r_r559);
    goto CPyL264;
CPyL275: ;
    CPy_DecRef(cpy_r_r582);
    goto CPyL264;
CPyL276: ;
    CPy_DecRef(cpy_r_r603);
    goto CPyL264;
CPyL277: ;
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r610);
    goto CPyL199;
CPyL278: ;
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r610);
    goto CPyL264;
CPyL279: ;
    CPy_DecRef(cpy_r_r625);
    goto CPyL264;
CPyL280: ;
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r632);
    goto CPyL264;
CPyL281: ;
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r632);
    CPy_DecRef(cpy_r_r636);
    goto CPyL264;
CPyL282: ;
    CPy_DecRef(cpy_r_r649);
    goto CPyL214;
CPyL283: ;
    CPy_DecRef(cpy_r_r649);
    goto CPyL264;
CPyL284: ;
    CPy_DecRef(cpy_r_r649);
    CPy_DecRef(cpy_r_r658);
    goto CPyL264;
CPyL285: ;
    CPy_DecRef(cpy_r_r669);
    goto CPyL264;
CPyL286: ;
    CPy_DecRef(cpy_r_r669);
    CPy_DecRef(cpy_r_r673);
    goto CPyL264;
CPyL287: ;
    CPy_DecRef(cpy_r_r693);
    goto CPyL264;
CPyL288: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    goto CPyL264;
CPyL289: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    goto CPyL264;
CPyL290: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    goto CPyL264;
CPyL291: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    goto CPyL238;
CPyL292: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    goto CPyL264;
CPyL293: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    CPy_DecRef(cpy_r_r725);
    goto CPyL264;
CPyL294: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    goto CPyL264;
CPyL295: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    CPy_DecRef(cpy_r_r733);
    goto CPyL247;
CPyL296: ;
    CPy_DecRef(cpy_r_r693);
    CPy_DecRef(cpy_r_r707);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r715);
    CPy_DecRef(cpy_r_r719);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    CPy_DecRef(cpy_r_r733);
    goto CPyL264;
CPyL297: ;
    CPy_DecRef(cpy_r_r756);
    goto CPyL264;
CPyL298: ;
    CPy_DecRef(cpy_r_r756);
    CPy_DecRef(cpy_r_r764);
    goto CPyL256;
CPyL299: ;
    CPy_DecRef(cpy_r_r756);
    CPy_DecRef(cpy_r_r764);
    goto CPyL264;
CPyL300: ;
    CPy_DecRef(cpy_r_r756);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r770);
    goto CPyL264;
}
