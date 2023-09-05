#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
dataflow___CFG_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *dataflow___CFG_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___CFG(PyObject *cpy_r_succ, PyObject *cpy_r_pred, PyObject *cpy_r_exits);

static PyObject *
dataflow___CFG_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___CFG) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataflow___CFG_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataflow___CFG_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataflow___CFG_traverse(mypyc___analysis___dataflow___CFGObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_succ);
    Py_VISIT(self->_pred);
    Py_VISIT(self->_exits);
    return 0;
}

static int
dataflow___CFG_clear(mypyc___analysis___dataflow___CFGObject *self)
{
    Py_CLEAR(self->_succ);
    Py_CLEAR(self->_pred);
    Py_CLEAR(self->_exits);
    return 0;
}

static void
dataflow___CFG_dealloc(mypyc___analysis___dataflow___CFGObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___CFG_dealloc)
    dataflow___CFG_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___CFG_vtable[2];
static bool
CPyDef_dataflow___CFG_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___CFG_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___CFG_____init__,
        (CPyVTableItem)CPyDef_dataflow___CFG_____str__,
    };
    memcpy(dataflow___CFG_vtable, dataflow___CFG_vtable_scratch, sizeof(dataflow___CFG_vtable));
    return 1;
}

static PyObject *
dataflow___CFG_get_succ(mypyc___analysis___dataflow___CFGObject *self, void *closure);
static int
dataflow___CFG_set_succ(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure);
static PyObject *
dataflow___CFG_get_pred(mypyc___analysis___dataflow___CFGObject *self, void *closure);
static int
dataflow___CFG_set_pred(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure);
static PyObject *
dataflow___CFG_get_exits(mypyc___analysis___dataflow___CFGObject *self, void *closure);
static int
dataflow___CFG_set_exits(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure);

static PyGetSetDef dataflow___CFG_getseters[] = {
    {"succ",
     (getter)dataflow___CFG_get_succ, (setter)dataflow___CFG_set_succ,
     NULL, NULL},
    {"pred",
     (getter)dataflow___CFG_get_pred, (setter)dataflow___CFG_set_pred,
     NULL, NULL},
    {"exits",
     (getter)dataflow___CFG_get_exits, (setter)dataflow___CFG_set_exits,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___CFG_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataflow___CFG_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_dataflow___CFG_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___CFG_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CFG",
    .tp_new = dataflow___CFG_new,
    .tp_dealloc = (destructor)dataflow___CFG_dealloc,
    .tp_traverse = (traverseproc)dataflow___CFG_traverse,
    .tp_clear = (inquiry)dataflow___CFG_clear,
    .tp_getset = dataflow___CFG_getseters,
    .tp_methods = dataflow___CFG_methods,
    .tp_init = dataflow___CFG_init,
    .tp_str = CPyDef_dataflow___CFG_____str__,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___CFGObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___CFG_template = &CPyType_dataflow___CFG_template_;

static PyObject *
dataflow___CFG_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___CFGObject *self;
    self = (mypyc___analysis___dataflow___CFGObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___CFG_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___CFG(PyObject *cpy_r_succ, PyObject *cpy_r_pred, PyObject *cpy_r_exits)
{
    PyObject *self = dataflow___CFG_setup(CPyType_dataflow___CFG);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataflow___CFG_____init__(self, cpy_r_succ, cpy_r_pred, cpy_r_exits);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataflow___CFG_get_succ(mypyc___analysis___dataflow___CFGObject *self, void *closure)
{
    if (unlikely(self->_succ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'succ' of 'CFG' undefined");
        return NULL;
    }
    CPy_INCREF(self->_succ);
    PyObject *retval = self->_succ;
    return retval;
}

static int
dataflow___CFG_set_succ(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CFG' object attribute 'succ' cannot be deleted");
        return -1;
    }
    if (self->_succ != NULL) {
        CPy_DECREF(self->_succ);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_succ = tmp;
    return 0;
}

static PyObject *
dataflow___CFG_get_pred(mypyc___analysis___dataflow___CFGObject *self, void *closure)
{
    if (unlikely(self->_pred == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'pred' of 'CFG' undefined");
        return NULL;
    }
    CPy_INCREF(self->_pred);
    PyObject *retval = self->_pred;
    return retval;
}

static int
dataflow___CFG_set_pred(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CFG' object attribute 'pred' cannot be deleted");
        return -1;
    }
    if (self->_pred != NULL) {
        CPy_DECREF(self->_pred);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_pred = tmp;
    return 0;
}

static PyObject *
dataflow___CFG_get_exits(mypyc___analysis___dataflow___CFGObject *self, void *closure)
{
    if (unlikely(self->_exits == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exits' of 'CFG' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exits);
    PyObject *retval = self->_exits;
    return retval;
}

static int
dataflow___CFG_set_exits(mypyc___analysis___dataflow___CFGObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CFG' object attribute 'exits' cannot be deleted");
        return -1;
    }
    if (self->_exits != NULL) {
        CPy_DECREF(self->_exits);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_exits = tmp;
    return 0;
}

static int
dataflow___AnalysisResult_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef dataflow___AnalysisResult_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___AnalysisResultObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___AnalysisResultObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___AnalysisResult_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___AnalysisResult(PyObject *cpy_r_before, PyObject *cpy_r_after);

static PyObject *
dataflow___AnalysisResult_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___AnalysisResult) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataflow___AnalysisResult_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataflow___AnalysisResult_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataflow___AnalysisResult_traverse(mypyc___analysis___dataflow___AnalysisResultObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_before);
    Py_VISIT(self->_after);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___AnalysisResultObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___AnalysisResultObject))));
    return 0;
}

static int
dataflow___AnalysisResult_clear(mypyc___analysis___dataflow___AnalysisResultObject *self)
{
    Py_CLEAR(self->_before);
    Py_CLEAR(self->_after);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___AnalysisResultObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___AnalysisResultObject))));
    return 0;
}

static void
dataflow___AnalysisResult_dealloc(mypyc___analysis___dataflow___AnalysisResultObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___AnalysisResult_dealloc)
    dataflow___AnalysisResult_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___AnalysisResult_vtable[2];
static bool
CPyDef_dataflow___AnalysisResult_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___AnalysisResult_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___AnalysisResult_____init__,
        (CPyVTableItem)CPyDef_dataflow___AnalysisResult_____str__,
    };
    memcpy(dataflow___AnalysisResult_vtable, dataflow___AnalysisResult_vtable_scratch, sizeof(dataflow___AnalysisResult_vtable));
    return 1;
}

static PyObject *
dataflow___AnalysisResult_get_before(mypyc___analysis___dataflow___AnalysisResultObject *self, void *closure);
static int
dataflow___AnalysisResult_set_before(mypyc___analysis___dataflow___AnalysisResultObject *self, PyObject *value, void *closure);
static PyObject *
dataflow___AnalysisResult_get_after(mypyc___analysis___dataflow___AnalysisResultObject *self, void *closure);
static int
dataflow___AnalysisResult_set_after(mypyc___analysis___dataflow___AnalysisResultObject *self, PyObject *value, void *closure);

static PyGetSetDef dataflow___AnalysisResult_getseters[] = {
    {"before",
     (getter)dataflow___AnalysisResult_get_before, (setter)dataflow___AnalysisResult_set_before,
     NULL, NULL},
    {"after",
     (getter)dataflow___AnalysisResult_get_after, (setter)dataflow___AnalysisResult_set_after,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___AnalysisResult_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataflow___AnalysisResult_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_dataflow___AnalysisResult_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___AnalysisResult_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AnalysisResult",
    .tp_new = dataflow___AnalysisResult_new,
    .tp_dealloc = (destructor)dataflow___AnalysisResult_dealloc,
    .tp_traverse = (traverseproc)dataflow___AnalysisResult_traverse,
    .tp_clear = (inquiry)dataflow___AnalysisResult_clear,
    .tp_getset = dataflow___AnalysisResult_getseters,
    .tp_methods = dataflow___AnalysisResult_methods,
    .tp_init = dataflow___AnalysisResult_init,
    .tp_str = CPyDef_dataflow___AnalysisResult_____str__,
    .tp_members = dataflow___AnalysisResult_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___AnalysisResultObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___AnalysisResultObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___AnalysisResultObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___AnalysisResult_template = &CPyType_dataflow___AnalysisResult_template_;

static PyObject *
dataflow___AnalysisResult_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___AnalysisResultObject *self;
    self = (mypyc___analysis___dataflow___AnalysisResultObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___AnalysisResult_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___AnalysisResult(PyObject *cpy_r_before, PyObject *cpy_r_after)
{
    PyObject *self = dataflow___AnalysisResult_setup(CPyType_dataflow___AnalysisResult);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataflow___AnalysisResult_____init__(self, cpy_r_before, cpy_r_after);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataflow___AnalysisResult_get_before(mypyc___analysis___dataflow___AnalysisResultObject *self, void *closure)
{
    if (unlikely(self->_before == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'before' of 'AnalysisResult' undefined");
        return NULL;
    }
    CPy_INCREF(self->_before);
    PyObject *retval = self->_before;
    return retval;
}

static int
dataflow___AnalysisResult_set_before(mypyc___analysis___dataflow___AnalysisResultObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AnalysisResult' object attribute 'before' cannot be deleted");
        return -1;
    }
    if (self->_before != NULL) {
        CPy_DECREF(self->_before);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_before = tmp;
    return 0;
}

static PyObject *
dataflow___AnalysisResult_get_after(mypyc___analysis___dataflow___AnalysisResultObject *self, void *closure)
{
    if (unlikely(self->_after == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'after' of 'AnalysisResult' undefined");
        return NULL;
    }
    CPy_INCREF(self->_after);
    PyObject *retval = self->_after;
    return retval;
}

static int
dataflow___AnalysisResult_set_after(mypyc___analysis___dataflow___AnalysisResultObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AnalysisResult' object attribute 'after' cannot be deleted");
        return -1;
    }
    if (self->_after != NULL) {
        CPy_DECREF(self->_after);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_after = tmp;
    return 0;
}

PyMemberDef dataflow___BaseAnalysisVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___BaseAnalysisVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___BaseAnalysisVisitor(void);

static PyObject *
dataflow___BaseAnalysisVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___BaseAnalysisVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataflow___BaseAnalysisVisitor_setup(type);
}

static int
dataflow___BaseAnalysisVisitor_traverse(mypyc___analysis___dataflow___BaseAnalysisVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject))));
    return 0;
}

static int
dataflow___BaseAnalysisVisitor_clear(mypyc___analysis___dataflow___BaseAnalysisVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject))));
    return 0;
}

static void
dataflow___BaseAnalysisVisitor_dealloc(mypyc___analysis___dataflow___BaseAnalysisVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___BaseAnalysisVisitor_dealloc)
    dataflow___BaseAnalysisVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___BaseAnalysisVisitor_vtable[40];
static CPyVTableItem dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable[36];
static size_t dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_dataflow___BaseAnalysisVisitor_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_branch,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_return,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable, dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable));
    size_t dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table, dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table_scratch, sizeof(dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem dataflow___BaseAnalysisVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)dataflow___BaseAnalysisVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)dataflow___BaseAnalysisVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_branch,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_return,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
    };
    memcpy(dataflow___BaseAnalysisVisitor_vtable, dataflow___BaseAnalysisVisitor_vtable_scratch, sizeof(dataflow___BaseAnalysisVisitor_vtable));
    return 1;
}


static PyGetSetDef dataflow___BaseAnalysisVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___BaseAnalysisVisitor_methods[] = {
    {"visit_goto",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_method_call",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_error_value",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_literal",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_attr",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_attr",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_set_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_static",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_init_static",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_init_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_get",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_set",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_box",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbox",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_standard_error",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_c",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_truncate",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_truncate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_extend",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_extend,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_global",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_op",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_op",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_float_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_neg",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_float_neg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_op",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_comparison_op",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_mem",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_element_ptr",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_address",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_load_address,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_keep_alive",
     (PyCFunction)CPyPy_dataflow___BaseAnalysisVisitor___visit_keep_alive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___BaseAnalysisVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BaseAnalysisVisitor",
    .tp_new = dataflow___BaseAnalysisVisitor_new,
    .tp_dealloc = (destructor)dataflow___BaseAnalysisVisitor_dealloc,
    .tp_traverse = (traverseproc)dataflow___BaseAnalysisVisitor_traverse,
    .tp_clear = (inquiry)dataflow___BaseAnalysisVisitor_clear,
    .tp_getset = dataflow___BaseAnalysisVisitor_getseters,
    .tp_methods = dataflow___BaseAnalysisVisitor_methods,
    .tp_members = dataflow___BaseAnalysisVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___BaseAnalysisVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___BaseAnalysisVisitor_template = &CPyType_dataflow___BaseAnalysisVisitor_template_;

static PyObject *
dataflow___BaseAnalysisVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___BaseAnalysisVisitorObject *self;
    self = (mypyc___analysis___dataflow___BaseAnalysisVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___BaseAnalysisVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor(void)
{
    PyObject *self = dataflow___BaseAnalysisVisitor_setup(CPyType_dataflow___BaseAnalysisVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static int
dataflow___DefinedVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef dataflow___DefinedVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___DefinedVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___DefinedVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___DefinedVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___DefinedVisitor(char cpy_r_strict_errors);

static PyObject *
dataflow___DefinedVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___DefinedVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataflow___DefinedVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataflow___DefinedVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataflow___DefinedVisitor_traverse(mypyc___analysis___dataflow___DefinedVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___DefinedVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___DefinedVisitorObject))));
    return 0;
}

static int
dataflow___DefinedVisitor_clear(mypyc___analysis___dataflow___DefinedVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___DefinedVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___DefinedVisitorObject))));
    return 0;
}

static void
dataflow___DefinedVisitor_dealloc(mypyc___analysis___dataflow___DefinedVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___DefinedVisitor_dealloc)
    dataflow___DefinedVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___DefinedVisitor_vtable[48];
static CPyVTableItem dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable[36];
static size_t dataflow___DefinedVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_dataflow___DefinedVisitor_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable, dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable));
    size_t dataflow___DefinedVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(dataflow___DefinedVisitor_ops___OpVisitor_offset_table, dataflow___DefinedVisitor_ops___OpVisitor_offset_table_scratch, sizeof(dataflow___DefinedVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem dataflow___DefinedVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)dataflow___DefinedVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)dataflow___DefinedVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor_____init__,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_branch,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_return,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___DefinedVisitor___visit_set_mem,
    };
    memcpy(dataflow___DefinedVisitor_vtable, dataflow___DefinedVisitor_vtable_scratch, sizeof(dataflow___DefinedVisitor_vtable));
    return 1;
}

static PyObject *
dataflow___DefinedVisitor_get_strict_errors(mypyc___analysis___dataflow___DefinedVisitorObject *self, void *closure);
static int
dataflow___DefinedVisitor_set_strict_errors(mypyc___analysis___dataflow___DefinedVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef dataflow___DefinedVisitor_getseters[] = {
    {"strict_errors",
     (getter)dataflow___DefinedVisitor_get_strict_errors, (setter)dataflow___DefinedVisitor_set_strict_errors,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___DefinedVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_dataflow___DefinedVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___DefinedVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefinedVisitor",
    .tp_new = dataflow___DefinedVisitor_new,
    .tp_dealloc = (destructor)dataflow___DefinedVisitor_dealloc,
    .tp_traverse = (traverseproc)dataflow___DefinedVisitor_traverse,
    .tp_clear = (inquiry)dataflow___DefinedVisitor_clear,
    .tp_getset = dataflow___DefinedVisitor_getseters,
    .tp_methods = dataflow___DefinedVisitor_methods,
    .tp_init = dataflow___DefinedVisitor_init,
    .tp_members = dataflow___DefinedVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___DefinedVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___DefinedVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___DefinedVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___DefinedVisitor_template = &CPyType_dataflow___DefinedVisitor_template_;

static PyObject *
dataflow___DefinedVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___DefinedVisitorObject *self;
    self = (mypyc___analysis___dataflow___DefinedVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___DefinedVisitor_vtable + 3;
    self->_strict_errors = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___DefinedVisitor(char cpy_r_strict_errors)
{
    PyObject *self = dataflow___DefinedVisitor_setup(CPyType_dataflow___DefinedVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataflow___DefinedVisitor_____init__(self, cpy_r_strict_errors);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataflow___DefinedVisitor_get_strict_errors(mypyc___analysis___dataflow___DefinedVisitorObject *self, void *closure)
{
    if (unlikely(self->_strict_errors == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'strict_errors' of 'DefinedVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_strict_errors ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataflow___DefinedVisitor_set_strict_errors(mypyc___analysis___dataflow___DefinedVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DefinedVisitor' object attribute 'strict_errors' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strict_errors = tmp;
    return 0;
}

static int
dataflow___BorrowedArgumentsVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef dataflow___BorrowedArgumentsVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___BorrowedArgumentsVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor(PyObject *cpy_r_args);

static PyObject *
dataflow___BorrowedArgumentsVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___BorrowedArgumentsVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataflow___BorrowedArgumentsVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataflow___BorrowedArgumentsVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataflow___BorrowedArgumentsVisitor_traverse(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_args);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject))));
    return 0;
}

static int
dataflow___BorrowedArgumentsVisitor_clear(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self)
{
    Py_CLEAR(self->_args);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject))));
    return 0;
}

static void
dataflow___BorrowedArgumentsVisitor_dealloc(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___BorrowedArgumentsVisitor_dealloc)
    dataflow___BorrowedArgumentsVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___BorrowedArgumentsVisitor_vtable[48];
static CPyVTableItem dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable[36];
static size_t dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_dataflow___BorrowedArgumentsVisitor_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable, dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable));
    size_t dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table, dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table_scratch, sizeof(dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem dataflow___BorrowedArgumentsVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)dataflow___BorrowedArgumentsVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor_____init__,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem,
    };
    memcpy(dataflow___BorrowedArgumentsVisitor_vtable, dataflow___BorrowedArgumentsVisitor_vtable_scratch, sizeof(dataflow___BorrowedArgumentsVisitor_vtable));
    return 1;
}

static PyObject *
dataflow___BorrowedArgumentsVisitor_get_args(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self, void *closure);
static int
dataflow___BorrowedArgumentsVisitor_set_args(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef dataflow___BorrowedArgumentsVisitor_getseters[] = {
    {"args",
     (getter)dataflow___BorrowedArgumentsVisitor_get_args, (setter)dataflow___BorrowedArgumentsVisitor_set_args,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___BorrowedArgumentsVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_dataflow___BorrowedArgumentsVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___BorrowedArgumentsVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BorrowedArgumentsVisitor",
    .tp_new = dataflow___BorrowedArgumentsVisitor_new,
    .tp_dealloc = (destructor)dataflow___BorrowedArgumentsVisitor_dealloc,
    .tp_traverse = (traverseproc)dataflow___BorrowedArgumentsVisitor_traverse,
    .tp_clear = (inquiry)dataflow___BorrowedArgumentsVisitor_clear,
    .tp_getset = dataflow___BorrowedArgumentsVisitor_getseters,
    .tp_methods = dataflow___BorrowedArgumentsVisitor_methods,
    .tp_init = dataflow___BorrowedArgumentsVisitor_init,
    .tp_members = dataflow___BorrowedArgumentsVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___BorrowedArgumentsVisitor_template = &CPyType_dataflow___BorrowedArgumentsVisitor_template_;

static PyObject *
dataflow___BorrowedArgumentsVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self;
    self = (mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___BorrowedArgumentsVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor(PyObject *cpy_r_args)
{
    PyObject *self = dataflow___BorrowedArgumentsVisitor_setup(CPyType_dataflow___BorrowedArgumentsVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataflow___BorrowedArgumentsVisitor_____init__(self, cpy_r_args);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataflow___BorrowedArgumentsVisitor_get_args(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self, void *closure)
{
    if (unlikely(self->_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'args' of 'BorrowedArgumentsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_args);
    PyObject *retval = self->_args;
    return retval;
}

static int
dataflow___BorrowedArgumentsVisitor_set_args(mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BorrowedArgumentsVisitor' object attribute 'args' cannot be deleted");
        return -1;
    }
    if (self->_args != NULL) {
        CPy_DECREF(self->_args);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_args = tmp;
    return 0;
}

PyMemberDef dataflow___UndefinedVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___UndefinedVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___UndefinedVisitor(void);

static PyObject *
dataflow___UndefinedVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___UndefinedVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataflow___UndefinedVisitor_setup(type);
}

static int
dataflow___UndefinedVisitor_traverse(mypyc___analysis___dataflow___UndefinedVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject))));
    return 0;
}

static int
dataflow___UndefinedVisitor_clear(mypyc___analysis___dataflow___UndefinedVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject))));
    return 0;
}

static void
dataflow___UndefinedVisitor_dealloc(mypyc___analysis___dataflow___UndefinedVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___UndefinedVisitor_dealloc)
    dataflow___UndefinedVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___UndefinedVisitor_vtable[47];
static CPyVTableItem dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable[36];
static size_t dataflow___UndefinedVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_dataflow___UndefinedVisitor_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable, dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable));
    size_t dataflow___UndefinedVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(dataflow___UndefinedVisitor_ops___OpVisitor_offset_table, dataflow___UndefinedVisitor_ops___OpVisitor_offset_table_scratch, sizeof(dataflow___UndefinedVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem dataflow___UndefinedVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)dataflow___UndefinedVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)dataflow___UndefinedVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_branch,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_return,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___UndefinedVisitor___visit_set_mem,
    };
    memcpy(dataflow___UndefinedVisitor_vtable, dataflow___UndefinedVisitor_vtable_scratch, sizeof(dataflow___UndefinedVisitor_vtable));
    return 1;
}


static PyGetSetDef dataflow___UndefinedVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___UndefinedVisitor_methods[] = {
    {"visit_branch",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_dataflow___UndefinedVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___UndefinedVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "UndefinedVisitor",
    .tp_new = dataflow___UndefinedVisitor_new,
    .tp_dealloc = (destructor)dataflow___UndefinedVisitor_dealloc,
    .tp_traverse = (traverseproc)dataflow___UndefinedVisitor_traverse,
    .tp_clear = (inquiry)dataflow___UndefinedVisitor_clear,
    .tp_getset = dataflow___UndefinedVisitor_getseters,
    .tp_methods = dataflow___UndefinedVisitor_methods,
    .tp_members = dataflow___UndefinedVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___UndefinedVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___UndefinedVisitor_template = &CPyType_dataflow___UndefinedVisitor_template_;

static PyObject *
dataflow___UndefinedVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___UndefinedVisitorObject *self;
    self = (mypyc___analysis___dataflow___UndefinedVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___UndefinedVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___UndefinedVisitor(void)
{
    PyObject *self = dataflow___UndefinedVisitor_setup(CPyType_dataflow___UndefinedVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


PyMemberDef dataflow___LivenessVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___LivenessVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow___LivenessVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow___LivenessVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow___LivenessVisitor(void);

static PyObject *
dataflow___LivenessVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow___LivenessVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataflow___LivenessVisitor_setup(type);
}

static int
dataflow___LivenessVisitor_traverse(mypyc___analysis___dataflow___LivenessVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___LivenessVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___LivenessVisitorObject))));
    return 0;
}

static int
dataflow___LivenessVisitor_clear(mypyc___analysis___dataflow___LivenessVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow___LivenessVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow___LivenessVisitorObject))));
    return 0;
}

static void
dataflow___LivenessVisitor_dealloc(mypyc___analysis___dataflow___LivenessVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow___LivenessVisitor_dealloc)
    dataflow___LivenessVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow___LivenessVisitor_vtable[47];
static CPyVTableItem dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable[36];
static size_t dataflow___LivenessVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_dataflow___LivenessVisitor_trait_vtable_setup(void)
{
    CPyVTableItem dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable, dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable));
    size_t dataflow___LivenessVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(dataflow___LivenessVisitor_ops___OpVisitor_offset_table, dataflow___LivenessVisitor_ops___OpVisitor_offset_table_scratch, sizeof(dataflow___LivenessVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem dataflow___LivenessVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)dataflow___LivenessVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)dataflow___LivenessVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_box,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_cast,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_extend,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_branch,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_return,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_dataflow___LivenessVisitor___visit_set_mem,
    };
    memcpy(dataflow___LivenessVisitor_vtable, dataflow___LivenessVisitor_vtable_scratch, sizeof(dataflow___LivenessVisitor_vtable));
    return 1;
}


static PyGetSetDef dataflow___LivenessVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef dataflow___LivenessVisitor_methods[] = {
    {"visit_branch",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_dataflow___LivenessVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow___LivenessVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "LivenessVisitor",
    .tp_new = dataflow___LivenessVisitor_new,
    .tp_dealloc = (destructor)dataflow___LivenessVisitor_dealloc,
    .tp_traverse = (traverseproc)dataflow___LivenessVisitor_traverse,
    .tp_clear = (inquiry)dataflow___LivenessVisitor_clear,
    .tp_getset = dataflow___LivenessVisitor_getseters,
    .tp_methods = dataflow___LivenessVisitor_methods,
    .tp_members = dataflow___LivenessVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow___LivenessVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow___LivenessVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow___LivenessVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow___LivenessVisitor_template = &CPyType_dataflow___LivenessVisitor_template_;

static PyObject *
dataflow___LivenessVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow___LivenessVisitorObject *self;
    self = (mypyc___analysis___dataflow___LivenessVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow___LivenessVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow___LivenessVisitor(void)
{
    PyObject *self = dataflow___LivenessVisitor_setup(CPyType_dataflow___LivenessVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *dataflow_____str___3_CFG_env_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow_____str___3_CFG_env(void);

static PyObject *
dataflow_____str___3_CFG_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow_____str___3_CFG_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataflow_____str___3_CFG_env_setup(type);
}

static int
dataflow_____str___3_CFG_env_traverse(mypyc___analysis___dataflow_____str___3_CFG_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_lines);
    return 0;
}

static int
dataflow_____str___3_CFG_env_clear(mypyc___analysis___dataflow_____str___3_CFG_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_lines);
    return 0;
}

static void
dataflow_____str___3_CFG_env_dealloc(mypyc___analysis___dataflow_____str___3_CFG_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow_____str___3_CFG_env_dealloc)
    dataflow_____str___3_CFG_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow_____str___3_CFG_env_vtable[1];
static bool
CPyDef_dataflow_____str___3_CFG_env_trait_vtable_setup(void)
{
    CPyVTableItem dataflow_____str___3_CFG_env_vtable_scratch[] = {
        NULL
    };
    memcpy(dataflow_____str___3_CFG_env_vtable, dataflow_____str___3_CFG_env_vtable_scratch, sizeof(dataflow_____str___3_CFG_env_vtable));
    return 1;
}

static PyMethodDef dataflow_____str___3_CFG_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow_____str___3_CFG_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__str___CFG_env",
    .tp_new = dataflow_____str___3_CFG_env_new,
    .tp_dealloc = (destructor)dataflow_____str___3_CFG_env_dealloc,
    .tp_traverse = (traverseproc)dataflow_____str___3_CFG_env_traverse,
    .tp_clear = (inquiry)dataflow_____str___3_CFG_env_clear,
    .tp_methods = dataflow_____str___3_CFG_env_methods,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow_____str___3_CFG_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataflow_____str___3_CFG_env_template = &CPyType_dataflow_____str___3_CFG_env_template_;

static PyObject *
dataflow_____str___3_CFG_env_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow_____str___3_CFG_envObject *self;
    self = (mypyc___analysis___dataflow_____str___3_CFG_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow_____str___3_CFG_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow_____str___3_CFG_env(void)
{
    PyObject *self = dataflow_____str___3_CFG_env_setup(CPyType_dataflow_____str___3_CFG_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__dataflow_____mypyc_lambda__0___3_str___3_CFG_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__(self, instance, owner);
}
PyMemberDef dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_setup(PyTypeObject *type);
PyObject *CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj(void);

static PyObject *
dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_setup(type);
}

static int
dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_traverse(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject))));
    return 0;
}

static int
dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_clear(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject))));
    return 0;
}

static void
dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_dealloc(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_dealloc)
    dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable[2];
static bool
CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_trait_vtable_setup(void)
{
    CPyVTableItem dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__,
        (CPyVTableItem)CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__,
    };
    memcpy(dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable, dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable_scratch, sizeof(dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable));
    return 1;
}

static PyMethodDef dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0___str___CFG_obj",
    .tp_new = dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_new,
    .tp_dealloc = (destructor)dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_dealloc,
    .tp_traverse = (traverseproc)dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_traverse,
    .tp_clear = (inquiry)dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_clear,
    .tp_methods = dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__dataflow_____mypyc_lambda__0___3_str___3_CFG_obj,
    .tp_members = dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_members,
    .tp_basicsize = sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_template = &CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_template_;

static PyObject *
dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_setup(PyTypeObject *type)
{
    mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *self;
    self = (mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_vtable;
    self->vectorcall = CPyPy_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj(void)
{
    PyObject *self = dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_setup(CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef dataflowmodule_methods[] = {
    {"get_cfg", (PyCFunction)CPyPy_dataflow___get_cfg, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_real_target", (PyCFunction)CPyPy_dataflow___get_real_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"cleanup_cfg", (PyCFunction)CPyPy_dataflow___cleanup_cfg, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_maybe_defined_regs", (PyCFunction)CPyPy_dataflow___analyze_maybe_defined_regs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_must_defined_regs", (PyCFunction)CPyPy_dataflow___analyze_must_defined_regs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_borrowed_arguments", (PyCFunction)CPyPy_dataflow___analyze_borrowed_arguments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_undefined_regs", (PyCFunction)CPyPy_dataflow___analyze_undefined_regs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"non_trivial_sources", (PyCFunction)CPyPy_dataflow___non_trivial_sources, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_live_regs", (PyCFunction)CPyPy_dataflow___analyze_live_regs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"run_analysis", (PyCFunction)CPyPy_dataflow___run_analysis, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dataflowmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.analysis.dataflow",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dataflowmodule_methods
};

PyObject *CPyInit_mypyc___analysis___dataflow(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___analysis___dataflow_internal) {
        Py_INCREF(CPyModule_mypyc___analysis___dataflow_internal);
        return CPyModule_mypyc___analysis___dataflow_internal;
    }
    CPyModule_mypyc___analysis___dataflow_internal = PyModule_Create(&dataflowmodule);
    if (unlikely(CPyModule_mypyc___analysis___dataflow_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___analysis___dataflow_internal, "__name__");
    CPyStatic_dataflow___globals = PyModule_GetDict(CPyModule_mypyc___analysis___dataflow_internal);
    if (unlikely(CPyStatic_dataflow___globals == NULL))
        goto fail;
    CPyType_dataflow_____str___3_CFG_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataflow_____str___3_CFG_env_template, NULL, modname);
    if (unlikely(!CPyType_dataflow_____str___3_CFG_env))
        goto fail;
    CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_template, NULL, modname);
    if (unlikely(!CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dataflow_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___analysis___dataflow_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___analysis___dataflow_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_dataflow___CFG);
    Py_CLEAR(CPyType_dataflow___AnalysisResult);
    Py_CLEAR(CPyType_dataflow___BaseAnalysisVisitor);
    Py_CLEAR(CPyType_dataflow___DefinedVisitor);
    Py_CLEAR(CPyType_dataflow___BorrowedArgumentsVisitor);
    Py_CLEAR(CPyType_dataflow___UndefinedVisitor);
    Py_CLEAR(CPyType_dataflow___LivenessVisitor);
    Py_CLEAR(CPyType_dataflow_____str___3_CFG_env);
    Py_CLEAR(CPyType_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj);
    return NULL;
}

char CPyDef_dataflow___CFG_____init__(PyObject *cpy_r_self, PyObject *cpy_r_succ, PyObject *cpy_r_pred, PyObject *cpy_r_exits) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = PyObject_IsTrue(cpy_r_exits);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 66, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r2 = cpy_r_r0;
    if (cpy_r_r2) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 68, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_succ);
    ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_succ = cpy_r_succ;
    CPy_INCREF(cpy_r_pred);
    ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_pred = cpy_r_pred;
    CPy_INCREF(cpy_r_exits);
    ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_exits = cpy_r_exits;
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_dataflow___CFG_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"succ", "pred", "exits", 0};
    PyObject *obj_succ;
    PyObject *obj_pred;
    PyObject *obj_exits;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_succ, &obj_pred, &obj_exits)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___CFG))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_self); 
        goto fail;
    }
    PyObject *arg_succ;
    if (likely(PyDict_Check(obj_succ)))
        arg_succ = obj_succ;
    else {
        CPy_TypeError("dict", obj_succ); 
        goto fail;
    }
    PyObject *arg_pred;
    if (likely(PyDict_Check(obj_pred)))
        arg_pred = obj_pred;
    else {
        CPy_TypeError("dict", obj_pred); 
        goto fail;
    }
    PyObject *arg_exits;
    if (likely(PySet_Check(obj_exits)))
        arg_exits = obj_exits;
    else {
        CPy_TypeError("set", obj_exits); 
        goto fail;
    }
    char retval = CPyDef_dataflow___CFG_____init__(arg_self, arg_succ, arg_pred, arg_exits);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 62, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__get__", -1, CPyStatic_dataflow___globals);
    return NULL;
}

CPyTagged CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    cpy_r_r0 = ((mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/analysis/dataflow.py", "<lambda>", "__mypyc_lambda__0___str___CFG_obj", "__mypyc_env__", 75, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL6;
CPyL1: ;
    cpy_r_r1 = CPyStatics[6684]; /* 'label' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_e, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<lambda>", 75, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r4[1] = {cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<lambda>", 75, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<lambda>", 75, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = CPY_INT_TAG;
    return cpy_r_r8;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_e = obj_e;
    CPyTagged retval = CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj_____call__(arg___mypyc_self__, arg_e);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "<lambda>", 75, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___CFG_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_lines;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = CPyDef_dataflow_____str___3_CFG_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 73, CPyStatic_dataflow___globals);
        goto CPyL18;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 74, CPyStatic_dataflow___globals);
        goto CPyL19;
    }
    cpy_r_lines = cpy_r_r1;
    cpy_r_r2 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_exits;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_dataflow_____mypyc_lambda__0___3_str___3_CFG_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL20;
    }
    if (((mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___analysis___dataflow_____mypyc_lambda__0___3_str___3_CFG_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL21;
    }
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r8[2] = {cpy_r_r2, cpy_r_r3};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals, "list", cpy_r_r11);
        goto CPyL22;
    }
    cpy_r_r13 = PyObject_Str(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r14 = CPyStatics[6685]; /* 'exits: ' */
    cpy_r_r15 = CPyStr_Build(2, cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r16 = PyList_Append(cpy_r_lines, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 75, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r18 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_succ;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyObject_Str(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 76, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r20 = CPyStatics[6686]; /* 'succ: ' */
    cpy_r_r21 = CPyStr_Build(2, cpy_r_r20, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 76, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r22 = PyList_Append(cpy_r_lines, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 76, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r24 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_self)->_pred;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = PyObject_Str(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 77, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r26 = CPyStatics[6687]; /* 'pred: ' */
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r26, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 77, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r28 = PyList_Append(cpy_r_lines, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 77, CPyStatic_dataflow___globals);
        goto CPyL22;
    }
    cpy_r_r30 = CPyStatics[189]; /* '\n' */
    cpy_r_r31 = PyUnicode_Join(cpy_r_r30, cpy_r_lines);
    CPy_DECREF(cpy_r_lines);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 78, CPyStatic_dataflow___globals);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_lines);
    goto CPyL18;
}

PyObject *CPyPy_dataflow___CFG_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___CFG))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___CFG_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 73, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___get_cfg(PyObject *cpy_r_blocks) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_succ_map;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_pred_map;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_exits;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_block;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_succ;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_error_point;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyTagged cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T4CIOO cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_prev;
    PyObject *cpy_r_nxt;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_label;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 88, CPyStatic_dataflow___globals);
        goto CPyL51;
    }
    cpy_r_succ_map = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 89, CPyStatic_dataflow___globals);
        goto CPyL52;
    }
    cpy_r_pred_map = cpy_r_r1;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 90, CPyStatic_dataflow___globals);
        goto CPyL53;
    }
    cpy_r_exits = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL36;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_ops___BasicBlock))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 91, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r8);
        goto CPyL54;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = 0;
    cpy_r_r11 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyList_GetSlice(cpy_r_r11, 0, -2);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 93, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 93, CPyStatic_dataflow___globals, "list", cpy_r_r12);
        goto CPyL55;
    }
    cpy_r_r14 = 0;
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL56;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_ops___Op)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 92, CPyStatic_dataflow___globals, "mypyc.ir.ops.Op", cpy_r_r19);
        goto CPyL57;
    }
    cpy_r_op = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r22 = CPy_TypeCheck(cpy_r_op, cpy_r_r21);
    CPy_DECREF(cpy_r_op);
    if (cpy_r_r22) {
        goto CPyL58;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r10 = 1;
    goto CPyL14;
CPyL13: ;
    cpy_r_r23 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r23;
    goto CPyL9;
CPyL14: ;
    cpy_r_r24 = cpy_r_r10 ^ 1;
    if (cpy_r_r24) {
        goto CPyL17;
    } else
        goto CPyL59;
CPyL15: ;
    PyErr_SetString(PyExc_AssertionError, "Control-flow ops must be at the end of blocks");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 92, CPyStatic_dataflow___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 96, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
CPyL18: ;
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_r26, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_r26); /* targets */
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 96, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
    cpy_r_r28 = PySequence_List(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 96, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
    cpy_r_succ = cpy_r_r28;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_succ)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (cpy_r_r32) goto CPyL22;
    cpy_r_r33 = PySet_Add(cpy_r_exits, cpy_r_block);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 98, CPyStatic_dataflow___globals);
        goto CPyL60;
    }
CPyL22: ;
    cpy_r_r35 = PyList_New(1);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 112, CPyStatic_dataflow___globals);
        goto CPyL60;
    }
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    CPy_INCREF(cpy_r_block);
    *(PyObject * *)cpy_r_r37 = cpy_r_block;
    cpy_r_r38 = PyNumber_Add(cpy_r_r35, cpy_r_succ);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 112, CPyStatic_dataflow___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 112, CPyStatic_dataflow___globals, "list", cpy_r_r38);
        goto CPyL60;
    }
    cpy_r_r40 = 0;
CPyL26: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL61;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_r39, cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_ops___BasicBlock))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 112, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r45);
        goto CPyL62;
    }
    cpy_r_error_point = cpy_r_r46;
    cpy_r_r47 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_point)->_error_handler;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r49 = cpy_r_r47 != cpy_r_r48;
    CPy_DECREF(cpy_r_r47);
    if (!cpy_r_r49) goto CPyL63;
    cpy_r_r50 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_point)->_error_handler;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_error_point);
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 114, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r50);
        goto CPyL62;
    }
    cpy_r_r52 = PyList_Append(cpy_r_succ, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 114, CPyStatic_dataflow___globals);
        goto CPyL62;
    }
CPyL31: ;
    cpy_r_r54 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r54;
    goto CPyL26;
CPyL32: ;
    cpy_r_r55 = CPyDict_SetItem(cpy_r_succ_map, cpy_r_block, cpy_r_succ);
    CPy_DECREF(cpy_r_succ);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 116, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 117, CPyStatic_dataflow___globals);
        goto CPyL55;
    }
    cpy_r_r58 = CPyDict_SetItem(cpy_r_pred_map, cpy_r_block, cpy_r_r57);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 117, CPyStatic_dataflow___globals);
        goto CPyL54;
    }
    cpy_r_r60 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r60;
    goto CPyL4;
CPyL36: ;
    cpy_r_r61 = 0;
    cpy_r_r62 = PyDict_Size(cpy_r_succ_map);
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = CPyDict_GetItemsIter(cpy_r_succ_map);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 118, CPyStatic_dataflow___globals);
        goto CPyL54;
    }
CPyL37: ;
    cpy_r_r65 = CPyDict_NextItem(cpy_r_r64, cpy_r_r61);
    cpy_r_r66 = cpy_r_r65.f1;
    cpy_r_r61 = cpy_r_r66;
    cpy_r_r67 = cpy_r_r65.f0;
    if (!cpy_r_r67) goto CPyL64;
    cpy_r_r68 = cpy_r_r65.f2;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = cpy_r_r65.f3;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r65.f2);
    CPy_DECREF(cpy_r_r65.f3);
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_ops___BasicBlock))
        cpy_r_r70 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 118, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r68);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r69)))
        cpy_r_r71 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 118, CPyStatic_dataflow___globals, "list", cpy_r_r69);
        goto CPyL66;
    }
    cpy_r_prev = cpy_r_r70;
    cpy_r_nxt = cpy_r_r71;
    cpy_r_r72 = 0;
CPyL41: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_nxt)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL67;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_nxt, cpy_r_r72);
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_ops___BasicBlock))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 119, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r77);
        goto CPyL68;
    }
    cpy_r_label = cpy_r_r78;
    cpy_r_r79 = CPyDict_GetItem(cpy_r_pred_map, cpy_r_label);
    CPy_DECREF(cpy_r_label);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 120, CPyStatic_dataflow___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_cfg", 120, CPyStatic_dataflow___globals, "list", cpy_r_r79);
        goto CPyL68;
    }
    cpy_r_r81 = PyList_Append(cpy_r_r80, cpy_r_prev);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 120, CPyStatic_dataflow___globals);
        goto CPyL68;
    }
    cpy_r_r83 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r83;
    goto CPyL41;
CPyL47: ;
    cpy_r_r84 = CPyDict_CheckSize(cpy_r_succ_map, cpy_r_r63);
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 118, CPyStatic_dataflow___globals);
        goto CPyL69;
    } else
        goto CPyL37;
CPyL48: ;
    cpy_r_r85 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 118, CPyStatic_dataflow___globals);
        goto CPyL54;
    }
    cpy_r_r86 = CPyDef_dataflow___CFG(cpy_r_succ_map, cpy_r_pred_map, cpy_r_exits);
    CPy_DECREF(cpy_r_succ_map);
    CPy_DECREF(cpy_r_pred_map);
    CPy_DECREF(cpy_r_exits);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 121, CPyStatic_dataflow___globals);
        goto CPyL51;
    }
    return cpy_r_r86;
CPyL51: ;
    cpy_r_r87 = NULL;
    return cpy_r_r87;
CPyL52: ;
    CPy_DecRef(cpy_r_succ_map);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_block);
    goto CPyL51;
CPyL56: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL14;
CPyL57: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r13);
    goto CPyL51;
CPyL58: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL59: ;
    CPy_DECREF(cpy_r_succ_map);
    CPy_DECREF(cpy_r_pred_map);
    CPy_DECREF(cpy_r_exits);
    CPy_DECREF(cpy_r_block);
    goto CPyL15;
CPyL60: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_succ);
    goto CPyL51;
CPyL61: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL32;
CPyL62: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_succ);
    CPy_DecRef(cpy_r_r39);
    goto CPyL51;
CPyL63: ;
    CPy_DECREF(cpy_r_error_point);
    goto CPyL31;
CPyL64: ;
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65.f2);
    CPy_DECREF(cpy_r_r65.f3);
    goto CPyL48;
CPyL65: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r69);
    goto CPyL51;
CPyL66: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r70);
    goto CPyL51;
CPyL67: ;
    CPy_DECREF(cpy_r_prev);
    CPy_DECREF(cpy_r_nxt);
    goto CPyL47;
CPyL68: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_prev);
    CPy_DecRef(cpy_r_nxt);
    goto CPyL51;
CPyL69: ;
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_exits);
    CPy_DecRef(cpy_r_r64);
    goto CPyL51;
}

PyObject *CPyPy_dataflow___get_cfg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", 0};
    static CPyArg_Parser parser = {"O:get_cfg", kwlist, 0};
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___get_cfg(arg_blocks);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_cfg", 81, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___get_real_target(PyObject *cpy_r_label) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_label)->_ops;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_label)->_ops;
    cpy_r_r6 = CPyList_GetItemShortBorrow(cpy_r_r5, -2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_real_target", 125, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    cpy_r_r7 = (PyObject *)CPyType_ops___Goto;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_label)->_ops;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, -2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_real_target", 126, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_ops___Goto))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "get_real_target", 126, CPyStatic_dataflow___globals, "mypyc.ir.ops.Goto", cpy_r_r12);
        goto CPyL7;
    }
    cpy_r_r14 = ((mypyc___ir___ops___GotoObject *)cpy_r_r13)->_label;
    CPy_INCREF(cpy_r_r14);
    cpy_r_label = cpy_r_r14;
CPyL6: ;
    return cpy_r_label;
CPyL7: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL8: ;
    CPy_INCREF(cpy_r_label);
    goto CPyL6;
}

PyObject *CPyPy_dataflow___get_real_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"label", 0};
    static CPyArg_Parser parser = {"O:get_real_target", kwlist, 0};
    PyObject *obj_label;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_label)) {
        return NULL;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___get_real_target(arg_label);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "get_real_target", 124, CPyStatic_dataflow___globals);
    return NULL;
}

char CPyDef_dataflow___cleanup_cfg(PyObject *cpy_r_blocks) {
    char cpy_r_changed;
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_block;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_tgt;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_cfg;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_orig_blocks;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    cpy_r_changed = 1;
CPyL1: ;
    if (!cpy_r_changed) goto CPyL30;
    cpy_r_r0 = 0;
CPyL3: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL16;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_ops___BasicBlock))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 141, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r5);
        goto CPyL31;
    }
    cpy_r_block = cpy_r_r6;
    cpy_r_r7 = 0;
    cpy_r_i = 0;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 142, CPyStatic_dataflow___globals);
        goto CPyL32;
    }
CPyL6: ;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_r8, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_r8); /* targets */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 142, CPyStatic_dataflow___globals);
        goto CPyL32;
    }
    cpy_r_r10 = PyObject_GetIter(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 142, CPyStatic_dataflow___globals);
        goto CPyL32;
    }
CPyL8: ;
    cpy_r_r11 = PyIter_Next(cpy_r_r10);
    if (cpy_r_r11 == NULL) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_ops___BasicBlock))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 142, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r11);
        goto CPyL34;
    }
    cpy_r_tgt = cpy_r_r12;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 143, CPyStatic_dataflow___globals);
        goto CPyL35;
    }
CPyL11: ;
    cpy_r_r14 = CPyDef_dataflow___get_real_target(cpy_r_tgt);
    CPy_DECREF(cpy_r_tgt);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 143, CPyStatic_dataflow___globals);
        goto CPyL36;
    }
    cpy_r_r15 = CPY_GET_METHOD(cpy_r_r13, CPyType_ops___ControlOp, 10, mypyc___ir___ops___ControlOpObject, char (*)(PyObject *, CPyTagged, PyObject *))(cpy_r_r13, cpy_r_i, cpy_r_r14); /* set_target */
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 143, CPyStatic_dataflow___globals);
        goto CPyL37;
    }
    cpy_r_r16 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r16;
    cpy_r_i = cpy_r_r16;
    goto CPyL8;
CPyL14: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 142, CPyStatic_dataflow___globals);
        goto CPyL31;
    }
    cpy_r_r18 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r18;
    goto CPyL3;
CPyL16: ;
    cpy_r_changed = 0;
    cpy_r_r19 = CPyDef_dataflow___get_cfg(cpy_r_blocks);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 147, CPyStatic_dataflow___globals);
        goto CPyL31;
    }
    cpy_r_cfg = cpy_r_r19;
    cpy_r_r20 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r21[1] = {cpy_r_blocks};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 148, CPyStatic_dataflow___globals);
        goto CPyL38;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 148, CPyStatic_dataflow___globals, "list", cpy_r_r23);
        goto CPyL38;
    }
    cpy_r_orig_blocks = cpy_r_r24;
    cpy_r_r25 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r26[1] = {cpy_r_blocks};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 149, CPyStatic_dataflow___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL20: ;
    cpy_r_r29 = 0;
    cpy_r_i = 0;
    cpy_r_r30 = 0;
CPyL21: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_orig_blocks)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL41;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_orig_blocks, cpy_r_r30);
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_ops___BasicBlock))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 150, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r35);
        goto CPyL42;
    }
    cpy_r_block = cpy_r_r36;
    cpy_r_r37 = cpy_r_i == 0;
    CPyTagged_DECREF(cpy_r_i);
    if (cpy_r_r37) goto CPyL27;
    cpy_r_r38 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_cfg)->_pred;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r38, cpy_r_block);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 151, CPyStatic_dataflow___globals);
        goto CPyL43;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 151, CPyStatic_dataflow___globals, "list", cpy_r_r39);
        goto CPyL43;
    }
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r40)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = cpy_r_r43 != 0;
    if (!cpy_r_r44) goto CPyL44;
CPyL27: ;
    cpy_r_r45 = PyList_Append(cpy_r_blocks, cpy_r_block);
    CPy_DECREF(cpy_r_block);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 152, CPyStatic_dataflow___globals);
        goto CPyL39;
    } else
        goto CPyL29;
CPyL28: ;
    cpy_r_changed = 1;
CPyL29: ;
    cpy_r_r47 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r47;
    cpy_r_i = cpy_r_r47;
    cpy_r_r48 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r48;
    goto CPyL21;
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL32: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r10);
    goto CPyL14;
CPyL34: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_tgt);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_cfg);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_orig_blocks);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL20;
CPyL41: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_cfg);
    CPy_DECREF(cpy_r_orig_blocks);
    goto CPyL1;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_orig_blocks);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_orig_blocks);
    goto CPyL31;
CPyL44: ;
    CPy_DECREF(cpy_r_block);
    goto CPyL28;
}

PyObject *CPyPy_dataflow___cleanup_cfg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", 0};
    static CPyArg_Parser parser = {"O:cleanup_cfg", kwlist, 0};
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    char retval = CPyDef_dataflow___cleanup_cfg(arg_blocks);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "cleanup_cfg", 130, CPyStatic_dataflow___globals);
    return NULL;
}

char CPyDef_dataflow___AnalysisResult_____init__(PyObject *cpy_r_self, PyObject *cpy_r_before, PyObject *cpy_r_after) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_before);
    if (((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_before != NULL) {
        CPy_DECREF(((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_before);
    }
    ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_before = cpy_r_before;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 164, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_after);
    if (((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_after != NULL) {
        CPy_DECREF(((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_after);
    }
    ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_after = cpy_r_after;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 165, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___AnalysisResult_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"before", "after", 0};
    PyObject *obj_before;
    PyObject *obj_after;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_before, &obj_after)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___AnalysisResult))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_self); 
        goto fail;
    }
    PyObject *arg_before;
    if (likely(PyDict_Check(obj_before)))
        arg_before = obj_before;
    else {
        CPy_TypeError("dict", obj_before); 
        goto fail;
    }
    PyObject *arg_after;
    if (likely(PyDict_Check(obj_after)))
        arg_after = obj_after;
    else {
        CPy_TypeError("dict", obj_after); 
        goto fail;
    }
    char retval = CPyDef_dataflow___AnalysisResult_____init__(arg_self, arg_before, arg_after);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 163, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___AnalysisResult_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[6688]; /* 'before: ' */
    cpy_r_r1 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_before;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/analysis/dataflow.py", "__str__", "AnalysisResult", "before", 168, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 168, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatics[6689]; /* '\nafter: ' */
    cpy_r_r4 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_self)->_after;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/analysis/dataflow.py", "__str__", "AnalysisResult", "after", 168, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = PyObject_Str(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 168, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[189]; /* '\n' */
    cpy_r_r7 = CPyStr_Build(5, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 168, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_dataflow___AnalysisResult_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___AnalysisResult))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___AnalysisResult_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__str__", 167, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_goto(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_goto", 176, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_goto", 176, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8327 = { NULL, NULL };
    cpy_r_r3 = __tmp8327;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_goto(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8328 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8328);
    PyObject *__tmp8329 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8329);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_goto", 175, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_goto(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8330 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8330);
    PyObject *__tmp8331 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8331);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_goto__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 180, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 180, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    tuple_T2OO __tmp8332 = { NULL, NULL };
    cpy_r_r3 = __tmp8332;
    return cpy_r_r3;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8333 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8333);
    PyObject *__tmp8334 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8334);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 179, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 184, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 184, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    tuple_T2OO __tmp8335 = { NULL, NULL };
    cpy_r_r3 = __tmp8335;
    return cpy_r_r3;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8336 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8336);
    PyObject *__tmp8337 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8337);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 183, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8338 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8338);
    PyObject *__tmp8339 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8339);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 188, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 188, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    tuple_T2OO __tmp8340 = { NULL, NULL };
    cpy_r_r3 = __tmp8340;
    return cpy_r_r3;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8341 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8341);
    PyObject *__tmp8342 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8342);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 187, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8343 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8343);
    PyObject *__tmp8344 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8344);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 192, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 192, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    tuple_T2OO __tmp8345 = { NULL, NULL };
    cpy_r_r3 = __tmp8345;
    return cpy_r_r3;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8346 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8346);
    PyObject *__tmp8347 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8347);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 191, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8348 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8348);
    PyObject *__tmp8349 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8349);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call", 195, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8350 = { NULL, NULL };
    cpy_r_r1 = __tmp8350;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_call(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8351 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8351);
    PyObject *__tmp8352 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8352);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call", 194, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8353 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8353);
    PyObject *__tmp8354 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8354);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_method_call", 198, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8355 = { NULL, NULL };
    cpy_r_r1 = __tmp8355;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8356 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8356);
    PyObject *__tmp8357 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8357);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_method_call", 197, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8358 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8358);
    PyObject *__tmp8359 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8359);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_method_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_method_call__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_error_value", 201, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8360 = { NULL, NULL };
    cpy_r_r1 = __tmp8360;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8361 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8361);
    PyObject *__tmp8362 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8362);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_error_value", 200, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8363 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8363);
    PyObject *__tmp8364 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8364);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_error_value__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_error_value__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_literal", 204, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8365 = { NULL, NULL };
    cpy_r_r1 = __tmp8365;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8366 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8366);
    PyObject *__tmp8367 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8367);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_literal", 203, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8368 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8368);
    PyObject *__tmp8369 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8369);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_literal__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_literal__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_attr", 207, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8370 = { NULL, NULL };
    cpy_r_r1 = __tmp8370;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8371 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8371);
    PyObject *__tmp8372 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8372);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_attr", 206, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8373 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8373);
    PyObject *__tmp8374 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8374);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_attr__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_attr", 210, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8375 = { NULL, NULL };
    cpy_r_r1 = __tmp8375;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_set_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8376 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8376);
    PyObject *__tmp8377 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8377);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_attr", 209, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8378 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8378);
    PyObject *__tmp8379 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8379);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_set_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_attr__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_static", 213, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8380 = { NULL, NULL };
    cpy_r_r1 = __tmp8380;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8381 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8381);
    PyObject *__tmp8382 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8382);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_static", 212, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8383 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8383);
    PyObject *__tmp8384 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8384);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_static__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_init_static", 216, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8385 = { NULL, NULL };
    cpy_r_r1 = __tmp8385;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_init_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8386 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8386);
    PyObject *__tmp8387 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8387);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_init_static", 215, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8388 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8388);
    PyObject *__tmp8389 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8389);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_init_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_init_static__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_get", 219, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8390 = { NULL, NULL };
    cpy_r_r1 = __tmp8390;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8391 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8391);
    PyObject *__tmp8392 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8392);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_get", 218, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8393 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8393);
    PyObject *__tmp8394 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8394);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_get__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_get__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_set", 222, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8395 = { NULL, NULL };
    cpy_r_r1 = __tmp8395;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8396 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8396);
    PyObject *__tmp8397 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8397);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_set", 221, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8398 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8398);
    PyObject *__tmp8399 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8399);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_tuple_set__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_tuple_set__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_box(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_box", 225, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8400 = { NULL, NULL };
    cpy_r_r1 = __tmp8400;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_box(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8401 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8401);
    PyObject *__tmp8402 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8402);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_box", 224, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_box(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8403 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8403);
    PyObject *__tmp8404 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8404);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_box__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_box__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unbox", 228, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8405 = { NULL, NULL };
    cpy_r_r1 = __tmp8405;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8406 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8406);
    PyObject *__tmp8407 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8407);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unbox", 227, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8408 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8408);
    PyObject *__tmp8409 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8409);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_unbox__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unbox__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_cast(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_cast", 231, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8410 = { NULL, NULL };
    cpy_r_r1 = __tmp8410;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_cast(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8411 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8411);
    PyObject *__tmp8412 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8412);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_cast", 230, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_cast(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8413 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8413);
    PyObject *__tmp8414 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8414);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_cast__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_cast__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_raise_standard_error", 234, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8415 = { NULL, NULL };
    cpy_r_r1 = __tmp8415;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_raise_standard_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8416 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8416);
    PyObject *__tmp8417 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8417);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_raise_standard_error", 233, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8418 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8418);
    PyObject *__tmp8419 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8419);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_raise_standard_error__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_raise_standard_error__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call_c", 237, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8420 = { NULL, NULL };
    cpy_r_r1 = __tmp8420;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8421 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8421);
    PyObject *__tmp8422 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8422);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call_c", 236, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8423 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8423);
    PyObject *__tmp8424 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8424);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_call_c__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_call_c__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_truncate", 240, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8425 = { NULL, NULL };
    cpy_r_r1 = __tmp8425;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_truncate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8426 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8426);
    PyObject *__tmp8427 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8427);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_truncate", 239, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8428 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8428);
    PyObject *__tmp8429 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8429);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_truncate__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_truncate__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_extend(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_extend", 243, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8430 = { NULL, NULL };
    cpy_r_r1 = __tmp8430;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_extend(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_extend(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8431 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8431);
    PyObject *__tmp8432 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8432);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_extend", 242, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_extend(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8433 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8433);
    PyObject *__tmp8434 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8434);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_extend__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_extend__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_global", 246, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8435 = { NULL, NULL };
    cpy_r_r1 = __tmp8435;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8436 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8436);
    PyObject *__tmp8437 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8437);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_global", 245, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8438 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8438);
    PyObject *__tmp8439 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8439);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_global__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_global__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_int_op", 249, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8440 = { NULL, NULL };
    cpy_r_r1 = __tmp8440;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8441 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8441);
    PyObject *__tmp8442 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8442);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_int_op", 248, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8443 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8443);
    PyObject *__tmp8444 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8444);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_int_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_int_op__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_op", 252, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8445 = { NULL, NULL };
    cpy_r_r1 = __tmp8445;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8446 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8446);
    PyObject *__tmp8447 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8447);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_op", 251, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8448 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8448);
    PyObject *__tmp8449 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8449);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_op__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_neg", 255, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8450 = { NULL, NULL };
    cpy_r_r1 = __tmp8450;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_neg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8451 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8451);
    PyObject *__tmp8452 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8452);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_neg", 254, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8453 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8453);
    PyObject *__tmp8454 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8454);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_neg__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_neg__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_comparison_op", 258, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8455 = { NULL, NULL };
    cpy_r_r1 = __tmp8455;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8456 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8456);
    PyObject *__tmp8457 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8457);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_comparison_op", 257, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8458 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8458);
    PyObject *__tmp8459 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8459);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_comparison_op__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_comparison_op", 261, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8460 = { NULL, NULL };
    cpy_r_r1 = __tmp8460;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8461 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8461);
    PyObject *__tmp8462 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8462);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_comparison_op", 260, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8463 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8463);
    PyObject *__tmp8464 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8464);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_float_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_float_comparison_op__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_mem", 264, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8465 = { NULL, NULL };
    cpy_r_r1 = __tmp8465;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8466 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8466);
    PyObject *__tmp8467 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8467);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_mem", 263, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8468 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8468);
    PyObject *__tmp8469 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8469);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_element_ptr", 267, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8470 = { NULL, NULL };
    cpy_r_r1 = __tmp8470;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_get_element_ptr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8471 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8471);
    PyObject *__tmp8472 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8472);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_element_ptr", 266, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8473 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8473);
    PyObject *__tmp8474 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8474);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_get_element_ptr__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_address", 270, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8475 = { NULL, NULL };
    cpy_r_r1 = __tmp8475;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8476 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8476);
    PyObject *__tmp8477 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8477);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_address", 269, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8478 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8478);
    PyObject *__tmp8479 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8479);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_load_address__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_dataflow___BaseAnalysisVisitor, 1, mypyc___analysis___dataflow___BaseAnalysisVisitorObject, tuple_T2OO (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_op); /* visit_register_op */
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_keep_alive", 273, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8480 = { NULL, NULL };
    cpy_r_r1 = __tmp8480;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_keep_alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8481 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8481);
    PyObject *__tmp8482 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8482);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_keep_alive", 272, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8483 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8483);
    PyObject *__tmp8484 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8484);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_dataflow___BaseAnalysisVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BaseAnalysisVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_keep_alive__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

char CPyDef_dataflow___DefinedVisitor_____init__(PyObject *cpy_r_self, char cpy_r_strict_errors) {
    char cpy_r_r0;
    char cpy_r_r1;
    if (cpy_r_strict_errors != 2) goto CPyL2;
    cpy_r_strict_errors = 0;
CPyL2: ;
    ((mypyc___analysis___dataflow___DefinedVisitorObject *)cpy_r_self)->_strict_errors = cpy_r_strict_errors;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 293, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___DefinedVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strict_errors", 0};
    PyObject *obj_strict_errors = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|O", "__init__", kwlist, &obj_strict_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    char arg_strict_errors;
    if (obj_strict_errors == NULL) {
        arg_strict_errors = 2;
    } else if (unlikely(!PyBool_Check(obj_strict_errors))) {
        CPy_TypeError("bool", obj_strict_errors); goto fail;
    } else
        arg_strict_errors = obj_strict_errors == Py_True;
    char retval = CPyDef_dataflow___DefinedVisitor_____init__(arg_self, arg_strict_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 292, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 296, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 296, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8485 = { NULL, NULL };
    cpy_r_r3 = __tmp8485;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8486 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8486);
    PyObject *__tmp8487 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8487);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 295, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8488 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8488);
    PyObject *__tmp8489 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8489);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 299, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 299, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8490 = { NULL, NULL };
    cpy_r_r3 = __tmp8490;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8491 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8491);
    PyObject *__tmp8492 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8492);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 298, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8493 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8493);
    PyObject *__tmp8494 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8494);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 302, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 302, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8495 = { NULL, NULL };
    cpy_r_r3 = __tmp8495;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8496 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8496);
    PyObject *__tmp8497 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8497);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 301, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8498 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8498);
    PyObject *__tmp8499 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8499);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 305, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 305, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8500 = { NULL, NULL };
    cpy_r_r3 = __tmp8500;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8501 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8501);
    PyObject *__tmp8502 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8502);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 304, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    tuple_T2OO cpy_r_r21;
    cpy_r_r0 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    cpy_r_r1 = (PyObject *)CPyType_ops___LoadErrorValue;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_ops___LoadErrorValue))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "visit_assign", 309, CPyStatic_dataflow___globals, "mypyc.ir.ops.LoadErrorValue", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_r6)->_undefines;
    if (cpy_r_r7) goto CPyL5;
CPyL3: ;
    cpy_r_r8 = ((mypyc___analysis___dataflow___DefinedVisitorObject *)cpy_r_self)->_strict_errors;
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AttributeError("mypyc/analysis/dataflow.py", "visit_assign", "DefinedVisitor", "strict_errors", 309, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
CPyL4: ;
    if (!cpy_r_r8) goto CPyL9;
CPyL5: ;
    cpy_r_r9 = PySet_New(NULL);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 310, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
    cpy_r_r10 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 310, CPyStatic_dataflow___globals);
        goto CPyL14;
    }
    cpy_r_r12 = PySet_Add(cpy_r_r11, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 310, CPyStatic_dataflow___globals);
        goto CPyL15;
    }
    cpy_r_r14.f0 = cpy_r_r9;
    cpy_r_r14.f1 = cpy_r_r11;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PySet_New(NULL);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 312, CPyStatic_dataflow___globals);
        goto CPyL16;
    }
    cpy_r_r17 = PySet_Add(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 312, CPyStatic_dataflow___globals);
        goto CPyL17;
    }
    cpy_r_r19 = PySet_New(NULL);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 312, CPyStatic_dataflow___globals);
        goto CPyL17;
    }
    cpy_r_r20.f0 = cpy_r_r16;
    cpy_r_r20.f1 = cpy_r_r19;
    CPy_INCREF(cpy_r_r20.f0);
    CPy_INCREF(cpy_r_r20.f1);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    return cpy_r_r20;
CPyL13: ;
    tuple_T2OO __tmp8503 = { NULL, NULL };
    cpy_r_r21 = __tmp8503;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL13;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8504 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8504);
    PyObject *__tmp8505 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8505);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 307, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8506 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8506);
    PyObject *__tmp8507 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8507);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 316, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 316, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8508 = { NULL, NULL };
    cpy_r_r3 = __tmp8508;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8509 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8509);
    PyObject *__tmp8510 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8510);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 314, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8511 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8511);
    PyObject *__tmp8512 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8512);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___DefinedVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 319, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 319, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8513 = { NULL, NULL };
    cpy_r_r3 = __tmp8513;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___DefinedVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8514 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8514);
    PyObject *__tmp8515 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8515);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 318, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___DefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8516 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8516);
    PyObject *__tmp8517 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8517);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___DefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___DefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.DefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___DefinedVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___analyze_maybe_defined_regs(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg, PyObject *cpy_r_initial_defined) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_dataflow___DefinedVisitor(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_maybe_defined_regs", 332, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyStatic_dataflow___globals;
    cpy_r_r3 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_maybe_defined_regs", 335, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_maybe_defined_regs", 335, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r1, cpy_r_initial_defined, cpy_r_r5, 0, cpy_r_r6);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_maybe_defined_regs", 329, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_dataflow___analyze_maybe_defined_regs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", "initial_defined", 0};
    static CPyArg_Parser parser = {"OOO:analyze_maybe_defined_regs", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    PyObject *obj_initial_defined;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg, &obj_initial_defined)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *arg_initial_defined;
    if (likely(PySet_Check(obj_initial_defined)))
        arg_initial_defined = obj_initial_defined;
    else {
        CPy_TypeError("set", obj_initial_defined); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___analyze_maybe_defined_regs(arg_blocks, arg_cfg, arg_initial_defined);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_maybe_defined_regs", 322, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___analyze_must_defined_regs(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg, PyObject *cpy_r_initial_defined, PyObject *cpy_r_regs, char cpy_r_strict_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    if (cpy_r_strict_errors != 2) goto CPyL2;
    cpy_r_strict_errors = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_dataflow___DefinedVisitor(cpy_r_strict_errors);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 358, CPyStatic_dataflow___globals);
        goto CPyL8;
    }
    cpy_r_r1 = CPyStatic_dataflow___globals;
    cpy_r_r2 = CPyStatics[6690]; /* 'MUST_ANALYSIS' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 361, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 361, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
    cpy_r_r5 = PySet_New(cpy_r_regs);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 362, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r6 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_initial_defined, cpy_r_r4, 0, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 355, CPyStatic_dataflow___globals);
        goto CPyL8;
    }
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy_dataflow___analyze_must_defined_regs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", "initial_defined", "regs", "strict_errors", 0};
    static CPyArg_Parser parser = {"OOOO|O:analyze_must_defined_regs", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    PyObject *obj_initial_defined;
    PyObject *obj_regs;
    PyObject *obj_strict_errors = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg, &obj_initial_defined, &obj_regs, &obj_strict_errors)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *arg_initial_defined;
    if (likely(PySet_Check(obj_initial_defined)))
        arg_initial_defined = obj_initial_defined;
    else {
        CPy_TypeError("set", obj_initial_defined); 
        goto fail;
    }
    PyObject *arg_regs = obj_regs;
    char arg_strict_errors;
    if (obj_strict_errors == NULL) {
        arg_strict_errors = 2;
    } else if (unlikely(!PyBool_Check(obj_strict_errors))) {
        CPy_TypeError("bool", obj_strict_errors); goto fail;
    } else
        arg_strict_errors = obj_strict_errors == Py_True;
    PyObject *retval = CPyDef_dataflow___analyze_must_defined_regs(arg_blocks, arg_cfg, arg_initial_defined, arg_regs, arg_strict_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_must_defined_regs", 339, CPyStatic_dataflow___globals);
    return NULL;
}

char CPyDef_dataflow___BorrowedArgumentsVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_args) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_args);
    if (((mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *)cpy_r_self)->_args != NULL) {
        CPy_DECREF(((mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *)cpy_r_self)->_args);
    }
    ((mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *)cpy_r_self)->_args = cpy_r_args;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 368, CPyStatic_dataflow___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"args", 0};
    PyObject *obj_args;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PySet_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("set", obj_args); 
        goto fail;
    }
    char retval = CPyDef_dataflow___BorrowedArgumentsVisitor_____init__(arg_self, arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "__init__", 367, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 371, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 371, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8518 = { NULL, NULL };
    cpy_r_r3 = __tmp8518;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8519 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8519);
    PyObject *__tmp8520 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8520);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 370, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8521 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8521);
    PyObject *__tmp8522 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8522);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 374, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 374, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8523 = { NULL, NULL };
    cpy_r_r3 = __tmp8523;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8524 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8524);
    PyObject *__tmp8525 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8525);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 373, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8526 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8526);
    PyObject *__tmp8527 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8527);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 377, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 377, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8528 = { NULL, NULL };
    cpy_r_r3 = __tmp8528;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8529 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8529);
    PyObject *__tmp8530 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8530);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 376, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8531 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8531);
    PyObject *__tmp8532 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8532);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 380, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 380, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8533 = { NULL, NULL };
    cpy_r_r3 = __tmp8533;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8534 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8534);
    PyObject *__tmp8535 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8535);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 379, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    cpy_r_r0 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___analysis___dataflow___BorrowedArgumentsVisitorObject *)cpy_r_self)->_args;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/analysis/dataflow.py", "visit_assign", "BorrowedArgumentsVisitor", "args", 383, CPyStatic_dataflow___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 383, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = PySet_New(NULL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 384, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 384, CPyStatic_dataflow___globals);
        goto CPyL12;
    }
    cpy_r_r8 = PySet_Add(cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 384, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
    cpy_r_r10.f0 = cpy_r_r5;
    cpy_r_r10.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 385, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r12 = PySet_New(NULL);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 385, CPyStatic_dataflow___globals);
        goto CPyL14;
    }
    cpy_r_r13.f0 = cpy_r_r11;
    cpy_r_r13.f1 = cpy_r_r12;
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    return cpy_r_r13;
CPyL10: ;
    tuple_T2OO __tmp8536 = { NULL, NULL };
    cpy_r_r14 = __tmp8536;
    return cpy_r_r14;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL10;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8537 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8537);
    PyObject *__tmp8538 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8538);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 382, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8539 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8539);
    PyObject *__tmp8540 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8540);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 388, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 388, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8541 = { NULL, NULL };
    cpy_r_r3 = __tmp8541;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8542 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8542);
    PyObject *__tmp8543 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8543);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 387, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8544 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8544);
    PyObject *__tmp8545 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8545);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 391, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 391, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8546 = { NULL, NULL };
    cpy_r_r3 = __tmp8546;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8547 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8547);
    PyObject *__tmp8548 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8548);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 390, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8549 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8549);
    PyObject *__tmp8550 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8550);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___BorrowedArgumentsVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___BorrowedArgumentsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.BorrowedArgumentsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___BorrowedArgumentsVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___analyze_borrowed_arguments(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg, PyObject *cpy_r_borrowed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_dataflow___BorrowedArgumentsVisitor(cpy_r_borrowed);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_borrowed_arguments", 404, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r1 = CPyStatic_dataflow___globals;
    cpy_r_r2 = CPyStatics[6690]; /* 'MUST_ANALYSIS' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_borrowed_arguments", 407, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_borrowed_arguments", 407, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r5 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_borrowed, cpy_r_r4, 0, cpy_r_borrowed);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_borrowed_arguments", 401, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_dataflow___analyze_borrowed_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", "borrowed", 0};
    static CPyArg_Parser parser = {"OOO:analyze_borrowed_arguments", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    PyObject *obj_borrowed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg, &obj_borrowed)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *arg_borrowed;
    if (likely(PySet_Check(obj_borrowed)))
        arg_borrowed = obj_borrowed;
    else {
        CPy_TypeError("set", obj_borrowed); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___analyze_borrowed_arguments(arg_blocks, arg_cfg, arg_borrowed);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_borrowed_arguments", 394, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 414, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 414, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8551 = { NULL, NULL };
    cpy_r_r3 = __tmp8551;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8552 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8552);
    PyObject *__tmp8553 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8553);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 413, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8554 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8554);
    PyObject *__tmp8555 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8555);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 417, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 417, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8556 = { NULL, NULL };
    cpy_r_r3 = __tmp8556;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8557 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8557);
    PyObject *__tmp8558 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8558);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 416, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8559 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8559);
    PyObject *__tmp8560 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8560);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 420, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 420, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8561 = { NULL, NULL };
    cpy_r_r3 = __tmp8561;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8562 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8562);
    PyObject *__tmp8563 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8563);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 419, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8564 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8564);
    PyObject *__tmp8565 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8565);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 423, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___RegisterOp, 0, mypyc___ir___ops___RegisterOpObject, char); /* is_void */
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 423, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
CPyL2: ;
    if (cpy_r_r1) goto CPyL6;
CPyL3: ;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 423, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_op);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 423, CPyStatic_dataflow___globals);
        goto CPyL11;
    }
    cpy_r_r5 = cpy_r_r2;
    goto CPyL8;
CPyL6: ;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 423, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r5 = cpy_r_r6;
CPyL8: ;
    cpy_r_r7.f0 = cpy_r_r0;
    cpy_r_r7.f1 = cpy_r_r5;
    CPy_INCREF(cpy_r_r7.f0);
    CPy_INCREF(cpy_r_r7.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r5);
    return cpy_r_r7;
CPyL9: ;
    tuple_T2OO __tmp8566 = { NULL, NULL };
    cpy_r_r8 = __tmp8566;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8567 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8567);
    PyObject *__tmp8568 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8568);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 422, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 426, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 426, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 426, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r5;
CPyL4: ;
    tuple_T2OO __tmp8569 = { NULL, NULL };
    cpy_r_r6 = __tmp8569;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8570 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8570);
    PyObject *__tmp8571 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8571);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 425, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8572 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8572);
    PyObject *__tmp8573 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8573);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 429, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 429, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 429, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r5;
CPyL4: ;
    tuple_T2OO __tmp8574 = { NULL, NULL };
    cpy_r_r6 = __tmp8574;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8575 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8575);
    PyObject *__tmp8576 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8576);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 428, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8577 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8577);
    PyObject *__tmp8578 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8578);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___UndefinedVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 432, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 432, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8579 = { NULL, NULL };
    cpy_r_r3 = __tmp8579;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___UndefinedVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8580 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8580);
    PyObject *__tmp8581 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8581);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 431, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___UndefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___UndefinedVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8582 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8582);
    PyObject *__tmp8583 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8583);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___UndefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___UndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.UndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___UndefinedVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___analyze_undefined_regs(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg, PyObject *cpy_r_initial_defined) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_initial_undefined;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 445, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r1 = CPyDef_func_ir___all_values(cpy_r_r0, cpy_r_blocks);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 445, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r2 = PySet_New(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 445, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r3 = PyNumber_Subtract(cpy_r_r2, cpy_r_initial_defined);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 445, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    if (likely(PySet_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 445, CPyStatic_dataflow___globals, "set", cpy_r_r3);
        goto CPyL10;
    }
    cpy_r_initial_undefined = cpy_r_r4;
    cpy_r_r5 = CPyDef_dataflow___UndefinedVisitor();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 449, CPyStatic_dataflow___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyStatic_dataflow___globals;
    cpy_r_r7 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 452, CPyStatic_dataflow___globals);
        goto CPyL12;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r9 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 452, CPyStatic_dataflow___globals);
        goto CPyL12;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r5, cpy_r_initial_undefined, cpy_r_r9, 0, cpy_r_r10);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_initial_undefined);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 446, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL11: ;
    CPy_DecRef(cpy_r_initial_undefined);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_initial_undefined);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_dataflow___analyze_undefined_regs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", "initial_defined", 0};
    static CPyArg_Parser parser = {"OOO:analyze_undefined_regs", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    PyObject *obj_initial_defined;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg, &obj_initial_defined)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *arg_initial_defined;
    if (likely(PySet_Check(obj_initial_defined)))
        arg_initial_defined = obj_initial_defined;
    else {
        CPy_TypeError("set", obj_initial_defined); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___analyze_undefined_regs(arg_blocks, arg_cfg, arg_initial_defined);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_undefined_regs", 435, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___non_trivial_sources(PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "non_trivial_sources", 457, CPyStatic_dataflow___globals);
        goto CPyL12;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 4, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* sources */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "non_trivial_sources", 458, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL14;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_ops___Value)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "non_trivial_sources", 458, CPyStatic_dataflow___globals, "mypyc.ir.ops.Value", cpy_r_r7);
        goto CPyL15;
    }
    cpy_r_source = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_source)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL8;
CPyL7: ;
    cpy_r_r14 = (PyObject *)CPyType_ops___Float;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_source)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL8: ;
    if (cpy_r_r13) goto CPyL16;
    cpy_r_r18 = PySet_Add(cpy_r_result, cpy_r_source);
    CPy_DECREF(cpy_r_source);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "non_trivial_sources", 460, CPyStatic_dataflow___globals);
        goto CPyL15;
    }
CPyL10: ;
    cpy_r_r20 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r20;
    goto CPyL3;
CPyL11: ;
    return cpy_r_result;
CPyL12: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL13: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL10;
}

PyObject *CPyPy_dataflow___non_trivial_sources(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:non_trivial_sources", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___non_trivial_sources(arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "non_trivial_sources", 456, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyDef_dataflow___non_trivial_sources(cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 466, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 466, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8584 = { NULL, NULL };
    cpy_r_r3 = __tmp8584;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8585 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8585);
    PyObject *__tmp8586 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8586);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch", 465, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8587 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8587);
    PyObject *__tmp8588 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8588);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    cpy_r_r0 = ((mypyc___ir___ops___ReturnObject *)cpy_r_op)->_value;
    cpy_r_r1 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_ops___Float;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (cpy_r_r5) goto CPyL8;
    cpy_r_r10 = ((mypyc___ir___ops___ReturnObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 470, CPyStatic_dataflow___globals);
        goto CPyL12;
    }
    cpy_r_r12 = PySet_Add(cpy_r_r11, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 470, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
    cpy_r_r14 = PySet_New(NULL);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 470, CPyStatic_dataflow___globals);
        goto CPyL13;
    }
    cpy_r_r15.f0 = cpy_r_r11;
    cpy_r_r15.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = PySet_New(NULL);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 472, CPyStatic_dataflow___globals);
        goto CPyL11;
    }
    cpy_r_r17 = PySet_New(NULL);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 472, CPyStatic_dataflow___globals);
        goto CPyL14;
    }
    cpy_r_r18.f0 = cpy_r_r16;
    cpy_r_r18.f1 = cpy_r_r17;
    CPy_INCREF(cpy_r_r18.f0);
    CPy_INCREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    return cpy_r_r18;
CPyL11: ;
    tuple_T2OO __tmp8589 = { NULL, NULL };
    cpy_r_r19 = __tmp8589;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL11;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8590 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8590);
    PyObject *__tmp8591 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8591);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return", 468, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8592 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8592);
    PyObject *__tmp8593 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8593);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_return__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 475, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 475, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8594 = { NULL, NULL };
    cpy_r_r3 = __tmp8594;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8595 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8595);
    PyObject *__tmp8596 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8596);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable", 474, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8597 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8597);
    PyObject *__tmp8598 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8598);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_gen;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    cpy_r_r0 = CPyDef_dataflow___non_trivial_sources(cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 478, CPyStatic_dataflow___globals);
        goto CPyL8;
    }
    cpy_r_gen = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___RegisterOp, 0, mypyc___ir___ops___RegisterOpObject, char); /* is_void */
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 479, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
CPyL2: ;
    if (cpy_r_r1) goto CPyL6;
CPyL3: ;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 480, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_op);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 480, CPyStatic_dataflow___globals);
        goto CPyL10;
    }
    cpy_r_r5.f0 = cpy_r_gen;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_gen);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 482, CPyStatic_dataflow___globals);
        goto CPyL9;
    }
    cpy_r_r7.f0 = cpy_r_gen;
    cpy_r_r7.f1 = cpy_r_r6;
    CPy_INCREF(cpy_r_r7.f0);
    CPy_INCREF(cpy_r_r7.f1);
    CPy_DECREF(cpy_r_gen);
    CPy_DECREF(cpy_r_r6);
    return cpy_r_r7;
CPyL8: ;
    tuple_T2OO __tmp8599 = { NULL, NULL };
    cpy_r_r8 = __tmp8599;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_gen);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8600 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8600);
    PyObject *__tmp8601 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8601);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_register_op", 477, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    cpy_r_r0 = CPyDef_dataflow___non_trivial_sources(cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 485, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 485, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 485, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r5;
CPyL4: ;
    tuple_T2OO __tmp8602 = { NULL, NULL };
    cpy_r_r6 = __tmp8602;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8603 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8603);
    PyObject *__tmp8604 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8604);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign", 484, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8605 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8605);
    PyObject *__tmp8606 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8606);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    cpy_r_r0 = CPyDef_dataflow___non_trivial_sources(cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 488, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 488, CPyStatic_dataflow___globals);
        goto CPyL5;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 488, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r5;
CPyL4: ;
    tuple_T2OO __tmp8607 = { NULL, NULL };
    cpy_r_r6 = __tmp8607;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8608 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8608);
    PyObject *__tmp8609 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8609);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi", 487, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8610 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8610);
    PyObject *__tmp8611 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8611);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

tuple_T2OO CPyDef_dataflow___LivenessVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = CPyDef_dataflow___non_trivial_sources(cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 491, CPyStatic_dataflow___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 491, CPyStatic_dataflow___globals);
        goto CPyL4;
    }
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL3: ;
    tuple_T2OO __tmp8612 = { NULL, NULL };
    cpy_r_r3 = __tmp8612;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dataflow___LivenessVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8613 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8613);
    PyObject *__tmp8614 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8614);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem", 490, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___LivenessVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8615 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8615);
    PyObject *__tmp8616 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8616);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataflow___LivenessVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataflow___LivenessVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.LivenessVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___LivenessVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___analyze_live_regs(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_dataflow___LivenessVisitor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 503, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 504, CPyStatic_dataflow___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyStatic_dataflow___globals;
    cpy_r_r3 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 506, CPyStatic_dataflow___globals);
        goto CPyL8;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 506, CPyStatic_dataflow___globals);
        goto CPyL8;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_r1, cpy_r_r5, 1, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 500, CPyStatic_dataflow___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_dataflow___analyze_live_regs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", 0};
    static CPyArg_Parser parser = {"OO:analyze_live_regs", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataflow___analyze_live_regs(arg_blocks, arg_cfg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "analyze_live_regs", 494, CPyStatic_dataflow___globals);
    return NULL;
}

PyObject *CPyDef_dataflow___run_analysis(PyObject *cpy_r_blocks, PyObject *cpy_r_cfg, PyObject *cpy_r_gen_and_kill, PyObject *cpy_r_initial, CPyTagged cpy_r_kind, char cpy_r_backward, PyObject *cpy_r_universe) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_block_gen;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_block_kill;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_gen;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_kill;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r27;
    tuple_T2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_opgen;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_opkill;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_worklist;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_workset;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_before;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_after;
    CPyTagged cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    int64_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_pred_map;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_succ_map;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    int64_t cpy_r_r93;
    CPyTagged cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_label;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_new_before;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_pred;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    int64_t cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyTagged cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_new_after;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyTagged cpy_r_r159;
    CPyPtr cpy_r_r160;
    int64_t cpy_r_r161;
    CPyTagged cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_succ;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    CPyTagged cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_op_before;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_op_after;
    CPyTagged cpy_r_r179;
    CPyPtr cpy_r_r180;
    int64_t cpy_r_r181;
    CPyTagged cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_cur;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject **cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_ops_enum;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    tuple_T2IO cpy_r_r204;
    CPyTagged cpy_r_r205;
    CPyTagged cpy_r_idx;
    PyObject *cpy_r_r206;
    tuple_T2OI cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    tuple_T2OO cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    tuple_T2OI cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    CPyTagged cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    if (cpy_r_universe != NULL) goto CPyL163;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_universe = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 541, CPyStatic_dataflow___globals);
        goto CPyL164;
    }
    cpy_r_block_gen = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 542, CPyStatic_dataflow___globals);
        goto CPyL165;
    }
    cpy_r_block_kill = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL5: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL32;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_ops___BasicBlock))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 545, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r8);
        goto CPyL166;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = PySet_New(NULL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 546, CPyStatic_dataflow___globals);
        goto CPyL167;
    }
    cpy_r_gen = cpy_r_r10;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 547, CPyStatic_dataflow___globals);
        goto CPyL168;
    }
    cpy_r_kill = cpy_r_r11;
    cpy_r_r12 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r12);
    cpy_r_ops = cpy_r_r12;
    if (!cpy_r_backward) goto CPyL14;
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 550, CPyStatic_dataflow___globals);
        goto CPyL169;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_ops};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 550, CPyStatic_dataflow___globals);
        goto CPyL169;
    }
    CPy_DECREF(cpy_r_ops);
    cpy_r_r19 = PySequence_List(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 550, CPyStatic_dataflow___globals);
        goto CPyL170;
    }
    cpy_r_ops = cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = 0;
CPyL15: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_ops)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL171;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_ops, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_ops___Op)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 551, CPyStatic_dataflow___globals, "mypyc.ir.ops.Op", cpy_r_r25);
        goto CPyL169;
    }
    cpy_r_op = cpy_r_r26;
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 7, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_op, cpy_r_gen_and_kill); /* accept */
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 552, CPyStatic_dataflow___globals);
        goto CPyL169;
    }
    PyObject *__tmp8617;
    if (unlikely(!(PyTuple_Check(cpy_r_r27) && PyTuple_GET_SIZE(cpy_r_r27) == 2))) {
        __tmp8617 = NULL;
        goto __LL8618;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r27, 0))))
        __tmp8617 = PyTuple_GET_ITEM(cpy_r_r27, 0);
    else {
        __tmp8617 = NULL;
    }
    if (__tmp8617 == NULL) goto __LL8618;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r27, 1))))
        __tmp8617 = PyTuple_GET_ITEM(cpy_r_r27, 1);
    else {
        __tmp8617 = NULL;
    }
    if (__tmp8617 == NULL) goto __LL8618;
    __tmp8617 = cpy_r_r27;
__LL8618: ;
    if (unlikely(__tmp8617 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r27); cpy_r_r28 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8619 = PyTuple_GET_ITEM(cpy_r_r27, 0);
        CPy_INCREF(__tmp8619);
        PyObject *__tmp8620;
        if (likely(PySet_Check(__tmp8619)))
            __tmp8620 = __tmp8619;
        else {
            CPy_TypeError("set", __tmp8619); 
            __tmp8620 = NULL;
        }
        cpy_r_r28.f0 = __tmp8620;
        PyObject *__tmp8621 = PyTuple_GET_ITEM(cpy_r_r27, 1);
        CPy_INCREF(__tmp8621);
        PyObject *__tmp8622;
        if (likely(PySet_Check(__tmp8621)))
            __tmp8622 = __tmp8621;
        else {
            CPy_TypeError("set", __tmp8621); 
            __tmp8622 = NULL;
        }
        cpy_r_r28.f1 = __tmp8622;
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 552, CPyStatic_dataflow___globals);
        goto CPyL169;
    }
    cpy_r_r29 = cpy_r_r28.f0;
    CPy_INCREF(cpy_r_r29);
    cpy_r_opgen = cpy_r_r29;
    cpy_r_r30 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28.f0);
    CPy_DECREF(cpy_r_r28.f1);
    cpy_r_opkill = cpy_r_r30;
    cpy_r_r31 = PyNumber_Subtract(cpy_r_gen, cpy_r_opkill);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 553, CPyStatic_dataflow___globals);
        goto CPyL172;
    }
    if (likely(PySet_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 553, CPyStatic_dataflow___globals, "set", cpy_r_r31);
        goto CPyL172;
    }
    cpy_r_r33 = PyNumber_Or(cpy_r_r32, cpy_r_opgen);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 553, CPyStatic_dataflow___globals);
        goto CPyL172;
    }
    if (likely(PySet_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 553, CPyStatic_dataflow___globals, "set", cpy_r_r33);
        goto CPyL172;
    }
    cpy_r_gen = cpy_r_r34;
    cpy_r_r35 = PyNumber_Subtract(cpy_r_kill, cpy_r_opgen);
    CPy_DECREF(cpy_r_kill);
    CPy_DECREF(cpy_r_opgen);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 554, CPyStatic_dataflow___globals);
        goto CPyL173;
    }
    if (likely(PySet_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 554, CPyStatic_dataflow___globals, "set", cpy_r_r35);
        goto CPyL173;
    }
    cpy_r_r37 = PyNumber_Or(cpy_r_r36, cpy_r_opkill);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_opkill);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 554, CPyStatic_dataflow___globals);
        goto CPyL174;
    }
    if (likely(PySet_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 554, CPyStatic_dataflow___globals, "set", cpy_r_r37);
        goto CPyL174;
    }
    cpy_r_kill = cpy_r_r38;
    cpy_r_r39 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r39;
    goto CPyL15;
CPyL29: ;
    cpy_r_r40 = CPyDict_SetItem(cpy_r_block_gen, cpy_r_block, cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 555, CPyStatic_dataflow___globals);
        goto CPyL175;
    }
    cpy_r_r42 = CPyDict_SetItem(cpy_r_block_kill, cpy_r_block, cpy_r_kill);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_kill);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 556, CPyStatic_dataflow___globals);
        goto CPyL166;
    }
    cpy_r_r44 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r44;
    goto CPyL5;
CPyL32: ;
    cpy_r_r45 = PySequence_List(cpy_r_blocks);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 559, CPyStatic_dataflow___globals);
        goto CPyL166;
    }
    cpy_r_worklist = cpy_r_r45;
    if (cpy_r_backward) goto CPyL38;
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = CPyStatics[9017]; /* -1 */
    cpy_r_r49 = PySlice_New(cpy_r_r46, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 561, CPyStatic_dataflow___globals);
        goto CPyL176;
    }
    cpy_r_r50 = PyObject_GetItem(cpy_r_worklist, cpy_r_r49);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 561, CPyStatic_dataflow___globals);
        goto CPyL166;
    }
    if (likely(PyList_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 561, CPyStatic_dataflow___globals, "list", cpy_r_r50);
        goto CPyL166;
    }
    cpy_r_worklist = cpy_r_r51;
CPyL38: ;
    cpy_r_r52 = PySet_New(cpy_r_worklist);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 562, CPyStatic_dataflow___globals);
        goto CPyL176;
    }
    cpy_r_workset = cpy_r_r52;
    cpy_r_r53 = PyDict_New();
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 563, CPyStatic_dataflow___globals);
        goto CPyL177;
    }
    cpy_r_before = cpy_r_r53;
    cpy_r_r54 = PyDict_New();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 564, CPyStatic_dataflow___globals);
        goto CPyL178;
    }
    cpy_r_after = cpy_r_r54;
    cpy_r_r55 = 0;
CPyL42: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r55 < (Py_ssize_t)cpy_r_r58;
    if (!cpy_r_r59) goto CPyL179;
    cpy_r_r60 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_ops___BasicBlock))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 565, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r60);
        goto CPyL180;
    }
    cpy_r_block = cpy_r_r61;
    cpy_r_r62 = CPyStatic_dataflow___globals;
    cpy_r_r63 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 566, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64); cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 566, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r66 = cpy_r_kind & 1;
    cpy_r_r67 = cpy_r_r66 != 0;
    if (!cpy_r_r67) goto CPyL48;
    cpy_r_r68 = CPyTagged_IsEq_(cpy_r_kind, cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r65);
    if (cpy_r_r68) {
        goto CPyL49;
    } else
        goto CPyL53;
CPyL48: ;
    cpy_r_r69 = cpy_r_kind == cpy_r_r65;
    CPyTagged_DECREF(cpy_r_r65);
    if (!cpy_r_r69) goto CPyL53;
CPyL49: ;
    cpy_r_r70 = PySet_New(NULL);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 567, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r71 = CPyDict_SetItem(cpy_r_before, cpy_r_block, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 567, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r73 = PySet_New(NULL);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 568, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r74 = CPyDict_SetItem(cpy_r_after, cpy_r_block, cpy_r_r73);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 568, CPyStatic_dataflow___globals);
        goto CPyL180;
    } else
        goto CPyL62;
CPyL53: ;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_universe != cpy_r_r76;
    if (cpy_r_r77) {
        goto CPyL56;
    } else
        goto CPyL182;
CPyL54: ;
    PyErr_SetString(PyExc_AssertionError, "Universe must be defined for a must analysis");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 570, CPyStatic_dataflow___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL56: ;
    CPy_INCREF(cpy_r_universe);
    if (likely(cpy_r_universe != Py_None))
        cpy_r_r79 = cpy_r_universe;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 571, CPyStatic_dataflow___globals, "set", cpy_r_universe);
        goto CPyL181;
    }
    cpy_r_r80 = PySet_New(cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 571, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r81 = CPyDict_SetItem(cpy_r_before, cpy_r_block, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 571, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_universe);
    if (likely(cpy_r_universe != Py_None))
        cpy_r_r83 = cpy_r_universe;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 572, CPyStatic_dataflow___globals, "set", cpy_r_universe);
        goto CPyL181;
    }
    cpy_r_r84 = PySet_New(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 572, CPyStatic_dataflow___globals);
        goto CPyL181;
    }
    cpy_r_r85 = CPyDict_SetItem(cpy_r_after, cpy_r_block, cpy_r_r84);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 572, CPyStatic_dataflow___globals);
        goto CPyL180;
    }
CPyL62: ;
    cpy_r_r87 = cpy_r_r55 + 2;
    cpy_r_r55 = cpy_r_r87;
    goto CPyL42;
CPyL63: ;
    if (!cpy_r_backward) goto CPyL65;
    cpy_r_r88 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_cfg)->_succ;
    CPy_INCREF(cpy_r_r88);
    cpy_r_pred_map = cpy_r_r88;
    cpy_r_r89 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_cfg)->_pred;
    CPy_INCREF(cpy_r_r89);
    cpy_r_succ_map = cpy_r_r89;
    goto CPyL66;
CPyL65: ;
    cpy_r_r90 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_cfg)->_pred;
    CPy_INCREF(cpy_r_r90);
    cpy_r_pred_map = cpy_r_r90;
    cpy_r_r91 = ((mypyc___analysis___dataflow___CFGObject *)cpy_r_cfg)->_succ;
    CPy_INCREF(cpy_r_r91);
    cpy_r_succ_map = cpy_r_r91;
CPyL66: ;
    cpy_r_r92 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r93 = *(int64_t *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 << 1;
    cpy_r_r95 = cpy_r_r94 != 0;
    if (!cpy_r_r95) goto CPyL183;
    cpy_r_r96 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 583, CPyStatic_dataflow___globals);
        goto CPyL184;
    }
    if (likely(Py_TYPE(cpy_r_r96) == CPyType_ops___BasicBlock))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 583, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r96);
        goto CPyL184;
    }
    cpy_r_label = cpy_r_r97;
    cpy_r_r98 = CPySet_Remove(cpy_r_workset, cpy_r_label);
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 584, CPyStatic_dataflow___globals);
        goto CPyL185;
    }
    cpy_r_r99 = CPyDict_GetItem(cpy_r_pred_map, cpy_r_label);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 585, CPyStatic_dataflow___globals);
        goto CPyL185;
    }
    if (likely(PyList_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 585, CPyStatic_dataflow___globals, "list", cpy_r_r99);
        goto CPyL185;
    }
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    CPy_DECREF(cpy_r_r100);
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = cpy_r_r103 != 0;
    if (!cpy_r_r104) goto CPyL102;
    cpy_r_r105 = Py_None;
    CPy_INCREF(cpy_r_r105);
    cpy_r_new_before = cpy_r_r105;
    cpy_r_r106 = CPyDict_GetItem(cpy_r_pred_map, cpy_r_label);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 587, CPyStatic_dataflow___globals);
        goto CPyL186;
    }
    if (likely(PyList_Check(cpy_r_r106)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 587, CPyStatic_dataflow___globals, "list", cpy_r_r106);
        goto CPyL186;
    }
    cpy_r_r108 = 0;
CPyL76: ;
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_r107)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = (Py_ssize_t)cpy_r_r108 < (Py_ssize_t)cpy_r_r111;
    if (!cpy_r_r112) goto CPyL187;
    cpy_r_r113 = CPyList_GetItemUnsafe(cpy_r_r107, cpy_r_r108);
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_ops___BasicBlock))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 587, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r113);
        goto CPyL188;
    }
    cpy_r_pred = cpy_r_r114;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = cpy_r_new_before == cpy_r_r115;
    if (cpy_r_r116) {
        goto CPyL189;
    } else
        goto CPyL83;
CPyL79: ;
    cpy_r_r117 = CPyDict_GetItem(cpy_r_after, cpy_r_pred);
    CPy_DECREF(cpy_r_pred);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 589, CPyStatic_dataflow___globals);
        goto CPyL190;
    }
    if (likely(PySet_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 589, CPyStatic_dataflow___globals, "set", cpy_r_r117);
        goto CPyL190;
    }
    cpy_r_r119 = PySet_New(cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 589, CPyStatic_dataflow___globals);
        goto CPyL190;
    }
    cpy_r_new_before = cpy_r_r119;
    goto CPyL98;
CPyL83: ;
    cpy_r_r120 = CPyStatic_dataflow___globals;
    cpy_r_r121 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r122 = CPyDict_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 590, CPyStatic_dataflow___globals);
        goto CPyL191;
    }
    if (likely(PyLong_Check(cpy_r_r122)))
        cpy_r_r123 = CPyTagged_FromObject(cpy_r_r122);
    else {
        CPy_TypeError("int", cpy_r_r122); cpy_r_r123 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 590, CPyStatic_dataflow___globals);
        goto CPyL191;
    }
    cpy_r_r124 = cpy_r_kind & 1;
    cpy_r_r125 = cpy_r_r124 != 0;
    if (!cpy_r_r125) goto CPyL87;
    cpy_r_r126 = CPyTagged_IsEq_(cpy_r_kind, cpy_r_r123);
    CPyTagged_DECREF(cpy_r_r123);
    if (cpy_r_r126) {
        goto CPyL88;
    } else
        goto CPyL93;
CPyL87: ;
    cpy_r_r127 = cpy_r_kind == cpy_r_r123;
    CPyTagged_DECREF(cpy_r_r123);
    if (!cpy_r_r127) goto CPyL93;
CPyL88: ;
    cpy_r_r128 = CPyDict_GetItem(cpy_r_after, cpy_r_pred);
    CPy_DECREF(cpy_r_pred);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 591, CPyStatic_dataflow___globals);
        goto CPyL188;
    }
    if (likely(PySet_Check(cpy_r_r128)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 591, CPyStatic_dataflow___globals, "set", cpy_r_r128);
        goto CPyL188;
    }
    cpy_r_r130 = PyNumber_InPlaceOr(cpy_r_new_before, cpy_r_r129);
    CPy_DECREF(cpy_r_new_before);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 591, CPyStatic_dataflow___globals);
        goto CPyL190;
    }
    if (PySet_Check(cpy_r_r130))
        cpy_r_r131 = cpy_r_r130;
    else {
        cpy_r_r131 = NULL;
    }
    if (cpy_r_r131 != NULL) goto __LL8623;
    if (cpy_r_r130 == Py_None)
        cpy_r_r131 = cpy_r_r130;
    else {
        cpy_r_r131 = NULL;
    }
    if (cpy_r_r131 != NULL) goto __LL8623;
    CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 591, CPyStatic_dataflow___globals, "set or None", cpy_r_r130);
    goto CPyL190;
__LL8623: ;
    cpy_r_new_before = cpy_r_r131;
    goto CPyL98;
CPyL93: ;
    cpy_r_r132 = CPyDict_GetItem(cpy_r_after, cpy_r_pred);
    CPy_DECREF(cpy_r_pred);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 593, CPyStatic_dataflow___globals);
        goto CPyL188;
    }
    if (likely(PySet_Check(cpy_r_r132)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 593, CPyStatic_dataflow___globals, "set", cpy_r_r132);
        goto CPyL188;
    }
    cpy_r_r134 = PyNumber_InPlaceAnd(cpy_r_new_before, cpy_r_r133);
    CPy_DECREF(cpy_r_new_before);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 593, CPyStatic_dataflow___globals);
        goto CPyL190;
    }
    if (PySet_Check(cpy_r_r134))
        cpy_r_r135 = cpy_r_r134;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL8624;
    if (cpy_r_r134 == Py_None)
        cpy_r_r135 = cpy_r_r134;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL8624;
    CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 593, CPyStatic_dataflow___globals, "set or None", cpy_r_r134);
    goto CPyL190;
__LL8624: ;
    cpy_r_new_before = cpy_r_r135;
CPyL98: ;
    cpy_r_r136 = cpy_r_r108 + 2;
    cpy_r_r108 = cpy_r_r136;
    goto CPyL76;
CPyL99: ;
    cpy_r_r137 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r138 = cpy_r_new_before != cpy_r_r137;
    if (cpy_r_r138) {
        goto CPyL104;
    } else
        goto CPyL192;
CPyL100: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 594, CPyStatic_dataflow___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r140 = PySet_New(cpy_r_initial);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 596, CPyStatic_dataflow___globals);
        goto CPyL185;
    }
    cpy_r_new_before = cpy_r_r140;
CPyL104: ;
    CPy_INCREF(cpy_r_new_before);
    if (likely(cpy_r_new_before != Py_None))
        cpy_r_r141 = cpy_r_new_before;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 597, CPyStatic_dataflow___globals, "set", cpy_r_new_before);
        goto CPyL186;
    }
    cpy_r_r142 = CPyDict_SetItem(cpy_r_before, cpy_r_label, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 597, CPyStatic_dataflow___globals);
        goto CPyL186;
    }
    if (likely(cpy_r_new_before != Py_None))
        cpy_r_r144 = cpy_r_new_before;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals, "set", cpy_r_new_before);
        goto CPyL185;
    }
    cpy_r_r145 = CPyDict_GetItem(cpy_r_block_kill, cpy_r_label);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals);
        goto CPyL193;
    }
    if (likely(PySet_Check(cpy_r_r145)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals, "set", cpy_r_r145);
        goto CPyL193;
    }
    cpy_r_r147 = PyNumber_Subtract(cpy_r_r144, cpy_r_r146);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals);
        goto CPyL185;
    }
    if (likely(PySet_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals, "set", cpy_r_r147);
        goto CPyL185;
    }
    cpy_r_r149 = CPyDict_GetItem(cpy_r_block_gen, cpy_r_label);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals);
        goto CPyL194;
    }
    if (likely(PySet_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals, "set", cpy_r_r149);
        goto CPyL194;
    }
    cpy_r_r151 = PyNumber_Or(cpy_r_r148, cpy_r_r150);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals);
        goto CPyL185;
    }
    if (likely(PySet_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 598, CPyStatic_dataflow___globals, "set", cpy_r_r151);
        goto CPyL185;
    }
    cpy_r_new_after = cpy_r_r152;
    cpy_r_r153 = CPyDict_GetItem(cpy_r_after, cpy_r_label);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 599, CPyStatic_dataflow___globals);
        goto CPyL195;
    }
    if (likely(PySet_Check(cpy_r_r153)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 599, CPyStatic_dataflow___globals, "set", cpy_r_r153);
        goto CPyL195;
    }
    cpy_r_r155 = PyObject_RichCompare(cpy_r_new_after, cpy_r_r154, 3);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 599, CPyStatic_dataflow___globals);
        goto CPyL195;
    }
    if (unlikely(!PyBool_Check(cpy_r_r155))) {
        CPy_TypeError("bool", cpy_r_r155); cpy_r_r156 = 2;
    } else
        cpy_r_r156 = cpy_r_r155 == Py_True;
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 599, CPyStatic_dataflow___globals);
        goto CPyL195;
    }
    if (!cpy_r_r156) goto CPyL130;
    cpy_r_r157 = CPyDict_GetItem(cpy_r_succ_map, cpy_r_label);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 600, CPyStatic_dataflow___globals);
        goto CPyL195;
    }
    if (likely(PyList_Check(cpy_r_r157)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 600, CPyStatic_dataflow___globals, "list", cpy_r_r157);
        goto CPyL195;
    }
    cpy_r_r159 = 0;
CPyL123: ;
    cpy_r_r160 = (CPyPtr)&((PyVarObject *)cpy_r_r158)->ob_size;
    cpy_r_r161 = *(int64_t *)cpy_r_r160;
    cpy_r_r162 = cpy_r_r161 << 1;
    cpy_r_r163 = (Py_ssize_t)cpy_r_r159 < (Py_ssize_t)cpy_r_r162;
    if (!cpy_r_r163) goto CPyL196;
    cpy_r_r164 = CPyList_GetItemUnsafe(cpy_r_r158, cpy_r_r159);
    if (likely(Py_TYPE(cpy_r_r164) == CPyType_ops___BasicBlock))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 600, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r164);
        goto CPyL197;
    }
    cpy_r_succ = cpy_r_r165;
    cpy_r_r166 = PySet_Contains(cpy_r_workset, cpy_r_succ);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 601, CPyStatic_dataflow___globals);
        goto CPyL198;
    }
    cpy_r_r168 = cpy_r_r166;
    cpy_r_r169 = cpy_r_r168 ^ 1;
    if (!cpy_r_r169) goto CPyL199;
    cpy_r_r170 = PyList_Append(cpy_r_worklist, cpy_r_succ);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 602, CPyStatic_dataflow___globals);
        goto CPyL198;
    }
    cpy_r_r172 = PySet_Add(cpy_r_workset, cpy_r_succ);
    CPy_DECREF(cpy_r_succ);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 603, CPyStatic_dataflow___globals);
        goto CPyL197;
    }
CPyL129: ;
    cpy_r_r174 = cpy_r_r159 + 2;
    cpy_r_r159 = cpy_r_r174;
    goto CPyL123;
CPyL130: ;
    cpy_r_r175 = CPyDict_SetItem(cpy_r_after, cpy_r_label, cpy_r_new_after);
    CPy_DECREF(cpy_r_label);
    CPy_DECREF(cpy_r_new_after);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 604, CPyStatic_dataflow___globals);
        goto CPyL184;
    } else
        goto CPyL66;
CPyL131: ;
    cpy_r_r177 = PyDict_New();
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 607, CPyStatic_dataflow___globals);
        goto CPyL200;
    }
    cpy_r_op_before = cpy_r_r177;
    cpy_r_r178 = PyDict_New();
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 608, CPyStatic_dataflow___globals);
        goto CPyL201;
    }
    cpy_r_op_after = cpy_r_r178;
    cpy_r_r179 = 0;
CPyL134: ;
    cpy_r_r180 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r181 = *(int64_t *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r181 << 1;
    cpy_r_r183 = (Py_ssize_t)cpy_r_r179 < (Py_ssize_t)cpy_r_r182;
    if (!cpy_r_r183) goto CPyL202;
    cpy_r_r184 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r179);
    if (likely(Py_TYPE(cpy_r_r184) == CPyType_ops___BasicBlock))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 609, CPyStatic_dataflow___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r184);
        goto CPyL203;
    }
    cpy_r_block = cpy_r_r185;
    CPy_INCREF(cpy_r_block);
    cpy_r_label = cpy_r_block;
    cpy_r_r186 = CPyDict_GetItem(cpy_r_before, cpy_r_label);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 611, CPyStatic_dataflow___globals);
        goto CPyL204;
    }
    if (likely(PySet_Check(cpy_r_r186)))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 611, CPyStatic_dataflow___globals, "set", cpy_r_r186);
        goto CPyL204;
    }
    cpy_r_cur = cpy_r_r187;
    cpy_r_r188 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r188);
    CPy_DECREF(cpy_r_block);
    cpy_r_r189 = CPyModule_builtins;
    cpy_r_r190 = CPyStatics[4484]; /* 'enumerate' */
    cpy_r_r191 = CPyObject_GetAttr(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 612, CPyStatic_dataflow___globals);
        goto CPyL205;
    }
    PyObject *cpy_r_r192[1] = {cpy_r_r188};
    cpy_r_r193 = (PyObject **)&cpy_r_r192;
    cpy_r_r194 = _PyObject_Vectorcall(cpy_r_r191, cpy_r_r193, 1, 0);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 612, CPyStatic_dataflow___globals);
        goto CPyL205;
    }
    CPy_DECREF(cpy_r_r188);
    cpy_r_ops_enum = cpy_r_r194;
    if (!cpy_r_backward) goto CPyL145;
    cpy_r_r195 = PySequence_List(cpy_r_ops_enum);
    CPy_DECREF(cpy_r_ops_enum);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 614, CPyStatic_dataflow___globals);
        goto CPyL206;
    }
    cpy_r_r196 = CPyModule_builtins;
    cpy_r_r197 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r198 = CPyObject_GetAttr(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 614, CPyStatic_dataflow___globals);
        goto CPyL207;
    }
    PyObject *cpy_r_r199[1] = {cpy_r_r195};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = _PyObject_Vectorcall(cpy_r_r198, cpy_r_r200, 1, 0);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 614, CPyStatic_dataflow___globals);
        goto CPyL207;
    }
    CPy_DECREF(cpy_r_r195);
    cpy_r_ops_enum = cpy_r_r201;
CPyL145: ;
    cpy_r_r202 = PyObject_GetIter(cpy_r_ops_enum);
    CPy_DECREF(cpy_r_ops_enum);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 615, CPyStatic_dataflow___globals);
        goto CPyL206;
    }
CPyL146: ;
    cpy_r_r203 = PyIter_Next(cpy_r_r202);
    if (cpy_r_r203 == NULL) goto CPyL208;
    PyObject *__tmp8625;
    if (unlikely(!(PyTuple_Check(cpy_r_r203) && PyTuple_GET_SIZE(cpy_r_r203) == 2))) {
        __tmp8625 = NULL;
        goto __LL8626;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r203, 0))))
        __tmp8625 = PyTuple_GET_ITEM(cpy_r_r203, 0);
    else {
        __tmp8625 = NULL;
    }
    if (__tmp8625 == NULL) goto __LL8626;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r203, 1), CPyType_ops___Op)))
        __tmp8625 = PyTuple_GET_ITEM(cpy_r_r203, 1);
    else {
        __tmp8625 = NULL;
    }
    if (__tmp8625 == NULL) goto __LL8626;
    __tmp8625 = cpy_r_r203;
__LL8626: ;
    if (unlikely(__tmp8625 == NULL)) {
        CPy_TypeError("tuple[int, mypyc.ir.ops.Op]", cpy_r_r203); cpy_r_r204 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp8627 = PyTuple_GET_ITEM(cpy_r_r203, 0);
        CPyTagged __tmp8628;
        if (likely(PyLong_Check(__tmp8627)))
            __tmp8628 = CPyTagged_FromObject(__tmp8627);
        else {
            CPy_TypeError("int", __tmp8627); __tmp8628 = CPY_INT_TAG;
        }
        cpy_r_r204.f0 = __tmp8628;
        PyObject *__tmp8629 = PyTuple_GET_ITEM(cpy_r_r203, 1);
        CPy_INCREF(__tmp8629);
        PyObject *__tmp8630;
        if (likely(PyObject_TypeCheck(__tmp8629, CPyType_ops___Op)))
            __tmp8630 = __tmp8629;
        else {
            CPy_TypeError("mypyc.ir.ops.Op", __tmp8629); 
            __tmp8630 = NULL;
        }
        cpy_r_r204.f1 = __tmp8630;
    }
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 615, CPyStatic_dataflow___globals);
        goto CPyL209;
    }
    cpy_r_r205 = cpy_r_r204.f0;
    CPyTagged_INCREF(cpy_r_r205);
    cpy_r_idx = cpy_r_r205;
    cpy_r_r206 = cpy_r_r204.f1;
    CPy_INCREF(cpy_r_r206);
    CPyTagged_DECREF(cpy_r_r204.f0);
    CPy_DECREF(cpy_r_r204.f1);
    cpy_r_op = cpy_r_r206;
    cpy_r_r207.f0 = cpy_r_label;
    cpy_r_r207.f1 = cpy_r_idx;
    CPy_INCREF(cpy_r_r207.f0);
    CPyTagged_INCREF(cpy_r_r207.f1);
    cpy_r_r208 = PyTuple_New(2);
    if (unlikely(cpy_r_r208 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8631 = cpy_r_r207.f0;
    PyTuple_SET_ITEM(cpy_r_r208, 0, __tmp8631);
    PyObject *__tmp8632 = CPyTagged_StealAsObject(cpy_r_r207.f1);
    PyTuple_SET_ITEM(cpy_r_r208, 1, __tmp8632);
    cpy_r_r209 = CPyDict_SetItem(cpy_r_op_before, cpy_r_r208, cpy_r_cur);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 616, CPyStatic_dataflow___globals);
        goto CPyL210;
    }
    cpy_r_r211 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 7, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_op, cpy_r_gen_and_kill); /* accept */
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 617, CPyStatic_dataflow___globals);
        goto CPyL211;
    }
    PyObject *__tmp8633;
    if (unlikely(!(PyTuple_Check(cpy_r_r211) && PyTuple_GET_SIZE(cpy_r_r211) == 2))) {
        __tmp8633 = NULL;
        goto __LL8634;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r211, 0))))
        __tmp8633 = PyTuple_GET_ITEM(cpy_r_r211, 0);
    else {
        __tmp8633 = NULL;
    }
    if (__tmp8633 == NULL) goto __LL8634;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r211, 1))))
        __tmp8633 = PyTuple_GET_ITEM(cpy_r_r211, 1);
    else {
        __tmp8633 = NULL;
    }
    if (__tmp8633 == NULL) goto __LL8634;
    __tmp8633 = cpy_r_r211;
__LL8634: ;
    if (unlikely(__tmp8633 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r211); cpy_r_r212 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8635 = PyTuple_GET_ITEM(cpy_r_r211, 0);
        CPy_INCREF(__tmp8635);
        PyObject *__tmp8636;
        if (likely(PySet_Check(__tmp8635)))
            __tmp8636 = __tmp8635;
        else {
            CPy_TypeError("set", __tmp8635); 
            __tmp8636 = NULL;
        }
        cpy_r_r212.f0 = __tmp8636;
        PyObject *__tmp8637 = PyTuple_GET_ITEM(cpy_r_r211, 1);
        CPy_INCREF(__tmp8637);
        PyObject *__tmp8638;
        if (likely(PySet_Check(__tmp8637)))
            __tmp8638 = __tmp8637;
        else {
            CPy_TypeError("set", __tmp8637); 
            __tmp8638 = NULL;
        }
        cpy_r_r212.f1 = __tmp8638;
    }
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 617, CPyStatic_dataflow___globals);
        goto CPyL211;
    }
    cpy_r_r213 = cpy_r_r212.f0;
    CPy_INCREF(cpy_r_r213);
    cpy_r_opgen = cpy_r_r213;
    cpy_r_r214 = cpy_r_r212.f1;
    CPy_INCREF(cpy_r_r214);
    CPy_DECREF(cpy_r_r212.f0);
    CPy_DECREF(cpy_r_r212.f1);
    cpy_r_opkill = cpy_r_r214;
    cpy_r_r215 = PyNumber_Subtract(cpy_r_cur, cpy_r_opkill);
    CPy_DECREF(cpy_r_cur);
    CPy_DECREF(cpy_r_opkill);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 618, CPyStatic_dataflow___globals);
        goto CPyL212;
    }
    if (likely(PySet_Check(cpy_r_r215)))
        cpy_r_r216 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 618, CPyStatic_dataflow___globals, "set", cpy_r_r215);
        goto CPyL212;
    }
    cpy_r_r217 = PyNumber_Or(cpy_r_r216, cpy_r_opgen);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_opgen);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 618, CPyStatic_dataflow___globals);
        goto CPyL213;
    }
    if (likely(PySet_Check(cpy_r_r217)))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/dataflow.py", "run_analysis", 618, CPyStatic_dataflow___globals, "set", cpy_r_r217);
        goto CPyL213;
    }
    cpy_r_cur = cpy_r_r218;
    cpy_r_r219.f0 = cpy_r_label;
    cpy_r_r219.f1 = cpy_r_idx;
    CPy_INCREF(cpy_r_r219.f0);
    CPyTagged_INCREF(cpy_r_r219.f1);
    CPyTagged_DECREF(cpy_r_idx);
    cpy_r_r220 = PyTuple_New(2);
    if (unlikely(cpy_r_r220 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8639 = cpy_r_r219.f0;
    PyTuple_SET_ITEM(cpy_r_r220, 0, __tmp8639);
    PyObject *__tmp8640 = CPyTagged_StealAsObject(cpy_r_r219.f1);
    PyTuple_SET_ITEM(cpy_r_r220, 1, __tmp8640);
    cpy_r_r221 = CPyDict_SetItem(cpy_r_op_after, cpy_r_r220, cpy_r_cur);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 619, CPyStatic_dataflow___globals);
        goto CPyL209;
    } else
        goto CPyL146;
CPyL156: ;
    cpy_r_r223 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 615, CPyStatic_dataflow___globals);
        goto CPyL203;
    }
    cpy_r_r224 = cpy_r_r179 + 2;
    cpy_r_r179 = cpy_r_r224;
    goto CPyL134;
CPyL158: ;
    if (!cpy_r_backward) goto CPyL160;
    cpy_r_r225 = cpy_r_op_before;
    cpy_r_r226 = cpy_r_op_after;
    cpy_r_op_after = cpy_r_r225;
    cpy_r_op_before = cpy_r_r226;
CPyL160: ;
    cpy_r_r227 = CPyDef_dataflow___AnalysisResult(cpy_r_op_before, cpy_r_op_after);
    CPy_DECREF(cpy_r_op_before);
    CPy_DECREF(cpy_r_op_after);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 623, CPyStatic_dataflow___globals);
        goto CPyL162;
    }
    return cpy_r_r227;
CPyL162: ;
    cpy_r_r228 = NULL;
    return cpy_r_r228;
CPyL163: ;
    CPy_INCREF(cpy_r_universe);
    goto CPyL2;
CPyL164: ;
    CPy_DecRef(cpy_r_universe);
    goto CPyL162;
CPyL165: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    goto CPyL162;
CPyL166: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    goto CPyL162;
CPyL167: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    goto CPyL162;
CPyL168: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_gen);
    goto CPyL162;
CPyL169: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_kill);
    CPy_DecRef(cpy_r_ops);
    goto CPyL162;
CPyL170: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_kill);
    goto CPyL162;
CPyL171: ;
    CPy_DECREF(cpy_r_ops);
    goto CPyL29;
CPyL172: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_kill);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_opgen);
    CPy_DecRef(cpy_r_opkill);
    goto CPyL162;
CPyL173: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_opkill);
    goto CPyL162;
CPyL174: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_ops);
    goto CPyL162;
CPyL175: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_kill);
    goto CPyL162;
CPyL176: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL162;
CPyL177: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    goto CPyL162;
CPyL178: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    goto CPyL162;
CPyL179: ;
    CPy_DECREF(cpy_r_universe);
    goto CPyL63;
CPyL180: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    goto CPyL162;
CPyL181: ;
    CPy_DecRef(cpy_r_universe);
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    goto CPyL162;
CPyL182: ;
    CPy_DECREF(cpy_r_universe);
    CPy_DECREF(cpy_r_block_gen);
    CPy_DECREF(cpy_r_block_kill);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_workset);
    CPy_DECREF(cpy_r_before);
    CPy_DECREF(cpy_r_after);
    goto CPyL54;
CPyL183: ;
    CPy_DECREF(cpy_r_block_gen);
    CPy_DECREF(cpy_r_block_kill);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_workset);
    CPy_DECREF(cpy_r_after);
    CPy_DECREF(cpy_r_pred_map);
    CPy_DECREF(cpy_r_succ_map);
    goto CPyL131;
CPyL184: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    goto CPyL162;
CPyL185: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    goto CPyL162;
CPyL186: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_before);
    goto CPyL162;
CPyL187: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL99;
CPyL188: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_before);
    CPy_DecRef(cpy_r_r107);
    goto CPyL162;
CPyL189: ;
    CPy_DECREF(cpy_r_new_before);
    goto CPyL79;
CPyL190: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r107);
    goto CPyL162;
CPyL191: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_before);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_pred);
    goto CPyL162;
CPyL192: ;
    CPy_DECREF(cpy_r_block_gen);
    CPy_DECREF(cpy_r_block_kill);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_workset);
    CPy_DECREF(cpy_r_before);
    CPy_DECREF(cpy_r_after);
    CPy_DECREF(cpy_r_pred_map);
    CPy_DECREF(cpy_r_succ_map);
    CPy_DECREF(cpy_r_label);
    CPy_DECREF(cpy_r_new_before);
    goto CPyL100;
CPyL193: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r144);
    goto CPyL162;
CPyL194: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r148);
    goto CPyL162;
CPyL195: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_after);
    goto CPyL162;
CPyL196: ;
    CPy_DECREF(cpy_r_r158);
    goto CPyL130;
CPyL197: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_after);
    CPy_DecRef(cpy_r_r158);
    goto CPyL162;
CPyL198: ;
    CPy_DecRef(cpy_r_block_gen);
    CPy_DecRef(cpy_r_block_kill);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_workset);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_after);
    CPy_DecRef(cpy_r_pred_map);
    CPy_DecRef(cpy_r_succ_map);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_new_after);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_succ);
    goto CPyL162;
CPyL199: ;
    CPy_DECREF(cpy_r_succ);
    goto CPyL129;
CPyL200: ;
    CPy_DecRef(cpy_r_before);
    goto CPyL162;
CPyL201: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_op_before);
    goto CPyL162;
CPyL202: ;
    CPy_DECREF(cpy_r_before);
    goto CPyL158;
CPyL203: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    goto CPyL162;
CPyL204: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    goto CPyL162;
CPyL205: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_r188);
    goto CPyL162;
CPyL206: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    goto CPyL162;
CPyL207: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_r195);
    goto CPyL162;
CPyL208: ;
    CPy_DECREF(cpy_r_label);
    CPy_DECREF(cpy_r_cur);
    CPy_DECREF(cpy_r_r202);
    goto CPyL156;
CPyL209: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_r202);
    goto CPyL162;
CPyL210: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_r202);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL162;
CPyL211: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_r202);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL162;
CPyL212: ;
    CPy_DecRef(cpy_r_opgen);
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_r202);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL162;
CPyL213: ;
    CPy_DecRef(cpy_r_before);
    CPy_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_op_before);
    CPy_DecRef(cpy_r_op_after);
    CPy_DecRef(cpy_r_r202);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL162;
}

PyObject *CPyPy_dataflow___run_analysis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "cfg", "gen_and_kill", "initial", "kind", "backward", "universe", 0};
    static CPyArg_Parser parser = {"OOOOOO|O:run_analysis", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_cfg;
    PyObject *obj_gen_and_kill;
    PyObject *obj_initial;
    PyObject *obj_kind;
    PyObject *obj_backward;
    PyObject *obj_universe = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_cfg, &obj_gen_and_kill, &obj_initial, &obj_kind, &obj_backward, &obj_universe)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *arg_gen_and_kill;
    if (likely(PyObject_TypeCheck(obj_gen_and_kill, CPyType_ops___OpVisitor)))
        arg_gen_and_kill = obj_gen_and_kill;
    else {
        CPy_TypeError("mypyc.ir.ops.OpVisitor", obj_gen_and_kill); 
        goto fail;
    }
    PyObject *arg_initial;
    if (likely(PySet_Check(obj_initial)))
        arg_initial = obj_initial;
    else {
        CPy_TypeError("set", obj_initial); 
        goto fail;
    }
    CPyTagged arg_kind;
    if (likely(PyLong_Check(obj_kind)))
        arg_kind = CPyTagged_BorrowFromObject(obj_kind);
    else {
        CPy_TypeError("int", obj_kind); goto fail;
    }
    char arg_backward;
    if (unlikely(!PyBool_Check(obj_backward))) {
        CPy_TypeError("bool", obj_backward); goto fail;
    } else
        arg_backward = obj_backward == Py_True;
    PyObject *arg_universe;
    if (obj_universe == NULL) {
        arg_universe = NULL;
        goto __LL8641;
    }
    if (PySet_Check(obj_universe))
        arg_universe = obj_universe;
    else {
        arg_universe = NULL;
    }
    if (arg_universe != NULL) goto __LL8641;
    if (obj_universe == Py_None)
        arg_universe = obj_universe;
    else {
        arg_universe = NULL;
    }
    if (arg_universe != NULL) goto __LL8641;
    CPy_TypeError("set or None", obj_universe); 
    goto fail;
__LL8641: ;
    PyObject *retval = CPyDef_dataflow___run_analysis(arg_blocks, arg_cfg, arg_gen_and_kill, arg_initial, arg_kind, arg_backward, arg_universe);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/dataflow.py", "run_analysis", 515, CPyStatic_dataflow___globals);
    return NULL;
}

char CPyDef_dataflow_____top_level__(void) {
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
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
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
    PyObject *cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    tuple_T2OO cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
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
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T2OO cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
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
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    int32_t cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    char cpy_r_r227;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dataflow___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 3, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_dataflow___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 5, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9908]; /* ('Dict', 'Generic', 'Iterable', 'Iterator', 'Set',
                                     'Tuple', 'TypeVar') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_dataflow___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 6, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9909]; /* ('all_values',) */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_dataflow___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 8, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9910]; /* ('Assign', 'AssignMulti', 'BasicBlock', 'Box', 'Branch',
                                     'Call', 'CallC', 'Cast', 'ComparisonOp', 'ControlOp',
                                     'Extend', 'Float', 'FloatComparisonOp', 'FloatNeg',
                                     'FloatOp', 'GetAttr', 'GetElementPtr', 'Goto',
                                     'InitStatic', 'Integer', 'IntOp', 'KeepAlive',
                                     'LoadAddress', 'LoadErrorValue', 'LoadGlobal',
                                     'LoadLiteral', 'LoadMem', 'LoadStatic', 'MethodCall',
                                     'Op', 'OpVisitor', 'RaiseStandardError', 'RegisterOp',
                                     'Return', 'SetAttr', 'SetMem', 'Truncate', 'TupleGet',
                                     'TupleSet', 'Unbox', 'Unreachable', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_dataflow___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 9, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r27 = (PyObject *)CPyType_dataflow___CFG_template;
    cpy_r_r28 = CPyType_FromTemplate(cpy_r_r27, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 55, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r29 = CPyDef_dataflow___CFG_trait_vtable_setup();
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL84;
    }
    cpy_r_r30 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r31 = CPyStatics[6721]; /* 'succ' */
    cpy_r_r32 = CPyStatics[6722]; /* 'pred' */
    cpy_r_r33 = CPyStatics[6723]; /* 'exits' */
    cpy_r_r34 = PyTuple_Pack(3, cpy_r_r31, cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 55, CPyStatic_dataflow___globals);
        goto CPyL84;
    }
    cpy_r_r35 = PyObject_SetAttr(cpy_r_r28, cpy_r_r30, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 55, CPyStatic_dataflow___globals);
        goto CPyL84;
    }
    CPyType_dataflow___CFG = (PyTypeObject *)cpy_r_r28;
    CPy_INCREF(CPyType_dataflow___CFG);
    cpy_r_r37 = CPyStatic_dataflow___globals;
    cpy_r_r38 = CPyStatics[6653]; /* 'CFG' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 55, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r41 = CPyStatics[1088]; /* 'T' */
    cpy_r_r42 = CPyStatic_dataflow___globals;
    cpy_r_r43 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 157, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    PyObject *cpy_r_r45[1] = {cpy_r_r41};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 157, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r48 = CPyStatic_dataflow___globals;
    cpy_r_r49 = CPyStatics[1088]; /* 'T' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 157, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r52 = CPyStatic_dataflow___globals;
    cpy_r_r53 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r55 = CPyStatic_dataflow___globals;
    cpy_r_r56 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL85;
    }
    cpy_r_r58 = (PyObject *)CPyType_ops___BasicBlock;
    cpy_r_r59 = (PyObject *)&PyLong_Type;
    cpy_r_r60.f0 = cpy_r_r58;
    cpy_r_r60.f1 = cpy_r_r59;
    CPy_INCREF(cpy_r_r60.f0);
    CPy_INCREF(cpy_r_r60.f1);
    cpy_r_r61 = PyTuple_New(2);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8642 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp8642);
    PyObject *__tmp8643 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp8643);
    cpy_r_r62 = PyObject_GetItem(cpy_r_r57, cpy_r_r61);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL85;
    }
    cpy_r_r63 = CPyStatic_dataflow___globals;
    cpy_r_r64 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL86;
    }
    cpy_r_r66 = CPyStatic_dataflow___globals;
    cpy_r_r67 = CPyStatics[1088]; /* 'T' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL87;
    }
    cpy_r_r69 = PyObject_GetItem(cpy_r_r65, cpy_r_r68);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL86;
    }
    cpy_r_r70.f0 = cpy_r_r62;
    cpy_r_r70.f1 = cpy_r_r69;
    CPy_INCREF(cpy_r_r70.f0);
    CPy_INCREF(cpy_r_r70.f1);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = PyTuple_New(2);
    if (unlikely(cpy_r_r71 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8644 = cpy_r_r70.f0;
    PyTuple_SET_ITEM(cpy_r_r71, 0, __tmp8644);
    PyObject *__tmp8645 = cpy_r_r70.f1;
    PyTuple_SET_ITEM(cpy_r_r71, 1, __tmp8645);
    cpy_r_r72 = PyObject_GetItem(cpy_r_r54, cpy_r_r71);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r73 = CPyStatic_dataflow___globals;
    cpy_r_r74 = CPyStatics[6724]; /* 'AnalysisDict' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 159, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r77 = CPyStatic_dataflow___globals;
    cpy_r_r78 = CPyStatics[900]; /* 'Generic' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r80 = CPyStatic_dataflow___globals;
    cpy_r_r81 = CPyStatics[1088]; /* 'T' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL88;
    }
    cpy_r_r83 = PyObject_GetItem(cpy_r_r79, cpy_r_r82);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r84 = PyTuple_Pack(1, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r85 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r86 = (PyObject *)CPyType_dataflow___AnalysisResult_template;
    cpy_r_r87 = CPyType_FromTemplate(cpy_r_r86, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r88 = CPyDef_dataflow___AnalysisResult_trait_vtable_setup();
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL89;
    }
    cpy_r_r89 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r90 = CPyStatics[6725]; /* 'before' */
    cpy_r_r91 = CPyStatics[6726]; /* 'after' */
    cpy_r_r92 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r93 = PyTuple_Pack(3, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL89;
    }
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r87, cpy_r_r89, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL89;
    }
    CPyType_dataflow___AnalysisResult = (PyTypeObject *)cpy_r_r87;
    CPy_INCREF(CPyType_dataflow___AnalysisResult);
    cpy_r_r96 = CPyStatic_dataflow___globals;
    cpy_r_r97 = CPyStatics[6654]; /* 'AnalysisResult' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 162, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r100 = CPyStatic_dataflow___globals;
    cpy_r_r101 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r103 = CPyStatic_dataflow___globals;
    cpy_r_r104 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL90;
    }
    cpy_r_r106 = CPyStatic_dataflow___globals;
    cpy_r_r107 = CPyStatics[1088]; /* 'T' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL91;
    }
    cpy_r_r109 = PyObject_GetItem(cpy_r_r105, cpy_r_r108);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL90;
    }
    cpy_r_r110 = CPyStatic_dataflow___globals;
    cpy_r_r111 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL92;
    }
    cpy_r_r113 = CPyStatic_dataflow___globals;
    cpy_r_r114 = CPyStatics[1088]; /* 'T' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL93;
    }
    cpy_r_r116 = PyObject_GetItem(cpy_r_r112, cpy_r_r115);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL92;
    }
    cpy_r_r117.f0 = cpy_r_r109;
    cpy_r_r117.f1 = cpy_r_r116;
    CPy_INCREF(cpy_r_r117.f0);
    CPy_INCREF(cpy_r_r117.f1);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = PyTuple_New(2);
    if (unlikely(cpy_r_r118 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8646 = cpy_r_r117.f0;
    PyTuple_SET_ITEM(cpy_r_r118, 0, __tmp8646);
    PyObject *__tmp8647 = cpy_r_r117.f1;
    PyTuple_SET_ITEM(cpy_r_r118, 1, __tmp8647);
    cpy_r_r119 = PyObject_GetItem(cpy_r_r102, cpy_r_r118);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r120 = CPyStatic_dataflow___globals;
    cpy_r_r121 = CPyStatics[6678]; /* 'GenAndKill' */
    cpy_r_r122 = CPyDict_SetItem(cpy_r_r120, cpy_r_r121, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 171, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r124 = (PyObject *)CPyType_ops___OpVisitor;
    cpy_r_r125 = CPyStatic_dataflow___globals;
    cpy_r_r126 = CPyStatics[6678]; /* 'GenAndKill' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r128 = CPyStatic_dataflow___globals;
    cpy_r_r129 = CPyStatics[1088]; /* 'T' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL94;
    }
    cpy_r_r131 = PyObject_GetItem(cpy_r_r127, cpy_r_r130);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r132 = PyObject_GetItem(cpy_r_r124, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r133 = PyTuple_Pack(1, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r134 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r135 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor_template;
    cpy_r_r136 = CPyType_FromTemplate(cpy_r_r135, cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r137 = CPyDef_dataflow___BaseAnalysisVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL95;
    }
    cpy_r_r138 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r139 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r140 = PyTuple_Pack(1, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL95;
    }
    cpy_r_r141 = PyObject_SetAttr(cpy_r_r136, cpy_r_r138, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL95;
    }
    CPyType_dataflow___BaseAnalysisVisitor = (PyTypeObject *)cpy_r_r136;
    CPy_INCREF(CPyType_dataflow___BaseAnalysisVisitor);
    cpy_r_r143 = CPyStatic_dataflow___globals;
    cpy_r_r144 = CPyStatics[6655]; /* 'BaseAnalysisVisitor' */
    cpy_r_r145 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 174, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r147 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r148 = (PyObject *)CPyType_ops___Value;
    cpy_r_r149 = PyObject_GetItem(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r150 = PyTuple_Pack(1, cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r151 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r152 = (PyObject *)CPyType_dataflow___DefinedVisitor_template;
    cpy_r_r153 = CPyType_FromTemplate(cpy_r_r152, cpy_r_r150, cpy_r_r151);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r154 = CPyDef_dataflow___DefinedVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL96;
    }
    cpy_r_r155 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r156 = CPyStatics[6727]; /* 'strict_errors' */
    cpy_r_r157 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r158 = PyTuple_Pack(2, cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL96;
    }
    cpy_r_r159 = PyObject_SetAttr(cpy_r_r153, cpy_r_r155, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL96;
    }
    CPyType_dataflow___DefinedVisitor = (PyTypeObject *)cpy_r_r153;
    CPy_INCREF(CPyType_dataflow___DefinedVisitor);
    cpy_r_r161 = CPyStatic_dataflow___globals;
    cpy_r_r162 = CPyStatics[6728]; /* 'DefinedVisitor' */
    cpy_r_r163 = CPyDict_SetItem(cpy_r_r161, cpy_r_r162, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 276, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r165 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r166 = (PyObject *)CPyType_ops___Value;
    cpy_r_r167 = PyObject_GetItem(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r168 = PyTuple_Pack(1, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r169 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r170 = (PyObject *)CPyType_dataflow___BorrowedArgumentsVisitor_template;
    cpy_r_r171 = CPyType_FromTemplate(cpy_r_r170, cpy_r_r168, cpy_r_r169);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r172 = CPyDef_dataflow___BorrowedArgumentsVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r172 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL97;
    }
    cpy_r_r173 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r174 = CPyStatics[1678]; /* 'args' */
    cpy_r_r175 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r176 = PyTuple_Pack(2, cpy_r_r174, cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL97;
    }
    cpy_r_r177 = PyObject_SetAttr(cpy_r_r171, cpy_r_r173, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL97;
    }
    CPyType_dataflow___BorrowedArgumentsVisitor = (PyTypeObject *)cpy_r_r171;
    CPy_INCREF(CPyType_dataflow___BorrowedArgumentsVisitor);
    cpy_r_r179 = CPyStatic_dataflow___globals;
    cpy_r_r180 = CPyStatics[6729]; /* 'BorrowedArgumentsVisitor' */
    cpy_r_r181 = CPyDict_SetItem(cpy_r_r179, cpy_r_r180, cpy_r_r171);
    CPy_DECREF(cpy_r_r171);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 366, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r183 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r184 = (PyObject *)CPyType_ops___Value;
    cpy_r_r185 = PyObject_GetItem(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r186 = PyTuple_Pack(1, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r187 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r188 = (PyObject *)CPyType_dataflow___UndefinedVisitor_template;
    cpy_r_r189 = CPyType_FromTemplate(cpy_r_r188, cpy_r_r186, cpy_r_r187);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r190 = CPyDef_dataflow___UndefinedVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r190 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL98;
    }
    cpy_r_r191 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r192 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r193 = PyTuple_Pack(1, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL98;
    }
    cpy_r_r194 = PyObject_SetAttr(cpy_r_r189, cpy_r_r191, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL98;
    }
    CPyType_dataflow___UndefinedVisitor = (PyTypeObject *)cpy_r_r189;
    CPy_INCREF(CPyType_dataflow___UndefinedVisitor);
    cpy_r_r196 = CPyStatic_dataflow___globals;
    cpy_r_r197 = CPyStatics[6730]; /* 'UndefinedVisitor' */
    cpy_r_r198 = CPyDict_SetItem(cpy_r_r196, cpy_r_r197, cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    cpy_r_r199 = cpy_r_r198 >= 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 412, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r200 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r201 = (PyObject *)CPyType_ops___Value;
    cpy_r_r202 = PyObject_GetItem(cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r203 = PyTuple_Pack(1, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r204 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r205 = (PyObject *)CPyType_dataflow___LivenessVisitor_template;
    cpy_r_r206 = CPyType_FromTemplate(cpy_r_r205, cpy_r_r203, cpy_r_r204);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r207 = CPyDef_dataflow___LivenessVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r207 == 2)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", -1, CPyStatic_dataflow___globals);
        goto CPyL99;
    }
    cpy_r_r208 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r209 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r210 = PyTuple_Pack(1, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL99;
    }
    cpy_r_r211 = PyObject_SetAttr(cpy_r_r206, cpy_r_r208, cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL99;
    }
    CPyType_dataflow___LivenessVisitor = (PyTypeObject *)cpy_r_r206;
    CPy_INCREF(CPyType_dataflow___LivenessVisitor);
    cpy_r_r213 = CPyStatic_dataflow___globals;
    cpy_r_r214 = CPyStatics[6731]; /* 'LivenessVisitor' */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r213, cpy_r_r214, cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 464, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r217 = CPyStatic_dataflow___globals;
    cpy_r_r218 = CPyStatics[6690]; /* 'MUST_ANALYSIS' */
    cpy_r_r219 = CPyStatics[9015]; /* 0 */
    cpy_r_r220 = CPyDict_SetItem(cpy_r_r217, cpy_r_r218, cpy_r_r219);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 511, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    cpy_r_r222 = CPyStatic_dataflow___globals;
    cpy_r_r223 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r224 = CPyStatics[9016]; /* 1 */
    cpy_r_r225 = CPyDict_SetItem(cpy_r_r222, cpy_r_r223, cpy_r_r224);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/analysis/dataflow.py", "<module>", 512, CPyStatic_dataflow___globals);
        goto CPyL83;
    }
    return 1;
CPyL83: ;
    cpy_r_r227 = 2;
    return cpy_r_r227;
CPyL84: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL83;
CPyL85: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL83;
CPyL86: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    goto CPyL83;
CPyL87: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r65);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL83;
CPyL89: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL83;
CPyL90: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL83;
CPyL91: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r105);
    goto CPyL83;
CPyL92: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r109);
    goto CPyL83;
CPyL93: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r112);
    goto CPyL83;
CPyL94: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL83;
CPyL95: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL83;
CPyL96: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL83;
CPyL97: ;
    CPy_DecRef(cpy_r_r171);
    goto CPyL83;
CPyL98: ;
    CPy_DecRef(cpy_r_r189);
    goto CPyL83;
CPyL99: ;
    CPy_DecRef(cpy_r_r206);
    goto CPyL83;
}
