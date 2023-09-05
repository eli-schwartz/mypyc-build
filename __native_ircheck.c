#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
ircheck___FnError_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_ircheck___FnError(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_ircheck___FnError))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.analysis.ircheck.FnError", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_ircheck___FnError_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_ircheck___FnError))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypyc.analysis.ircheck.FnError", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_ircheck___FnError_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *ircheck___FnError_setup(PyTypeObject *type);
PyObject *CPyDef_ircheck___FnError(PyObject *cpy_r_source, PyObject *cpy_r_desc);

static PyObject *
ircheck___FnError_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ircheck___FnError) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = ircheck___FnError_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_ircheck___FnError_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
ircheck___FnError_traverse(mypyc___analysis___ircheck___FnErrorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_source);
    Py_VISIT(self->_desc);
    return 0;
}

static int
ircheck___FnError_clear(mypyc___analysis___ircheck___FnErrorObject *self)
{
    Py_CLEAR(self->_source);
    Py_CLEAR(self->_desc);
    return 0;
}

static void
ircheck___FnError_dealloc(mypyc___analysis___ircheck___FnErrorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ircheck___FnError_dealloc)
    ircheck___FnError_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem ircheck___FnError_vtable[4];
static bool
CPyDef_ircheck___FnError_trait_vtable_setup(void)
{
    CPyVTableItem ircheck___FnError_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_ircheck___FnError_____init__,
        (CPyVTableItem)CPyDef_ircheck___FnError_____eq__,
        (CPyVTableItem)CPyDef_ircheck___FnError_____repr__,
        (CPyVTableItem)CPyDef_ircheck___FnError_____ne__,
    };
    memcpy(ircheck___FnError_vtable, ircheck___FnError_vtable_scratch, sizeof(ircheck___FnError_vtable));
    return 1;
}

static PyObject *
ircheck___FnError_get_source(mypyc___analysis___ircheck___FnErrorObject *self, void *closure);
static int
ircheck___FnError_set_source(mypyc___analysis___ircheck___FnErrorObject *self, PyObject *value, void *closure);
static PyObject *
ircheck___FnError_get_desc(mypyc___analysis___ircheck___FnErrorObject *self, void *closure);
static int
ircheck___FnError_set_desc(mypyc___analysis___ircheck___FnErrorObject *self, PyObject *value, void *closure);

static PyGetSetDef ircheck___FnError_getseters[] = {
    {"source",
     (getter)ircheck___FnError_get_source, (setter)ircheck___FnError_set_source,
     NULL, NULL},
    {"desc",
     (getter)ircheck___FnError_get_desc, (setter)ircheck___FnError_set_desc,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef ircheck___FnError_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ircheck___FnError_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_ircheck___FnError_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_ircheck___FnError_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_ircheck___FnError_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ircheck___FnError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FnError",
    .tp_new = ircheck___FnError_new,
    .tp_dealloc = (destructor)ircheck___FnError_dealloc,
    .tp_traverse = (traverseproc)ircheck___FnError_traverse,
    .tp_clear = (inquiry)ircheck___FnError_clear,
    .tp_getset = ircheck___FnError_getseters,
    .tp_methods = ircheck___FnError_methods,
    .tp_init = ircheck___FnError_init,
    .tp_repr = CPyDef_ircheck___FnError_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_ircheck___FnError,
    .tp_basicsize = sizeof(mypyc___analysis___ircheck___FnErrorObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_ircheck___FnError_template = &CPyType_ircheck___FnError_template_;

static PyObject *
ircheck___FnError_setup(PyTypeObject *type)
{
    mypyc___analysis___ircheck___FnErrorObject *self;
    self = (mypyc___analysis___ircheck___FnErrorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ircheck___FnError_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_ircheck___FnError(PyObject *cpy_r_source, PyObject *cpy_r_desc)
{
    PyObject *self = ircheck___FnError_setup(CPyType_ircheck___FnError);
    if (self == NULL)
        return NULL;
    char res = CPyDef_ircheck___FnError_____init__(self, cpy_r_source, cpy_r_desc);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
ircheck___FnError_get_source(mypyc___analysis___ircheck___FnErrorObject *self, void *closure)
{
    if (unlikely(self->_source == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source' of 'FnError' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source);
    PyObject *retval = self->_source;
    return retval;
}

static int
ircheck___FnError_set_source(mypyc___analysis___ircheck___FnErrorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FnError' object attribute 'source' cannot be deleted");
        return -1;
    }
    if (self->_source != NULL) {
        CPy_DECREF(self->_source);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Op))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8648;
    if (Py_TYPE(value) == CPyType_ops___BasicBlock)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8648;
    CPy_TypeError("union[mypyc.ir.ops.Op, mypyc.ir.ops.BasicBlock]", value); 
    tmp = NULL;
__LL8648: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_source = tmp;
    return 0;
}

static PyObject *
ircheck___FnError_get_desc(mypyc___analysis___ircheck___FnErrorObject *self, void *closure)
{
    if (unlikely(self->_desc == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'desc' of 'FnError' undefined");
        return NULL;
    }
    CPy_INCREF(self->_desc);
    PyObject *retval = self->_desc;
    return retval;
}

static int
ircheck___FnError_set_desc(mypyc___analysis___ircheck___FnErrorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FnError' object attribute 'desc' cannot be deleted");
        return -1;
    }
    if (self->_desc != NULL) {
        CPy_DECREF(self->_desc);
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
    self->_desc = tmp;
    return 0;
}

PyMemberDef ircheck___IrCheckException_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef ircheck___IrCheckException_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef ircheck___IrCheckException_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ircheck___IrCheckException_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IrCheckException",
    .tp_getset = ircheck___IrCheckException_getseters,
    .tp_methods = ircheck___IrCheckException_methods,
    .tp_members = ircheck___IrCheckException_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_ircheck___IrCheckException_template = &CPyType_ircheck___IrCheckException_template_;


static int
ircheck___OpChecker_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef ircheck___OpChecker_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___ircheck___OpCheckerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___ircheck___OpCheckerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *ircheck___OpChecker_setup(PyTypeObject *type);
PyObject *CPyDef_ircheck___OpChecker(PyObject *cpy_r_parent_fn);

static PyObject *
ircheck___OpChecker_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ircheck___OpChecker) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = ircheck___OpChecker_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_ircheck___OpChecker_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
ircheck___OpChecker_traverse(mypyc___analysis___ircheck___OpCheckerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_parent_fn);
    Py_VISIT(self->_errors);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___ircheck___OpCheckerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___ircheck___OpCheckerObject))));
    return 0;
}

static int
ircheck___OpChecker_clear(mypyc___analysis___ircheck___OpCheckerObject *self)
{
    Py_CLEAR(self->_parent_fn);
    Py_CLEAR(self->_errors);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___ircheck___OpCheckerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___ircheck___OpCheckerObject))));
    return 0;
}

static void
ircheck___OpChecker_dealloc(mypyc___analysis___ircheck___OpCheckerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ircheck___OpChecker_dealloc)
    ircheck___OpChecker_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem ircheck___OpChecker_vtable[48];
static CPyVTableItem ircheck___OpChecker_ops___OpVisitor_trait_vtable[36];
static size_t ircheck___OpChecker_ops___OpVisitor_offset_table[1];
static bool
CPyDef_ircheck___OpChecker_trait_vtable_setup(void)
{
    CPyVTableItem ircheck___OpChecker_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_inc_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_dec_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(ircheck___OpChecker_ops___OpVisitor_trait_vtable, ircheck___OpChecker_ops___OpVisitor_trait_vtable_scratch, sizeof(ircheck___OpChecker_ops___OpVisitor_trait_vtable));
    size_t ircheck___OpChecker_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(ircheck___OpChecker_ops___OpVisitor_offset_table, ircheck___OpChecker_ops___OpVisitor_offset_table_scratch, sizeof(ircheck___OpChecker_ops___OpVisitor_offset_table));
    CPyVTableItem ircheck___OpChecker_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)ircheck___OpChecker_ops___OpVisitor_trait_vtable, (CPyVTableItem)ircheck___OpChecker_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_ircheck___OpChecker_____init__,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___fail,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___check_control_op_targets,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___check_type_coercion,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___check_compatibility,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___expect_float,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___expect_non_float,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_goto,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_branch,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_return,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_unreachable,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_assign,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_assign_multi,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_error_value,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___check_frozenset_items_valid_literals,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_literal,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_get_attr,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_set_attr,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_static,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_init_static,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_tuple_get,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_tuple_set,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_inc_ref,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_dec_ref,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_call,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_method_call,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_cast,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_box,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_unbox,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_call_c,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_truncate,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_extend,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_global,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_int_op,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_comparison_op,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_op,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_neg,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_mem,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_set_mem,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_load_address,
        (CPyVTableItem)CPyDef_ircheck___OpChecker___visit_keep_alive,
    };
    memcpy(ircheck___OpChecker_vtable, ircheck___OpChecker_vtable_scratch, sizeof(ircheck___OpChecker_vtable));
    return 1;
}

static PyObject *
ircheck___OpChecker_get_parent_fn(mypyc___analysis___ircheck___OpCheckerObject *self, void *closure);
static int
ircheck___OpChecker_set_parent_fn(mypyc___analysis___ircheck___OpCheckerObject *self, PyObject *value, void *closure);
static PyObject *
ircheck___OpChecker_get_errors(mypyc___analysis___ircheck___OpCheckerObject *self, void *closure);
static int
ircheck___OpChecker_set_errors(mypyc___analysis___ircheck___OpCheckerObject *self, PyObject *value, void *closure);

static PyGetSetDef ircheck___OpChecker_getseters[] = {
    {"parent_fn",
     (getter)ircheck___OpChecker_get_parent_fn, (setter)ircheck___OpChecker_set_parent_fn,
     NULL, NULL},
    {"errors",
     (getter)ircheck___OpChecker_get_errors, (setter)ircheck___OpChecker_set_errors,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef ircheck___OpChecker_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ircheck___OpChecker_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_ircheck___OpChecker___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_control_op_targets",
     (PyCFunction)CPyPy_ircheck___OpChecker___check_control_op_targets,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_type_coercion",
     (PyCFunction)CPyPy_ircheck___OpChecker___check_type_coercion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_compatibility",
     (PyCFunction)CPyPy_ircheck___OpChecker___check_compatibility,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expect_float",
     (PyCFunction)CPyPy_ircheck___OpChecker___expect_float,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expect_non_float",
     (PyCFunction)CPyPy_ircheck___OpChecker___expect_non_float,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_goto",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_error_value",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_tuple_items_valid_literals",
     (PyCFunction)CPyPy_ircheck___OpChecker___check_tuple_items_valid_literals,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_frozenset_items_valid_literals",
     (PyCFunction)CPyPy_ircheck___OpChecker___check_frozenset_items_valid_literals,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_literal",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_attr",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_attr",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_set_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_static",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_init_static",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_init_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_get",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_tuple_get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_set",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_tuple_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_inc_ref",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_inc_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dec_ref",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_dec_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_method_call",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_box",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbox",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_standard_error",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_raise_standard_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_c",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_truncate",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_truncate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_extend",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_extend,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_global",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_op",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_op",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_op",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_float_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_neg",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_float_neg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_comparison_op",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_float_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_mem",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_element_ptr",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_get_element_ptr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_address",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_load_address,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_keep_alive",
     (PyCFunction)CPyPy_ircheck___OpChecker___visit_keep_alive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ircheck___OpChecker_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "OpChecker",
    .tp_new = ircheck___OpChecker_new,
    .tp_dealloc = (destructor)ircheck___OpChecker_dealloc,
    .tp_traverse = (traverseproc)ircheck___OpChecker_traverse,
    .tp_clear = (inquiry)ircheck___OpChecker_clear,
    .tp_getset = ircheck___OpChecker_getseters,
    .tp_methods = ircheck___OpChecker_methods,
    .tp_init = ircheck___OpChecker_init,
    .tp_members = ircheck___OpChecker_members,
    .tp_basicsize = sizeof(mypyc___analysis___ircheck___OpCheckerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___ircheck___OpCheckerObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___ircheck___OpCheckerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_ircheck___OpChecker_template = &CPyType_ircheck___OpChecker_template_;

static PyObject *
ircheck___OpChecker_setup(PyTypeObject *type)
{
    mypyc___analysis___ircheck___OpCheckerObject *self;
    self = (mypyc___analysis___ircheck___OpCheckerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ircheck___OpChecker_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_ircheck___OpChecker(PyObject *cpy_r_parent_fn)
{
    PyObject *self = ircheck___OpChecker_setup(CPyType_ircheck___OpChecker);
    if (self == NULL)
        return NULL;
    char res = CPyDef_ircheck___OpChecker_____init__(self, cpy_r_parent_fn);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
ircheck___OpChecker_get_parent_fn(mypyc___analysis___ircheck___OpCheckerObject *self, void *closure)
{
    if (unlikely(self->_parent_fn == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'parent_fn' of 'OpChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_parent_fn);
    PyObject *retval = self->_parent_fn;
    return retval;
}

static int
ircheck___OpChecker_set_parent_fn(mypyc___analysis___ircheck___OpCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'OpChecker' object attribute 'parent_fn' cannot be deleted");
        return -1;
    }
    if (self->_parent_fn != NULL) {
        CPy_DECREF(self->_parent_fn);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_func_ir___FuncIR))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_parent_fn = tmp;
    return 0;
}

static PyObject *
ircheck___OpChecker_get_errors(mypyc___analysis___ircheck___OpCheckerObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'OpChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
ircheck___OpChecker_set_errors(mypyc___analysis___ircheck___OpCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'OpChecker' object attribute 'errors' cannot be deleted");
        return -1;
    }
    if (self->_errors != NULL) {
        CPy_DECREF(self->_errors);
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
    self->_errors = tmp;
    return 0;
}
static PyMethodDef ircheckmodule_methods[] = {
    {"check_func_ir", (PyCFunction)CPyPy_ircheck___check_func_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"assert_func_ir_valid", (PyCFunction)CPyPy_ircheck___assert_func_ir_valid, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_op_sources_valid", (PyCFunction)CPyPy_ircheck___check_op_sources_valid, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"can_coerce_to", (PyCFunction)CPyPy_ircheck___can_coerce_to, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ircheckmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.analysis.ircheck",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ircheckmodule_methods
};

PyObject *CPyInit_mypyc___analysis___ircheck(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___analysis___ircheck_internal) {
        Py_INCREF(CPyModule_mypyc___analysis___ircheck_internal);
        return CPyModule_mypyc___analysis___ircheck_internal;
    }
    CPyModule_mypyc___analysis___ircheck_internal = PyModule_Create(&ircheckmodule);
    if (unlikely(CPyModule_mypyc___analysis___ircheck_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___analysis___ircheck_internal, "__name__");
    CPyStatic_ircheck___globals = PyModule_GetDict(CPyModule_mypyc___analysis___ircheck_internal);
    if (unlikely(CPyStatic_ircheck___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ircheck_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___analysis___ircheck_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___analysis___ircheck_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_ircheck___FnError);
    Py_CLEAR(CPyType_ircheck___IrCheckException);
    Py_CLEAR(CPyType_ircheck___OpChecker);
    return NULL;
}

char CPyDef_ircheck___FnError_____init__(PyObject *cpy_r_self, PyObject *cpy_r_source, PyObject *cpy_r_desc) {
    CPy_INCREF(cpy_r_source);
    ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_source = cpy_r_source;
    CPy_INCREF(cpy_r_desc);
    ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_desc = cpy_r_desc;
    return 1;
}

PyObject *CPyPy_ircheck___FnError_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"source", "desc", 0};
    PyObject *obj_source;
    PyObject *obj_desc;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_source, &obj_desc)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___FnError))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.FnError", obj_self); 
        goto fail;
    }
    PyObject *arg_source;
    if (PyObject_TypeCheck(obj_source, CPyType_ops___Op))
        arg_source = obj_source;
    else {
        arg_source = NULL;
    }
    if (arg_source != NULL) goto __LL8649;
    if (Py_TYPE(obj_source) == CPyType_ops___BasicBlock)
        arg_source = obj_source;
    else {
        arg_source = NULL;
    }
    if (arg_source != NULL) goto __LL8649;
    CPy_TypeError("union[mypyc.ir.ops.Op, mypyc.ir.ops.BasicBlock]", obj_source); 
    goto fail;
__LL8649: ;
    PyObject *arg_desc;
    if (likely(PyUnicode_Check(obj_desc)))
        arg_desc = obj_desc;
    else {
        CPy_TypeError("str", obj_desc); 
        goto fail;
    }
    char retval = CPyDef_ircheck___FnError_____init__(arg_self, arg_source, arg_desc);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "__init__", 72, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___FnError_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
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
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = (PyObject *)CPyType_ircheck___FnError;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL13;
CPyL2: ;
    cpy_r_r5 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_source;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_ircheck___FnError))
        cpy_r_r6 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "__eq__", 78, CPyStatic_ircheck___globals, "mypyc.analysis.ircheck.FnError", cpy_r_other);
        goto CPyL15;
    }
    cpy_r_r7 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_r6)->_source;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__eq__", 78, CPyStatic_ircheck___globals);
        goto CPyL14;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__eq__", 78, CPyStatic_ircheck___globals);
        goto CPyL14;
    }
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL12;
CPyL7: ;
    cpy_r_r11 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_desc;
    CPy_INCREF(cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_ircheck___FnError))
        cpy_r_r12 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "__eq__", 78, CPyStatic_ircheck___globals, "mypyc.analysis.ircheck.FnError", cpy_r_other);
        goto CPyL16;
    }
    cpy_r_r13 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_r12)->_desc;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r11, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__eq__", 78, CPyStatic_ircheck___globals);
        goto CPyL14;
    }
CPyL11: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    cpy_r_r10 = cpy_r_r19;
CPyL12: ;
    cpy_r_r4 = cpy_r_r10;
CPyL13: ;
    cpy_r_r20 = cpy_r_r4 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL14: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
}

PyObject *CPyPy_ircheck___FnError_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___FnError))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.FnError", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_ircheck___FnError_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "__eq__", 76, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___FnError_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[6732]; /* 'FnError(source=' */
    cpy_r_r1 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_source;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__repr__", 82, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[6733]; /* ', desc=' */
    cpy_r_r4 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_self)->_desc;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[72]; /* ')' */
    cpy_r_r6 = CPyStr_Build(5, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__repr__", 82, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_ircheck___FnError_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___FnError))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.FnError", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___FnError_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "__repr__", 81, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___FnError_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_ircheck___FnError_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
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

PyObject *CPyPy_ircheck___FnError_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_ircheck___FnError))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.FnError", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_ircheck___FnError_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "__ne__", -1, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___check_func_ir(PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_op_set;
    PyObject *cpy_r_r2;
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
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
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
    PyObject *cpy_r_op;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_op_checker;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 87, CPyStatic_ircheck___globals);
        goto CPyL46;
    }
    cpy_r_errors = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 89, CPyStatic_ircheck___globals);
        goto CPyL47;
    }
    cpy_r_op_set = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL48;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_ops___BasicBlock))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 91, CPyStatic_ircheck___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r8);
        goto CPyL49;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 1, mypyc___ir___ops___BasicBlockObject, char); /* terminated */
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 92, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
CPyL6: ;
    if (cpy_r_r10) goto CPyL14;
CPyL7: ;
    cpy_r_r11 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 94, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_ops___Op)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 94, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_r17);
        goto CPyL50;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL12;
CPyL11: ;
    CPy_INCREF(cpy_r_block);
    cpy_r_r19 = cpy_r_block;
CPyL12: ;
    cpy_r_r20 = CPyStatics[6734]; /* 'Block not terminated' */
    cpy_r_r21 = CPyDef_ircheck___FnError(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 94, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
    cpy_r_r22 = PyList_Append(cpy_r_errors, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 93, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
CPyL14: ;
    cpy_r_r24 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_block);
    cpy_r_r25 = CPyList_GetSlice(cpy_r_r24, 0, -2);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 96, CPyStatic_ircheck___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 96, CPyStatic_ircheck___globals, "list", cpy_r_r25);
        goto CPyL49;
    }
    cpy_r_r27 = 0;
CPyL17: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL51;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_r26, cpy_r_r27);
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_ops___Op)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 96, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_r32);
        goto CPyL52;
    }
    cpy_r_op = cpy_r_r33;
    cpy_r_r34 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r35 = CPy_TypeCheck(cpy_r_op, cpy_r_r34);
    if (!cpy_r_r35) goto CPyL23;
    CPy_INCREF(cpy_r_op);
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___ControlOp)))
        cpy_r_r36 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 98, CPyStatic_ircheck___globals, "mypyc.ir.ops.ControlOp", cpy_r_op);
        goto CPyL53;
    }
    cpy_r_r37 = CPyStatics[6735]; /* 'Block has operations after control op' */
    cpy_r_r38 = CPyDef_ircheck___FnError(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 98, CPyStatic_ircheck___globals);
        goto CPyL53;
    }
    cpy_r_r39 = PyList_Append(cpy_r_errors, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 98, CPyStatic_ircheck___globals);
        goto CPyL53;
    }
CPyL23: ;
    cpy_r_r41 = PySet_Contains(cpy_r_op_set, cpy_r_op);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 100, CPyStatic_ircheck___globals);
        goto CPyL53;
    }
    cpy_r_r43 = cpy_r_r41;
    if (!cpy_r_r43) goto CPyL27;
    cpy_r_r44 = CPyStatics[6736]; /* 'Func has a duplicate op' */
    cpy_r_r45 = CPyDef_ircheck___FnError(cpy_r_op, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 101, CPyStatic_ircheck___globals);
        goto CPyL53;
    }
    cpy_r_r46 = PyList_Append(cpy_r_errors, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 101, CPyStatic_ircheck___globals);
        goto CPyL53;
    }
CPyL27: ;
    cpy_r_r48 = PySet_Add(cpy_r_op_set, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 102, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r50 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r50;
    goto CPyL17;
CPyL29: ;
    cpy_r_r51 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r51;
    goto CPyL3;
CPyL30: ;
    cpy_r_r52 = CPyDef_ircheck___check_op_sources_valid(cpy_r_fn);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 104, CPyStatic_ircheck___globals);
        goto CPyL47;
    }
    cpy_r_r53 = CPyList_Extend(cpy_r_errors, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 104, CPyStatic_ircheck___globals);
        goto CPyL47;
    } else
        goto CPyL54;
CPyL32: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (!cpy_r_r57) goto CPyL55;
    return cpy_r_errors;
CPyL34: ;
    cpy_r_r58 = CPyDef_ircheck___OpChecker(cpy_r_fn);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 108, CPyStatic_ircheck___globals);
        goto CPyL46;
    }
    cpy_r_op_checker = cpy_r_r58;
    cpy_r_r59 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = 0;
CPyL36: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_r59)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL56;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_r59, cpy_r_r60);
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_ops___BasicBlock))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 109, CPyStatic_ircheck___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r65);
        goto CPyL57;
    }
    cpy_r_block = cpy_r_r66;
    cpy_r_r67 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_block);
    cpy_r_r68 = 0;
CPyL39: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL58;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r67, cpy_r_r68);
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_ops___Op)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 110, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_r73);
        goto CPyL59;
    }
    cpy_r_op = cpy_r_r74;
    cpy_r_r75 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 7, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_op, cpy_r_op_checker); /* accept */
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 111, CPyStatic_ircheck___globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL42: ;
    cpy_r_r76 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r76;
    goto CPyL39;
CPyL43: ;
    cpy_r_r77 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r77;
    goto CPyL36;
CPyL44: ;
    cpy_r_r78 = ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_op_checker)->_errors;
    if (unlikely(cpy_r_r78 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'errors' of 'OpChecker' undefined");
    } else {
        CPy_INCREF(cpy_r_r78);
    }
    CPy_DECREF(cpy_r_op_checker);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 113, CPyStatic_ircheck___globals);
        goto CPyL46;
    }
CPyL45: ;
    return cpy_r_r78;
CPyL46: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL47: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL46;
CPyL48: ;
    CPy_DECREF(cpy_r_op_set);
    CPy_DECREF(cpy_r_r2);
    goto CPyL30;
CPyL49: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_op_set);
    CPy_DecRef(cpy_r_r2);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_op_set);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_block);
    goto CPyL46;
CPyL51: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL29;
CPyL52: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_op_set);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r26);
    goto CPyL46;
CPyL53: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_op_set);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_op);
    goto CPyL46;
CPyL54: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL32;
CPyL55: ;
    CPy_DECREF(cpy_r_errors);
    goto CPyL34;
CPyL56: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_op_checker);
    CPy_DecRef(cpy_r_r59);
    goto CPyL46;
CPyL58: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_op_checker);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r67);
    goto CPyL46;
CPyL60: ;
    CPy_DECREF(cpy_r_r75);
    goto CPyL42;
}

PyObject *CPyPy_ircheck___check_func_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:check_func_ir", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___check_func_ir(arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_func_ir", 85, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___assert_func_ir_valid(PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_errors;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = CPyDef_ircheck___check_func_ir(cpy_r_fn);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 121, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    cpy_r_errors = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL17;
    cpy_r_r5 = CPyStatics[6737]; /* 'Internal error: Generated invalid IR: \n' */
    cpy_r_r6 = CPyStatics[189]; /* '\n' */
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = PyList_New(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 125, CPyStatic_ircheck___globals);
        goto CPyL18;
    }
    cpy_r_r10 = 0;
CPyL4: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL19;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_errors, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_ircheck___FnError))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 125, CPyStatic_ircheck___globals, "mypyc.analysis.ircheck.FnError", cpy_r_r15);
        goto CPyL20;
    }
    cpy_r_e = cpy_r_r16;
    cpy_r_r17 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_e)->_source;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___analysis___ircheck___FnErrorObject *)cpy_r_e)->_desc;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_e);
    cpy_r_r19.f0 = cpy_r_r17;
    cpy_r_r19.f1 = cpy_r_r18;
    CPy_INCREF(cpy_r_r19.f0);
    CPy_INCREF(cpy_r_r19.f1);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = PyTuple_New(2);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8650 = cpy_r_r19.f0;
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp8650);
    PyObject *__tmp8651 = cpy_r_r19.f1;
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp8651);
    cpy_r_r21 = CPyList_SetItemUnsafe(cpy_r_r9, cpy_r_r10, cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 125, CPyStatic_ircheck___globals);
        goto CPyL20;
    }
    cpy_r_r22 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r22;
    goto CPyL4;
CPyL8: ;
    cpy_r_r23 = CPyDef_pprint___format_func(cpy_r_fn, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 125, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    cpy_r_r24 = PyUnicode_Join(cpy_r_r6, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 125, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    cpy_r_r25 = PyUnicode_Concat(cpy_r_r5, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 124, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    cpy_r_r26 = (PyObject *)CPyType_ircheck___IrCheckException;
    PyObject *cpy_r_r27[1] = {cpy_r_r25};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 123, CPyStatic_ircheck___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_ircheck___IrCheckException))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 123, CPyStatic_ircheck___globals, "mypyc.analysis.ircheck.IrCheckException", cpy_r_r29);
        goto CPyL16;
    }
    CPy_Raise(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 123, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL17: ;
    CPy_DECREF(cpy_r_errors);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_errors);
    goto CPyL8;
CPyL20: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL16;
}

PyObject *CPyPy_ircheck___assert_func_ir_valid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:assert_func_ir_valid", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    char retval = CPyDef_ircheck___assert_func_ir_valid(arg_fn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "assert_func_ir_valid", 120, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___check_op_sources_valid(PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_valid_ops;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_valid_registers;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
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
    int32_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    CPyPtr cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    CPyTagged cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyTagged cpy_r_r130;
    PyObject *cpy_r_r131;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 130, CPyStatic_ircheck___globals);
        goto CPyL61;
    }
    cpy_r_errors = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 131, CPyStatic_ircheck___globals);
        goto CPyL62;
    }
    cpy_r_valid_ops = cpy_r_r1;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 132, CPyStatic_ircheck___globals);
        goto CPyL63;
    }
    cpy_r_valid_registers = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL4: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL64;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_ops___BasicBlock))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 134, CPyStatic_ircheck___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r9);
        goto CPyL65;
    }
    cpy_r_block = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = _PySet_Update(cpy_r_valid_ops, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 135, CPyStatic_ircheck___globals);
        goto CPyL66;
    }
    cpy_r_r14 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_block);
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL67;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_ops___Op)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 137, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_r20);
        goto CPyL68;
    }
    cpy_r_op = cpy_r_r21;
    cpy_r_r22 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL12;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = (PyObject *)CPyType_ops___AssignMulti;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    cpy_r_r26 = cpy_r_r30;
CPyL13: ;
    if (!cpy_r_r26) goto CPyL16;
    if (likely((Py_TYPE(cpy_r_op) == CPyType_ops___Assign) || (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)))
        cpy_r_r31 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 139, CPyStatic_ircheck___globals, "mypyc.ir.ops.BaseAssign", cpy_r_op);
        goto CPyL69;
    }
    cpy_r_r32 = ((mypyc___ir___ops___BaseAssignObject *)cpy_r_r31)->_dest;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_op);
    cpy_r_r33 = PySet_Add(cpy_r_valid_registers, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 139, CPyStatic_ircheck___globals);
        goto CPyL68;
    } else
        goto CPyL22;
CPyL16: ;
    cpy_r_r35 = (PyObject *)CPyType_ops___LoadAddress;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r39 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 140, CPyStatic_ircheck___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL69;
    }
    cpy_r_r40 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r39)->_src;
    cpy_r_r41 = (PyObject *)CPyType_ops___Register;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r45 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 141, CPyStatic_ircheck___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL69;
    }
    cpy_r_r46 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r45)->_src;
    CPy_INCREF(cpy_r_r46);
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_ops___Register))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 141, CPyStatic_ircheck___globals, "mypyc.ir.ops.Register", cpy_r_r46);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_op);
    cpy_r_r48 = PySet_Add(cpy_r_valid_registers, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 141, CPyStatic_ircheck___globals);
        goto CPyL68;
    }
CPyL22: ;
    cpy_r_r50 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r50;
    goto CPyL8;
CPyL23: ;
    cpy_r_r51 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r51;
    goto CPyL4;
CPyL24: ;
    cpy_r_r52 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_arg_regs;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = _PySet_Update(cpy_r_valid_registers, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 143, CPyStatic_ircheck___globals);
        goto CPyL71;
    }
    cpy_r_r55 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = 0;
CPyL26: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL72;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_ops___BasicBlock))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 145, CPyStatic_ircheck___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r61);
        goto CPyL73;
    }
    cpy_r_block = cpy_r_r62;
    cpy_r_r63 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_block);
    cpy_r_r64 = 0;
CPyL29: ;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = (Py_ssize_t)cpy_r_r64 < (Py_ssize_t)cpy_r_r67;
    if (!cpy_r_r68) goto CPyL74;
    cpy_r_r69 = CPyList_GetItemUnsafe(cpy_r_r63, cpy_r_r64);
    if (likely(PyObject_TypeCheck(cpy_r_r69, CPyType_ops___Op)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 146, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_r69);
        goto CPyL75;
    }
    cpy_r_op = cpy_r_r70;
    cpy_r_r71 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 4, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* sources */
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 147, CPyStatic_ircheck___globals);
        goto CPyL76;
    }
    cpy_r_r72 = 0;
CPyL33: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL77;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_r71, cpy_r_r72);
    if (likely(PyObject_TypeCheck(cpy_r_r77, CPyType_ops___Value)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 147, CPyStatic_ircheck___globals, "mypyc.ir.ops.Value", cpy_r_r77);
        goto CPyL78;
    }
    cpy_r_source = cpy_r_r78;
    cpy_r_r79 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_source)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (cpy_r_r82) goto CPyL79;
    cpy_r_r83 = (PyObject *)CPyType_ops___Op;
    cpy_r_r84 = CPy_TypeCheck(cpy_r_source, cpy_r_r83);
    if (!cpy_r_r84) goto CPyL46;
    CPy_INCREF(cpy_r_source);
    if (likely(PyObject_TypeCheck(cpy_r_source, CPyType_ops___Op)))
        cpy_r_r85 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 151, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_source);
        goto CPyL80;
    }
    cpy_r_r86 = PySet_Contains(cpy_r_valid_ops, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 151, CPyStatic_ircheck___globals);
        goto CPyL80;
    }
    cpy_r_r88 = cpy_r_r86;
    cpy_r_r89 = cpy_r_r88 ^ 1;
    if (!cpy_r_r89) goto CPyL79;
    cpy_r_r90 = CPyStatics[6738]; /* 'Invalid op reference to op of type ' */
    if (likely(PyObject_TypeCheck(cpy_r_source, CPyType_ops___Op)))
        cpy_r_r91 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 155, CPyStatic_ircheck___globals, "mypyc.ir.ops.Op", cpy_r_source);
        goto CPyL78;
    }
    cpy_r_r92 = PyObject_Type(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = CPyStatics[197]; /* '__name__' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 155, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
    if (likely(PyUnicode_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 155, CPyStatic_ircheck___globals, "str", cpy_r_r94);
        goto CPyL78;
    }
    cpy_r_r96 = CPyStr_Build(2, cpy_r_r90, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 155, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
    cpy_r_r97 = CPyDef_ircheck___FnError(cpy_r_op, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 153, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
    cpy_r_r98 = PyList_Append(cpy_r_errors, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 152, CPyStatic_ircheck___globals);
        goto CPyL78;
    } else
        goto CPyL57;
CPyL46: ;
    cpy_r_r100 = (PyObject *)CPyType_ops___Register;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_source)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    if (!cpy_r_r103) goto CPyL79;
    CPy_INCREF(cpy_r_source);
    if (likely(Py_TYPE(cpy_r_source) == CPyType_ops___Register))
        cpy_r_r104 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 159, CPyStatic_ircheck___globals, "mypyc.ir.ops.Register", cpy_r_source);
        goto CPyL80;
    }
    cpy_r_r105 = PySet_Contains(cpy_r_valid_registers, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 159, CPyStatic_ircheck___globals);
        goto CPyL80;
    }
    cpy_r_r107 = cpy_r_r105;
    cpy_r_r108 = cpy_r_r107 ^ 1;
    if (!cpy_r_r108) goto CPyL79;
    cpy_r_r109 = CPyStatics[163]; /* '' */
    cpy_r_r110 = CPyStatics[6739]; /* 'Invalid op reference to register ' */
    cpy_r_r111 = CPyStatics[353]; /* '{!r:{}}' */
    if (likely(Py_TYPE(cpy_r_source) == CPyType_ops___Register))
        cpy_r_r112 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 162, CPyStatic_ircheck___globals, "mypyc.ir.ops.Register", cpy_r_source);
        goto CPyL80;
    }
    cpy_r_r113 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r112)->_name;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_source);
    cpy_r_r114 = CPyStatics[163]; /* '' */
    cpy_r_r115 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r116[3] = {cpy_r_r111, cpy_r_r113, cpy_r_r114};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = PyObject_VectorcallMethod(cpy_r_r115, cpy_r_r117, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 162, CPyStatic_ircheck___globals);
        goto CPyL81;
    }
    CPy_DECREF(cpy_r_r113);
    if (likely(PyUnicode_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 162, CPyStatic_ircheck___globals, "str", cpy_r_r118);
        goto CPyL78;
    }
    cpy_r_r120 = PyList_New(2);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 162, CPyStatic_ircheck___globals);
        goto CPyL82;
    }
    cpy_r_r121 = (CPyPtr)&((PyListObject *)cpy_r_r120)->ob_item;
    cpy_r_r122 = *(CPyPtr *)cpy_r_r121;
    CPy_INCREF(cpy_r_r110);
    *(PyObject * *)cpy_r_r122 = cpy_r_r110;
    cpy_r_r123 = cpy_r_r122 + 8;
    *(PyObject * *)cpy_r_r123 = cpy_r_r119;
    cpy_r_r124 = PyUnicode_Join(cpy_r_r109, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 162, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
    cpy_r_r125 = CPyDef_ircheck___FnError(cpy_r_op, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 161, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
    cpy_r_r126 = PyList_Append(cpy_r_errors, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 160, CPyStatic_ircheck___globals);
        goto CPyL78;
    }
CPyL57: ;
    cpy_r_r128 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r128;
    goto CPyL33;
CPyL58: ;
    cpy_r_r129 = cpy_r_r64 + 2;
    cpy_r_r64 = cpy_r_r129;
    goto CPyL29;
CPyL59: ;
    cpy_r_r130 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r130;
    goto CPyL26;
CPyL60: ;
    return cpy_r_errors;
CPyL61: ;
    cpy_r_r131 = NULL;
    return cpy_r_r131;
CPyL62: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL61;
CPyL63: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    goto CPyL61;
CPyL64: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL24;
CPyL65: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r3);
    goto CPyL61;
CPyL66: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_block);
    goto CPyL61;
CPyL67: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL23;
CPyL68: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r14);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_op);
    goto CPyL61;
CPyL70: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL22;
CPyL71: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    goto CPyL61;
CPyL72: ;
    CPy_DECREF(cpy_r_valid_ops);
    CPy_DECREF(cpy_r_valid_registers);
    CPy_DECREF(cpy_r_r55);
    goto CPyL60;
CPyL73: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r55);
    goto CPyL61;
CPyL74: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL59;
CPyL75: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    goto CPyL61;
CPyL76: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    goto CPyL61;
CPyL77: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_r71);
    goto CPyL58;
CPyL78: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r71);
    goto CPyL61;
CPyL79: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL57;
CPyL80: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_source);
    goto CPyL61;
CPyL81: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r113);
    goto CPyL61;
CPyL82: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_valid_ops);
    CPy_DecRef(cpy_r_valid_registers);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r119);
    goto CPyL61;
}

PyObject *CPyPy_ircheck___check_op_sources_valid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:check_op_sources_valid", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___check_op_sources_valid(arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_op_sources_valid", 129, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___can_coerce_to(PyObject *cpy_r_src, PyObject *cpy_r_dest) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
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
    PyObject *cpy_r_d;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_dest)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL10;
    cpy_r_r4 = 0;
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RUnion))
        cpy_r_r5 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 187, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RUnion", cpy_r_dest);
        goto CPyL57;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r5)->_items;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL58;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_rtypes___RType)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 187, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RType", cpy_r_r12);
        goto CPyL59;
    }
    cpy_r_d = cpy_r_r13;
    cpy_r_r14 = CPyDef_ircheck___can_coerce_to(cpy_r_src, cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 187, CPyStatic_ircheck___globals);
        goto CPyL59;
    }
    if (cpy_r_r14) {
        goto CPyL60;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r4 = 1;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r15;
    goto CPyL3;
CPyL9: ;
    return cpy_r_r4;
CPyL10: ;
    cpy_r_r16 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_dest)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL56;
    cpy_r_r20 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_src)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_src) == CPyType_rtypes___RPrimitive))
        cpy_r_r24 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_src);
        goto CPyL57;
    }
    cpy_r_r25 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r24)->_name;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "name", 192, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r25);
CPyL14: ;
    cpy_r_r26 = CPyStatic_ircheck___globals;
    cpy_r_r27 = CPyStatics[6740]; /* 'disjoint_types' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals);
        goto CPyL61;
    }
    if (likely(PySet_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals, "set", cpy_r_r28);
        goto CPyL61;
    }
    cpy_r_r30 = PySet_Contains(cpy_r_r29, cpy_r_r25);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RPrimitive))
        cpy_r_r33 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_dest);
        goto CPyL57;
    }
    cpy_r_r34 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r33)->_name;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "name", 192, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r34);
CPyL20: ;
    cpy_r_r35 = CPyStatic_ircheck___globals;
    cpy_r_r36 = CPyStatics[6740]; /* 'disjoint_types' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals);
        goto CPyL62;
    }
    if (likely(PySet_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals, "set", cpy_r_r37);
        goto CPyL62;
    }
    cpy_r_r39 = PySet_Contains(cpy_r_r38, cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 192, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_src) == CPyType_rtypes___RPrimitive))
        cpy_r_r42 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 193, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_src);
        goto CPyL57;
    }
    cpy_r_r43 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r42)->_name;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "name", 193, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r43);
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RPrimitive))
        cpy_r_r44 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 193, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_dest);
        goto CPyL63;
    }
    cpy_r_r45 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r44)->_name;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "name", 193, CPyStatic_ircheck___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r45);
CPyL28: ;
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r43, cpy_r_r45);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL31;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL31;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 193, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
CPyL31: ;
    cpy_r_r51 = cpy_r_r46 == 0;
    return cpy_r_r51;
CPyL32: ;
    if (likely(Py_TYPE(cpy_r_src) == CPyType_rtypes___RPrimitive))
        cpy_r_r52 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 194, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_src);
        goto CPyL57;
    }
    cpy_r_r53 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r52)->_size;
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "size", 194, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RPrimitive))
        cpy_r_r54 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 194, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_dest);
        goto CPyL57;
    }
    cpy_r_r55 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r54)->_size;
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "can_coerce_to", "RPrimitive", "size", 194, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
CPyL36: ;
    cpy_r_r56 = cpy_r_r53 & 1;
    cpy_r_r57 = cpy_r_r56 == 0;
    if (!cpy_r_r57) goto CPyL38;
    cpy_r_r58 = cpy_r_r53 == cpy_r_r55;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL39;
CPyL38: ;
    cpy_r_r60 = CPyTagged_IsEq_(cpy_r_r53, cpy_r_r55);
    cpy_r_r59 = cpy_r_r60;
CPyL39: ;
    return cpy_r_r59;
CPyL40: ;
    cpy_r_r61 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_src)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    if (!cpy_r_r64) goto CPyL44;
    CPy_INCREF(cpy_r_dest);
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RPrimitive))
        cpy_r_r65 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 196, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_dest);
        goto CPyL57;
    }
    cpy_r_r66 = CPyDef_rtypes___is_object_rprimitive(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 196, CPyStatic_ircheck___globals);
        goto CPyL57;
    }
    return cpy_r_r66;
CPyL44: ;
    cpy_r_r67 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_src)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (!cpy_r_r70) goto CPyL55;
    cpy_r_r71 = 0;
    if (likely(Py_TYPE(cpy_r_src) == CPyType_rtypes___RUnion))
        cpy_r_r72 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 200, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RUnion", cpy_r_src);
        goto CPyL57;
    }
    cpy_r_r73 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r72)->_items;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = 0;
CPyL47: ;
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 << 1;
    cpy_r_r78 = (Py_ssize_t)cpy_r_r74 < (Py_ssize_t)cpy_r_r77;
    if (!cpy_r_r78) goto CPyL64;
    cpy_r_r79 = CPyList_GetItemUnsafe(cpy_r_r73, cpy_r_r74);
    if (likely(PyObject_TypeCheck(cpy_r_r79, CPyType_rtypes___RType)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 200, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RType", cpy_r_r79);
        goto CPyL65;
    }
    cpy_r_s = cpy_r_r80;
    CPy_INCREF(cpy_r_dest);
    if (likely(Py_TYPE(cpy_r_dest) == CPyType_rtypes___RPrimitive))
        cpy_r_r81 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 200, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_dest);
        goto CPyL66;
    }
    cpy_r_r82 = CPyDef_ircheck___can_coerce_to(cpy_r_s, cpy_r_r81);
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 200, CPyStatic_ircheck___globals);
        goto CPyL65;
    }
    if (cpy_r_r82) {
        goto CPyL67;
    } else
        goto CPyL53;
CPyL52: ;
    cpy_r_r71 = 1;
    goto CPyL54;
CPyL53: ;
    cpy_r_r83 = cpy_r_r74 + 2;
    cpy_r_r74 = cpy_r_r83;
    goto CPyL47;
CPyL54: ;
    return cpy_r_r71;
CPyL55: ;
    return 0;
CPyL56: ;
    return 1;
CPyL57: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL58: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL9;
CPyL59: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL57;
CPyL60: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL7;
CPyL61: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL57;
CPyL62: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL57;
CPyL63: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL57;
CPyL64: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL54;
CPyL65: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL57;
CPyL66: ;
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_s);
    goto CPyL57;
CPyL67: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL52;
}

PyObject *CPyPy_ircheck___can_coerce_to(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"src", "dest", 0};
    static CPyArg_Parser parser = {"OO:can_coerce_to", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_dest)) {
        return NULL;
    }
    PyObject *arg_src;
    if (likely(PyObject_TypeCheck(obj_src, CPyType_rtypes___RType)))
        arg_src = obj_src;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyObject_TypeCheck(obj_dest, CPyType_rtypes___RType)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_dest); 
        goto fail;
    }
    char retval = CPyDef_ircheck___can_coerce_to(arg_src, arg_dest);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "can_coerce_to", 181, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker_____init__(PyObject *cpy_r_self, PyObject *cpy_r_parent_fn) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPy_INCREF(cpy_r_parent_fn);
    if (((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_parent_fn != NULL) {
        CPy_DECREF(((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_parent_fn);
    }
    ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_parent_fn = cpy_r_parent_fn;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__init__", 208, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__init__", 209, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    if (((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_errors != NULL) {
        CPy_DECREF(((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_errors);
    }
    ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_errors = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "__init__", 209, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_ircheck___OpChecker_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"parent_fn", 0};
    PyObject *obj_parent_fn;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_parent_fn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_parent_fn;
    if (likely(Py_TYPE(obj_parent_fn) == CPyType_func_ir___FuncIR))
        arg_parent_fn = obj_parent_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_parent_fn); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker_____init__(arg_self, arg_parent_fn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "__init__", 207, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___fail(PyObject *cpy_r_self, PyObject *cpy_r_source, PyObject *cpy_r_desc) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_errors;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "fail", "OpChecker", "errors", 212, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_ircheck___FnError(cpy_r_source, cpy_r_desc);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "fail", 212, CPyStatic_ircheck___globals);
        goto CPyL5;
    }
    cpy_r_r2 = PyList_Append(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "fail", 212, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_ircheck___OpChecker___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"source", "desc", 0};
    static CPyArg_Parser parser = {"OO:fail", kwlist, 0};
    PyObject *obj_source;
    PyObject *obj_desc;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_source, &obj_desc)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_source;
    if (likely(PyObject_TypeCheck(obj_source, CPyType_ops___Op)))
        arg_source = obj_source;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_source); 
        goto fail;
    }
    PyObject *arg_desc;
    if (likely(PyUnicode_Check(obj_desc)))
        arg_desc = obj_desc;
    else {
        CPy_TypeError("str", obj_desc); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___fail(arg_self, arg_source, arg_desc);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "fail", 211, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___check_control_op_targets(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* targets */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 215, CPyStatic_ircheck___globals);
        goto CPyL12;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 215, CPyStatic_ircheck___globals);
        goto CPyL12;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_ops___BasicBlock))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 215, CPyStatic_ircheck___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r2);
        goto CPyL14;
    }
    cpy_r_target = cpy_r_r3;
    cpy_r_r4 = ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_parent_fn;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "check_control_op_targets", "OpChecker", "parent_fn", 216, CPyStatic_ircheck___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r4)->_blocks;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PySequence_Contains(cpy_r_r5, cpy_r_target);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 216, CPyStatic_ircheck___globals);
        goto CPyL15;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r9 = cpy_r_r8 ^ 1;
    if (!cpy_r_r9) goto CPyL16;
    cpy_r_r10 = CPyStatics[6741]; /* 'Invalid control operation target: ' */
    cpy_r_r11 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_target)->_label;
    CPyTagged_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_target);
    cpy_r_r12 = CPyTagged_Str(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 217, CPyStatic_ircheck___globals);
        goto CPyL14;
    }
    cpy_r_r13 = CPyStr_Build(2, cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 217, CPyStatic_ircheck___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 217, CPyStatic_ircheck___globals);
        goto CPyL14;
    } else
        goto CPyL2;
CPyL10: ;
    cpy_r_r15 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 215, CPyStatic_ircheck___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_target);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL2;
}

PyObject *CPyPy_ircheck___OpChecker___check_control_op_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:check_control_op_targets", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___ControlOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ControlOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___check_control_op_targets(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_control_op_targets", 214, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___check_type_coercion(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_src, PyObject *cpy_r_dest) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_ircheck___can_coerce_to(cpy_r_src, cpy_r_dest);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_type_coercion", 220, CPyStatic_ircheck___globals);
        goto CPyL7;
    }
    if (cpy_r_r0) goto CPyL6;
    cpy_r_r1 = CPyStatics[6742]; /* 'Cannot coerce source type ' */
    cpy_r_r2 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_src)->_name;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "check_type_coercion", "RType", "name", 222, CPyStatic_ircheck___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatics[6743]; /* ' to dest type ' */
    cpy_r_r4 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_dest)->_name;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "check_type_coercion", "RType", "name", 222, CPyStatic_ircheck___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyStr_Build(4, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_type_coercion", 222, CPyStatic_ircheck___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_type_coercion", 221, CPyStatic_ircheck___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_ircheck___OpChecker___check_type_coercion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "src", "dest", 0};
    static CPyArg_Parser parser = {"OOO:check_type_coercion", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_src;
    PyObject *obj_dest;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_src, &obj_dest)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyObject_TypeCheck(obj_src, CPyType_rtypes___RType)))
        arg_src = obj_src;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyObject_TypeCheck(obj_dest, CPyType_rtypes___RType)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_dest); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___check_type_coercion(arg_self, arg_op, arg_src, arg_dest);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_type_coercion", 219, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___check_compatibility(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_t, PyObject *cpy_r_s) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_ircheck___can_coerce_to(cpy_r_t, cpy_r_s);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_compatibility", 226, CPyStatic_ircheck___globals);
        goto CPyL9;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyDef_ircheck___can_coerce_to(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_compatibility", 226, CPyStatic_ircheck___globals);
        goto CPyL9;
    }
    if (cpy_r_r1) goto CPyL8;
CPyL4: ;
    cpy_r_r2 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t)->_name;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "check_compatibility", "RType", "name", 227, CPyStatic_ircheck___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL5: ;
    cpy_r_r3 = CPyStatics[3384]; /* ' and ' */
    cpy_r_r4 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_s)->_name;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "check_compatibility", "RType", "name", 227, CPyStatic_ircheck___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyStatics[6744]; /* ' are not compatible' */
    cpy_r_r6 = CPyStr_Build(4, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_compatibility", 227, CPyStatic_ircheck___globals);
        goto CPyL9;
    }
    cpy_r_r7 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_compatibility", 227, CPyStatic_ircheck___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
}

PyObject *CPyPy_ircheck___OpChecker___check_compatibility(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "t", "s", 0};
    static CPyArg_Parser parser = {"OOO:check_compatibility", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_rtypes___RType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_rtypes___RType)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_s); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___check_compatibility(arg_self, arg_op, arg_t, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_compatibility", 225, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___expect_float(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_v)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_rtypes___is_float_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_float", 230, CPyStatic_ircheck___globals);
        goto CPyL6;
    }
    if (cpy_r_r1) goto CPyL5;
    cpy_r_r2 = CPyStatics[6745]; /* 'Float expected (actual type is ' */
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_v)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyObject_Str(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_float", 231, CPyStatic_ircheck___globals);
        goto CPyL6;
    }
    cpy_r_r5 = CPyStatics[72]; /* ')' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_float", 231, CPyStatic_ircheck___globals);
        goto CPyL6;
    }
    cpy_r_r7 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_float", 231, CPyStatic_ircheck___globals);
        goto CPyL6;
    }
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_ircheck___OpChecker___expect_float(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "v", 0};
    static CPyArg_Parser parser = {"OO:expect_float", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_v)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *arg_v;
    if (likely(PyObject_TypeCheck(obj_v, CPyType_ops___Value)))
        arg_v = obj_v;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_v); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___expect_float(arg_self, arg_op, arg_v);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_float", 229, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___expect_non_float(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_v)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_rtypes___is_float_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_non_float", 234, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    if (!cpy_r_r1) goto CPyL3;
    cpy_r_r2 = CPyStatics[6746]; /* 'Float not expected' */
    cpy_r_r3 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_non_float", 235, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_ircheck___OpChecker___expect_non_float(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "v", 0};
    static CPyArg_Parser parser = {"OO:expect_non_float", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_v)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *arg_v;
    if (likely(PyObject_TypeCheck(obj_v, CPyType_ops___Value)))
        arg_v = obj_v;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_v); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___expect_non_float(arg_self, arg_op, arg_v);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "expect_non_float", 233, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_goto(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___check_control_op_targets(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_goto", 238, CPyStatic_ircheck___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_goto(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_goto", 237, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_goto__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_goto(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_goto__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_goto__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_goto__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___check_control_op_targets(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_branch", 241, CPyStatic_ircheck___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_branch(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_branch", 240, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___ir___ops___ReturnObject *)cpy_r_op)->_value;
    cpy_r_r1 = ((mypyc___ir___ops___ValueObject *)cpy_r_r0)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___analysis___ircheck___OpCheckerObject *)cpy_r_self)->_parent_fn;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "visit_return", "OpChecker", "parent_fn", 244, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r2)->_decl;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r3)->_sig;
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r4)->_ret_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_ircheck___OpChecker___check_type_coercion(cpy_r_self, cpy_r_op, cpy_r_r1, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_return", 244, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_ircheck___OpChecker___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_return(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_return", 243, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_return__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_unreachable(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_unreachable", 246, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    cpy_r_r1 = ((mypyc___ir___ops___ValueObject *)cpy_r_r0)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    cpy_r_r3 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r2)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_ircheck___OpChecker___check_type_coercion(cpy_r_self, cpy_r_op, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign", 252, CPyStatic_ircheck___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_ircheck___OpChecker___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_assign(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign", 251, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL11;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_ops___Value)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi", 255, CPyStatic_ircheck___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_src = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    cpy_r_r9 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r8)->_type;
    cpy_r_r10 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (cpy_r_r13) {
        goto CPyL6;
    } else
        goto CPyL13;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi", 256, CPyStatic_ircheck___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r15 = ((mypyc___ir___ops___ValueObject *)cpy_r_src)->_type;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_src);
    cpy_r_r16 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    cpy_r_r17 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r16)->_type;
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_rtypes___RArray))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi", 257, CPyStatic_ircheck___globals, "mypyc.ir.rtypes.RArray", cpy_r_r17);
        goto CPyL14;
    }
    cpy_r_r19 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r18)->_item_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_ircheck___OpChecker___check_type_coercion(cpy_r_self, cpy_r_op, cpy_r_r15, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi", 257, CPyStatic_ircheck___globals);
        goto CPyL12;
    }
    cpy_r_r21 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r21;
    goto CPyL1;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_src);
    goto CPyL4;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL10;
}

PyObject *CPyPy_ircheck___OpChecker___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_assign_multi(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi", 254, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_error_value(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_error_value(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_error_value", 259, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_error_value__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_error_value(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_error_value__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_error_value__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_error_value__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T7OOOOOOO cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_t)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL15;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_t, cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 266, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
    cpy_r_x = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_x != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = (PyObject *)&PyUnicode_Type;
    cpy_r_r9 = (PyObject *)&PyBytes_Type;
    cpy_r_r10 = (PyObject *)&PyBool_Type;
    cpy_r_r11 = (PyObject *)&PyLong_Type;
    cpy_r_r12 = (PyObject *)&PyFloat_Type;
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 267, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_r16 = (PyObject *)&PyTuple_Type;
    cpy_r_r17.f0 = cpy_r_r8;
    cpy_r_r17.f1 = cpy_r_r9;
    cpy_r_r17.f2 = cpy_r_r10;
    cpy_r_r17.f3 = cpy_r_r11;
    cpy_r_r17.f4 = cpy_r_r12;
    cpy_r_r17.f5 = cpy_r_r15;
    cpy_r_r17.f6 = cpy_r_r16;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_INCREF(cpy_r_r17.f2);
    CPy_INCREF(cpy_r_r17.f3);
    CPy_INCREF(cpy_r_r17.f4);
    CPy_INCREF(cpy_r_r17.f5);
    CPy_INCREF(cpy_r_r17.f6);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = PyTuple_New(7);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8652 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp8652);
    PyObject *__tmp8653 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp8653);
    PyObject *__tmp8654 = cpy_r_r17.f2;
    PyTuple_SET_ITEM(cpy_r_r18, 2, __tmp8654);
    PyObject *__tmp8655 = cpy_r_r17.f3;
    PyTuple_SET_ITEM(cpy_r_r18, 3, __tmp8655);
    PyObject *__tmp8656 = cpy_r_r17.f4;
    PyTuple_SET_ITEM(cpy_r_r18, 4, __tmp8656);
    PyObject *__tmp8657 = cpy_r_r17.f5;
    PyTuple_SET_ITEM(cpy_r_r18, 5, __tmp8657);
    PyObject *__tmp8658 = cpy_r_r17.f6;
    PyTuple_SET_ITEM(cpy_r_r18, 6, __tmp8658);
    cpy_r_r19 = PyObject_IsInstance(cpy_r_x, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 267, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) goto CPyL10;
    cpy_r_r22 = CPyStatics[6747]; /* 'Invalid type for item of tuple literal: ' */
    cpy_r_r23 = PyObject_Type(cpy_r_x);
    cpy_r_r24 = PyObject_Str(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 268, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_r25 = CPyStatics[72]; /* ')' */
    cpy_r_r26 = CPyStr_Build(3, cpy_r_r22, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 268, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_r27 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 268, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
CPyL10: ;
    cpy_r_r28 = (PyObject *)&PyTuple_Type;
    cpy_r_r29 = PyObject_IsInstance(cpy_r_x, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 269, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL18;
    if (likely(PyTuple_Check(cpy_r_x)))
        cpy_r_r32 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 270, CPyStatic_ircheck___globals, "tuple", cpy_r_x);
        goto CPyL16;
    }
    cpy_r_r33 = CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals(cpy_r_self, cpy_r_op, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 270, CPyStatic_ircheck___globals);
        goto CPyL16;
    }
CPyL14: ;
    cpy_r_r34 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r34;
    goto CPyL1;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL17: ;
    CPy_DecRef(cpy_r_x);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL14;
}

PyObject *CPyPy_ircheck___OpChecker___check_tuple_items_valid_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "t", 0};
    static CPyArg_Parser parser = {"OO:check_tuple_items_valid_literals", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject * arg_t;
    if (likely(PyTuple_Check(obj_t)))
        arg_t = obj_t;
    else {
        CPy_TypeError("tuple", obj_t); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals(arg_self, arg_op, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_tuple_items_valid_literals", 265, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___check_frozenset_items_valid_literals(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_x;
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
    tuple_T6OOOOOO cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = PyObject_GetIter(cpy_r_s);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 273, CPyStatic_ircheck___globals);
        goto CPyL15;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL16;
    cpy_r_x = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_x == cpy_r_r2;
    if (cpy_r_r3) goto CPyL17;
    cpy_r_r4 = (PyObject *)&PyUnicode_Type;
    cpy_r_r5 = (PyObject *)&PyBytes_Type;
    cpy_r_r6 = (PyObject *)&PyBool_Type;
    cpy_r_r7 = (PyObject *)&PyLong_Type;
    cpy_r_r8 = (PyObject *)&PyFloat_Type;
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 274, CPyStatic_ircheck___globals);
        goto CPyL18;
    }
    cpy_r_r12.f0 = cpy_r_r4;
    cpy_r_r12.f1 = cpy_r_r5;
    cpy_r_r12.f2 = cpy_r_r6;
    cpy_r_r12.f3 = cpy_r_r7;
    cpy_r_r12.f4 = cpy_r_r8;
    cpy_r_r12.f5 = cpy_r_r11;
    CPy_INCREF(cpy_r_r12.f0);
    CPy_INCREF(cpy_r_r12.f1);
    CPy_INCREF(cpy_r_r12.f2);
    CPy_INCREF(cpy_r_r12.f3);
    CPy_INCREF(cpy_r_r12.f4);
    CPy_INCREF(cpy_r_r12.f5);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = PyTuple_New(6);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8659 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp8659);
    PyObject *__tmp8660 = cpy_r_r12.f1;
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp8660);
    PyObject *__tmp8661 = cpy_r_r12.f2;
    PyTuple_SET_ITEM(cpy_r_r13, 2, __tmp8661);
    PyObject *__tmp8662 = cpy_r_r12.f3;
    PyTuple_SET_ITEM(cpy_r_r13, 3, __tmp8662);
    PyObject *__tmp8663 = cpy_r_r12.f4;
    PyTuple_SET_ITEM(cpy_r_r13, 4, __tmp8663);
    PyObject *__tmp8664 = cpy_r_r12.f5;
    PyTuple_SET_ITEM(cpy_r_r13, 5, __tmp8664);
    cpy_r_r14 = PyObject_IsInstance(cpy_r_x, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 274, CPyStatic_ircheck___globals);
        goto CPyL18;
    }
    cpy_r_r16 = cpy_r_r14;
    if (cpy_r_r16) goto CPyL17;
    cpy_r_r17 = (PyObject *)&PyTuple_Type;
    cpy_r_r18 = PyObject_IsInstance(cpy_r_x, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 276, CPyStatic_ircheck___globals);
        goto CPyL18;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL10;
    if (likely(PyTuple_Check(cpy_r_x)))
        cpy_r_r21 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 277, CPyStatic_ircheck___globals, "tuple", cpy_r_x);
        goto CPyL19;
    }
    cpy_r_r22 = CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals(cpy_r_self, cpy_r_op, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 277, CPyStatic_ircheck___globals);
        goto CPyL19;
    } else
        goto CPyL1;
CPyL10: ;
    cpy_r_r23 = CPyStatics[6748]; /* 'Invalid type for item of frozenset literal: ' */
    cpy_r_r24 = PyObject_Type(cpy_r_x);
    CPy_DECREF(cpy_r_x);
    cpy_r_r25 = PyObject_Str(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 279, CPyStatic_ircheck___globals);
        goto CPyL19;
    }
    cpy_r_r26 = CPyStatics[72]; /* ')' */
    cpy_r_r27 = CPyStr_Build(3, cpy_r_r23, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 279, CPyStatic_ircheck___globals);
        goto CPyL19;
    }
    cpy_r_r28 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 279, CPyStatic_ircheck___globals);
        goto CPyL19;
    } else
        goto CPyL1;
CPyL13: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 273, CPyStatic_ircheck___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL1;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_x);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
}

PyObject *CPyPy_ircheck___OpChecker___check_frozenset_items_valid_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "s", 0};
    static CPyArg_Parser parser = {"OO:check_frozenset_items_valid_literals", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *arg_s = obj_s;
    char retval = CPyDef_ircheck___OpChecker___check_frozenset_items_valid_literals(arg_self, arg_op, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "check_frozenset_items_valid_literals", 272, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_literal(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_expected_type;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_expected_type = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL51;
    } else
        goto CPyL2;
CPyL1: ;
    cpy_r_r4 = CPyStatics[736]; /* 'builtins.object' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_expected_type = cpy_r_r4;
    goto CPyL28;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&PyLong_Type;
    cpy_r_r7 = PyObject_IsInstance(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 285, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) {
        goto CPyL53;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r10 = CPyStatics[1178]; /* 'builtins.int' */
    CPy_INCREF(cpy_r_r10);
    cpy_r_expected_type = cpy_r_r10;
    goto CPyL28;
CPyL5: ;
    cpy_r_r11 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (PyObject *)&PyUnicode_Type;
    cpy_r_r13 = PyObject_IsInstance(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 287, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r15 = cpy_r_r13;
    if (cpy_r_r15) {
        goto CPyL54;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r16 = CPyStatics[697]; /* 'builtins.str' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_expected_type = cpy_r_r16;
    goto CPyL28;
CPyL8: ;
    cpy_r_r17 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&PyBytes_Type;
    cpy_r_r19 = PyObject_IsInstance(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 289, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) {
        goto CPyL55;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r22 = CPyStatics[1179]; /* 'builtins.bytes' */
    CPy_INCREF(cpy_r_r22);
    cpy_r_expected_type = cpy_r_r22;
    goto CPyL28;
CPyL11: ;
    cpy_r_r23 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = (PyObject *)&PyBool_Type;
    cpy_r_r25 = PyObject_IsInstance(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 291, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r27 = cpy_r_r25;
    if (cpy_r_r27) {
        goto CPyL56;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r28 = CPyStatics[736]; /* 'builtins.object' */
    CPy_INCREF(cpy_r_r28);
    cpy_r_expected_type = cpy_r_r28;
    goto CPyL28;
CPyL14: ;
    cpy_r_r29 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&PyFloat_Type;
    cpy_r_r31 = PyObject_IsInstance(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 293, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r33 = cpy_r_r31;
    if (cpy_r_r33) {
        goto CPyL57;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r34 = CPyStatics[1180]; /* 'builtins.float' */
    CPy_INCREF(cpy_r_r34);
    cpy_r_expected_type = cpy_r_r34;
    goto CPyL28;
CPyL17: ;
    cpy_r_r35 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 295, CPyStatic_ircheck___globals);
        goto CPyL58;
    }
    cpy_r_r39 = PyObject_IsInstance(cpy_r_r35, cpy_r_r38);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 295, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r41 = cpy_r_r39;
    if (cpy_r_r41) {
        goto CPyL59;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r42 = CPyStatics[736]; /* 'builtins.object' */
    CPy_INCREF(cpy_r_r42);
    cpy_r_expected_type = cpy_r_r42;
    goto CPyL28;
CPyL21: ;
    cpy_r_r43 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = (PyObject *)&PyTuple_Type;
    cpy_r_r45 = PyObject_IsInstance(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 297, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r47 = cpy_r_r45;
    if (cpy_r_r47) {
        goto CPyL60;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r48 = CPyStatics[24]; /* 'builtins.tuple' */
    CPy_INCREF(cpy_r_r48);
    cpy_r_expected_type = cpy_r_r48;
    cpy_r_r49 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r49);
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 299, CPyStatic_ircheck___globals, "tuple", cpy_r_r49);
        goto CPyL52;
    }
    cpy_r_r51 = CPyDef_ircheck___OpChecker___check_tuple_items_valid_literals(cpy_r_self, cpy_r_op, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 299, CPyStatic_ircheck___globals);
        goto CPyL52;
    } else
        goto CPyL28;
CPyL25: ;
    cpy_r_r52 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = (PyObject *)&PyFrozenSet_Type;
    cpy_r_r54 = PyObject_IsInstance(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 300, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    cpy_r_r56 = cpy_r_r54;
    if (cpy_r_r56) {
        goto CPyL61;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r57 = CPyStatics[797]; /* 'builtins.set' */
    CPy_INCREF(cpy_r_r57);
    cpy_r_expected_type = cpy_r_r57;
    cpy_r_r58 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_ircheck___OpChecker___check_frozenset_items_valid_literals(cpy_r_self, cpy_r_op, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 304, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
CPyL28: ;
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r60 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 306, CPyStatic_ircheck___globals, "str", cpy_r_expected_type);
        goto CPyL52;
    }
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_r60 != cpy_r_r61;
    if (cpy_r_r62) {
        goto CPyL32;
    } else
        goto CPyL62;
CPyL30: ;
    PyErr_SetString(PyExc_AssertionError, "Missed a case for LoadLiteral check");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 306, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r64 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_type;
    cpy_r_r65 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r64)->_name;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "visit_load_literal", "RType", "name", 308, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r65);
CPyL33: ;
    CPy_INCREF(cpy_r_expected_type);
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r66 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 308, CPyStatic_ircheck___globals, "str", cpy_r_expected_type);
        goto CPyL63;
    }
    cpy_r_r67 = PyUnicode_Compare(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 == -1;
    if (!cpy_r_r68) goto CPyL37;
    cpy_r_r69 = PyErr_Occurred();
    cpy_r_r70 = cpy_r_r69 != NULL;
    if (!cpy_r_r70) goto CPyL37;
    cpy_r_r71 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", -1, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
CPyL37: ;
    cpy_r_r72 = cpy_r_r67 != 0;
    if (cpy_r_r72) goto CPyL39;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL44;
CPyL39: ;
    cpy_r_r74 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_type;
    cpy_r_r75 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r74)->_name;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "visit_load_literal", "RType", "name", 308, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r75);
CPyL40: ;
    cpy_r_r76 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r77 = PyUnicode_Compare(cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 == -1;
    if (!cpy_r_r78) goto CPyL43;
    cpy_r_r79 = PyErr_Occurred();
    cpy_r_r80 = cpy_r_r79 != NULL;
    if (!cpy_r_r80) goto CPyL43;
    cpy_r_r81 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", -1, CPyStatic_ircheck___globals);
        goto CPyL52;
    }
CPyL43: ;
    cpy_r_r82 = cpy_r_r77 != 0;
    cpy_r_r73 = cpy_r_r82;
CPyL44: ;
    if (!cpy_r_r73) goto CPyL64;
    cpy_r_r83 = CPyStatics[6749]; /* 'Invalid literal value for type: value has type ' */
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r84 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 311, CPyStatic_ircheck___globals, "str", cpy_r_expected_type);
        goto CPyL50;
    }
    cpy_r_r85 = CPyStatics[6750]; /* ', but op has type ' */
    cpy_r_r86 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_type;
    cpy_r_r87 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r86)->_name;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "visit_load_literal", "RType", "name", 311, CPyStatic_ircheck___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r87);
CPyL47: ;
    cpy_r_r88 = CPyStr_Build(4, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r87);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 311, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
    cpy_r_r89 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 309, CPyStatic_ircheck___globals);
        goto CPyL50;
    }
CPyL49: ;
    return 1;
CPyL50: ;
    cpy_r_r90 = 2;
    return cpy_r_r90;
CPyL51: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL1;
CPyL52: ;
    CPy_DecRef(cpy_r_expected_type);
    goto CPyL50;
CPyL53: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL4;
CPyL54: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL7;
CPyL55: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL10;
CPyL56: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL13;
CPyL57: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL16;
CPyL58: ;
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_r35);
    goto CPyL50;
CPyL59: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL20;
CPyL60: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL23;
CPyL61: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL27;
CPyL62: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL30;
CPyL63: ;
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_r65);
    goto CPyL50;
CPyL64: ;
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL49;
CPyL65: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL50;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_literal(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal", 281, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_literal__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_literal(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_literal__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_literal__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_literal__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_get_attr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_get_attr", 315, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_get_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_get_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_get_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_get_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_get_attr__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_set_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_set_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_set_attr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_set_attr", 319, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_set_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_set_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_set_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_set_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_set_attr__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_static(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_static", 324, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_static__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_init_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_init_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_init_static(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_init_static", 327, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_init_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_init_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_init_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_init_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_init_static__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_tuple_get(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_tuple_get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_tuple_get(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_tuple_get", 330, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_tuple_get__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_tuple_get(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_tuple_get__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_tuple_get__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_tuple_get__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_tuple_set(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_tuple_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_tuple_set(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_tuple_set", 334, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_tuple_set__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_tuple_set(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_tuple_set__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_tuple_set__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_tuple_set__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_inc_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_inc_ref(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_inc_ref", 338, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_inc_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_inc_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_inc_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_inc_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_inc_ref__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_dec_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_dec_ref(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_dec_ref", 342, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_dec_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_dec_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_dec_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_dec_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_dec_ref__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_arg_value;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_arg_runtime;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
    cpy_r_r2 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r2)->_sig;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r3)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL1: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_ops___Value)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_call", 349, CPyStatic_ircheck___globals, "mypyc.ir.ops.Value", cpy_r_r14);
        goto CPyL11;
    }
    cpy_r_arg_value = cpy_r_r15;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call", 349, CPyStatic_ircheck___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_func_ir___RuntimeArg))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_call", 349, CPyStatic_ircheck___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r16);
        goto CPyL12;
    }
    cpy_r_arg_runtime = cpy_r_r17;
    cpy_r_r18 = ((mypyc___ir___ops___ValueObject *)cpy_r_arg_value)->_type;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_arg_value);
    cpy_r_r19 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_runtime)->_type;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_arg_runtime);
    cpy_r_r20 = CPyDef_ircheck___OpChecker___check_type_coercion(cpy_r_self, cpy_r_op, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call", 350, CPyStatic_ircheck___globals);
        goto CPyL11;
    }
    cpy_r_r21 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r21;
    cpy_r_r22 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r22;
    goto CPyL1;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_arg_value);
    goto CPyL9;
}

PyObject *CPyPy_ircheck___OpChecker___visit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_call(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call", 346, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_method_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_method_decl;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_decl_index;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
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
    PyObject *cpy_r_arg_value;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_arg_runtime;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_receiver_type;
    cpy_r_r1 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r0)->_class_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_method;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 354, CPyStatic_ircheck___globals);
        goto CPyL17;
    }
    cpy_r_method_decl = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_method_decl)->_kind;
    cpy_r_r5 = cpy_r_r4 == 2;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_decl_index = 0;
    goto CPyL4;
CPyL3: ;
    cpy_r_decl_index = 2;
CPyL4: ;
    cpy_r_r6 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_args;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = CPyTagged_Add(cpy_r_r9, cpy_r_decl_index);
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_method_decl)->_sig;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r11)->_args;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r10 != cpy_r_r15;
    CPyTagged_DECREF(cpy_r_r10);
    if (!cpy_r_r16) goto CPyL6;
    cpy_r_r17 = CPyStatics[6751]; /* 'Incorrect number of args for method call.' */
    cpy_r_r18 = CPyDef_ircheck___OpChecker___fail(cpy_r_self, cpy_r_op, cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 361, CPyStatic_ircheck___globals);
        goto CPyL18;
    }
CPyL6: ;
    cpy_r_r19 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_method_decl)->_sig;
    cpy_r_r22 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r21)->_args;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_method_decl);
    cpy_r_r23 = CPySequenceTuple_GetSlice(cpy_r_r22, cpy_r_decl_index, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_decl_index);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 364, CPyStatic_ircheck___globals);
        goto CPyL19;
    }
    if (likely(PyTuple_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 364, CPyStatic_ircheck___globals, "tuple", cpy_r_r23);
        goto CPyL19;
    }
    cpy_r_r25 = 0;
CPyL9: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL20;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_ops___Value)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 364, CPyStatic_ircheck___globals, "mypyc.ir.ops.Value", cpy_r_r34);
        goto CPyL21;
    }
    cpy_r_arg_value = cpy_r_r35;
    cpy_r_r36 = CPySequenceTuple_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 364, CPyStatic_ircheck___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_func_ir___RuntimeArg))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 364, CPyStatic_ircheck___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r36);
        goto CPyL22;
    }
    cpy_r_arg_runtime = cpy_r_r37;
    cpy_r_r38 = ((mypyc___ir___ops___ValueObject *)cpy_r_arg_value)->_type;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_arg_value);
    cpy_r_r39 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_runtime)->_type;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_arg_runtime);
    cpy_r_r40 = CPyDef_ircheck___OpChecker___check_type_coercion(cpy_r_self, cpy_r_op, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 365, CPyStatic_ircheck___globals);
        goto CPyL21;
    }
    cpy_r_r41 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r41;
    cpy_r_r42 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r42;
    goto CPyL9;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL18: ;
    CPy_DecRef(cpy_r_method_decl);
    CPyTagged_DecRef(cpy_r_decl_index);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r24);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_arg_value);
    goto CPyL17;
}

PyObject *CPyPy_ircheck___OpChecker___visit_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_method_call(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call", 352, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_method_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_method_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_method_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_method_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_method_call__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_cast(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_cast(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_cast", 367, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_cast__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_cast(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_cast__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_cast__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_cast__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_box(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_box(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_box", 370, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_box__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_box(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_box__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_box__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_box__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_unbox(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_unbox", 373, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_unbox__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_unbox(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_unbox__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_unbox__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_unbox__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_raise_standard_error(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_raise_standard_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_raise_standard_error(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_raise_standard_error", 376, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_raise_standard_error__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_raise_standard_error(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_raise_standard_error__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_raise_standard_error__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_raise_standard_error__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_call_c(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_call_c(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call_c", 379, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_call_c__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_call_c(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_call_c__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_call_c__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_call_c__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_truncate(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_truncate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_truncate(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_truncate", 382, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_truncate__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_truncate(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_truncate__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_truncate__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_truncate__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_extend(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_extend(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_extend(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_extend", 385, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_extend__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_extend(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_extend__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_extend__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_extend__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_global(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_global(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_global", 388, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_global__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_global(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_global__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_global__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_global__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_int_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ircheck___OpChecker___expect_non_float(cpy_r_self, cpy_r_op, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_int_op", 392, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ircheck___OpChecker___expect_non_float(cpy_r_self, cpy_r_op, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_int_op", 393, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_ircheck___OpChecker___visit_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_int_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_int_op", 391, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_int_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_int_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_int_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_int_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_int_op__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    cpy_r_r1 = ((mypyc___ir___ops___ValueObject *)cpy_r_r0)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_r2)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_ircheck___OpChecker___check_compatibility(cpy_r_self, cpy_r_op, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_comparison_op", 396, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    cpy_r_r5 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_ircheck___OpChecker___expect_non_float(cpy_r_self, cpy_r_op, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_comparison_op", 397, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    cpy_r_r7 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_ircheck___OpChecker___expect_non_float(cpy_r_self, cpy_r_op, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_comparison_op", 398, CPyStatic_ircheck___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_ircheck___OpChecker___visit_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_comparison_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_comparison_op", 395, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_comparison_op__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_float_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ircheck___OpChecker___expect_float(cpy_r_self, cpy_r_op, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_op", 401, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ircheck___OpChecker___expect_float(cpy_r_self, cpy_r_op, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_op", 402, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_float_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_op", 400, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_float_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_float_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_float_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_op__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_float_neg(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___ops___FloatNegObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ircheck___OpChecker___expect_float(cpy_r_self, cpy_r_op, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_neg", 405, CPyStatic_ircheck___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_neg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_float_neg(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_neg", 404, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_float_neg__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_float_neg(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_neg__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_float_neg__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_neg__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_float_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ircheck___OpChecker___expect_float(cpy_r_self, cpy_r_op, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_comparison_op", 408, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ircheck___OpChecker___expect_float(cpy_r_self, cpy_r_op, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_comparison_op", 409, CPyStatic_ircheck___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_float_comparison_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_comparison_op", 407, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_float_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_float_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_float_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_float_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_float_comparison_op__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_mem(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_mem", 411, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_mem__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_set_mem(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_set_mem", 414, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_get_element_ptr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_get_element_ptr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_get_element_ptr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_get_element_ptr", 417, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_get_element_ptr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_get_element_ptr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_get_element_ptr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_get_element_ptr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_get_element_ptr__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_load_address(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_load_address(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_address", 420, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_load_address__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_load_address(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_load_address__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_load_address__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_load_address__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck___OpChecker___visit_keep_alive(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_ircheck___OpChecker___visit_keep_alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    char retval = CPyDef_ircheck___OpChecker___visit_keep_alive(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_keep_alive", 423, CPyStatic_ircheck___globals);
    return NULL;
}

PyObject *CPyDef_ircheck___OpChecker___visit_keep_alive__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_ircheck___OpChecker___visit_keep_alive(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_ircheck___OpChecker___visit_keep_alive__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ircheck___OpChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.ircheck.OpChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_ircheck___OpChecker___visit_keep_alive__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/ircheck.py", "visit_keep_alive__OpVisitor_glue", -1, CPyStatic_ircheck___globals);
    return NULL;
}

char CPyDef_ircheck_____top_level__(void) {
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
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
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
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", -1, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_ircheck___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 2, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9911]; /* ('FUNC_STATICMETHOD', 'FuncIR') */
    cpy_r_r10 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r11 = CPyStatic_ircheck___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 4, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9912]; /* ('Assign', 'AssignMulti', 'BaseAssign', 'BasicBlock',
                                     'Box', 'Branch', 'Call', 'CallC', 'Cast',
                                     'ComparisonOp', 'ControlOp', 'DecRef', 'Extend',
                                     'FloatComparisonOp', 'FloatNeg', 'FloatOp', 'GetAttr',
                                     'GetElementPtr', 'Goto', 'IncRef', 'InitStatic',
                                     'Integer', 'IntOp', 'KeepAlive', 'LoadAddress',
                                     'LoadErrorValue', 'LoadGlobal', 'LoadLiteral',
                                     'LoadMem', 'LoadStatic', 'MethodCall', 'Op',
                                     'OpVisitor', 'RaiseStandardError', 'Register', 'Return',
                                     'SetAttr', 'SetMem', 'Truncate', 'TupleGet', 'TupleSet',
                                     'Unbox', 'Unreachable', 'Value') */
    cpy_r_r14 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r15 = CPyStatic_ircheck___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 5, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9913]; /* ('format_func',) */
    cpy_r_r18 = CPyStatics[6758]; /* 'mypyc.ir.pprint' */
    cpy_r_r19 = CPyStatic_ircheck___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 51, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule_mypyc___ir___pprint = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___pprint);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9914]; /* ('RArray', 'RInstance', 'RPrimitive', 'RType', 'RUnion',
                                     'bytes_rprimitive', 'dict_rprimitive', 'int_rprimitive',
                                     'is_float_rprimitive', 'is_object_rprimitive',
                                     'list_rprimitive', 'range_rprimitive', 'set_rprimitive',
                                     'str_rprimitive', 'tuple_rprimitive') */
    cpy_r_r22 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r23 = CPyStatic_ircheck___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 52, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyStatics[6773]; /* 'mypyc.analysis.ircheck' */
    cpy_r_r27 = (PyObject *)CPyType_ircheck___FnError_template;
    cpy_r_r28 = CPyType_FromTemplate(cpy_r_r27, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 71, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r29 = CPyDef_ircheck___FnError_trait_vtable_setup();
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", -1, CPyStatic_ircheck___globals);
        goto CPyL70;
    }
    cpy_r_r30 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r31 = CPyStatics[667]; /* 'source' */
    cpy_r_r32 = CPyStatics[6774]; /* 'desc' */
    cpy_r_r33 = PyTuple_Pack(2, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 71, CPyStatic_ircheck___globals);
        goto CPyL70;
    }
    cpy_r_r34 = PyObject_SetAttr(cpy_r_r28, cpy_r_r30, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 71, CPyStatic_ircheck___globals);
        goto CPyL70;
    }
    CPyType_ircheck___FnError = (PyTypeObject *)cpy_r_r28;
    CPy_INCREF(CPyType_ircheck___FnError);
    cpy_r_r36 = CPyStatic_ircheck___globals;
    cpy_r_r37 = CPyStatics[6775]; /* 'FnError' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 71, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r40 = CPyModule_builtins;
    cpy_r_r41 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r43 = PyTuple_Pack(1, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r44 = CPyStatics[6773]; /* 'mypyc.analysis.ircheck' */
    cpy_r_r45 = (PyObject *)CPyType_ircheck___IrCheckException_template;
    cpy_r_r46 = CPyType_FromTemplate(cpy_r_r45, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r47 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r48 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r49 = PyTuple_Pack(1, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL71;
    }
    cpy_r_r50 = PyObject_SetAttr(cpy_r_r46, cpy_r_r47, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL71;
    }
    CPyType_ircheck___IrCheckException = (PyTypeObject *)cpy_r_r46;
    CPy_INCREF(CPyType_ircheck___IrCheckException);
    cpy_r_r52 = CPyStatic_ircheck___globals;
    cpy_r_r53 = CPyStatics[6776]; /* 'IrCheckException' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 116, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r56 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r56 != NULL)) goto CPyL22;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 170, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r58 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r56)->_name;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 170, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r58);
CPyL23: ;
    cpy_r_r59 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL72;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 171, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r61 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r59)->_name;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 171, CPyStatic_ircheck___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r61);
CPyL27: ;
    cpy_r_r62 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 172, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r64 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r62)->_name;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 172, CPyStatic_ircheck___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r64);
CPyL31: ;
    cpy_r_r65 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r65 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 173, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r67 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r65)->_name;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 173, CPyStatic_ircheck___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r67);
CPyL35: ;
    cpy_r_r68 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL78;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 174, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r70 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r68)->_name;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 174, CPyStatic_ircheck___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r70);
CPyL39: ;
    cpy_r_r71 = CPyStatic_rtypes___set_rprimitive;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL80;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 175, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r73 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r71)->_name;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 175, CPyStatic_ircheck___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r73);
CPyL43: ;
    cpy_r_r74 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r74 == NULL)) {
        goto CPyL82;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 176, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r76 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r74)->_name;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 176, CPyStatic_ircheck___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r76);
CPyL47: ;
    cpy_r_r77 = CPyStatic_rtypes___range_rprimitive;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL84;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"range_rprimitive\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 177, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r79 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r77)->_name;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypyc/analysis/ircheck.py", "<module>", "RPrimitive", "name", 177, CPyStatic_ircheck___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r79);
CPyL51: ;
    cpy_r_r80 = PySet_New(NULL);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL86;
    }
    cpy_r_r81 = PySet_Add(cpy_r_r80, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL87;
    }
    cpy_r_r83 = PySet_Add(cpy_r_r80, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL88;
    }
    cpy_r_r85 = PySet_Add(cpy_r_r80, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL89;
    }
    cpy_r_r87 = PySet_Add(cpy_r_r80, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL90;
    }
    cpy_r_r89 = PySet_Add(cpy_r_r80, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL91;
    }
    cpy_r_r91 = PySet_Add(cpy_r_r80, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL92;
    }
    cpy_r_r93 = PySet_Add(cpy_r_r80, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL93;
    }
    cpy_r_r95 = PySet_Add(cpy_r_r80, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL94;
    }
    cpy_r_r97 = CPyStatic_ircheck___globals;
    cpy_r_r98 = CPyStatics[6740]; /* 'disjoint_types' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 169, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r101 = (PyObject *)CPyType_ops___OpVisitor;
    cpy_r_r102 = Py_None;
    cpy_r_r103 = PyObject_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r104 = PyTuple_Pack(1, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r105 = CPyStatics[6773]; /* 'mypyc.analysis.ircheck' */
    cpy_r_r106 = (PyObject *)CPyType_ircheck___OpChecker_template;
    cpy_r_r107 = CPyType_FromTemplate(cpy_r_r106, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    cpy_r_r108 = CPyDef_ircheck___OpChecker_trait_vtable_setup();
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", -1, CPyStatic_ircheck___globals);
        goto CPyL95;
    }
    cpy_r_r109 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r110 = CPyStatics[6777]; /* 'parent_fn' */
    cpy_r_r111 = CPyStatics[610]; /* 'errors' */
    cpy_r_r112 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r113 = PyTuple_Pack(3, cpy_r_r110, cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL95;
    }
    cpy_r_r114 = PyObject_SetAttr(cpy_r_r107, cpy_r_r109, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL95;
    }
    CPyType_ircheck___OpChecker = (PyTypeObject *)cpy_r_r107;
    CPy_INCREF(CPyType_ircheck___OpChecker);
    cpy_r_r116 = CPyStatic_ircheck___globals;
    cpy_r_r117 = CPyStatics[6778]; /* 'OpChecker' */
    cpy_r_r118 = CPyDict_SetItem(cpy_r_r116, cpy_r_r117, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypyc/analysis/ircheck.py", "<module>", 206, CPyStatic_ircheck___globals);
        goto CPyL69;
    }
    return 1;
CPyL69: ;
    cpy_r_r120 = 2;
    return cpy_r_r120;
CPyL70: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL69;
CPyL71: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL69;
CPyL72: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL24;
CPyL73: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL69;
CPyL74: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    goto CPyL28;
CPyL75: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    goto CPyL69;
CPyL76: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    goto CPyL32;
CPyL77: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    goto CPyL69;
CPyL78: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL36;
CPyL79: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL69;
CPyL80: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    goto CPyL40;
CPyL81: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    goto CPyL69;
CPyL82: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    goto CPyL44;
CPyL83: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    goto CPyL69;
CPyL84: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    goto CPyL48;
CPyL85: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    goto CPyL69;
CPyL86: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL69;
CPyL87: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL88: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL89: ;
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL90: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL91: ;
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL92: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL93: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL94: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL69;
CPyL95: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL69;
}
