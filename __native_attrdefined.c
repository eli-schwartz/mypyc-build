#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
attrdefined___AttributeMaybeDefinedVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef attrdefined___AttributeMaybeDefinedVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *attrdefined___AttributeMaybeDefinedVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor(PyObject *cpy_r_self_reg);

static PyObject *
attrdefined___AttributeMaybeDefinedVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrdefined___AttributeMaybeDefinedVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = attrdefined___AttributeMaybeDefinedVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_attrdefined___AttributeMaybeDefinedVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
attrdefined___AttributeMaybeDefinedVisitor_traverse(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self_reg);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject))));
    return 0;
}

static int
attrdefined___AttributeMaybeDefinedVisitor_clear(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self)
{
    Py_CLEAR(self->_self_reg);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject))));
    return 0;
}

static void
attrdefined___AttributeMaybeDefinedVisitor_dealloc(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrdefined___AttributeMaybeDefinedVisitor_dealloc)
    attrdefined___AttributeMaybeDefinedVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrdefined___AttributeMaybeDefinedVisitor_vtable[48];
static CPyVTableItem attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable[36];
static size_t attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_attrdefined___AttributeMaybeDefinedVisitor_trait_vtable_setup(void)
{
    CPyVTableItem attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi__OpVisitor_glue,
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
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable, attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable));
    size_t attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table, attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table_scratch, sizeof(attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem attrdefined___AttributeMaybeDefinedVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)attrdefined___AttributeMaybeDefinedVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem,
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
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor_____init__,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem,
    };
    memcpy(attrdefined___AttributeMaybeDefinedVisitor_vtable, attrdefined___AttributeMaybeDefinedVisitor_vtable_scratch, sizeof(attrdefined___AttributeMaybeDefinedVisitor_vtable));
    return 1;
}

static PyObject *
attrdefined___AttributeMaybeDefinedVisitor_get_self_reg(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self, void *closure);
static int
attrdefined___AttributeMaybeDefinedVisitor_set_self_reg(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef attrdefined___AttributeMaybeDefinedVisitor_getseters[] = {
    {"self_reg",
     (getter)attrdefined___AttributeMaybeDefinedVisitor_get_self_reg, (setter)attrdefined___AttributeMaybeDefinedVisitor_set_self_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef attrdefined___AttributeMaybeDefinedVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrdefined___AttributeMaybeDefinedVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AttributeMaybeDefinedVisitor",
    .tp_new = attrdefined___AttributeMaybeDefinedVisitor_new,
    .tp_dealloc = (destructor)attrdefined___AttributeMaybeDefinedVisitor_dealloc,
    .tp_traverse = (traverseproc)attrdefined___AttributeMaybeDefinedVisitor_traverse,
    .tp_clear = (inquiry)attrdefined___AttributeMaybeDefinedVisitor_clear,
    .tp_getset = attrdefined___AttributeMaybeDefinedVisitor_getseters,
    .tp_methods = attrdefined___AttributeMaybeDefinedVisitor_methods,
    .tp_init = attrdefined___AttributeMaybeDefinedVisitor_init,
    .tp_members = attrdefined___AttributeMaybeDefinedVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrdefined___AttributeMaybeDefinedVisitor_template = &CPyType_attrdefined___AttributeMaybeDefinedVisitor_template_;

static PyObject *
attrdefined___AttributeMaybeDefinedVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self;
    self = (mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrdefined___AttributeMaybeDefinedVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor(PyObject *cpy_r_self_reg)
{
    PyObject *self = attrdefined___AttributeMaybeDefinedVisitor_setup(CPyType_attrdefined___AttributeMaybeDefinedVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_attrdefined___AttributeMaybeDefinedVisitor_____init__(self, cpy_r_self_reg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
attrdefined___AttributeMaybeDefinedVisitor_get_self_reg(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self, void *closure)
{
    if (unlikely(self->_self_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_reg' of 'AttributeMaybeDefinedVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_reg);
    PyObject *retval = self->_self_reg;
    return retval;
}

static int
attrdefined___AttributeMaybeDefinedVisitor_set_self_reg(mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AttributeMaybeDefinedVisitor' object attribute 'self_reg' cannot be deleted");
        return -1;
    }
    if (self->_self_reg != NULL) {
        CPy_DECREF(self->_self_reg);
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
    self->_self_reg = tmp;
    return 0;
}

static int
attrdefined___AttributeMaybeUndefinedVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef attrdefined___AttributeMaybeUndefinedVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *attrdefined___AttributeMaybeUndefinedVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor(PyObject *cpy_r_self_reg);

static PyObject *
attrdefined___AttributeMaybeUndefinedVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrdefined___AttributeMaybeUndefinedVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = attrdefined___AttributeMaybeUndefinedVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_attrdefined___AttributeMaybeUndefinedVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
attrdefined___AttributeMaybeUndefinedVisitor_traverse(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self_reg);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject))));
    return 0;
}

static int
attrdefined___AttributeMaybeUndefinedVisitor_clear(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self)
{
    Py_CLEAR(self->_self_reg);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject))));
    return 0;
}

static void
attrdefined___AttributeMaybeUndefinedVisitor_dealloc(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrdefined___AttributeMaybeUndefinedVisitor_dealloc)
    attrdefined___AttributeMaybeUndefinedVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrdefined___AttributeMaybeUndefinedVisitor_vtable[48];
static CPyVTableItem attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable[36];
static size_t attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_trait_vtable_setup(void)
{
    CPyVTableItem attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi__OpVisitor_glue,
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
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable, attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable));
    size_t attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table, attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table_scratch, sizeof(attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem attrdefined___AttributeMaybeUndefinedVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)attrdefined___AttributeMaybeUndefinedVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_dataflow___BaseAnalysisVisitor___visit_goto,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem,
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
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_____init__,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem,
    };
    memcpy(attrdefined___AttributeMaybeUndefinedVisitor_vtable, attrdefined___AttributeMaybeUndefinedVisitor_vtable_scratch, sizeof(attrdefined___AttributeMaybeUndefinedVisitor_vtable));
    return 1;
}

static PyObject *
attrdefined___AttributeMaybeUndefinedVisitor_get_self_reg(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self, void *closure);
static int
attrdefined___AttributeMaybeUndefinedVisitor_set_self_reg(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef attrdefined___AttributeMaybeUndefinedVisitor_getseters[] = {
    {"self_reg",
     (getter)attrdefined___AttributeMaybeUndefinedVisitor_get_self_reg, (setter)attrdefined___AttributeMaybeUndefinedVisitor_set_self_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef attrdefined___AttributeMaybeUndefinedVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_register_op",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrdefined___AttributeMaybeUndefinedVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AttributeMaybeUndefinedVisitor",
    .tp_new = attrdefined___AttributeMaybeUndefinedVisitor_new,
    .tp_dealloc = (destructor)attrdefined___AttributeMaybeUndefinedVisitor_dealloc,
    .tp_traverse = (traverseproc)attrdefined___AttributeMaybeUndefinedVisitor_traverse,
    .tp_clear = (inquiry)attrdefined___AttributeMaybeUndefinedVisitor_clear,
    .tp_getset = attrdefined___AttributeMaybeUndefinedVisitor_getseters,
    .tp_methods = attrdefined___AttributeMaybeUndefinedVisitor_methods,
    .tp_init = attrdefined___AttributeMaybeUndefinedVisitor_init,
    .tp_members = attrdefined___AttributeMaybeUndefinedVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrdefined___AttributeMaybeUndefinedVisitor_template = &CPyType_attrdefined___AttributeMaybeUndefinedVisitor_template_;

static PyObject *
attrdefined___AttributeMaybeUndefinedVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self;
    self = (mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrdefined___AttributeMaybeUndefinedVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor(PyObject *cpy_r_self_reg)
{
    PyObject *self = attrdefined___AttributeMaybeUndefinedVisitor_setup(CPyType_attrdefined___AttributeMaybeUndefinedVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_____init__(self, cpy_r_self_reg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
attrdefined___AttributeMaybeUndefinedVisitor_get_self_reg(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self, void *closure)
{
    if (unlikely(self->_self_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_reg' of 'AttributeMaybeUndefinedVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_reg);
    PyObject *retval = self->_self_reg;
    return retval;
}

static int
attrdefined___AttributeMaybeUndefinedVisitor_set_self_reg(mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AttributeMaybeUndefinedVisitor' object attribute 'self_reg' cannot be deleted");
        return -1;
    }
    if (self->_self_reg != NULL) {
        CPy_DECREF(self->_self_reg);
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
    self->_self_reg = tmp;
    return 0;
}
static PyMethodDef attrdefinedmodule_methods[] = {
    {"analyze_always_defined_attrs", (PyCFunction)CPyPy_attrdefined___analyze_always_defined_attrs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_always_defined_attrs_in_class", (PyCFunction)CPyPy_attrdefined___analyze_always_defined_attrs_in_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_always_defined_attributes", (PyCFunction)CPyPy_attrdefined___find_always_defined_attributes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_sometimes_defined_attributes", (PyCFunction)CPyPy_attrdefined___find_sometimes_defined_attributes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mark_attr_initialiation_ops", (PyCFunction)CPyPy_attrdefined___mark_attr_initialiation_ops, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"attributes_initialized_by_init_call", (PyCFunction)CPyPy_attrdefined___attributes_initialized_by_init_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"attributes_maybe_initialized_by_init_call", (PyCFunction)CPyPy_attrdefined___attributes_maybe_initialized_by_init_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_maybe_defined_attrs_in_init", (PyCFunction)CPyPy_attrdefined___analyze_maybe_defined_attrs_in_init, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_maybe_undefined_attrs_in_init", (PyCFunction)CPyPy_attrdefined___analyze_maybe_undefined_attrs_in_init, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"update_always_defined_attrs_using_subclasses", (PyCFunction)CPyPy_attrdefined___update_always_defined_attrs_using_subclasses, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"detect_undefined_bitmap", (PyCFunction)CPyPy_attrdefined___detect_undefined_bitmap, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef attrdefinedmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.analysis.attrdefined",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    attrdefinedmodule_methods
};

PyObject *CPyInit_mypyc___analysis___attrdefined(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___analysis___attrdefined_internal) {
        Py_INCREF(CPyModule_mypyc___analysis___attrdefined_internal);
        return CPyModule_mypyc___analysis___attrdefined_internal;
    }
    CPyModule_mypyc___analysis___attrdefined_internal = PyModule_Create(&attrdefinedmodule);
    if (unlikely(CPyModule_mypyc___analysis___attrdefined_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___analysis___attrdefined_internal, "__name__");
    CPyStatic_attrdefined___globals = PyModule_GetDict(CPyModule_mypyc___analysis___attrdefined_internal);
    if (unlikely(CPyStatic_attrdefined___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_attrdefined_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___analysis___attrdefined_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___analysis___attrdefined_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_attrdefined___AttributeMaybeDefinedVisitor);
    Py_CLEAR(CPyType_attrdefined___AttributeMaybeUndefinedVisitor);
    return NULL;
}

char CPyDef_attrdefined___analyze_always_defined_attrs(PyObject *cpy_r_class_irs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_seen;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_cl;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 111, CPyStatic_attrdefined___globals);
        goto CPyL19;
    }
    cpy_r_seen = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_class_irs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL20;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_class_irs, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_class_ir___ClassIR))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 114, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r6);
        goto CPyL21;
    }
    cpy_r_cl = cpy_r_r7;
    cpy_r_r8 = CPyDef_attrdefined___analyze_always_defined_attrs_in_class(cpy_r_cl, cpy_r_seen);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 115, CPyStatic_attrdefined___globals);
        goto CPyL21;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL2;
CPyL6: ;
    cpy_r_r10 = PySet_New(NULL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 118, CPyStatic_attrdefined___globals);
        goto CPyL19;
    }
    cpy_r_seen = cpy_r_r10;
    cpy_r_r11 = 0;
CPyL8: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_class_irs)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL22;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_class_irs, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_class_ir___ClassIR))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 119, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r16);
        goto CPyL21;
    }
    cpy_r_cl = cpy_r_r17;
    cpy_r_r18 = CPyDef_attrdefined___update_always_defined_attrs_using_subclasses(cpy_r_cl, cpy_r_seen);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 120, CPyStatic_attrdefined___globals);
        goto CPyL21;
    }
    cpy_r_r19 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r19;
    goto CPyL8;
CPyL12: ;
    cpy_r_r20 = PySet_New(NULL);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 123, CPyStatic_attrdefined___globals);
        goto CPyL19;
    }
    cpy_r_seen = cpy_r_r20;
    cpy_r_r21 = 0;
CPyL14: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_class_irs)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL23;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_class_irs, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_class_ir___ClassIR))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 124, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r26);
        goto CPyL21;
    }
    cpy_r_cl = cpy_r_r27;
    cpy_r_r28 = CPyDef_attrdefined___detect_undefined_bitmap(cpy_r_cl, cpy_r_seen);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 125, CPyStatic_attrdefined___globals);
        goto CPyL21;
    }
    cpy_r_r29 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r29;
    goto CPyL14;
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL20: ;
    CPy_DECREF(cpy_r_seen);
    goto CPyL6;
CPyL21: ;
    CPy_DecRef(cpy_r_seen);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_seen);
    goto CPyL12;
CPyL23: ;
    CPy_DECREF(cpy_r_seen);
    goto CPyL18;
}

PyObject *CPyPy_attrdefined___analyze_always_defined_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"class_irs", 0};
    static CPyArg_Parser parser = {"O:analyze_always_defined_attrs", kwlist, 0};
    PyObject *obj_class_irs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_class_irs)) {
        return NULL;
    }
    PyObject *arg_class_irs;
    if (likely(PyList_Check(obj_class_irs)))
        arg_class_irs = obj_class_irs;
    else {
        CPy_TypeError("list", obj_class_irs); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___analyze_always_defined_attrs(arg_class_irs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs", 100, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___analyze_always_defined_attrs_in_class(PyObject *cpy_r_cl, PyObject *cpy_r_seen) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_base;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_self_reg;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_cfg;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_dirty;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_maybe_defined;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_all_attrs;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyPtr cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_maybe_undefined;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_always_defined;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_a;
    char cpy_r_r86;
    char cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_any_dirty;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    CPyPtr cpy_r_r116;
    int64_t cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_b;
    CPyTagged cpy_r_r122;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    CPyPtr cpy_r_r125;
    int64_t cpy_r_r126;
    CPyTagged cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r131;
    tuple_T2OI cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyPtr cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    CPyTagged cpy_r_r143;
    CPyTagged cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    cpy_r_r0 = PySet_Contains(cpy_r_seen, cpy_r_cl);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 129, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r3 = PySet_Add(cpy_r_seen, cpy_r_cl);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 132, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r5) goto CPyL12;
CPyL5: ;
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_inherits_python;
    if (cpy_r_r6) goto CPyL12;
CPyL6: ;
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_allow_interpreted_subclasses;
    if (cpy_r_r7) goto CPyL12;
CPyL7: ;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (cpy_r_r10) goto CPyL12;
    cpy_r_r11 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_children;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "children", 139, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
CPyL9: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 == cpy_r_r12;
    if (cpy_r_r13) goto CPyL12;
    cpy_r_r14 = CPyDef_class_ir___ClassIR___is_serializable(cpy_r_cl);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 140, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    if (!cpy_r_r14) goto CPyL13;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_mro;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "mro", 146, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r15);
CPyL14: ;
    cpy_r_r16 = CPyList_GetSlice(cpy_r_r15, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 146, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 146, CPyStatic_attrdefined___globals, "list", cpy_r_r16);
        goto CPyL96;
    }
    cpy_r_r18 = 0;
CPyL17: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL97;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_class_ir___ClassIR))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 146, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r23);
        goto CPyL98;
    }
    cpy_r_base = cpy_r_r24;
    cpy_r_r25 = CPyDef_attrdefined___analyze_always_defined_attrs_in_class(cpy_r_base, cpy_r_seen);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 147, CPyStatic_attrdefined___globals);
        goto CPyL98;
    }
    cpy_r_r26 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r26;
    goto CPyL17;
CPyL21: ;
    cpy_r_r27 = CPyStatics[288]; /* '__init__' */
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 149, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    cpy_r_m = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_m == cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL99;
    } else
        goto CPyL32;
CPyL23: ;
    cpy_r_r32 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attrs_with_defaults;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "attrs_with_defaults", 151, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r32);
CPyL24: ;
    cpy_r_r33 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r34[1] = {cpy_r_r32};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 151, CPyStatic_attrdefined___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r32);
    if (likely(PySet_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 151, CPyStatic_attrdefined___globals, "set", cpy_r_r36);
        goto CPyL96;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs = cpy_r_r37;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 151, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    cpy_r_r39 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attrs_with_defaults;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "attrs_with_defaults", 152, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r39);
CPyL28: ;
    cpy_r_r40 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 152, CPyStatic_attrdefined___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_r39);
    if (likely(PySet_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 152, CPyStatic_attrdefined___globals, "set", cpy_r_r43);
        goto CPyL96;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 152, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    return 1;
CPyL32: ;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r46 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 154, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL102;
    }
    cpy_r_r47 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r46)->_arg_regs;
    cpy_r_r48 = CPyList_GetItemShort(cpy_r_r47, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 154, CPyStatic_attrdefined___globals);
        goto CPyL102;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_ops___Register))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 154, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Register", cpy_r_r48);
        goto CPyL102;
    }
    cpy_r_self_reg = cpy_r_r49;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r50 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 155, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL103;
    }
    cpy_r_r51 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r50)->_blocks;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_dataflow___get_cfg(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 155, CPyStatic_attrdefined___globals);
        goto CPyL103;
    }
    cpy_r_cfg = cpy_r_r52;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r53 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 156, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL104;
    }
    cpy_r_r54 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r53)->_blocks;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyDef_selfleaks___analyze_self_leaks(cpy_r_r54, cpy_r_self_reg, cpy_r_cfg);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 156, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    cpy_r_dirty = cpy_r_r55;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r56 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 158, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL105;
    }
    cpy_r_r57 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r56)->_blocks;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attrs_with_defaults;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "attrs_with_defaults", 158, CPyStatic_attrdefined___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r58);
CPyL41: ;
    cpy_r_r59 = CPyDef_attrdefined___analyze_maybe_defined_attrs_in_init(cpy_r_r57, cpy_r_self_reg, cpy_r_r58, cpy_r_cfg);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 157, CPyStatic_attrdefined___globals);
        goto CPyL105;
    }
    cpy_r_maybe_defined = cpy_r_r59;
    cpy_r_r60 = PySet_New(NULL);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 160, CPyStatic_attrdefined___globals);
        goto CPyL107;
    }
    cpy_r_all_attrs = cpy_r_r60;
    cpy_r_r61 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_mro;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "mro", 161, CPyStatic_attrdefined___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r61);
CPyL44: ;
    cpy_r_r62 = 0;
CPyL45: ;
    cpy_r_r63 = (CPyPtr)&((PyVarObject *)cpy_r_r61)->ob_size;
    cpy_r_r64 = *(int64_t *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = (Py_ssize_t)cpy_r_r62 < (Py_ssize_t)cpy_r_r65;
    if (!cpy_r_r66) goto CPyL109;
    cpy_r_r67 = CPyList_GetItemUnsafe(cpy_r_r61, cpy_r_r62);
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_class_ir___ClassIR))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 161, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r67);
        goto CPyL110;
    }
    cpy_r_base = cpy_r_r68;
    cpy_r_r69 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r69 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r69);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 162, CPyStatic_attrdefined___globals);
        goto CPyL110;
    }
CPyL48: ;
    cpy_r_r70 = _PySet_Update(cpy_r_all_attrs, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 162, CPyStatic_attrdefined___globals);
        goto CPyL110;
    }
    cpy_r_r72 = cpy_r_r62 + 2;
    cpy_r_r62 = cpy_r_r72;
    goto CPyL45;
CPyL50: ;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r73 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 164, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL108;
    }
    cpy_r_r74 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r73)->_blocks;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attrs_with_defaults;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "ClassIR", "attrs_with_defaults", 164, CPyStatic_attrdefined___globals);
        goto CPyL111;
    }
    CPy_INCREF(cpy_r_r75);
CPyL52: ;
    cpy_r_r76 = PyNumber_Subtract(cpy_r_all_attrs, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 164, CPyStatic_attrdefined___globals);
        goto CPyL111;
    }
    if (likely(PySet_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 164, CPyStatic_attrdefined___globals, "set", cpy_r_r76);
        goto CPyL111;
    }
    cpy_r_r78 = CPyDef_attrdefined___analyze_maybe_undefined_attrs_in_init(cpy_r_r74, cpy_r_self_reg, cpy_r_r77, cpy_r_cfg);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_cfg);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 163, CPyStatic_attrdefined___globals);
        goto CPyL112;
    }
    cpy_r_maybe_undefined = cpy_r_r78;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r79 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 168, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL113;
    }
    cpy_r_r80 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r79)->_blocks;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyDef_attrdefined___find_always_defined_attributes(cpy_r_r80, cpy_r_self_reg, cpy_r_all_attrs, cpy_r_maybe_defined, cpy_r_maybe_undefined, cpy_r_dirty);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_all_attrs);
    CPy_DECREF(cpy_r_maybe_undefined);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 167, CPyStatic_attrdefined___globals);
        goto CPyL114;
    }
    cpy_r_always_defined = cpy_r_r81;
    cpy_r_r82 = PySet_New(NULL);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals);
        goto CPyL115;
    }
    cpy_r_r83 = PyObject_GetIter(cpy_r_always_defined);
    CPy_DECREF(cpy_r_always_defined);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals);
        goto CPyL116;
    }
CPyL59: ;
    cpy_r_r84 = PyIter_Next(cpy_r_r83);
    if (cpy_r_r84 == NULL) goto CPyL117;
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals, "str", cpy_r_r84);
        goto CPyL118;
    }
    cpy_r_a = cpy_r_r85;
    cpy_r_r86 = CPyDef_class_ir___ClassIR___is_deletable(cpy_r_cl, cpy_r_a);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals);
        goto CPyL119;
    }
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (!cpy_r_r87) goto CPyL120;
    cpy_r_r88 = PySet_Add(cpy_r_r82, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals);
        goto CPyL118;
    } else
        goto CPyL59;
CPyL64: ;
    cpy_r_r90 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 170, CPyStatic_attrdefined___globals);
        goto CPyL116;
    }
    cpy_r_always_defined = cpy_r_r82;
    CPy_INCREF(cpy_r_always_defined);
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs = cpy_r_always_defined;
    cpy_r_r91 = 1;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 172, CPyStatic_attrdefined___globals);
        goto CPyL115;
    }
    if (!0) goto CPyL121;
    cpy_r_r92 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyModule_builtins;
    cpy_r_r94 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 174, CPyStatic_attrdefined___globals);
        goto CPyL122;
    }
    PyObject *cpy_r_r96[1] = {cpy_r_always_defined};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = _PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 174, CPyStatic_attrdefined___globals);
        goto CPyL122;
    }
    CPy_DECREF(cpy_r_always_defined);
    if (likely(PyList_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 174, CPyStatic_attrdefined___globals, "list", cpy_r_r98);
        goto CPyL123;
    }
    cpy_r_r100 = CPyModule_builtins;
    cpy_r_r101 = CPyStatics[190]; /* 'print' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 174, CPyStatic_attrdefined___globals);
        goto CPyL124;
    }
    PyObject *cpy_r_r103[2] = {cpy_r_r92, cpy_r_r99};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 2, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 174, CPyStatic_attrdefined___globals);
        goto CPyL124;
    } else
        goto CPyL125;
CPyL72: ;
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r99);
CPyL73: ;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r106 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 176, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL114;
    }
    cpy_r_r107 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r106)->_blocks;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = CPyDef_attrdefined___find_sometimes_defined_attributes(cpy_r_r107, cpy_r_self_reg, cpy_r_maybe_defined, cpy_r_dirty);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 175, CPyStatic_attrdefined___globals);
        goto CPyL114;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs = cpy_r_r108;
    cpy_r_r109 = 1;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 175, CPyStatic_attrdefined___globals);
        goto CPyL114;
    }
    if (likely(cpy_r_m != Py_None))
        cpy_r_r110 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 179, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL114;
    }
    cpy_r_r111 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r110)->_blocks;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = CPyDef_attrdefined___mark_attr_initialiation_ops(cpy_r_r111, cpy_r_self_reg, cpy_r_maybe_defined, cpy_r_dirty);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_self_reg);
    CPy_DECREF(cpy_r_maybe_defined);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 179, CPyStatic_attrdefined___globals);
        goto CPyL126;
    }
    cpy_r_any_dirty = 0;
    if (likely(cpy_r_m != Py_None))
        cpy_r_r113 = cpy_r_m;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 183, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_m);
        goto CPyL126;
    }
    cpy_r_r114 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r113)->_blocks;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_m);
    cpy_r_r115 = 0;
CPyL80: ;
    cpy_r_r116 = (CPyPtr)&((PyVarObject *)cpy_r_r114)->ob_size;
    cpy_r_r117 = *(int64_t *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 << 1;
    cpy_r_r119 = (Py_ssize_t)cpy_r_r115 < (Py_ssize_t)cpy_r_r118;
    if (!cpy_r_r119) goto CPyL127;
    cpy_r_r120 = CPyList_GetItemUnsafe(cpy_r_r114, cpy_r_r115);
    if (likely(Py_TYPE(cpy_r_r120) == CPyType_ops___BasicBlock))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 183, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r120);
        goto CPyL128;
    }
    cpy_r_b = cpy_r_r121;
    cpy_r_r122 = 0;
    cpy_r_i = 0;
    cpy_r_r123 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_b)->_ops;
    CPy_INCREF(cpy_r_r123);
    cpy_r_r124 = 0;
CPyL83: ;
    cpy_r_r125 = (CPyPtr)&((PyVarObject *)cpy_r_r123)->ob_size;
    cpy_r_r126 = *(int64_t *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 << 1;
    cpy_r_r128 = (Py_ssize_t)cpy_r_r124 < (Py_ssize_t)cpy_r_r127;
    if (!cpy_r_r128) goto CPyL129;
    cpy_r_r129 = CPyList_GetItemUnsafe(cpy_r_r123, cpy_r_r124);
    if (likely(PyObject_TypeCheck(cpy_r_r129, CPyType_ops___Op)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 184, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Op", cpy_r_r129);
        goto CPyL130;
    }
    cpy_r_op = cpy_r_r130;
    cpy_r_r131 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", "AnalysisResult", "after", 185, CPyStatic_attrdefined___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r131);
CPyL86: ;
    cpy_r_r132.f0 = cpy_r_b;
    cpy_r_r132.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r132.f0);
    CPyTagged_INCREF(cpy_r_r132.f1);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8219 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp8219);
    PyObject *__tmp8220 = CPyTagged_StealAsObject(cpy_r_r132.f1);
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp8220);
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r131, cpy_r_r133);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 185, CPyStatic_attrdefined___globals);
        goto CPyL132;
    }
    if (likely(PySet_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 185, CPyStatic_attrdefined___globals, "set", cpy_r_r134);
        goto CPyL132;
    }
    cpy_r_r136 = PyObject_IsTrue(cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 185, CPyStatic_attrdefined___globals);
        goto CPyL132;
    }
    cpy_r_r138 = cpy_r_r136;
    if (!cpy_r_r138) goto CPyL133;
    cpy_r_r139 = (PyObject *)CPyType_ops___Return;
    cpy_r_r140 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r141 = *(PyObject * *)cpy_r_r140;
    CPy_DECREF(cpy_r_op);
    cpy_r_r142 = cpy_r_r141 == cpy_r_r139;
    if (cpy_r_r142) {
        goto CPyL92;
    } else
        goto CPyL134;
CPyL91: ;
    cpy_r_any_dirty = 1;
    goto CPyL93;
CPyL92: ;
    cpy_r_r143 = cpy_r_r122 + 2;
    cpy_r_r122 = cpy_r_r143;
    cpy_r_i = cpy_r_r143;
    cpy_r_r144 = cpy_r_r124 + 2;
    cpy_r_r124 = cpy_r_r144;
    goto CPyL83;
CPyL93: ;
    cpy_r_r145 = cpy_r_r115 + 2;
    cpy_r_r115 = cpy_r_r145;
    goto CPyL80;
CPyL94: ;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_init_self_leak = cpy_r_any_dirty;
    cpy_r_r146 = 1;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 188, CPyStatic_attrdefined___globals);
        goto CPyL96;
    }
    return 1;
CPyL96: ;
    cpy_r_r147 = 2;
    return cpy_r_r147;
CPyL97: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL21;
CPyL98: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL96;
CPyL99: ;
    CPy_DECREF(cpy_r_m);
    goto CPyL23;
CPyL100: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL96;
CPyL101: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_m);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    goto CPyL96;
CPyL104: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    goto CPyL96;
CPyL105: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_r57);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    goto CPyL96;
CPyL108: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL96;
CPyL109: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL50;
CPyL110: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_r61);
    goto CPyL96;
CPyL111: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_r74);
    goto CPyL96;
CPyL112: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL96;
CPyL113: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_maybe_undefined);
    goto CPyL96;
CPyL114: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    goto CPyL96;
CPyL115: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_always_defined);
    goto CPyL96;
CPyL116: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_r82);
    goto CPyL96;
CPyL117: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL64;
CPyL118: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    goto CPyL96;
CPyL119: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_a);
    goto CPyL96;
CPyL120: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL59;
CPyL121: ;
    CPy_DECREF(cpy_r_always_defined);
    goto CPyL73;
CPyL122: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_always_defined);
    CPy_DecRef(cpy_r_r92);
    goto CPyL96;
CPyL123: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_r92);
    goto CPyL96;
CPyL124: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_maybe_defined);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r99);
    goto CPyL96;
CPyL125: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL72;
CPyL126: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_dirty);
    goto CPyL96;
CPyL127: ;
    CPy_DECREF(cpy_r_dirty);
    CPy_DECREF(cpy_r_r114);
    goto CPyL94;
CPyL128: ;
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_r114);
    goto CPyL96;
CPyL129: ;
    CPy_DECREF(cpy_r_b);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r123);
    goto CPyL93;
CPyL130: ;
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_b);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r123);
    goto CPyL96;
CPyL131: ;
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_b);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_op);
    goto CPyL96;
CPyL132: ;
    CPy_DecRef(cpy_r_dirty);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_op);
    goto CPyL96;
CPyL133: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL92;
CPyL134: ;
    CPy_DECREF(cpy_r_b);
    CPy_DECREF(cpy_r_r123);
    goto CPyL91;
}

PyObject *CPyPy_attrdefined___analyze_always_defined_attrs_in_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "seen", 0};
    static CPyArg_Parser parser = {"OO:analyze_always_defined_attrs_in_class", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_seen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_seen)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_seen;
    if (likely(PySet_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("set", obj_seen); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___analyze_always_defined_attrs_in_class(arg_cl, arg_seen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_always_defined_attrs_in_class", 128, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___find_always_defined_attributes(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_all_attrs, PyObject *cpy_r_maybe_defined, PyObject *cpy_r_maybe_undefined, PyObject *cpy_r_dirty) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_attrs;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_block;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_i;
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
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OI cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T2OI cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OI cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    tuple_T2OI cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OI cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    tuple_T2OI cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    tuple_T2OI cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r110;
    tuple_T2OI cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    tuple_T2OI cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    tuple_T2OI cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2OI cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    CPyTagged cpy_r_r141;
    CPyTagged cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    cpy_r_r0 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r1[1] = {cpy_r_all_attrs};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 205, CPyStatic_attrdefined___globals);
        goto CPyL88;
    }
    if (likely(PySet_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 205, CPyStatic_attrdefined___globals, "set", cpy_r_r3);
        goto CPyL88;
    }
    cpy_r_attrs = cpy_r_r4;
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL87;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_ops___BasicBlock))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 206, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r10);
        goto CPyL89;
    }
    cpy_r_block = cpy_r_r11;
    cpy_r_r12 = 0;
    cpy_r_i = 0;
    cpy_r_r13 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL6: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL90;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_ops___Op)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 207, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Op", cpy_r_r19);
        goto CPyL91;
    }
    cpy_r_op = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r25 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 209, CPyStatic_attrdefined___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r26 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r25)->_obj;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r26 == cpy_r_self_reg;
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r28 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 210, CPyStatic_attrdefined___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r29 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r28)->_attr;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_undefined)->_before;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "before", 210, CPyStatic_attrdefined___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r30);
CPyL13: ;
    cpy_r_r31.f0 = cpy_r_block;
    cpy_r_r31.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r31.f0);
    CPyTagged_INCREF(cpy_r_r31.f1);
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8221 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp8221);
    PyObject *__tmp8222 = CPyTagged_StealAsObject(cpy_r_r31.f1);
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp8222);
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r30, cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 210, CPyStatic_attrdefined___globals);
        goto CPyL93;
    }
    if (likely(PySet_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 210, CPyStatic_attrdefined___globals, "set", cpy_r_r33);
        goto CPyL93;
    }
    cpy_r_r35 = PySet_Contains(cpy_r_r34, cpy_r_r29);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 210, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r38 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 211, CPyStatic_attrdefined___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r39 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r38)->_attr;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PySet_Discard(cpy_r_attrs, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 211, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
CPyL19: ;
    cpy_r_r42 = (PyObject *)CPyType_ops___SetAttr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r46 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 216, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r47 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r46)->_obj;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = cpy_r_r47 == cpy_r_self_reg;
    CPy_DECREF(cpy_r_r47);
    if (!cpy_r_r48) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r49 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 218, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r50 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r49)->_attr;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_undefined)->_before;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "before", 218, CPyStatic_attrdefined___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r51);
CPyL24: ;
    cpy_r_r52.f0 = cpy_r_block;
    cpy_r_r52.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r52.f0);
    CPyTagged_INCREF(cpy_r_r52.f1);
    cpy_r_r53 = PyTuple_New(2);
    if (unlikely(cpy_r_r53 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8223 = cpy_r_r52.f0;
    PyTuple_SET_ITEM(cpy_r_r53, 0, __tmp8223);
    PyObject *__tmp8224 = CPyTagged_StealAsObject(cpy_r_r52.f1);
    PyTuple_SET_ITEM(cpy_r_r53, 1, __tmp8224);
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 218, CPyStatic_attrdefined___globals);
        goto CPyL94;
    }
    if (likely(PySet_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 218, CPyStatic_attrdefined___globals, "set", cpy_r_r54);
        goto CPyL94;
    }
    cpy_r_r56 = PySet_Contains(cpy_r_r55, cpy_r_r50);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 218, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r59 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 219, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r60 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r59)->_attr;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_before;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "before", 219, CPyStatic_attrdefined___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r61);
CPyL30: ;
    cpy_r_r62.f0 = cpy_r_block;
    cpy_r_r62.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r62.f0);
    CPyTagged_INCREF(cpy_r_r62.f1);
    cpy_r_r63 = PyTuple_New(2);
    if (unlikely(cpy_r_r63 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8225 = cpy_r_r62.f0;
    PyTuple_SET_ITEM(cpy_r_r63, 0, __tmp8225);
    PyObject *__tmp8226 = CPyTagged_StealAsObject(cpy_r_r62.f1);
    PyTuple_SET_ITEM(cpy_r_r63, 1, __tmp8226);
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r61, cpy_r_r63);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 219, CPyStatic_attrdefined___globals);
        goto CPyL95;
    }
    if (likely(PySet_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 219, CPyStatic_attrdefined___globals, "set", cpy_r_r64);
        goto CPyL95;
    }
    cpy_r_r66 = PySet_Contains(cpy_r_r65, cpy_r_r60);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 219, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    cpy_r_r68 = cpy_r_r66;
    if (!cpy_r_r68) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r69 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 221, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL92;
    }
    cpy_r_r70 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r69)->_attr;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = PySet_Discard(cpy_r_attrs, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 221, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
CPyL36: ;
    cpy_r_r73 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 225, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r73);
CPyL37: ;
    cpy_r_r74.f0 = cpy_r_block;
    cpy_r_r74.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r74.f0);
    CPyTagged_INCREF(cpy_r_r74.f1);
    cpy_r_r75 = PyTuple_New(2);
    if (unlikely(cpy_r_r75 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8227 = cpy_r_r74.f0;
    PyTuple_SET_ITEM(cpy_r_r75, 0, __tmp8227);
    PyObject *__tmp8228 = CPyTagged_StealAsObject(cpy_r_r74.f1);
    PyTuple_SET_ITEM(cpy_r_r75, 1, __tmp8228);
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r73, cpy_r_r75);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 225, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    if (likely(PySet_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 225, CPyStatic_attrdefined___globals, "set", cpy_r_r76);
        goto CPyL92;
    }
    cpy_r_r78 = PyObject_IsTrue(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 225, CPyStatic_attrdefined___globals);
        goto CPyL92;
    }
    cpy_r_r80 = cpy_r_r78;
    if (cpy_r_r80) {
        goto CPyL96;
    } else
        goto CPyL57;
CPyL41: ;
    cpy_r_r81 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_before;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "before", 226, CPyStatic_attrdefined___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r81);
CPyL42: ;
    cpy_r_r82.f0 = cpy_r_block;
    cpy_r_r82.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r82.f0);
    CPyTagged_INCREF(cpy_r_r82.f1);
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8229 = cpy_r_r82.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp8229);
    PyObject *__tmp8230 = CPyTagged_StealAsObject(cpy_r_r82.f1);
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp8230);
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r81, cpy_r_r83);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 226, CPyStatic_attrdefined___globals);
        goto CPyL97;
    }
    if (likely(PySet_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 226, CPyStatic_attrdefined___globals, "set", cpy_r_r84);
        goto CPyL97;
    }
    cpy_r_r86 = PyObject_IsTrue(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 226, CPyStatic_attrdefined___globals);
        goto CPyL97;
    }
    cpy_r_r88 = cpy_r_r86;
    if (cpy_r_r88) goto CPyL98;
    cpy_r_r89 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_after;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 228, CPyStatic_attrdefined___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r89);
CPyL47: ;
    cpy_r_r90.f0 = cpy_r_block;
    cpy_r_r90.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r90.f0);
    CPyTagged_INCREF(cpy_r_r90.f1);
    cpy_r_r91 = PyTuple_New(2);
    if (unlikely(cpy_r_r91 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8231 = cpy_r_r90.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp8231);
    PyObject *__tmp8232 = CPyTagged_StealAsObject(cpy_r_r90.f1);
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp8232);
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r89, cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals);
        goto CPyL97;
    }
    if (likely(PySet_Check(cpy_r_r92)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals, "set", cpy_r_r92);
        goto CPyL97;
    }
    cpy_r_r94 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_undefined)->_after;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 228, CPyStatic_attrdefined___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r94);
CPyL50: ;
    cpy_r_r95.f0 = cpy_r_block;
    cpy_r_r95.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r95.f0);
    CPyTagged_INCREF(cpy_r_r95.f1);
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r96 = PyTuple_New(2);
    if (unlikely(cpy_r_r96 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8233 = cpy_r_r95.f0;
    PyTuple_SET_ITEM(cpy_r_r96, 0, __tmp8233);
    PyObject *__tmp8234 = CPyTagged_StealAsObject(cpy_r_r95.f1);
    PyTuple_SET_ITEM(cpy_r_r96, 1, __tmp8234);
    cpy_r_r97 = CPyDict_GetItem(cpy_r_r94, cpy_r_r96);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals);
        goto CPyL100;
    }
    if (likely(PySet_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals, "set", cpy_r_r97);
        goto CPyL100;
    }
    cpy_r_r99 = PyNumber_Subtract(cpy_r_r93, cpy_r_r98);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals);
        goto CPyL89;
    }
    if (likely(PySet_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 228, CPyStatic_attrdefined___globals, "set", cpy_r_r99);
        goto CPyL89;
    }
    cpy_r_r101 = PyNumber_And(cpy_r_attrs, cpy_r_r100);
    CPy_DECREF(cpy_r_attrs);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 227, CPyStatic_attrdefined___globals);
        goto CPyL88;
    }
    if (likely(PySet_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 227, CPyStatic_attrdefined___globals, "set", cpy_r_r101);
        goto CPyL88;
    }
    cpy_r_attrs = cpy_r_r102;
    goto CPyL86;
CPyL57: ;
    cpy_r_r103 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r104 = CPy_TypeCheck(cpy_r_op, cpy_r_r103);
    if (!cpy_r_r104) goto CPyL101;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___ControlOp)))
        cpy_r_r105 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 232, CPyStatic_attrdefined___globals, "mypyc.ir.ops.ControlOp", cpy_r_op);
        goto CPyL91;
    }
    cpy_r_r106 = CPY_GET_METHOD(cpy_r_r105, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_r105); /* targets */
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 232, CPyStatic_attrdefined___globals);
        goto CPyL91;
    }
    cpy_r_r107 = PyObject_GetIter(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 232, CPyStatic_attrdefined___globals);
        goto CPyL91;
    }
CPyL61: ;
    cpy_r_r108 = PyIter_Next(cpy_r_r107);
    if (cpy_r_r108 == NULL) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_r108) == CPyType_ops___BasicBlock))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 232, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r108);
        goto CPyL103;
    }
    cpy_r_target = cpy_r_r109;
    cpy_r_r110 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r110);
CPyL64: ;
    cpy_r_r111.f0 = cpy_r_block;
    cpy_r_r111.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r111.f0);
    CPyTagged_INCREF(cpy_r_r111.f1);
    cpy_r_r112 = PyTuple_New(2);
    if (unlikely(cpy_r_r112 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8235 = cpy_r_r111.f0;
    PyTuple_SET_ITEM(cpy_r_r112, 0, __tmp8235);
    PyObject *__tmp8236 = CPyTagged_StealAsObject(cpy_r_r111.f1);
    PyTuple_SET_ITEM(cpy_r_r112, 1, __tmp8236);
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r110, cpy_r_r112);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    if (likely(PySet_Check(cpy_r_r113)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals, "set", cpy_r_r113);
        goto CPyL104;
    }
    cpy_r_r115 = PyObject_IsTrue(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    cpy_r_r117 = cpy_r_r115;
    if (cpy_r_r117) goto CPyL105;
    cpy_r_r118 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_before;
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "before", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r118);
CPyL69: ;
    cpy_r_r119.f0 = cpy_r_target;
    cpy_r_r119.f1 = 0;
    CPy_INCREF(cpy_r_r119.f0);
    CPyTagged_INCREF(cpy_r_r119.f1);
    cpy_r_r120 = PyTuple_New(2);
    if (unlikely(cpy_r_r120 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8237 = cpy_r_r119.f0;
    PyTuple_SET_ITEM(cpy_r_r120, 0, __tmp8237);
    PyObject *__tmp8238 = CPyTagged_StealAsObject(cpy_r_r119.f1);
    PyTuple_SET_ITEM(cpy_r_r120, 1, __tmp8238);
    cpy_r_r121 = CPyDict_GetItem(cpy_r_r118, cpy_r_r120);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    if (likely(PySet_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals, "set", cpy_r_r121);
        goto CPyL104;
    }
    cpy_r_r123 = PyObject_IsTrue(cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 234, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    cpy_r_r125 = cpy_r_r123;
    if (!cpy_r_r125) goto CPyL105;
    cpy_r_r126 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_after;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 236, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r126);
CPyL74: ;
    cpy_r_r127.f0 = cpy_r_target;
    cpy_r_r127.f1 = 0;
    CPy_INCREF(cpy_r_r127.f0);
    CPyTagged_INCREF(cpy_r_r127.f1);
    cpy_r_r128 = PyTuple_New(2);
    if (unlikely(cpy_r_r128 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8239 = cpy_r_r127.f0;
    PyTuple_SET_ITEM(cpy_r_r128, 0, __tmp8239);
    PyObject *__tmp8240 = CPyTagged_StealAsObject(cpy_r_r127.f1);
    PyTuple_SET_ITEM(cpy_r_r128, 1, __tmp8240);
    cpy_r_r129 = CPyDict_GetItem(cpy_r_r126, cpy_r_r128);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals);
        goto CPyL104;
    }
    if (likely(PySet_Check(cpy_r_r129)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals, "set", cpy_r_r129);
        goto CPyL104;
    }
    cpy_r_r131 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_undefined)->_after;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", "AnalysisResult", "after", 236, CPyStatic_attrdefined___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r131);
CPyL77: ;
    cpy_r_r132.f0 = cpy_r_target;
    cpy_r_r132.f1 = 0;
    CPy_INCREF(cpy_r_r132.f0);
    CPyTagged_INCREF(cpy_r_r132.f1);
    CPy_DECREF(cpy_r_target);
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8241 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp8241);
    PyObject *__tmp8242 = CPyTagged_StealAsObject(cpy_r_r132.f1);
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp8242);
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r131, cpy_r_r133);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals);
        goto CPyL107;
    }
    if (likely(PySet_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals, "set", cpy_r_r134);
        goto CPyL107;
    }
    cpy_r_r136 = PyNumber_Subtract(cpy_r_r130, cpy_r_r135);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals);
        goto CPyL103;
    }
    if (likely(PySet_Check(cpy_r_r136)))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 236, CPyStatic_attrdefined___globals, "set", cpy_r_r136);
        goto CPyL103;
    }
    cpy_r_r138 = PyNumber_And(cpy_r_attrs, cpy_r_r137);
    CPy_DECREF(cpy_r_attrs);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 235, CPyStatic_attrdefined___globals);
        goto CPyL108;
    }
    if (likely(PySet_Check(cpy_r_r138)))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 235, CPyStatic_attrdefined___globals, "set", cpy_r_r138);
        goto CPyL108;
    }
    cpy_r_attrs = cpy_r_r139;
    goto CPyL61;
CPyL84: ;
    cpy_r_r140 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 232, CPyStatic_attrdefined___globals);
        goto CPyL109;
    }
CPyL85: ;
    cpy_r_r141 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r141;
    cpy_r_i = cpy_r_r141;
    cpy_r_r142 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r142;
    goto CPyL6;
CPyL86: ;
    cpy_r_r143 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r143;
    goto CPyL3;
CPyL87: ;
    return cpy_r_attrs;
CPyL88: ;
    cpy_r_r144 = NULL;
    return cpy_r_r144;
CPyL89: ;
    CPy_DecRef(cpy_r_attrs);
    goto CPyL88;
CPyL90: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r13);
    goto CPyL86;
CPyL91: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    goto CPyL88;
CPyL92: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_op);
    goto CPyL88;
CPyL93: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r29);
    goto CPyL88;
CPyL94: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r50);
    goto CPyL88;
CPyL95: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r60);
    goto CPyL88;
CPyL96: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_op);
    goto CPyL41;
CPyL97: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL88;
CPyL98: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL86;
CPyL99: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r93);
    goto CPyL88;
CPyL100: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r93);
    goto CPyL88;
CPyL101: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_op);
    goto CPyL85;
CPyL102: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r107);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r107);
    goto CPyL88;
CPyL104: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_target);
    goto CPyL88;
CPyL105: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL61;
CPyL106: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r130);
    goto CPyL88;
CPyL107: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r130);
    goto CPyL88;
CPyL108: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r107);
    goto CPyL88;
CPyL109: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r13);
    goto CPyL88;
}

PyObject *CPyPy_attrdefined___find_always_defined_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "all_attrs", "maybe_defined", "maybe_undefined", "dirty", 0};
    static CPyArg_Parser parser = {"OOOOOO:find_always_defined_attributes", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_all_attrs;
    PyObject *obj_maybe_defined;
    PyObject *obj_maybe_undefined;
    PyObject *obj_dirty;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_all_attrs, &obj_maybe_defined, &obj_maybe_undefined, &obj_dirty)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    PyObject *arg_all_attrs;
    if (likely(PySet_Check(obj_all_attrs)))
        arg_all_attrs = obj_all_attrs;
    else {
        CPy_TypeError("set", obj_all_attrs); 
        goto fail;
    }
    PyObject *arg_maybe_defined;
    if (likely(Py_TYPE(obj_maybe_defined) == CPyType_dataflow___AnalysisResult))
        arg_maybe_defined = obj_maybe_defined;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_maybe_defined); 
        goto fail;
    }
    PyObject *arg_maybe_undefined;
    if (likely(Py_TYPE(obj_maybe_undefined) == CPyType_dataflow___AnalysisResult))
        arg_maybe_undefined = obj_maybe_undefined;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_maybe_undefined); 
        goto fail;
    }
    PyObject *arg_dirty;
    if (likely(Py_TYPE(obj_dirty) == CPyType_dataflow___AnalysisResult))
        arg_dirty = obj_dirty;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_dirty); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___find_always_defined_attributes(arg_blocks, arg_self_reg, arg_all_attrs, arg_maybe_defined, arg_maybe_undefined, arg_dirty);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_always_defined_attributes", 191, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___find_sometimes_defined_attributes(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_maybe_defined, PyObject *cpy_r_dirty) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attrs;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_block;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r17;
    tuple_T2OI cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2OI cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T2OI cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r47;
    tuple_T2OI cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T2OI cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2OI cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 248, CPyStatic_attrdefined___globals);
        goto CPyL49;
    }
    cpy_r_attrs = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL48;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_ops___BasicBlock))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 249, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r6);
        goto CPyL50;
    }
    cpy_r_block = cpy_r_r7;
    cpy_r_r8 = 0;
    cpy_r_i = 0;
    cpy_r_r9 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL5: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL51;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_ops___Op)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 250, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Op", cpy_r_r15);
        goto CPyL52;
    }
    cpy_r_op = cpy_r_r16;
    cpy_r_r17 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "after", 252, CPyStatic_attrdefined___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r17);
CPyL8: ;
    cpy_r_r18.f0 = cpy_r_block;
    cpy_r_r18.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r18.f0);
    CPyTagged_INCREF(cpy_r_r18.f1);
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8243 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp8243);
    PyObject *__tmp8244 = CPyTagged_StealAsObject(cpy_r_r18.f1);
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp8244);
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 252, CPyStatic_attrdefined___globals);
        goto CPyL53;
    }
    if (likely(PySet_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 252, CPyStatic_attrdefined___globals, "set", cpy_r_r20);
        goto CPyL53;
    }
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 252, CPyStatic_attrdefined___globals);
        goto CPyL53;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) {
        goto CPyL54;
    } else
        goto CPyL23;
CPyL12: ;
    cpy_r_r25 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_before;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "before", 253, CPyStatic_attrdefined___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r25);
CPyL13: ;
    cpy_r_r26.f0 = cpy_r_block;
    cpy_r_r26.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r26.f0);
    CPyTagged_INCREF(cpy_r_r26.f1);
    cpy_r_r27 = PyTuple_New(2);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8245 = cpy_r_r26.f0;
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp8245);
    PyObject *__tmp8246 = CPyTagged_StealAsObject(cpy_r_r26.f1);
    PyTuple_SET_ITEM(cpy_r_r27, 1, __tmp8246);
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 253, CPyStatic_attrdefined___globals);
        goto CPyL55;
    }
    if (likely(PySet_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 253, CPyStatic_attrdefined___globals, "set", cpy_r_r28);
        goto CPyL55;
    }
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 253, CPyStatic_attrdefined___globals);
        goto CPyL55;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) goto CPyL56;
    cpy_r_r33 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_after;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "after", 254, CPyStatic_attrdefined___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r33);
CPyL18: ;
    cpy_r_r34.f0 = cpy_r_block;
    cpy_r_r34.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r34.f0);
    CPyTagged_INCREF(cpy_r_r34.f1);
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8247 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp8247);
    PyObject *__tmp8248 = CPyTagged_StealAsObject(cpy_r_r34.f1);
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp8248);
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r33, cpy_r_r35);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 254, CPyStatic_attrdefined___globals);
        goto CPyL50;
    }
    if (likely(PySet_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 254, CPyStatic_attrdefined___globals, "set", cpy_r_r36);
        goto CPyL50;
    }
    cpy_r_r38 = PyNumber_Or(cpy_r_attrs, cpy_r_r37);
    CPy_DECREF(cpy_r_attrs);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 254, CPyStatic_attrdefined___globals);
        goto CPyL49;
    }
    if (likely(PySet_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 254, CPyStatic_attrdefined___globals, "set", cpy_r_r38);
        goto CPyL49;
    }
    cpy_r_attrs = cpy_r_r39;
    goto CPyL47;
CPyL23: ;
    cpy_r_r40 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r41 = CPy_TypeCheck(cpy_r_op, cpy_r_r40);
    if (!cpy_r_r41) goto CPyL57;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___ControlOp)))
        cpy_r_r42 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 257, CPyStatic_attrdefined___globals, "mypyc.ir.ops.ControlOp", cpy_r_op);
        goto CPyL52;
    }
    cpy_r_r43 = CPY_GET_METHOD(cpy_r_r42, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_r42); /* targets */
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 257, CPyStatic_attrdefined___globals);
        goto CPyL52;
    }
    cpy_r_r44 = PyObject_GetIter(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 257, CPyStatic_attrdefined___globals);
        goto CPyL52;
    }
CPyL27: ;
    cpy_r_r45 = PyIter_Next(cpy_r_r44);
    if (cpy_r_r45 == NULL) goto CPyL58;
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_ops___BasicBlock))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 257, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r45);
        goto CPyL59;
    }
    cpy_r_target = cpy_r_r46;
    cpy_r_r47 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "after", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r47);
CPyL30: ;
    cpy_r_r48.f0 = cpy_r_block;
    cpy_r_r48.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r48.f0);
    CPyTagged_INCREF(cpy_r_r48.f1);
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8249 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp8249);
    PyObject *__tmp8250 = CPyTagged_StealAsObject(cpy_r_r48.f1);
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp8250);
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r47, cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    if (likely(PySet_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals, "set", cpy_r_r50);
        goto CPyL60;
    }
    cpy_r_r52 = PyObject_IsTrue(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    cpy_r_r54 = cpy_r_r52;
    if (cpy_r_r54) goto CPyL61;
    cpy_r_r55 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_before;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "before", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r55);
CPyL35: ;
    cpy_r_r56.f0 = cpy_r_target;
    cpy_r_r56.f1 = 0;
    CPy_INCREF(cpy_r_r56.f0);
    CPyTagged_INCREF(cpy_r_r56.f1);
    cpy_r_r57 = PyTuple_New(2);
    if (unlikely(cpy_r_r57 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8251 = cpy_r_r56.f0;
    PyTuple_SET_ITEM(cpy_r_r57, 0, __tmp8251);
    PyObject *__tmp8252 = CPyTagged_StealAsObject(cpy_r_r56.f1);
    PyTuple_SET_ITEM(cpy_r_r57, 1, __tmp8252);
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r55, cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    if (likely(PySet_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals, "set", cpy_r_r58);
        goto CPyL60;
    }
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 258, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    cpy_r_r62 = cpy_r_r60;
    if (!cpy_r_r62) goto CPyL61;
    cpy_r_r63 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_after;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", "AnalysisResult", "after", 259, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r63);
CPyL40: ;
    cpy_r_r64.f0 = cpy_r_target;
    cpy_r_r64.f1 = 0;
    CPy_INCREF(cpy_r_r64.f0);
    CPyTagged_INCREF(cpy_r_r64.f1);
    CPy_DECREF(cpy_r_target);
    cpy_r_r65 = PyTuple_New(2);
    if (unlikely(cpy_r_r65 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8253 = cpy_r_r64.f0;
    PyTuple_SET_ITEM(cpy_r_r65, 0, __tmp8253);
    PyObject *__tmp8254 = CPyTagged_StealAsObject(cpy_r_r64.f1);
    PyTuple_SET_ITEM(cpy_r_r65, 1, __tmp8254);
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r63, cpy_r_r65);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 259, CPyStatic_attrdefined___globals);
        goto CPyL59;
    }
    if (likely(PySet_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 259, CPyStatic_attrdefined___globals, "set", cpy_r_r66);
        goto CPyL59;
    }
    cpy_r_r68 = PyNumber_Or(cpy_r_attrs, cpy_r_r67);
    CPy_DECREF(cpy_r_attrs);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 259, CPyStatic_attrdefined___globals);
        goto CPyL62;
    }
    if (likely(PySet_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 259, CPyStatic_attrdefined___globals, "set", cpy_r_r68);
        goto CPyL62;
    }
    cpy_r_attrs = cpy_r_r69;
    goto CPyL27;
CPyL45: ;
    cpy_r_r70 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 257, CPyStatic_attrdefined___globals);
        goto CPyL63;
    }
CPyL46: ;
    cpy_r_r71 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r71;
    cpy_r_i = cpy_r_r71;
    cpy_r_r72 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r72;
    goto CPyL5;
CPyL47: ;
    cpy_r_r73 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r73;
    goto CPyL2;
CPyL48: ;
    return cpy_r_attrs;
CPyL49: ;
    cpy_r_r74 = NULL;
    return cpy_r_r74;
CPyL50: ;
    CPy_DecRef(cpy_r_attrs);
    goto CPyL49;
CPyL51: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r9);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    goto CPyL49;
CPyL53: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_op);
    goto CPyL49;
CPyL54: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_op);
    goto CPyL12;
CPyL55: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL49;
CPyL56: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL47;
CPyL57: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_op);
    goto CPyL46;
CPyL58: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r44);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r44);
    goto CPyL49;
CPyL60: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_target);
    goto CPyL49;
CPyL61: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL27;
CPyL62: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r44);
    goto CPyL49;
CPyL63: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r9);
    goto CPyL49;
}

PyObject *CPyPy_attrdefined___find_sometimes_defined_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "maybe_defined", "dirty", 0};
    static CPyArg_Parser parser = {"OOOO:find_sometimes_defined_attributes", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_maybe_defined;
    PyObject *obj_dirty;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_maybe_defined, &obj_dirty)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    PyObject *arg_maybe_defined;
    if (likely(Py_TYPE(obj_maybe_defined) == CPyType_dataflow___AnalysisResult))
        arg_maybe_defined = obj_maybe_defined;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_maybe_defined); 
        goto fail;
    }
    PyObject *arg_dirty;
    if (likely(Py_TYPE(obj_dirty) == CPyType_dataflow___AnalysisResult))
        arg_dirty = obj_dirty;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_dirty); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___find_sometimes_defined_attributes(arg_blocks, arg_self_reg, arg_maybe_defined, arg_dirty);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "find_sometimes_defined_attributes", 241, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___mark_attr_initialiation_ops(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_maybe_defined, PyObject *cpy_r_dirty) {
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
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r25;
    tuple_T2OI cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    tuple_T2OI cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL24;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_ops___BasicBlock))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 274, CPyStatic_attrdefined___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r5);
        goto CPyL25;
    }
    cpy_r_block = cpy_r_r6;
    cpy_r_r7 = 0;
    cpy_r_i = 0;
    cpy_r_r8 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL26;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_ops___Op)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 275, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Op", cpy_r_r14);
        goto CPyL27;
    }
    cpy_r_op = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_ops___SetAttr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r20 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 276, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL29;
    }
    cpy_r_r21 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r20)->_obj;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = cpy_r_r21 == cpy_r_self_reg;
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r22) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r23 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 277, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL29;
    }
    cpy_r_r24 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r23)->_attr;
    CPy_INCREF(cpy_r_r24);
    cpy_r_attr = cpy_r_r24;
    cpy_r_r25 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_maybe_defined)->_before;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", "AnalysisResult", "before", 278, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r25);
CPyL11: ;
    cpy_r_r26.f0 = cpy_r_block;
    cpy_r_r26.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r26.f0);
    CPyTagged_INCREF(cpy_r_r26.f1);
    cpy_r_r27 = PyTuple_New(2);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8255 = cpy_r_r26.f0;
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp8255);
    PyObject *__tmp8256 = CPyTagged_StealAsObject(cpy_r_r26.f1);
    PyTuple_SET_ITEM(cpy_r_r27, 1, __tmp8256);
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    if (likely(PySet_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals, "set", cpy_r_r28);
        goto CPyL30;
    }
    cpy_r_r30 = PySet_Contains(cpy_r_r29, cpy_r_attr);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r32 = cpy_r_r30;
    cpy_r_r33 = cpy_r_r32 ^ 1;
    if (!cpy_r_r33) goto CPyL28;
    cpy_r_r34 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_dirty)->_after;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", "AnalysisResult", "after", 278, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r34);
CPyL16: ;
    cpy_r_r35.f0 = cpy_r_block;
    cpy_r_r35.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r35.f0);
    CPyTagged_INCREF(cpy_r_r35.f1);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8257 = cpy_r_r35.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp8257);
    PyObject *__tmp8258 = CPyTagged_StealAsObject(cpy_r_r35.f1);
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp8258);
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals);
        goto CPyL31;
    }
    if (likely(PySet_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals, "set", cpy_r_r37);
        goto CPyL31;
    }
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 278, CPyStatic_attrdefined___globals);
        goto CPyL31;
    }
    cpy_r_r41 = cpy_r_r39;
    if (cpy_r_r41) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r42 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 279, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL33;
    }
    cpy_r_r43 = CPyDef_ops___SetAttr___mark_as_initializer(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 279, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
CPyL22: ;
    cpy_r_r44 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r44;
    cpy_r_i = cpy_r_r44;
    cpy_r_r45 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r45;
    goto CPyL4;
CPyL23: ;
    cpy_r_r46 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r46;
    goto CPyL1;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL26: ;
    CPy_DECREF(cpy_r_block);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r8);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r8);
    goto CPyL25;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_op);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_op);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_block);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_attr);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_op);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r8);
    goto CPyL25;
}

PyObject *CPyPy_attrdefined___mark_attr_initialiation_ops(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "maybe_defined", "dirty", 0};
    static CPyArg_Parser parser = {"OOOO:mark_attr_initialiation_ops", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_maybe_defined;
    PyObject *obj_dirty;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_maybe_defined, &obj_dirty)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    PyObject *arg_maybe_defined;
    if (likely(Py_TYPE(obj_maybe_defined) == CPyType_dataflow___AnalysisResult))
        arg_maybe_defined = obj_maybe_defined;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_maybe_defined); 
        goto fail;
    }
    PyObject *arg_dirty;
    if (likely(Py_TYPE(obj_dirty) == CPyType_dataflow___AnalysisResult))
        arg_dirty = obj_dirty;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.AnalysisResult", obj_dirty); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___mark_attr_initialiation_ops(arg_blocks, arg_self_reg, arg_maybe_defined, arg_dirty);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "mark_attr_initialiation_ops", 263, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___attributes_initialized_by_init_call(PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_self_type;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T3CIO cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_a;
    char cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r1)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_r2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 287, CPyStatic_attrdefined___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_func_ir___RuntimeArg))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 287, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r3);
        goto CPyL22;
    }
    cpy_r_r5 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_self_type = cpy_r_r5;
    cpy_r_r6 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_self_type)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL5;
    } else
        goto CPyL23;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 288, CPyStatic_attrdefined___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_self_type) == CPyType_rtypes___RInstance))
        cpy_r_r11 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 289, CPyStatic_attrdefined___globals, "mypyc.ir.rtypes.RInstance", cpy_r_self_type);
        goto CPyL24;
    }
    cpy_r_r12 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r11)->_class_ir;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_self_type);
    cpy_r_cl = cpy_r_r12;
    cpy_r_r13 = PySet_New(NULL);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL25;
    }
    cpy_r_r14 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_mro;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'mro' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
CPyL8: ;
    cpy_r_r15 = 0;
CPyL9: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL27;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_class_ir___ClassIR))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r20);
        goto CPyL28;
    }
    cpy_r_base = cpy_r_r21;
    cpy_r_r22 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", "ClassIR", "attributes", 290, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r22);
CPyL12: ;
    cpy_r_r23 = 0;
    cpy_r_r24 = PyDict_Size(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = CPyDict_GetKeysIter(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
CPyL13: ;
    cpy_r_r27 = CPyDict_NextKey(cpy_r_r26, cpy_r_r23);
    cpy_r_r28 = cpy_r_r27.f1;
    cpy_r_r23 = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f0;
    if (!cpy_r_r29) goto CPyL31;
    cpy_r_r30 = cpy_r_r27.f2;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r27.f2);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals, "str", cpy_r_r30);
        goto CPyL32;
    }
    cpy_r_a = cpy_r_r31;
    cpy_r_r32 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_base, cpy_r_a);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    if (!cpy_r_r32) goto CPyL34;
    cpy_r_r33 = PySet_Add(cpy_r_r13, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL32;
    }
CPyL18: ;
    cpy_r_r35 = CPyDict_CheckSize(cpy_r_r22, cpy_r_r25);
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL32;
    } else
        goto CPyL13;
CPyL19: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 290, CPyStatic_attrdefined___globals);
        goto CPyL28;
    }
    cpy_r_r37 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r37;
    goto CPyL9;
CPyL21: ;
    return cpy_r_r13;
CPyL22: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL23: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL3;
CPyL24: ;
    CPy_DecRef(cpy_r_self_type);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_cl);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL27: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_base);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r22);
    goto CPyL22;
CPyL31: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27.f2);
    goto CPyL19;
CPyL32: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_a);
    goto CPyL22;
CPyL34: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL18;
}

PyObject *CPyPy_attrdefined___attributes_initialized_by_init_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:attributes_initialized_by_init_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___attributes_initialized_by_init_call(arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_initialized_by_init_call", 285, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___attributes_maybe_initialized_by_init_call(PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_self_type;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r1)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_r2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 295, CPyStatic_attrdefined___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_func_ir___RuntimeArg))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 295, CPyStatic_attrdefined___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r3);
        goto CPyL11;
    }
    cpy_r_r5 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_self_type = cpy_r_r5;
    cpy_r_r6 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_self_type)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL5;
    } else
        goto CPyL12;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 296, CPyStatic_attrdefined___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_self_type) == CPyType_rtypes___RInstance))
        cpy_r_r11 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 297, CPyStatic_attrdefined___globals, "mypyc.ir.rtypes.RInstance", cpy_r_self_type);
        goto CPyL13;
    }
    cpy_r_r12 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r11)->_class_ir;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_self_type);
    cpy_r_cl = cpy_r_r12;
    cpy_r_r13 = CPyDef_attrdefined___attributes_initialized_by_init_call(cpy_r_op);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 298, CPyStatic_attrdefined___globals);
        goto CPyL14;
    }
    cpy_r_r14 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__sometimes_initialized_attrs;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_sometimes_initialized_attrs' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 298, CPyStatic_attrdefined___globals);
        goto CPyL15;
    }
CPyL8: ;
    cpy_r_r15 = PyNumber_Or(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 298, CPyStatic_attrdefined___globals);
        goto CPyL11;
    }
    if (likely(PySet_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 298, CPyStatic_attrdefined___globals, "set", cpy_r_r15);
        goto CPyL11;
    }
    return cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL12: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL3;
CPyL13: ;
    CPy_DecRef(cpy_r_self_type);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_cl);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
}

PyObject *CPyPy_attrdefined___attributes_maybe_initialized_by_init_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:attributes_maybe_initialized_by_init_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___attributes_maybe_initialized_by_init_call(arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "attributes_maybe_initialized_by_init_call", 293, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___AttributeMaybeDefinedVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_self_reg) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_self_reg);
    if (((mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *)cpy_r_self)->_self_reg != NULL) {
        CPy_DECREF(((mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *)cpy_r_self)->_self_reg);
    }
    ((mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *)cpy_r_self)->_self_reg = cpy_r_self_reg;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "__init__", 309, CPyStatic_attrdefined___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"self_reg", 0};
    PyObject *obj_self_reg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_self_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor_____init__(arg_self, arg_self_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "__init__", 308, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 312, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 312, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8259 = { NULL, NULL };
    cpy_r_r3 = __tmp8259;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8260 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8260);
    PyObject *__tmp8261 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8261);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 311, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8262 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8262);
    PyObject *__tmp8263 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8263);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 315, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 315, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8264 = { NULL, NULL };
    cpy_r_r3 = __tmp8264;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8265 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8265);
    PyObject *__tmp8266 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8266);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 314, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8267 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8267);
    PyObject *__tmp8268 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8268);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 318, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 318, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8269 = { NULL, NULL };
    cpy_r_r3 = __tmp8269;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8270 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8270);
    PyObject *__tmp8271 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8271);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 317, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8272 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8272);
    PyObject *__tmp8273 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8273);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    tuple_T2OO cpy_r_r43;
    cpy_r_r0 = (PyObject *)CPyType_ops___SetAttr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r4 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 321, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r5 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r4)->_obj;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___analysis___attrdefined___AttributeMaybeDefinedVisitorObject *)cpy_r_self)->_self_reg;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "visit_register_op", "AttributeMaybeDefinedVisitor", "self_reg", 321, CPyStatic_attrdefined___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r8 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 322, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r9 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r8)->_attr;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PySet_New(NULL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 322, CPyStatic_attrdefined___globals);
        goto CPyL28;
    }
    cpy_r_r11 = PySet_Add(cpy_r_r10, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 322, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r13 = PySet_New(NULL);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 322, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r14.f0 = cpy_r_r10;
    cpy_r_r14.f1 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r13);
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = (PyObject *)CPyType_ops___Call;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r19 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 323, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r20 = ((mypyc___ir___ops___CallObject *)cpy_r_r19)->_fn;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r20)->_class_name;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL30;
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r24 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 323, CPyStatic_attrdefined___globals, "str", cpy_r_r21);
        goto CPyL26;
    }
    cpy_r_r25 = CPyStr_IsTrue(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r26 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 323, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r27 = ((mypyc___ir___ops___CallObject *)cpy_r_r26)->_fn;
    cpy_r_r28 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r27)->_name;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[288]; /* '__init__' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL18;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 323, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
CPyL18: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL23;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r36 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 324, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r37 = CPyDef_attrdefined___attributes_maybe_initialized_by_init_call(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 324, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
    cpy_r_r38 = PySet_New(NULL);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 324, CPyStatic_attrdefined___globals);
        goto CPyL31;
    }
    cpy_r_r39.f0 = cpy_r_r37;
    cpy_r_r39.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    return cpy_r_r39;
CPyL23: ;
    cpy_r_r40 = PySet_New(NULL);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 325, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
    cpy_r_r41 = PySet_New(NULL);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 325, CPyStatic_attrdefined___globals);
        goto CPyL32;
    }
    cpy_r_r42.f0 = cpy_r_r40;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    return cpy_r_r42;
CPyL26: ;
    tuple_T2OO __tmp8274 = { NULL, NULL };
    cpy_r_r43 = __tmp8274;
    return cpy_r_r43;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL26;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8275 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8275);
    PyObject *__tmp8276 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8276);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 320, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 328, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 328, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8277 = { NULL, NULL };
    cpy_r_r3 = __tmp8277;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8278 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8278);
    PyObject *__tmp8279 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8279);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 327, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8280 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8280);
    PyObject *__tmp8281 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8281);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 331, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 331, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8282 = { NULL, NULL };
    cpy_r_r3 = __tmp8282;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8283 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8283);
    PyObject *__tmp8284 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8284);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 330, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8285 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8285);
    PyObject *__tmp8286 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8286);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 334, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 334, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8287 = { NULL, NULL };
    cpy_r_r3 = __tmp8287;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8288 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8288);
    PyObject *__tmp8289 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8289);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 333, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8290 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8290);
    PyObject *__tmp8291 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8291);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeDefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeDefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeDefinedVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___analyze_maybe_defined_attrs_in_init(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_attrs_with_defaults, PyObject *cpy_r_cfg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor(cpy_r_self_reg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_defined_attrs_in_init", 343, CPyStatic_attrdefined___globals);
        goto CPyL5;
    }
    cpy_r_r1 = CPyStatic_attrdefined___globals;
    cpy_r_r2 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_defined_attrs_in_init", 346, CPyStatic_attrdefined___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_defined_attrs_in_init", 346, CPyStatic_attrdefined___globals);
        goto CPyL6;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_attrs_with_defaults, cpy_r_r4, 0, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_defined_attrs_in_init", 340, CPyStatic_attrdefined___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_attrdefined___analyze_maybe_defined_attrs_in_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "attrs_with_defaults", "cfg", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_maybe_defined_attrs_in_init", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_attrs_with_defaults;
    PyObject *obj_cfg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_attrs_with_defaults, &obj_cfg)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    PyObject *arg_attrs_with_defaults;
    if (likely(PySet_Check(obj_attrs_with_defaults)))
        arg_attrs_with_defaults = obj_attrs_with_defaults;
    else {
        CPy_TypeError("set", obj_attrs_with_defaults); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___analyze_maybe_defined_attrs_in_init(arg_blocks, arg_self_reg, arg_attrs_with_defaults, arg_cfg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_defined_attrs_in_init", 337, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_self_reg) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_self_reg);
    if (((mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *)cpy_r_self)->_self_reg != NULL) {
        CPy_DECREF(((mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *)cpy_r_self)->_self_reg);
    }
    ((mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *)cpy_r_self)->_self_reg = cpy_r_self_reg;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "__init__", 358, CPyStatic_attrdefined___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"self_reg", 0};
    PyObject *obj_self_reg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_self_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_____init__(arg_self, arg_self_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "__init__", 357, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 361, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 361, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8292 = { NULL, NULL };
    cpy_r_r3 = __tmp8292;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8293 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8293);
    PyObject *__tmp8294 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8294);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch", 360, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8295 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8295);
    PyObject *__tmp8296 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8296);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 364, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 364, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8297 = { NULL, NULL };
    cpy_r_r3 = __tmp8297;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8298 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8298);
    PyObject *__tmp8299 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8299);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return", 363, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8300 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8300);
    PyObject *__tmp8301 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8301);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_return__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 367, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 367, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8302 = { NULL, NULL };
    cpy_r_r3 = __tmp8302;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8303 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8303);
    PyObject *__tmp8304 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8304);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable", 366, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8305 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8305);
    PyObject *__tmp8306 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8306);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    tuple_T2OO cpy_r_r43;
    cpy_r_r0 = (PyObject *)CPyType_ops___SetAttr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r4 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 370, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r5 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r4)->_obj;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___analysis___attrdefined___AttributeMaybeUndefinedVisitorObject *)cpy_r_self)->_self_reg;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "visit_register_op", "AttributeMaybeUndefinedVisitor", "self_reg", 370, CPyStatic_attrdefined___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = PySet_New(NULL);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 371, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r9 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 371, CPyStatic_attrdefined___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL28;
    }
    cpy_r_r10 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r9)->_attr;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 371, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r12 = PySet_Add(cpy_r_r11, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 371, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    cpy_r_r14.f0 = cpy_r_r8;
    cpy_r_r14.f1 = cpy_r_r11;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = (PyObject *)CPyType_ops___Call;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r19 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 372, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r20 = ((mypyc___ir___ops___CallObject *)cpy_r_r19)->_fn;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r20)->_class_name;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL31;
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r24 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 372, CPyStatic_attrdefined___globals, "str", cpy_r_r21);
        goto CPyL26;
    }
    cpy_r_r25 = CPyStr_IsTrue(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r26 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 372, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL26;
    }
    cpy_r_r27 = ((mypyc___ir___ops___CallObject *)cpy_r_r26)->_fn;
    cpy_r_r28 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r27)->_name;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[288]; /* '__init__' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL18;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 372, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
CPyL18: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL23;
    cpy_r_r36 = PySet_New(NULL);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 373, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Call))
        cpy_r_r37 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 373, CPyStatic_attrdefined___globals, "mypyc.ir.ops.Call", cpy_r_op);
        goto CPyL32;
    }
    cpy_r_r38 = CPyDef_attrdefined___attributes_initialized_by_init_call(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 373, CPyStatic_attrdefined___globals);
        goto CPyL32;
    }
    cpy_r_r39.f0 = cpy_r_r36;
    cpy_r_r39.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    return cpy_r_r39;
CPyL23: ;
    cpy_r_r40 = PySet_New(NULL);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 374, CPyStatic_attrdefined___globals);
        goto CPyL26;
    }
    cpy_r_r41 = PySet_New(NULL);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 374, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r42.f0 = cpy_r_r40;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    return cpy_r_r42;
CPyL26: ;
    tuple_T2OO __tmp8307 = { NULL, NULL };
    cpy_r_r43 = __tmp8307;
    return cpy_r_r43;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL26;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8308 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8308);
    PyObject *__tmp8309 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8309);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_register_op", 369, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 377, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 377, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8310 = { NULL, NULL };
    cpy_r_r3 = __tmp8310;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8311 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8311);
    PyObject *__tmp8312 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8312);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign", 376, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8313 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8313);
    PyObject *__tmp8314 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8314);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 380, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 380, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8315 = { NULL, NULL };
    cpy_r_r3 = __tmp8315;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8316 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8316);
    PyObject *__tmp8317 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8317);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi", 379, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8318 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8318);
    PyObject *__tmp8319 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8319);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 383, CPyStatic_attrdefined___globals);
        goto CPyL3;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 383, CPyStatic_attrdefined___globals);
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
    tuple_T2OO __tmp8320 = { NULL, NULL };
    cpy_r_r3 = __tmp8320;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8321 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8321);
    PyObject *__tmp8322 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8322);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem", 382, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8323 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8323);
    PyObject *__tmp8324 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8324);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrdefined___AttributeMaybeUndefinedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.attrdefined.AttributeMaybeUndefinedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_attrdefined___globals);
    return NULL;
}

PyObject *CPyDef_attrdefined___analyze_maybe_undefined_attrs_in_init(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_initial_undefined, PyObject *cpy_r_cfg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor(cpy_r_self_reg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_undefined_attrs_in_init", 392, CPyStatic_attrdefined___globals);
        goto CPyL5;
    }
    cpy_r_r1 = CPyStatic_attrdefined___globals;
    cpy_r_r2 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_undefined_attrs_in_init", 395, CPyStatic_attrdefined___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_undefined_attrs_in_init", 395, CPyStatic_attrdefined___globals);
        goto CPyL6;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_initial_undefined, cpy_r_r4, 0, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_undefined_attrs_in_init", 389, CPyStatic_attrdefined___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_attrdefined___analyze_maybe_undefined_attrs_in_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "initial_undefined", "cfg", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_maybe_undefined_attrs_in_init", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_initial_undefined;
    PyObject *obj_cfg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_initial_undefined, &obj_cfg)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    PyObject *arg_initial_undefined;
    if (likely(PySet_Check(obj_initial_undefined)))
        arg_initial_undefined = obj_initial_undefined;
    else {
        CPy_TypeError("set", obj_initial_undefined); 
        goto fail;
    }
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrdefined___analyze_maybe_undefined_attrs_in_init(arg_blocks, arg_self_reg, arg_initial_undefined, arg_cfg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "analyze_maybe_undefined_attrs_in_init", 386, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___update_always_defined_attrs_using_subclasses(PyObject *cpy_r_cl, PyObject *cpy_r_seen) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_removed;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_child;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = PySet_Contains(cpy_r_seen, cpy_r_cl);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 401, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_children;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", "ClassIR", "children", 403, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
CPyL4: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 == cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    return 1;
CPyL6: ;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 406, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_removed = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", "ClassIR", "_always_initialized_attrs", 407, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = PyObject_GetIter(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 407, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
CPyL9: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL31;
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 407, CPyStatic_attrdefined___globals, "str", cpy_r_r9);
        goto CPyL32;
    }
    cpy_r_attr = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_children;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", "ClassIR", "children", 408, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r11);
CPyL12: ;
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 408, CPyStatic_attrdefined___globals, "list", cpy_r_r11);
        goto CPyL33;
    }
    cpy_r_r13 = 0;
CPyL14: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL34;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_class_ir___ClassIR))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 408, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r18);
        goto CPyL35;
    }
    cpy_r_child = cpy_r_r19;
    cpy_r_r20 = CPyDef_attrdefined___update_always_defined_attrs_using_subclasses(cpy_r_child, cpy_r_seen);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 409, CPyStatic_attrdefined___globals);
        goto CPyL36;
    }
    cpy_r_r21 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_child)->__always_initialized_attrs;
    if (unlikely(cpy_r_r21 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_always_initialized_attrs' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r21);
    }
    CPy_DECREF(cpy_r_child);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 410, CPyStatic_attrdefined___globals);
        goto CPyL35;
    }
CPyL18: ;
    cpy_r_r22 = PySet_Contains(cpy_r_r21, cpy_r_attr);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 410, CPyStatic_attrdefined___globals);
        goto CPyL35;
    }
    cpy_r_r24 = cpy_r_r22;
    cpy_r_r25 = cpy_r_r24 ^ 1;
    if (!cpy_r_r25) goto CPyL21;
    cpy_r_r26 = PySet_Add(cpy_r_removed, cpy_r_attr);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 411, CPyStatic_attrdefined___globals);
        goto CPyL35;
    }
CPyL21: ;
    cpy_r_r28 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r28;
    goto CPyL14;
CPyL22: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 407, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    cpy_r_r30 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", "ClassIR", "_always_initialized_attrs", 412, CPyStatic_attrdefined___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r30);
CPyL24: ;
    cpy_r_r31 = PyNumber_InPlaceSubtract(cpy_r_r30, cpy_r_removed);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_removed);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 412, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    if (likely(PySet_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 412, CPyStatic_attrdefined___globals, "set", cpy_r_r31);
        goto CPyL29;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->__always_initialized_attrs = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 412, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    cpy_r_r34 = PySet_Add(cpy_r_seen, cpy_r_cl);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 413, CPyStatic_attrdefined___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL30: ;
    CPy_DecRef(cpy_r_removed);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r8);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_attr);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
CPyL35: ;
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_child);
    goto CPyL29;
}

PyObject *CPyPy_attrdefined___update_always_defined_attrs_using_subclasses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "seen", 0};
    static CPyArg_Parser parser = {"OO:update_always_defined_attrs_using_subclasses", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_seen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_seen)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_seen;
    if (likely(PySet_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("set", obj_seen); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___update_always_defined_attrs_using_subclasses(arg_cl, arg_seen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "update_always_defined_attrs_using_subclasses", 399, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined___detect_undefined_bitmap(PyObject *cpy_r_cl, PyObject *cpy_r_seen) {
    char cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_base;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T4CIOO cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_n;
    PyObject *cpy_r_t;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T4CIOO cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = PySet_Contains(cpy_r_seen, cpy_r_cl);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 420, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r4 = PySet_Add(cpy_r_seen, cpy_r_cl);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 422, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "base_mro", 423, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyList_GetSlice(cpy_r_r6, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 423, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 423, CPyStatic_attrdefined___globals, "list", cpy_r_r7);
        goto CPyL58;
    }
    cpy_r_r9 = 0;
CPyL10: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL59;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_class_ir___ClassIR))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 423, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r14);
        goto CPyL60;
    }
    cpy_r_base = cpy_r_r15;
    CPy_DECREF(cpy_r_base);
    cpy_r_r16 = CPyDef_attrdefined___detect_undefined_bitmap(cpy_r_cl, cpy_r_seen);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 424, CPyStatic_attrdefined___globals);
        goto CPyL60;
    }
    cpy_r_r17 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r17;
    goto CPyL10;
CPyL14: ;
    cpy_r_r18 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "base_mro", 426, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
CPyL15: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r21 > (Py_ssize_t)2;
    if (!cpy_r_r22) goto CPyL22;
    cpy_r_r23 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "bitmap_attrs", 427, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r23);
CPyL17: ;
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_base_mro;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "base_mro", 427, CPyStatic_attrdefined___globals);
        goto CPyL61;
    }
CPyL18: ;
    cpy_r_r25 = CPyList_GetItemShortBorrow(cpy_r_r24, 2);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 427, CPyStatic_attrdefined___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_class_ir___ClassIR))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 427, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r25);
        goto CPyL61;
    }
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r26)->_bitmap_attrs;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "bitmap_attrs", 427, CPyStatic_attrdefined___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r27);
CPyL21: ;
    cpy_r_r28 = CPyList_Extend(cpy_r_r23, cpy_r_r27);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 427, CPyStatic_attrdefined___globals);
        goto CPyL58;
    } else
        goto CPyL62;
CPyL22: ;
    cpy_r_r29 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "attributes", 428, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r29);
CPyL23: ;
    cpy_r_r30 = 0;
    cpy_r_r31 = PyDict_Size(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = CPyDict_GetItemsIter(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 428, CPyStatic_attrdefined___globals);
        goto CPyL63;
    }
CPyL24: ;
    cpy_r_r34 = CPyDict_NextItem(cpy_r_r33, cpy_r_r30);
    cpy_r_r35 = cpy_r_r34.f1;
    cpy_r_r30 = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f0;
    if (!cpy_r_r36) goto CPyL64;
    cpy_r_r37 = cpy_r_r34.f2;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = cpy_r_r34.f3;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r39 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 428, CPyStatic_attrdefined___globals, "str", cpy_r_r37);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_rtypes___RType)))
        cpy_r_r40 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 428, CPyStatic_attrdefined___globals, "mypyc.ir.rtypes.RType", cpy_r_r38);
        goto CPyL66;
    }
    cpy_r_n = cpy_r_r39;
    cpy_r_t = cpy_r_r40;
    cpy_r_r41 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t)->_error_overlap;
    CPy_DECREF(cpy_r_t);
    if (!cpy_r_r41) goto CPyL67;
CPyL28: ;
    cpy_r_r42 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_n);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 429, CPyStatic_attrdefined___globals);
        goto CPyL68;
    }
    if (cpy_r_r42) goto CPyL67;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "bitmap_attrs", 430, CPyStatic_attrdefined___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r43);
CPyL31: ;
    cpy_r_r44 = PyList_Append(cpy_r_r43, cpy_r_n);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_n);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 430, CPyStatic_attrdefined___globals);
        goto CPyL69;
    }
CPyL32: ;
    cpy_r_r46 = CPyDict_CheckSize(cpy_r_r29, cpy_r_r32);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 428, CPyStatic_attrdefined___globals);
        goto CPyL69;
    } else
        goto CPyL24;
CPyL33: ;
    cpy_r_r47 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 428, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    cpy_r_r48 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_mro;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "mro", 432, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r48);
CPyL35: ;
    cpy_r_r49 = CPyList_GetSlice(cpy_r_r48, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 432, CPyStatic_attrdefined___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 432, CPyStatic_attrdefined___globals, "list", cpy_r_r49);
        goto CPyL58;
    }
    cpy_r_r51 = 0;
CPyL38: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL70;
    cpy_r_r56 = CPyList_GetItemUnsafe(cpy_r_r50, cpy_r_r51);
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_class_ir___ClassIR))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 432, CPyStatic_attrdefined___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r56);
        goto CPyL71;
    }
    cpy_r_base = cpy_r_r57;
    cpy_r_r58 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_is_trait;
    if (!cpy_r_r58) goto CPyL72;
CPyL41: ;
    cpy_r_r59 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r59 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r59);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals);
        goto CPyL71;
    }
CPyL42: ;
    cpy_r_r60 = 0;
    cpy_r_r61 = PyDict_Size(cpy_r_r59);
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = CPyDict_GetItemsIter(cpy_r_r59);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals);
        goto CPyL73;
    }
CPyL43: ;
    cpy_r_r64 = CPyDict_NextItem(cpy_r_r63, cpy_r_r60);
    cpy_r_r65 = cpy_r_r64.f1;
    cpy_r_r60 = cpy_r_r65;
    cpy_r_r66 = cpy_r_r64.f0;
    if (!cpy_r_r66) goto CPyL74;
    cpy_r_r67 = cpy_r_r64.f2;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = cpy_r_r64.f3;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r64.f2);
    CPy_DECREF(cpy_r_r64.f3);
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r69 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals, "str", cpy_r_r67);
        goto CPyL75;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_rtypes___RType)))
        cpy_r_r70 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals, "mypyc.ir.rtypes.RType", cpy_r_r68);
        goto CPyL76;
    }
    cpy_r_n = cpy_r_r69;
    cpy_r_t = cpy_r_r70;
    cpy_r_r71 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t)->_error_overlap;
    CPy_DECREF(cpy_r_t);
    if (!cpy_r_r71) goto CPyL77;
CPyL47: ;
    cpy_r_r72 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_n);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 435, CPyStatic_attrdefined___globals);
        goto CPyL78;
    }
    if (cpy_r_r72) goto CPyL77;
    cpy_r_r73 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "bitmap_attrs", 435, CPyStatic_attrdefined___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r73);
CPyL50: ;
    cpy_r_r74 = PySequence_Contains(cpy_r_r73, cpy_r_n);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 435, CPyStatic_attrdefined___globals);
        goto CPyL78;
    }
    cpy_r_r76 = cpy_r_r74;
    cpy_r_r77 = cpy_r_r76 ^ 1;
    if (!cpy_r_r77) goto CPyL77;
    cpy_r_r78 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", "ClassIR", "bitmap_attrs", 436, CPyStatic_attrdefined___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r78);
CPyL53: ;
    cpy_r_r79 = PyList_Append(cpy_r_r78, cpy_r_n);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_n);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 436, CPyStatic_attrdefined___globals);
        goto CPyL79;
    }
CPyL54: ;
    cpy_r_r81 = CPyDict_CheckSize(cpy_r_r59, cpy_r_r62);
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals);
        goto CPyL79;
    } else
        goto CPyL43;
CPyL55: ;
    cpy_r_r82 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 434, CPyStatic_attrdefined___globals);
        goto CPyL71;
    }
CPyL56: ;
    cpy_r_r83 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r83;
    goto CPyL38;
CPyL57: ;
    return 1;
CPyL58: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL59: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL14;
CPyL60: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL58;
CPyL62: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL22;
CPyL63: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL58;
CPyL64: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    goto CPyL33;
CPyL65: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r38);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r39);
    goto CPyL58;
CPyL67: ;
    CPy_DECREF(cpy_r_n);
    goto CPyL32;
CPyL68: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_n);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    goto CPyL58;
CPyL70: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL57;
CPyL71: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL58;
CPyL72: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL56;
CPyL73: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r59);
    goto CPyL58;
CPyL74: ;
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r64.f2);
    CPy_DECREF(cpy_r_r64.f3);
    goto CPyL55;
CPyL75: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r68);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r69);
    goto CPyL58;
CPyL77: ;
    CPy_DECREF(cpy_r_n);
    goto CPyL54;
CPyL78: ;
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    goto CPyL58;
CPyL79: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    goto CPyL58;
}

PyObject *CPyPy_attrdefined___detect_undefined_bitmap(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "seen", 0};
    static CPyArg_Parser parser = {"OO:detect_undefined_bitmap", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_seen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_seen)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_seen;
    if (likely(PySet_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("set", obj_seen); 
        goto fail;
    }
    char retval = CPyDef_attrdefined___detect_undefined_bitmap(arg_cl, arg_seen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/attrdefined.py", "detect_undefined_bitmap", 416, CPyStatic_attrdefined___globals);
    return NULL;
}

char CPyDef_attrdefined_____top_level__(void) {
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
    int32_t cpy_r_r36;
    char cpy_r_r37;
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
    tuple_T2OO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
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
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", -1, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_attrdefined___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 64, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9901]; /* ('Final', 'Set', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_attrdefined___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 66, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9902]; /* ('CFG', 'MAYBE_ANALYSIS', 'AnalysisResult',
                                     'BaseAnalysisVisitor', 'get_cfg', 'run_analysis') */
    cpy_r_r14 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r15 = CPyStatic_attrdefined___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 68, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_mypyc___analysis___dataflow = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___analysis___dataflow);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9903]; /* ('analyze_self_leaks',) */
    cpy_r_r18 = CPyStatics[6660]; /* 'mypyc.analysis.selfleaks' */
    cpy_r_r19 = CPyStatic_attrdefined___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 76, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_mypyc___analysis___selfleaks = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___analysis___selfleaks);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r22 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r23 = CPyStatic_attrdefined___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 77, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9905]; /* ('Assign', 'AssignMulti', 'BasicBlock', 'Branch', 'Call',
                                     'ControlOp', 'GetAttr', 'Register', 'RegisterOp',
                                     'Return', 'SetAttr', 'SetMem', 'Unreachable') */
    cpy_r_r26 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r27 = CPyStatic_attrdefined___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 78, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9906]; /* ('RInstance',) */
    cpy_r_r30 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r31 = CPyStatic_attrdefined___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 93, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatic_attrdefined___globals;
    cpy_r_r34 = CPyStatics[6677]; /* 'dump_always_defined' */
    cpy_r_r35 = 0 ? Py_True : Py_False;
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 97, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r38 = CPyStatic_attrdefined___globals;
    cpy_r_r39 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r41 = CPyStatic_attrdefined___globals;
    cpy_r_r42 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL34;
    }
    cpy_r_r44 = (PyObject *)&PyUnicode_Type;
    cpy_r_r45 = PyObject_GetItem(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL34;
    }
    cpy_r_r46 = CPyStatic_attrdefined___globals;
    cpy_r_r47 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL35;
    }
    cpy_r_r49 = (PyObject *)&PyUnicode_Type;
    cpy_r_r50 = PyObject_GetItem(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL35;
    }
    cpy_r_r51.f0 = cpy_r_r45;
    cpy_r_r51.f1 = cpy_r_r50;
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = PyTuple_New(2);
    if (unlikely(cpy_r_r52 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8325 = cpy_r_r51.f0;
    PyTuple_SET_ITEM(cpy_r_r52, 0, __tmp8325);
    PyObject *__tmp8326 = cpy_r_r51.f1;
    PyTuple_SET_ITEM(cpy_r_r52, 1, __tmp8326);
    cpy_r_r53 = PyObject_GetItem(cpy_r_r40, cpy_r_r52);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r54 = CPyStatic_attrdefined___globals;
    cpy_r_r55 = CPyStatics[6678]; /* 'GenAndKill' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 282, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r58 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r59 = (PyObject *)&PyUnicode_Type;
    cpy_r_r60 = PyObject_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r62 = CPyStatics[6679]; /* 'mypyc.analysis.attrdefined' */
    cpy_r_r63 = (PyObject *)CPyType_attrdefined___AttributeMaybeDefinedVisitor_template;
    cpy_r_r64 = CPyType_FromTemplate(cpy_r_r63, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r65 = CPyDef_attrdefined___AttributeMaybeDefinedVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", -1, CPyStatic_attrdefined___globals);
        goto CPyL36;
    }
    cpy_r_r66 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r67 = CPyStatics[6680]; /* 'self_reg' */
    cpy_r_r68 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r69 = PyTuple_Pack(2, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL36;
    }
    cpy_r_r70 = PyObject_SetAttr(cpy_r_r64, cpy_r_r66, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL36;
    }
    CPyType_attrdefined___AttributeMaybeDefinedVisitor = (PyTypeObject *)cpy_r_r64;
    CPy_INCREF(CPyType_attrdefined___AttributeMaybeDefinedVisitor);
    cpy_r_r72 = CPyStatic_attrdefined___globals;
    cpy_r_r73 = CPyStatics[6681]; /* 'AttributeMaybeDefinedVisitor' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 301, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r76 = (PyObject *)CPyType_dataflow___BaseAnalysisVisitor;
    cpy_r_r77 = (PyObject *)&PyUnicode_Type;
    cpy_r_r78 = PyObject_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r79 = PyTuple_Pack(1, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r80 = CPyStatics[6679]; /* 'mypyc.analysis.attrdefined' */
    cpy_r_r81 = (PyObject *)CPyType_attrdefined___AttributeMaybeUndefinedVisitor_template;
    cpy_r_r82 = CPyType_FromTemplate(cpy_r_r81, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    cpy_r_r83 = CPyDef_attrdefined___AttributeMaybeUndefinedVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", -1, CPyStatic_attrdefined___globals);
        goto CPyL37;
    }
    cpy_r_r84 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r85 = CPyStatics[6680]; /* 'self_reg' */
    cpy_r_r86 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r87 = PyTuple_Pack(2, cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL37;
    }
    cpy_r_r88 = PyObject_SetAttr(cpy_r_r82, cpy_r_r84, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL37;
    }
    CPyType_attrdefined___AttributeMaybeUndefinedVisitor = (PyTypeObject *)cpy_r_r82;
    CPy_INCREF(CPyType_attrdefined___AttributeMaybeUndefinedVisitor);
    cpy_r_r90 = CPyStatic_attrdefined___globals;
    cpy_r_r91 = CPyStatics[6682]; /* 'AttributeMaybeUndefinedVisitor' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r90, cpy_r_r91, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/analysis/attrdefined.py", "<module>", 350, CPyStatic_attrdefined___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r94 = 2;
    return cpy_r_r94;
CPyL34: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r45);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL33;
}
