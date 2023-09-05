#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
pprint___IRPrettyPrintVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef pprint___IRPrettyPrintVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *pprint___IRPrettyPrintVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_pprint___IRPrettyPrintVisitor(PyObject *cpy_r_names);

static PyObject *
pprint___IRPrettyPrintVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_pprint___IRPrettyPrintVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = pprint___IRPrettyPrintVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_pprint___IRPrettyPrintVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
pprint___IRPrettyPrintVisitor_traverse(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_branch_op_names);
    Py_VISIT(self->_names);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject))));
    return 0;
}

static int
pprint___IRPrettyPrintVisitor_clear(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self)
{
    Py_CLEAR(self->_branch_op_names);
    Py_CLEAR(self->_names);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject))));
    return 0;
}

static void
pprint___IRPrettyPrintVisitor_dealloc(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, pprint___IRPrettyPrintVisitor_dealloc)
    pprint___IRPrettyPrintVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem pprint___IRPrettyPrintVisitor_vtable[43];
static CPyVTableItem pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable[36];
static size_t pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_pprint___IRPrettyPrintVisitor_trait_vtable_setup(void)
{
    CPyVTableItem pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable, pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable));
    size_t pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table, pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table_scratch, sizeof(pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem pprint___IRPrettyPrintVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)pprint___IRPrettyPrintVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)pprint___IRPrettyPrintVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor_____init__,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_goto,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_branch,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_return,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_assign,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___borrow_prefix,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_call,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_cast,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_box,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_extend,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor___format,
        (CPyVTableItem)CPyDef_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup,
    };
    memcpy(pprint___IRPrettyPrintVisitor_vtable, pprint___IRPrettyPrintVisitor_vtable_scratch, sizeof(pprint___IRPrettyPrintVisitor_vtable));
    return 1;
}

static PyObject *
pprint___IRPrettyPrintVisitor_get_branch_op_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, void *closure);
static int
pprint___IRPrettyPrintVisitor_set_branch_op_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, PyObject *value, void *closure);
static PyObject *
pprint___IRPrettyPrintVisitor_get_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, void *closure);
static int
pprint___IRPrettyPrintVisitor_set_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef pprint___IRPrettyPrintVisitor_getseters[] = {
    {"branch_op_names",
     (getter)pprint___IRPrettyPrintVisitor_get_branch_op_names, (setter)pprint___IRPrettyPrintVisitor_set_branch_op_names,
     NULL, NULL},
    {"names",
     (getter)pprint___IRPrettyPrintVisitor_get_names, (setter)pprint___IRPrettyPrintVisitor_set_names,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pprint___IRPrettyPrintVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_goto",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_error_value",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_literal",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_attr",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"borrow_prefix",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___borrow_prefix,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_attr",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_set_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_static",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_init_static",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_init_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_get",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_set",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_inc_ref",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_inc_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dec_ref",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_dec_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_method_call",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_box",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbox",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_standard_error",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_raise_standard_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_c",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_truncate",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_truncate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_extend",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_extend,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_global",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_op",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_op",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_op",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_float_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_neg",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_float_neg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_comparison_op",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_float_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_mem",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_element_ptr",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_get_element_ptr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_address",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_load_address,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_keep_alive",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___visit_keep_alive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor___format,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_pprint___IRPrettyPrintVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IRPrettyPrintVisitor",
    .tp_new = pprint___IRPrettyPrintVisitor_new,
    .tp_dealloc = (destructor)pprint___IRPrettyPrintVisitor_dealloc,
    .tp_traverse = (traverseproc)pprint___IRPrettyPrintVisitor_traverse,
    .tp_clear = (inquiry)pprint___IRPrettyPrintVisitor_clear,
    .tp_getset = pprint___IRPrettyPrintVisitor_getseters,
    .tp_methods = pprint___IRPrettyPrintVisitor_methods,
    .tp_init = pprint___IRPrettyPrintVisitor_init,
    .tp_members = pprint___IRPrettyPrintVisitor_members,
    .tp_basicsize = sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___ir___pprint___IRPrettyPrintVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_pprint___IRPrettyPrintVisitor_template = &CPyType_pprint___IRPrettyPrintVisitor_template_;

static PyObject *
pprint___IRPrettyPrintVisitor_setup(PyTypeObject *type)
{
    mypyc___ir___pprint___IRPrettyPrintVisitorObject *self;
    self = (mypyc___ir___pprint___IRPrettyPrintVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = pprint___IRPrettyPrintVisitor_vtable + 3;
    if (CPyDef_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor(PyObject *cpy_r_names)
{
    PyObject *self = pprint___IRPrettyPrintVisitor_setup(CPyType_pprint___IRPrettyPrintVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_pprint___IRPrettyPrintVisitor_____init__(self, cpy_r_names);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
pprint___IRPrettyPrintVisitor_get_branch_op_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, void *closure)
{
    if (unlikely(self->_branch_op_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'branch_op_names' of 'IRPrettyPrintVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_branch_op_names);
    PyObject *retval = self->_branch_op_names;
    return retval;
}

static int
pprint___IRPrettyPrintVisitor_set_branch_op_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRPrettyPrintVisitor' object attribute 'branch_op_names' cannot be deleted");
        return -1;
    }
    if (self->_branch_op_names != NULL) {
        CPy_DECREF(self->_branch_op_names);
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
    self->_branch_op_names = tmp;
    return 0;
}

static PyObject *
pprint___IRPrettyPrintVisitor_get_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'IRPrettyPrintVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
pprint___IRPrettyPrintVisitor_set_names(mypyc___ir___pprint___IRPrettyPrintVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRPrettyPrintVisitor' object attribute 'names' cannot be deleted");
        return -1;
    }
    if (self->_names != NULL) {
        CPy_DECREF(self->_names);
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
    self->_names = tmp;
    return 0;
}
static PyMethodDef pprintmodule_methods[] = {
    {"format_registers", (PyCFunction)CPyPy_pprint___format_registers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"format_blocks", (PyCFunction)CPyPy_pprint___format_blocks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"format_func", (PyCFunction)CPyPy_pprint___format_func, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"format_modules", (PyCFunction)CPyPy_pprint___format_modules, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_names_for_ir", (PyCFunction)CPyPy_pprint___generate_names_for_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef pprintmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.ir.pprint",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    pprintmodule_methods
};

PyObject *CPyInit_mypyc___ir___pprint(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___ir___pprint_internal) {
        Py_INCREF(CPyModule_mypyc___ir___pprint_internal);
        return CPyModule_mypyc___ir___pprint_internal;
    }
    CPyModule_mypyc___ir___pprint_internal = PyModule_Create(&pprintmodule);
    if (unlikely(CPyModule_mypyc___ir___pprint_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___ir___pprint_internal, "__name__");
    CPyStatic_pprint___globals = PyModule_GetDict(CPyModule_mypyc___ir___pprint_internal);
    if (unlikely(CPyStatic_pprint___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_pprint_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___ir___pprint_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___ir___pprint_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_pprint___IRPrettyPrintVisitor___branch_op_names);
    CPyStatic_pprint___IRPrettyPrintVisitor___branch_op_names = NULL;
    Py_CLEAR(CPyType_pprint___IRPrettyPrintVisitor);
    return NULL;
}

char CPyDef_pprint___IRPrettyPrintVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_names);
    if (((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r_self)->_names != NULL) {
        CPy_DECREF(((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r_self)->_names);
    }
    ((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r_self)->_names = cpy_r_names;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "__init__", 70, CPyStatic_pprint___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    PyObject *obj_names;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyDict_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("dict", obj_names); 
        goto fail;
    }
    char retval = CPyDef_pprint___IRPrettyPrintVisitor_____init__(arg_self, arg_names);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "__init__", 66, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_goto(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[7889]; /* 'goto %l' */
    cpy_r_r1 = ((mypyc___ir___ops___GotoObject *)cpy_r_op)->_label;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_Pack(1, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_goto", 73, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_goto", 73, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_goto(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_goto", 72, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_goto__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_goto(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_goto__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_goto__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_goto__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_fmt;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_typ;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_tb;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    tuple_T2OI cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OI cpy_r_r24;
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
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = ((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r_self)->_branch_op_names;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/pprint.py", "visit_branch", "IRPrettyPrintVisitor", "branch_op_names", 78, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 78, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    PyObject *__tmp9876;
    if (unlikely(!(PyTuple_Check(cpy_r_r3) && PyTuple_GET_SIZE(cpy_r_r3) == 2))) {
        __tmp9876 = NULL;
        goto __LL9877;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r3, 0))))
        __tmp9876 = PyTuple_GET_ITEM(cpy_r_r3, 0);
    else {
        __tmp9876 = NULL;
    }
    if (__tmp9876 == NULL) goto __LL9877;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r3, 1))))
        __tmp9876 = PyTuple_GET_ITEM(cpy_r_r3, 1);
    else {
        __tmp9876 = NULL;
    }
    if (__tmp9876 == NULL) goto __LL9877;
    __tmp9876 = cpy_r_r3;
__LL9877: ;
    if (unlikely(__tmp9876 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r3); cpy_r_r4 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9878 = PyTuple_GET_ITEM(cpy_r_r3, 0);
        CPy_INCREF(__tmp9878);
        PyObject *__tmp9879;
        if (likely(PyUnicode_Check(__tmp9878)))
            __tmp9879 = __tmp9878;
        else {
            CPy_TypeError("str", __tmp9878); 
            __tmp9879 = NULL;
        }
        cpy_r_r4.f0 = __tmp9879;
        PyObject *__tmp9880 = PyTuple_GET_ITEM(cpy_r_r3, 1);
        CPy_INCREF(__tmp9880);
        PyObject *__tmp9881;
        if (likely(PyUnicode_Check(__tmp9880)))
            __tmp9881 = __tmp9880;
        else {
            CPy_TypeError("str", __tmp9880); 
            __tmp9881 = NULL;
        }
        cpy_r_r4.f1 = __tmp9881;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 78, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_fmt = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    cpy_r_typ = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_negated;
    if (!cpy_r_r7) goto CPyL6;
CPyL4: ;
    cpy_r_r8 = CPyStatics[7890]; /* 'not ' */
    cpy_r_r9 = CPyStr_Build(2, cpy_r_r8, cpy_r_fmt);
    CPy_DECREF(cpy_r_fmt);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 80, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    cpy_r_fmt = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyTuple_Pack(1, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 82, CPyStatic_pprint___globals);
        goto CPyL26;
    }
    cpy_r_r12 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_fmt, cpy_r_r11);
    CPy_DECREF(cpy_r_fmt);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 82, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    cpy_r_cond = cpy_r_r12;
    cpy_r_r13 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_tb = cpy_r_r13;
    cpy_r_r14 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL27;
    PyObject *__tmp9882;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp9882 = NULL;
        goto __LL9883;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 0))))
        __tmp9882 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    else {
        __tmp9882 = NULL;
    }
    if (__tmp9882 == NULL) goto __LL9883;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r14, 1))))
        __tmp9882 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    else {
        __tmp9882 = NULL;
    }
    if (__tmp9882 == NULL) goto __LL9883;
    __tmp9882 = cpy_r_r14;
__LL9883: ;
    if (unlikely(__tmp9882 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r14); cpy_r_r17 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9884 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp9884);
        PyObject *__tmp9885;
        if (likely(PyUnicode_Check(__tmp9884)))
            __tmp9885 = __tmp9884;
        else {
            CPy_TypeError("str", __tmp9884); 
            __tmp9885 = NULL;
        }
        cpy_r_r17.f0 = __tmp9885;
        PyObject *__tmp9886 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPyTagged __tmp9887;
        if (likely(PyLong_Check(__tmp9886)))
            __tmp9887 = CPyTagged_FromObject(__tmp9886);
        else {
            CPy_TypeError("int", __tmp9886); __tmp9887 = CPY_INT_TAG;
        }
        cpy_r_r17.f1 = __tmp9887;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 84, CPyStatic_pprint___globals);
        goto CPyL28;
    }
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9888 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp9888);
    PyObject *__tmp9889 = CPyTagged_StealAsObject(cpy_r_r17.f1);
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp9889);
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 84, CPyStatic_pprint___globals);
        goto CPyL28;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) {
        goto CPyL29;
    } else
        goto CPyL16;
CPyL12: ;
    cpy_r_r22 = CPyStatics[7891]; /* ' (error at %s:%d)' */
    cpy_r_r23 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    CPy_INCREF(cpy_r_r23);
    PyObject *__tmp9890;
    if (unlikely(!(PyTuple_Check(cpy_r_r23) && PyTuple_GET_SIZE(cpy_r_r23) == 2))) {
        __tmp9890 = NULL;
        goto __LL9891;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r23, 0))))
        __tmp9890 = PyTuple_GET_ITEM(cpy_r_r23, 0);
    else {
        __tmp9890 = NULL;
    }
    if (__tmp9890 == NULL) goto __LL9891;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r23, 1))))
        __tmp9890 = PyTuple_GET_ITEM(cpy_r_r23, 1);
    else {
        __tmp9890 = NULL;
    }
    if (__tmp9890 == NULL) goto __LL9891;
    __tmp9890 = cpy_r_r23;
__LL9891: ;
    if (unlikely(__tmp9890 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r23); cpy_r_r24 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9892 = PyTuple_GET_ITEM(cpy_r_r23, 0);
        CPy_INCREF(__tmp9892);
        PyObject *__tmp9893;
        if (likely(PyUnicode_Check(__tmp9892)))
            __tmp9893 = __tmp9892;
        else {
            CPy_TypeError("str", __tmp9892); 
            __tmp9893 = NULL;
        }
        cpy_r_r24.f0 = __tmp9893;
        PyObject *__tmp9894 = PyTuple_GET_ITEM(cpy_r_r23, 1);
        CPyTagged __tmp9895;
        if (likely(PyLong_Check(__tmp9894)))
            __tmp9895 = CPyTagged_FromObject(__tmp9894);
        else {
            CPy_TypeError("int", __tmp9894); __tmp9895 = CPY_INT_TAG;
        }
        cpy_r_r24.f1 = __tmp9895;
    }
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 85, CPyStatic_pprint___globals);
        goto CPyL30;
    }
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9896 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp9896);
    PyObject *__tmp9897 = CPyTagged_StealAsObject(cpy_r_r24.f1);
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp9897);
    cpy_r_r26 = PyNumber_Remainder(cpy_r_r22, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 85, CPyStatic_pprint___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_branch", 85, CPyStatic_pprint___globals, "str", cpy_r_r26);
        goto CPyL30;
    }
    cpy_r_tb = cpy_r_r27;
CPyL16: ;
    cpy_r_r28 = CPyStatics[6952]; /* 'if ' */
    cpy_r_r29 = CPyStatics[7892]; /* ' goto %l' */
    cpy_r_r30 = CPyStatics[7893]; /* ' else goto %l' */
    cpy_r_r31 = CPyStr_Build(5, cpy_r_r28, cpy_r_cond, cpy_r_r29, cpy_r_tb, cpy_r_r30);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_tb);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 86, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    cpy_r_fmt = cpy_r_r31;
    cpy_r_r32 = CPyStr_IsTrue(cpy_r_typ);
    if (!cpy_r_r32) goto CPyL31;
    cpy_r_r33 = CPyStatics[7894]; /* ' :: ' */
    cpy_r_r34 = CPyStr_Build(2, cpy_r_r33, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 88, CPyStatic_pprint___globals);
        goto CPyL32;
    }
    cpy_r_r35 = CPyStr_Append(cpy_r_fmt, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 88, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_fmt = cpy_r_r35;
CPyL21: ;
    cpy_r_r36 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_true;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_false;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = PyTuple_Pack(2, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 89, CPyStatic_pprint___globals);
        goto CPyL32;
    }
    cpy_r_r39 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_fmt, cpy_r_r38);
    CPy_DECREF(cpy_r_fmt);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 89, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    return cpy_r_r39;
CPyL24: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL25: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_fmt);
    CPy_DecRef(cpy_r_typ);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL16;
CPyL28: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_tb);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_tb);
    goto CPyL12;
CPyL30: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_cond);
    goto CPyL24;
CPyL31: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL21;
CPyL32: ;
    CPy_DecRef(cpy_r_fmt);
    goto CPyL24;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_branch(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch", 77, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[7895]; /* 'return %r' */
    cpy_r_r1 = ((mypyc___ir___ops___ReturnObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_Pack(1, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_return", 92, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_return", 92, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_return(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_return", 91, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_return__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[115]; /* 'unreachable' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unreachable", 94, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7896]; /* '%r = %r' */
    cpy_r_r1 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyTuple_Pack(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign", 98, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign", 98, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign", 97, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[7897]; /* '%r = [%s]' */
    cpy_r_r1 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[71]; /* ', ' */
    cpy_r_r3 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = PyList_New(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r7 = 0;
CPyL2: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL14;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_ops___Value)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r12);
        goto CPyL15;
    }
    cpy_r_v = cpy_r_r13;
    cpy_r_r14 = CPyStatics[7898]; /* '%r' */
    cpy_r_r15 = PyTuple_Pack(1, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r16 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r6, cpy_r_r7, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r18 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r18;
    goto CPyL2;
CPyL8: ;
    cpy_r_r19 = PyUnicode_Join(cpy_r_r2, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r20 = PyTuple_Pack(2, cpy_r_r1, cpy_r_r19);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 101, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    return cpy_r_r21;
CPyL12: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi", 100, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[7899]; /* '%r = <error> :: %s' */
    cpy_r_r1 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_Pack(2, cpy_r_op, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_error_value", 104, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_error_value", 104, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_error_value", 103, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_error_value__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_error_value__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_error_value__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_rvalue;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_formatted_items;
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
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_prefix = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&PyLong_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 110, CPyStatic_pprint___globals);
        goto CPyL27;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL28;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r6 = CPyStatics[7900]; /* 'object ' */
    CPy_INCREF(cpy_r_r6);
    cpy_r_prefix = cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[146]; /* 'repr' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 113, CPyStatic_pprint___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 113, CPyStatic_pprint___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_literal", 113, CPyStatic_pprint___globals, "str", cpy_r_r13);
        goto CPyL27;
    }
    cpy_r_rvalue = cpy_r_r14;
    cpy_r_r15 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (PyObject *)&PyFrozenSet_Type;
    cpy_r_r17 = PyObject_IsInstance(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 114, CPyStatic_pprint___globals);
        goto CPyL30;
    }
    cpy_r_r19 = cpy_r_r17;
    if (cpy_r_r19) {
        goto CPyL31;
    } else
        goto CPyL23;
CPyL8: ;
    cpy_r_r20 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)&PyUnicode_Type;
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r25[2] = {cpy_r_r20, cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r20);
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals, "list", cpy_r_r28);
        goto CPyL27;
    }
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = PyList_New(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL33;
    }
    cpy_r_r33 = 0;
CPyL13: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL34;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r33);
    cpy_r_i = cpy_r_r38;
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[146]; /* 'repr' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_i};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_i);
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals, "str", cpy_r_r44);
        goto CPyL36;
    }
    cpy_r_r46 = CPyList_SetItemUnsafe(cpy_r_r32, cpy_r_r33, cpy_r_r45);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 121, CPyStatic_pprint___globals);
        goto CPyL36;
    }
    cpy_r_r47 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r47;
    goto CPyL13;
CPyL19: ;
    cpy_r_formatted_items = cpy_r_r32;
    cpy_r_r48 = CPyStatics[7901]; /* 'frozenset({' */
    cpy_r_r49 = CPyStatics[71]; /* ', ' */
    cpy_r_r50 = PyUnicode_Join(cpy_r_r49, cpy_r_formatted_items);
    CPy_DECREF(cpy_r_formatted_items);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 122, CPyStatic_pprint___globals);
        goto CPyL27;
    }
    cpy_r_r51 = PyUnicode_Concat(cpy_r_r48, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 122, CPyStatic_pprint___globals);
        goto CPyL27;
    }
    cpy_r_r52 = CPyStatics[3688]; /* '})' */
    cpy_r_r53 = PyUnicode_Concat(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 122, CPyStatic_pprint___globals);
        goto CPyL27;
    }
    cpy_r_rvalue = cpy_r_r53;
CPyL23: ;
    cpy_r_r54 = CPyStatics[7902]; /* '%r = %s%s' */
    cpy_r_r55 = PyTuple_Pack(3, cpy_r_op, cpy_r_prefix, cpy_r_rvalue);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_rvalue);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 123, CPyStatic_pprint___globals);
        goto CPyL26;
    }
    cpy_r_r56 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 123, CPyStatic_pprint___globals);
        goto CPyL26;
    }
    return cpy_r_r56;
CPyL26: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL27: ;
    CPy_DecRef(cpy_r_prefix);
    goto CPyL26;
CPyL28: ;
    CPy_DECREF(cpy_r_prefix);
    goto CPyL2;
CPyL29: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r7);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_rvalue);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_rvalue);
    goto CPyL8;
CPyL32: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r20);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r29);
    goto CPyL26;
CPyL34: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL19;
CPyL35: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_i);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL26;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal", 106, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_literal__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_literal__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_literal__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7903]; /* '%r = %s%r.%s' */
    cpy_r_r1 = CPyDef_pprint___IRPrettyPrintVisitor___borrow_prefix(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_attr", 126, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_attr", 126, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_attr", 126, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_attr", 125, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_get_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_attr__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___borrow_prefix(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___ops___OpObject *)cpy_r_op)->_is_borrowed;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyStatics[7904]; /* 'borrow ' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___borrow_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:borrow_prefix", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___borrow_prefix(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "borrow_prefix", 128, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
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
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_is_init;
    if (!cpy_r_r0) goto CPyL7;
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 == 0;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = cpy_r_r1 == 0;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL4;
CPyL3: ;
    cpy_r_r6 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r5 = cpy_r_r6;
CPyL4: ;
    if (cpy_r_r5) goto CPyL7;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 135, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r8 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    cpy_r_r9 = cpy_r_r8 == 0;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyStatics[7905]; /* '%r.%s = %r' */
    cpy_r_r11 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyTuple_Pack(3, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 138, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    cpy_r_r15 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r10, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 138, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = CPyStatics[7906]; /* '%r.%s = %r; %r = is_error' */
    cpy_r_r17 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PyTuple_Pack(4, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_op);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 140, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r16, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 140, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    return cpy_r_r21;
CPyL14: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_set_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr", 133, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_set_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_attr__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_ann;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_name;
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
    cpy_r_r0 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 143, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = CPyStatics[7907]; /* '  (' */
    cpy_r_r5 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[146]; /* 'repr' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 143, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r5};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 143, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_static", 143, CPyStatic_pprint___globals, "str", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_r13 = CPyStatics[72]; /* ')' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r4, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 143, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL8;
CPyL7: ;
    cpy_r_r16 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_r15 = cpy_r_r16;
CPyL8: ;
    cpy_r_ann = cpy_r_r15;
    cpy_r_r17 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r17);
    cpy_r_name = cpy_r_r17;
    cpy_r_r18 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_module_name;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_module_name;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_static", 146, CPyStatic_pprint___globals, "str", cpy_r_r21);
        goto CPyL17;
    }
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_r23, cpy_r_name);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 146, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_name = cpy_r_r24;
CPyL12: ;
    cpy_r_r25 = CPyStatics[7908]; /* '%r = %s :: %s%s' */
    cpy_r_r26 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = PyTuple_Pack(4, cpy_r_op, cpy_r_name, cpy_r_r26, cpy_r_ann);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_ann);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 147, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r28 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 147, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    return cpy_r_r28;
CPyL15: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL16: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_ann);
    CPy_DecRef(cpy_r_name);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_ann);
    goto CPyL15;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static", 142, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_static__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_module_name;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_module_name;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_init_static", 152, CPyStatic_pprint___globals, "str", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[224]; /* '.' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_r6, cpy_r_name);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_init_static", 152, CPyStatic_pprint___globals);
        goto CPyL7;
    }
    cpy_r_name = cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyStatics[7909]; /* '%s = %r :: %s' */
    cpy_r_r9 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyTuple_Pack(3, cpy_r_name, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_init_static", 153, CPyStatic_pprint___globals);
        goto CPyL7;
    }
    cpy_r_r12 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_init_static", 153, CPyStatic_pprint___globals);
        goto CPyL7;
    }
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL7;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_init_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_init_static", 149, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_init_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_init_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_init_static__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7910]; /* '%r = %r[%d]' */
    cpy_r_r1 = ((mypyc___ir___ops___TupleGetObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___TupleGetObject *)cpy_r_op)->_index;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_r4 = PyTuple_Pack(3, cpy_r_op, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_get", 156, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_get", 156, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_get", 155, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_get__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_get__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_get__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set(PyObject *cpy_r_self, PyObject *cpy_r_op) {
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item_str;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___ops___TupleSetObject *)cpy_r_op)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL14;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_ops___Value)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL15;
    }
    cpy_r_item = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7898]; /* '%r' */
    cpy_r_r13 = PyTuple_Pack(1, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r14 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 159, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_item_str = cpy_r_r17;
    cpy_r_r18 = CPyStatics[7911]; /* '%r = (%s)' */
    cpy_r_r19 = PyTuple_Pack(2, cpy_r_op, cpy_r_item_str);
    CPy_DECREF(cpy_r_item_str);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 160, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_r20 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 160, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set", 158, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_tuple_set__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_tuple_set__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_tuple_set__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_s;
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyStatics[7912]; /* 'inc_ref %r' */
    cpy_r_r1 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_Pack(1, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 163, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_r3 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 163, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_s = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    cpy_r_r5 = ((mypyc___ir___ops___ValueObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 165, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    if (cpy_r_r6) goto CPyL6;
    cpy_r_r7 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    cpy_r_r8 = ((mypyc___ir___ops___ValueObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 165, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    if (!cpy_r_r9) goto CPyL11;
CPyL6: ;
    cpy_r_r10 = CPyStatics[7894]; /* ' :: ' */
    cpy_r_r11 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    cpy_r_r12 = ((mypyc___ir___ops___ValueObject *)cpy_r_r11)->_type;
    cpy_r_r13 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r12)->_name;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/ir/pprint.py", "visit_inc_ref", "RType", "name", 166, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r13);
CPyL7: ;
    cpy_r_r14 = CPyDef_mypyc___common___short_name(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 166, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyStr_Build(2, cpy_r_r10, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 166, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r16 = CPyStr_Append(cpy_r_s, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 166, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    cpy_r_s = cpy_r_r16;
CPyL11: ;
    return cpy_r_s;
CPyL12: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL13: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL12;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref", 162, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_inc_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_inc_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_inc_ref__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
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
    cpy_r_r0 = CPyStatics[7913]; /* '%sdec_ref %r' */
    cpy_r_r1 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_is_xdec;
    if (!cpy_r_r1) goto CPyL2;
CPyL1: ;
    cpy_r_r2 = CPyStatics[280]; /* 'x' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = cpy_r_r2;
    goto CPyL3;
CPyL2: ;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_r3 = cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyTuple_Pack(2, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 170, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_r7 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 170, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_s = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    cpy_r_r9 = ((mypyc___ir___ops___ValueObject *)cpy_r_r8)->_type;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 172, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    if (cpy_r_r10) goto CPyL9;
    cpy_r_r11 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    cpy_r_r12 = ((mypyc___ir___ops___ValueObject *)cpy_r_r11)->_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 172, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    if (!cpy_r_r13) goto CPyL14;
CPyL9: ;
    cpy_r_r14 = CPyStatics[7894]; /* ' :: ' */
    cpy_r_r15 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    cpy_r_r16 = ((mypyc___ir___ops___ValueObject *)cpy_r_r15)->_type;
    cpy_r_r17 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r16)->_name;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/ir/pprint.py", "visit_dec_ref", "RType", "name", 173, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = CPyDef_mypyc___common___short_name(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 173, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r14, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 173, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r20 = CPyStr_Append(cpy_r_s, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 173, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    cpy_r_s = cpy_r_r20;
CPyL14: ;
    return cpy_r_s;
CPyL15: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL16: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL15;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref", 169, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_dec_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_dec_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_dec_ref__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
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
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_short_name;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_s;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals);
        goto CPyL19;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL20;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_ops___Value)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL21;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7898]; /* '%r' */
    cpy_r_r13 = PyTuple_Pack(1, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r14 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 177, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_args = cpy_r_r17;
    cpy_r_r18 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_r18, CPyType_func_ir___FuncDecl, 5, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* shortname */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 179, CPyStatic_pprint___globals);
        goto CPyL22;
    }
CPyL10: ;
    cpy_r_short_name = cpy_r_r19;
    cpy_r_r20 = CPyStatics[2381]; /* '(' */
    cpy_r_r21 = CPyStatics[72]; /* ')' */
    cpy_r_r22 = CPyStr_Build(4, cpy_r_short_name, cpy_r_r20, cpy_r_args, cpy_r_r21);
    CPy_DECREF(cpy_r_short_name);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 180, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_s = cpy_r_r22;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___Call, 0, mypyc___ir___ops___CallObject, char); /* is_void */
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 181, CPyStatic_pprint___globals);
        goto CPyL23;
    }
CPyL12: ;
    if (cpy_r_r23) goto CPyL17;
CPyL13: ;
    cpy_r_r24 = CPyStatics[7914]; /* '%r = ' */
    cpy_r_r25 = PyTuple_Pack(1, cpy_r_op);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 182, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r26 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 182, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r27 = PyUnicode_Concat(cpy_r_r26, cpy_r_s);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 182, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_s = cpy_r_r27;
CPyL17: ;
    return cpy_r_s;
CPyL18: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL18;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_call(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call", 176, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
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
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_s;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals);
        goto CPyL19;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL20;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_ops___Value)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL21;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7898]; /* '%r' */
    cpy_r_r13 = PyTuple_Pack(1, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r14 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 186, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_args = cpy_r_r17;
    cpy_r_r18 = CPyStatics[7915]; /* '%r.%s(%s)' */
    cpy_r_r19 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_method;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PyTuple_Pack(3, cpy_r_r19, cpy_r_r20, cpy_r_args);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 187, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_r22 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r18, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 187, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_s = cpy_r_r22;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___MethodCall, 0, mypyc___ir___ops___MethodCallObject, char); /* is_void */
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 188, CPyStatic_pprint___globals);
        goto CPyL22;
    }
CPyL12: ;
    if (cpy_r_r23) goto CPyL17;
CPyL13: ;
    cpy_r_r24 = CPyStatics[7914]; /* '%r = ' */
    cpy_r_r25 = PyTuple_Pack(1, cpy_r_op);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 189, CPyStatic_pprint___globals);
        goto CPyL22;
    }
    cpy_r_r26 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 189, CPyStatic_pprint___globals);
        goto CPyL22;
    }
    cpy_r_r27 = PyUnicode_Concat(cpy_r_r26, cpy_r_s);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 189, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_s = cpy_r_r27;
CPyL17: ;
    return cpy_r_s;
CPyL18: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL18;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call", 185, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_method_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_method_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_method_call__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_cast(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7916]; /* '%r = %scast(%s, %r)' */
    cpy_r_r1 = CPyDef_pprint___IRPrettyPrintVisitor___borrow_prefix(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_cast", 193, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypyc___ir___ops___CastObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___CastObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_cast", 193, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_cast", 193, CPyStatic_pprint___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_cast(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_cast", 192, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_cast__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_cast(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_cast__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_cast__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_cast__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_box(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7917]; /* '%r = box(%s, %r)' */
    cpy_r_r1 = ((mypyc___ir___ops___BoxObject *)cpy_r_op)->_src;
    cpy_r_r2 = ((mypyc___ir___ops___ValueObject *)cpy_r_r1)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___BoxObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(3, cpy_r_op, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_box", 196, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_box", 196, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_box(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_box", 195, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_box__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_box(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_box__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_box__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_box__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7918]; /* '%r = unbox(%s, %r)' */
    cpy_r_r1 = ((mypyc___ir___ops___UnboxObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___UnboxObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyTuple_Pack(3, cpy_r_op, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unbox", 199, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unbox", 199, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unbox", 198, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_unbox__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_unbox__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_unbox__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
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
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL19;
    cpy_r_r3 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&PyUnicode_Type;
    cpy_r_r5 = PyObject_IsInstance(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 203, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = CPyStatics[7919]; /* '%r = raise %s(%s)' */
    cpy_r_r9 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals, "str", cpy_r_r10);
        goto CPyL24;
    }
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[146]; /* 'repr' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r11};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals, "str", cpy_r_r17);
        goto CPyL24;
    }
    cpy_r_r19 = PyTuple_Pack(3, cpy_r_op, cpy_r_r9, cpy_r_r18);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r20 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r8, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 204, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    return cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    cpy_r_r22 = (PyObject *)CPyType_ops___Value;
    cpy_r_r23 = CPy_TypeCheck(cpy_r_r21, cpy_r_r22);
    if (!cpy_r_r23) goto CPyL15;
    cpy_r_r24 = CPyStatics[7920]; /* '%r = raise %s(%r)' */
    cpy_r_r25 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r26);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_ops___Value)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 206, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r26);
        goto CPyL26;
    }
    cpy_r_r28 = PyTuple_Pack(3, cpy_r_op, cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 206, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r29 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r24, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 206, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    return cpy_r_r29;
CPyL15: ;
    cpy_r_r30 = 0 ? Py_True : Py_False;
    cpy_r_r31 = PyObject_IsTrue(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", -1, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r33 = cpy_r_r31;
    if (cpy_r_r33) goto CPyL22;
    PyErr_SetString(PyExc_AssertionError, "value type must be either str or Value");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 208, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r35 = CPyStatics[7921]; /* '%r = raise %s' */
    cpy_r_r36 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = PyTuple_Pack(2, cpy_r_op, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 210, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    cpy_r_r38 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 210, CPyStatic_pprint___globals);
        goto CPyL23;
    }
    return cpy_r_r38;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL24: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_raise_standard_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error", 201, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_raise_standard_error__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_raise_standard_error__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c(PyObject *cpy_r_self, PyObject *cpy_r_op) {
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
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_args_str;
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
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___ops___CallCObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals);
        goto CPyL18;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL19;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_ops___Value)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL20;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7898]; /* '%r' */
    cpy_r_r13 = PyTuple_Pack(1, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals);
        goto CPyL20;
    }
    cpy_r_r14 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals);
        goto CPyL20;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals);
        goto CPyL20;
    }
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 213, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    cpy_r_args_str = cpy_r_r17;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___CallC, 0, mypyc___ir___ops___CallCObject, char); /* is_void */
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 214, CPyStatic_pprint___globals);
        goto CPyL21;
    }
CPyL10: ;
    if (!cpy_r_r18) goto CPyL14;
CPyL11: ;
    cpy_r_r19 = CPyStatics[7922]; /* '%s(%s)' */
    cpy_r_r20 = ((mypyc___ir___ops___CallCObject *)cpy_r_op)->_function_name;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PyTuple_Pack(2, cpy_r_r20, cpy_r_args_str);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_args_str);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 215, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    cpy_r_r22 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 215, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    return cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = CPyStatics[7923]; /* '%r = %s(%s)' */
    cpy_r_r24 = ((mypyc___ir___ops___CallCObject *)cpy_r_op)->_function_name;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = PyTuple_Pack(3, cpy_r_op, cpy_r_r24, cpy_r_args_str);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_args_str);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 217, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    cpy_r_r26 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r23, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 217, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    return cpy_r_r26;
CPyL17: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_args_str);
    goto CPyL17;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c", 212, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_call_c__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_call_c__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_call_c__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7924]; /* '%r = truncate %r: %t to %t' */
    cpy_r_r1 = ((mypyc___ir___ops___TruncateObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___TruncateObject *)cpy_r_op)->_src_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___TruncateObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_truncate", 220, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_truncate", 220, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_truncate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_truncate", 219, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_truncate__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_truncate__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_truncate__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_extend(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_extra;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_signed;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyStatics[7925]; /* ' signed' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_extra = cpy_r_r1;
    goto CPyL3;
CPyL2: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_extra = cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = CPyStatics[7926]; /* '%r = extend%s %r: %t to %t' */
    cpy_r_r4 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_src_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyTuple_Pack(5, cpy_r_op, cpy_r_extra, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_extra);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_extend", 227, CPyStatic_pprint___globals);
        goto CPyL6;
    }
    cpy_r_r8 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r3, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_extend", 227, CPyStatic_pprint___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_extend(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_extend(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_extend", 222, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_extend__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_extend(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_extend__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_extend__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_extend__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_ann;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypyc___ir___ops___LoadGlobalObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 230, CPyStatic_pprint___globals);
        goto CPyL11;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = CPyStatics[7907]; /* '  (' */
    cpy_r_r5 = ((mypyc___ir___ops___LoadGlobalObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[146]; /* 'repr' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 230, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r5};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 230, CPyStatic_pprint___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_global", 230, CPyStatic_pprint___globals, "str", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_r13 = CPyStatics[72]; /* ')' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r4, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 230, CPyStatic_pprint___globals);
        goto CPyL11;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL8;
CPyL7: ;
    cpy_r_r16 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_r15 = cpy_r_r16;
CPyL8: ;
    cpy_r_ann = cpy_r_r15;
    cpy_r_r17 = CPyStatics[7927]; /* '%r = load_global %s :: static%s' */
    cpy_r_r18 = ((mypyc___ir___ops___LoadGlobalObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyTuple_Pack(3, cpy_r_op, cpy_r_r18, cpy_r_ann);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_ann);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 231, CPyStatic_pprint___globals);
        goto CPyL11;
    }
    cpy_r_r20 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 231, CPyStatic_pprint___globals);
        goto CPyL11;
    }
    return cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global", 229, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_global__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_global__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_global__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[7928]; /* '%r = %r %s %r' */
    cpy_r_r1 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatic_ops___IntOp___op_str;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL9;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_str\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op", 234, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op", 234, CPyStatic_pprint___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_int_op", 234, CPyStatic_pprint___globals, "str", cpy_r_r6);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op", 234, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op", 234, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL1;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op", 233, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_int_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_int_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_int_op__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_sign_format;
    CPyTagged cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    int64_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    cpy_r_r0 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r1 = cpy_r_r0 & 1;
    cpy_r_r2 = cpy_r_r1 == 0;
    if (!cpy_r_r2) goto CPyL2;
    cpy_r_r3 = cpy_r_r0 == 204;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = CPyTagged_IsEq_(cpy_r_r0, 204);
    cpy_r_r4 = cpy_r_r5;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r6 = cpy_r_r4;
    goto CPyL9;
CPyL5: ;
    cpy_r_r7 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r7 == 206;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL8;
CPyL7: ;
    cpy_r_r12 = CPyTagged_IsEq_(cpy_r_r7, 206);
    cpy_r_r11 = cpy_r_r12;
CPyL8: ;
    cpy_r_r6 = cpy_r_r11;
CPyL9: ;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r13 = cpy_r_r6;
    goto CPyL15;
CPyL11: ;
    cpy_r_r14 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r15 = cpy_r_r14 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    if (!cpy_r_r16) goto CPyL13;
    cpy_r_r17 = cpy_r_r14 == 208;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL14;
CPyL13: ;
    cpy_r_r19 = CPyTagged_IsEq_(cpy_r_r14, 208);
    cpy_r_r18 = cpy_r_r19;
CPyL14: ;
    cpy_r_r13 = cpy_r_r18;
CPyL15: ;
    if (!cpy_r_r13) goto CPyL17;
    cpy_r_r20 = cpy_r_r13;
    goto CPyL21;
CPyL17: ;
    cpy_r_r21 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r22 = cpy_r_r21 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL19;
    cpy_r_r24 = cpy_r_r21 == 210;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL20;
CPyL19: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r21, 210);
    cpy_r_r25 = cpy_r_r26;
CPyL20: ;
    cpy_r_r20 = cpy_r_r25;
CPyL21: ;
    if (!cpy_r_r20) goto CPyL23;
    cpy_r_r27 = CPyStatics[7929]; /* ' :: signed' */
    CPy_INCREF(cpy_r_r27);
    cpy_r_sign_format = cpy_r_r27;
    goto CPyL47;
CPyL23: ;
    cpy_r_r28 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r29 = cpy_r_r28 & 1;
    cpy_r_r30 = cpy_r_r29 == 0;
    if (!cpy_r_r30) goto CPyL25;
    cpy_r_r31 = cpy_r_r28 == 212;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL26;
CPyL25: ;
    cpy_r_r33 = CPyTagged_IsEq_(cpy_r_r28, 212);
    cpy_r_r32 = cpy_r_r33;
CPyL26: ;
    if (!cpy_r_r32) goto CPyL28;
    cpy_r_r34 = cpy_r_r32;
    goto CPyL32;
CPyL28: ;
    cpy_r_r35 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r36 = cpy_r_r35 & 1;
    cpy_r_r37 = cpy_r_r36 == 0;
    if (!cpy_r_r37) goto CPyL30;
    cpy_r_r38 = cpy_r_r35 == 214;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL31;
CPyL30: ;
    cpy_r_r40 = CPyTagged_IsEq_(cpy_r_r35, 214);
    cpy_r_r39 = cpy_r_r40;
CPyL31: ;
    cpy_r_r34 = cpy_r_r39;
CPyL32: ;
    if (!cpy_r_r34) goto CPyL34;
    cpy_r_r41 = cpy_r_r34;
    goto CPyL38;
CPyL34: ;
    cpy_r_r42 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r43 = cpy_r_r42 & 1;
    cpy_r_r44 = cpy_r_r43 == 0;
    if (!cpy_r_r44) goto CPyL36;
    cpy_r_r45 = cpy_r_r42 == 216;
    cpy_r_r46 = cpy_r_r45;
    goto CPyL37;
CPyL36: ;
    cpy_r_r47 = CPyTagged_IsEq_(cpy_r_r42, 216);
    cpy_r_r46 = cpy_r_r47;
CPyL37: ;
    cpy_r_r41 = cpy_r_r46;
CPyL38: ;
    if (!cpy_r_r41) goto CPyL40;
    cpy_r_r48 = cpy_r_r41;
    goto CPyL44;
CPyL40: ;
    cpy_r_r49 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r50 = cpy_r_r49 & 1;
    cpy_r_r51 = cpy_r_r50 == 0;
    if (!cpy_r_r51) goto CPyL42;
    cpy_r_r52 = cpy_r_r49 == 218;
    cpy_r_r53 = cpy_r_r52;
    goto CPyL43;
CPyL42: ;
    cpy_r_r54 = CPyTagged_IsEq_(cpy_r_r49, 218);
    cpy_r_r53 = cpy_r_r54;
CPyL43: ;
    cpy_r_r48 = cpy_r_r53;
CPyL44: ;
    if (!cpy_r_r48) goto CPyL46;
    cpy_r_r55 = CPyStatics[7930]; /* ' :: unsigned' */
    CPy_INCREF(cpy_r_r55);
    cpy_r_sign_format = cpy_r_r55;
    goto CPyL47;
CPyL46: ;
    cpy_r_r56 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r56);
    cpy_r_sign_format = cpy_r_r56;
CPyL47: ;
    cpy_r_r57 = CPyStatics[7931]; /* '%r = %r %s %r%s' */
    cpy_r_r58 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyStatic_ops___ComparisonOp___op_str;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_str\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 244, CPyStatic_pprint___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r61 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyTagged_StealAsObject(cpy_r_r61);
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r59, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 244, CPyStatic_pprint___globals);
        goto CPyL57;
    }
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 244, CPyStatic_pprint___globals, "str", cpy_r_r63);
        goto CPyL57;
    }
    cpy_r_r65 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = PyTuple_Pack(5, cpy_r_op, cpy_r_r58, cpy_r_r64, cpy_r_r65, cpy_r_sign_format);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_sign_format);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 243, CPyStatic_pprint___globals);
        goto CPyL55;
    }
    cpy_r_r67 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r57, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 243, CPyStatic_pprint___globals);
        goto CPyL55;
    }
    return cpy_r_r67;
CPyL55: ;
    cpy_r_r68 = NULL;
    return cpy_r_r68;
CPyL56: ;
    CPy_DecRef(cpy_r_sign_format);
    CPy_DecRef(cpy_r_r58);
    goto CPyL48;
CPyL57: ;
    CPy_DecRef(cpy_r_sign_format);
    CPy_DecRef(cpy_r_r58);
    goto CPyL55;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op", 236, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_comparison_op__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[7928]; /* '%r = %r %s %r' */
    cpy_r_r1 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatic_ops___FloatOp___op_str;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL9;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_str\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op", 248, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op", 248, CPyStatic_pprint___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_float_op", 248, CPyStatic_pprint___globals, "str", cpy_r_r6);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op", 248, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op", 248, CPyStatic_pprint___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL1;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op", 247, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_op__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[7932]; /* '%r = -%r' */
    cpy_r_r1 = ((mypyc___ir___ops___FloatNegObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_Pack(2, cpy_r_op, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_neg", 251, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_neg", 251, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_neg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_neg", 250, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_neg__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_neg__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_neg__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyStatics[7928]; /* '%r = %r %s %r' */
    cpy_r_r1 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_op_str;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r3);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op", 254, CPyStatic_pprint___globals);
        goto CPyL6;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op", 254, CPyStatic_pprint___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op", 254, CPyStatic_pprint___globals);
        goto CPyL5;
    }
    cpy_r_r9 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op", 254, CPyStatic_pprint___globals);
        goto CPyL5;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op", 253, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_float_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_float_comparison_op__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7933]; /* '%r = load_mem %r :: %t*' */
    cpy_r_r1 = ((mypyc___ir___ops___LoadMemObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___LoadMemObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyTuple_Pack(3, cpy_r_op, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_mem", 257, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_mem", 257, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_mem", 256, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_mem__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7934]; /* 'set_mem %r, %r :: %t*' */
    cpy_r_r1 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_dest_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(3, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_mem", 260, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_mem", 260, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_mem", 259, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[7935]; /* '%r = get_element_ptr %r %s :: %t' */
    cpy_r_r1 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_field;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyTuple_Pack(4, cpy_r_op, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_element_ptr", 263, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_element_ptr", 263, CPyStatic_pprint___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_get_element_ptr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_element_ptr", 262, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_get_element_ptr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_get_element_ptr__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
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
    cpy_r_r0 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    cpy_r_r1 = (PyObject *)CPyType_ops___Register;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStatics[7936]; /* '%r = load_address %r' */
    cpy_r_r6 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_ops___Register))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 267, CPyStatic_pprint___globals, "mypyc.ir.ops.Register", cpy_r_r6);
        goto CPyL21;
    }
    cpy_r_r8 = PyTuple_Pack(2, cpy_r_op, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 267, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r9 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 267, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    cpy_r_r11 = (PyObject *)CPyType_ops___LoadStatic;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL17;
    cpy_r_r15 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_ops___LoadStatic))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 269, CPyStatic_pprint___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_r17 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r16)->_identifier;
    CPy_INCREF(cpy_r_r17);
    cpy_r_name = cpy_r_r17;
    cpy_r_r18 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_ops___LoadStatic))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 270, CPyStatic_pprint___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r18);
        goto CPyL22;
    }
    cpy_r_r20 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r19)->_module_name;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r23 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_ops___LoadStatic))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 271, CPyStatic_pprint___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r25 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r24)->_module_name;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 271, CPyStatic_pprint___globals, "str", cpy_r_r25);
        goto CPyL22;
    }
    cpy_r_r27 = CPyStatics[224]; /* '.' */
    cpy_r_r28 = CPyStr_Build(3, cpy_r_r26, cpy_r_r27, cpy_r_name);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 271, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_name = cpy_r_r28;
CPyL13: ;
    cpy_r_r29 = CPyStatics[7937]; /* '%r = load_address %s :: %s' */
    cpy_r_r30 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_ops___LoadStatic))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 272, CPyStatic_pprint___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r30);
        goto CPyL22;
    }
    cpy_r_r32 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r31)->_namespace;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyTuple_Pack(3, cpy_r_op, cpy_r_name, cpy_r_r32);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 272, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r34 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r29, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 272, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    return cpy_r_r34;
CPyL17: ;
    cpy_r_r35 = CPyStatics[7938]; /* '%r = load_address %s' */
    cpy_r_r36 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r36);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_load_address", 274, CPyStatic_pprint___globals, "str", cpy_r_r36);
        goto CPyL21;
    }
    cpy_r_r38 = PyTuple_Pack(2, cpy_r_op, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 274, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    cpy_r_r39 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r35, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 274, CPyStatic_pprint___globals);
        goto CPyL21;
    }
    return cpy_r_r39;
CPyL21: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL22: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL21;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address", 265, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_load_address__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_load_address__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_load_address__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive(PyObject *cpy_r_self, PyObject *cpy_r_op) {
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
    PyObject *cpy_r_v;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___ir___ops___KeepAliveObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL15;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_ops___Value)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL16;
    }
    cpy_r_v = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7898]; /* '%r' */
    cpy_r_r13 = PyTuple_Pack(1, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL16;
    }
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r18 = CPyStatics[7939]; /* 'keep_alive ' */
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    cpy_r_r20 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL17;
    }
    cpy_r_r21 = CPyDef_pprint___IRPrettyPrintVisitor___format(cpy_r_self, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 277, CPyStatic_pprint___globals);
        goto CPyL13;
    }
    return cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL13;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_keep_alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive", 276, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___visit_keep_alive__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___visit_keep_alive__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "visit_keep_alive__OpVisitor_glue", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___IRPrettyPrintVisitor___format(PyObject *cpy_r_self, PyObject *cpy_r_fmt, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_arglist;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_n;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    int64_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_typespec;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    double cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 293, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_i = 0;
    cpy_r_r1 = PySequence_List(cpy_r_args);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 295, CPyStatic_pprint___globals);
        goto CPyL96;
    }
    cpy_r_arglist = cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = CPyStr_Size_size_t(cpy_r_fmt);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 296, CPyStatic_pprint___globals);
        goto CPyL97;
    }
    cpy_r_r4 = cpy_r_r2 << 1;
    cpy_r_r5 = cpy_r_i & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r4);
    if (cpy_r_r7) {
        goto CPyL7;
    } else
        goto CPyL98;
CPyL6: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r8) goto CPyL98;
CPyL7: ;
    cpy_r_r9 = CPyStatics[1183]; /* '%' */
    cpy_r_r10 = CPyStatics[7940]; /* 'find' */
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_i);
    PyObject *cpy_r_r12[3] = {cpy_r_fmt, cpy_r_r9, cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r13, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 297, CPyStatic_pprint___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 297, CPyStatic_pprint___globals);
        goto CPyL97;
    }
    cpy_r_n = cpy_r_r15;
    cpy_r_r16 = cpy_r_n & 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = CPyTagged_IsLt_(cpy_r_n, 0);
    if (cpy_r_r18) {
        goto CPyL100;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r19 = (Py_ssize_t)cpy_r_n < (Py_ssize_t)0;
    if (cpy_r_r19) {
        goto CPyL100;
    } else
        goto CPyL14;
CPyL12: ;
    cpy_r_r20 = CPyStr_Size_size_t(cpy_r_fmt);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 299, CPyStatic_pprint___globals);
        goto CPyL97;
    }
    cpy_r_r22 = cpy_r_r20 << 1;
    cpy_r_n = cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = CPyStr_GetSlice(cpy_r_fmt, cpy_r_i, cpy_r_n);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 300, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 300, CPyStatic_pprint___globals, "str", cpy_r_r23);
        goto CPyL101;
    }
    cpy_r_r25 = PyList_Append(cpy_r_result, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 300, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r27 = CPyStr_Size_size_t(cpy_r_fmt);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 301, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r29 = cpy_r_r27 << 1;
    cpy_r_r30 = cpy_r_n & 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (!cpy_r_r31) goto CPyL20;
    cpy_r_r32 = CPyTagged_IsLt_(cpy_r_n, cpy_r_r29);
    if (cpy_r_r32) {
        goto CPyL21;
    } else
        goto CPyL92;
CPyL20: ;
    cpy_r_r33 = (Py_ssize_t)cpy_r_n < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r33) goto CPyL92;
CPyL21: ;
    cpy_r_r34 = CPyTagged_Add(cpy_r_n, 2);
    cpy_r_r35 = CPyStr_GetItem(cpy_r_fmt, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 302, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_typespec = cpy_r_r35;
    cpy_r_r36 = CPyList_Pop(cpy_r_arglist, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 303, CPyStatic_pprint___globals);
        goto CPyL102;
    }
    cpy_r_arg = cpy_r_r36;
    cpy_r_r37 = CPyStatics[1447]; /* 'r' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL26;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL26;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 304, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL26: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (cpy_r_r43) {
        goto CPyL104;
    } else
        goto CPyL45;
CPyL27: ;
    cpy_r_r44 = (PyObject *)CPyType_ops___Value;
    cpy_r_r45 = CPy_TypeCheck(cpy_r_arg, cpy_r_r44);
    if (cpy_r_r45) {
        goto CPyL30;
    } else
        goto CPyL105;
CPyL28: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 306, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r47 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_ops___Integer))
        cpy_r_r51 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 308, CPyStatic_pprint___globals, "mypyc.ir.ops.Integer", cpy_r_arg);
        goto CPyL106;
    }
    cpy_r_r52 = ((mypyc___ir___ops___IntegerObject *)cpy_r_r51)->_value;
    CPyTagged_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r53 = CPyTagged_Str(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 308, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r54 = PyList_Append(cpy_r_result, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 308, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL34: ;
    cpy_r_r56 = (PyObject *)CPyType_ops___Float;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_ops___Float))
        cpy_r_r60 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 310, CPyStatic_pprint___globals, "mypyc.ir.ops.Float", cpy_r_arg);
        goto CPyL106;
    }
    cpy_r_r61 = ((mypyc___ir___ops___FloatObject *)cpy_r_r60)->_value;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r62 = CPyModule_builtins;
    cpy_r_r63 = CPyStatics[146]; /* 'repr' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 310, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r65 = PyFloat_FromDouble(cpy_r_r61);
    PyObject *cpy_r_r66[1] = {cpy_r_r65};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r64, cpy_r_r67, 1, 0);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 310, CPyStatic_pprint___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r65);
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 310, CPyStatic_pprint___globals, "str", cpy_r_r68);
        goto CPyL101;
    }
    cpy_r_r70 = PyList_Append(cpy_r_result, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 310, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL40: ;
    cpy_r_r72 = ((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypyc/ir/pprint.py", "format", "IRPrettyPrintVisitor", "names", 312, CPyStatic_pprint___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r72);
CPyL41: ;
    if (likely(PyObject_TypeCheck(cpy_r_arg, CPyType_ops___Value)))
        cpy_r_r73 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 312, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_arg);
        goto CPyL108;
    }
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 312, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 312, CPyStatic_pprint___globals, "str", cpy_r_r74);
        goto CPyL101;
    }
    cpy_r_r76 = PyList_Append(cpy_r_result, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 312, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL45: ;
    cpy_r_r78 = CPyStatics[1459]; /* 'd' */
    cpy_r_r79 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 == -1;
    if (!cpy_r_r80) goto CPyL48;
    cpy_r_r81 = PyErr_Occurred();
    cpy_r_r82 = cpy_r_r81 != NULL;
    if (!cpy_r_r82) goto CPyL48;
    cpy_r_r83 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 313, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL48: ;
    cpy_r_r84 = cpy_r_r79 == 0;
    if (cpy_r_r84) {
        goto CPyL109;
    } else
        goto CPyL52;
CPyL49: ;
    cpy_r_r85 = CPyStatics[7941]; /* '%d' */
    cpy_r_r86 = PyNumber_Remainder(cpy_r_r85, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 315, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 315, CPyStatic_pprint___globals, "str", cpy_r_r86);
        goto CPyL101;
    }
    cpy_r_r88 = PyList_Append(cpy_r_result, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 315, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL52: ;
    cpy_r_r90 = CPyStatics[1466]; /* 'f' */
    cpy_r_r91 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 == -1;
    if (!cpy_r_r92) goto CPyL55;
    cpy_r_r93 = PyErr_Occurred();
    cpy_r_r94 = cpy_r_r93 != NULL;
    if (!cpy_r_r94) goto CPyL55;
    cpy_r_r95 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 316, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL55: ;
    cpy_r_r96 = cpy_r_r91 == 0;
    if (cpy_r_r96) {
        goto CPyL110;
    } else
        goto CPyL59;
CPyL56: ;
    cpy_r_r97 = CPyStatics[7942]; /* '%f' */
    cpy_r_r98 = PyNumber_Remainder(cpy_r_r97, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 318, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 318, CPyStatic_pprint___globals, "str", cpy_r_r98);
        goto CPyL101;
    }
    cpy_r_r100 = PyList_Append(cpy_r_result, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 318, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL59: ;
    cpy_r_r102 = CPyStatics[7943]; /* 'l' */
    cpy_r_r103 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 == -1;
    if (!cpy_r_r104) goto CPyL62;
    cpy_r_r105 = PyErr_Occurred();
    cpy_r_r106 = cpy_r_r105 != NULL;
    if (!cpy_r_r106) goto CPyL62;
    cpy_r_r107 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 319, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL62: ;
    cpy_r_r108 = cpy_r_r103 == 0;
    if (cpy_r_r108) {
        goto CPyL111;
    } else
        goto CPyL70;
CPyL63: ;
    cpy_r_r109 = (PyObject *)CPyType_ops___BasicBlock;
    cpy_r_r110 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r111 = *(PyObject * *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 == cpy_r_r109;
    if (cpy_r_r112) {
        goto CPyL66;
    } else
        goto CPyL112;
CPyL64: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 321, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL66: ;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_ops___BasicBlock))
        cpy_r_r114 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 322, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_arg);
        goto CPyL106;
    }
    cpy_r_r115 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_r114)->_label;
    CPyTagged_INCREF(cpy_r_r115);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r116 = CPyTagged_Str(cpy_r_r115);
    CPyTagged_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 322, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r117 = CPyStatics[2420]; /* 'L' */
    cpy_r_r118 = CPyStr_Build(2, cpy_r_r117, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 322, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r119 = PyList_Append(cpy_r_result, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 322, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL70: ;
    cpy_r_r121 = CPyStatics[6855]; /* 't' */
    cpy_r_r122 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 == -1;
    if (!cpy_r_r123) goto CPyL73;
    cpy_r_r124 = PyErr_Occurred();
    cpy_r_r125 = cpy_r_r124 != NULL;
    if (!cpy_r_r125) goto CPyL73;
    cpy_r_r126 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 323, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL73: ;
    cpy_r_r127 = cpy_r_r122 == 0;
    if (cpy_r_r127) {
        goto CPyL113;
    } else
        goto CPyL80;
CPyL74: ;
    cpy_r_r128 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r129 = CPy_TypeCheck(cpy_r_arg, cpy_r_r128);
    if (cpy_r_r129) {
        goto CPyL77;
    } else
        goto CPyL114;
CPyL75: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 325, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL77: ;
    if (likely(PyObject_TypeCheck(cpy_r_arg, CPyType_rtypes___RType)))
        cpy_r_r131 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format", 326, CPyStatic_pprint___globals, "mypyc.ir.rtypes.RType", cpy_r_arg);
        goto CPyL106;
    }
    cpy_r_r132 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r131)->_name;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypyc/ir/pprint.py", "format", "RType", "name", 326, CPyStatic_pprint___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r132);
CPyL79: ;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r133 = PyList_Append(cpy_r_result, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 326, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL80: ;
    cpy_r_r135 = CPyStatics[1417]; /* 's' */
    cpy_r_r136 = PyUnicode_Compare(cpy_r_typespec, cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 == -1;
    if (!cpy_r_r137) goto CPyL83;
    cpy_r_r138 = PyErr_Occurred();
    cpy_r_r139 = cpy_r_r138 != NULL;
    if (!cpy_r_r139) goto CPyL83;
    cpy_r_r140 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 327, CPyStatic_pprint___globals);
        goto CPyL103;
    }
CPyL83: ;
    cpy_r_r141 = cpy_r_r136 == 0;
    if (cpy_r_r141) {
        goto CPyL115;
    } else
        goto CPyL116;
CPyL84: ;
    cpy_r_r142 = PyObject_Str(cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 329, CPyStatic_pprint___globals);
        goto CPyL101;
    }
    cpy_r_r143 = PyList_Append(cpy_r_result, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 329, CPyStatic_pprint___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL86: ;
    cpy_r_r145 = CPyStatics[7944]; /* 'Invalid format sequence %' */
    cpy_r_r146 = CPyStr_Build(2, cpy_r_r145, cpy_r_typespec);
    CPy_DECREF(cpy_r_typespec);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 331, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    cpy_r_r147 = CPyModule_builtins;
    cpy_r_r148 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 331, CPyStatic_pprint___globals);
        goto CPyL117;
    }
    PyObject *cpy_r_r150[1] = {cpy_r_r146};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = _PyObject_Vectorcall(cpy_r_r149, cpy_r_r151, 1, 0);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 331, CPyStatic_pprint___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r146);
    CPy_Raise(cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 331, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r153 = CPyTagged_Add(cpy_r_n, 4);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_i = cpy_r_r153;
    goto CPyL3;
CPyL92: ;
    cpy_r_i = cpy_r_n;
    goto CPyL3;
CPyL93: ;
    cpy_r_r154 = CPyStatics[163]; /* '' */
    cpy_r_r155 = PyUnicode_Join(cpy_r_r154, cpy_r_result);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format", 335, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    return cpy_r_r155;
CPyL95: ;
    cpy_r_r156 = NULL;
    return cpy_r_r156;
CPyL96: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL95;
CPyL97: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_arglist);
    goto CPyL95;
CPyL98: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_arglist);
    goto CPyL93;
CPyL99: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_arglist);
    CPy_DecRef(cpy_r_r11);
    goto CPyL95;
CPyL100: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL12;
CPyL101: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL95;
CPyL102: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_typespec);
    goto CPyL95;
CPyL103: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_typespec);
    CPy_DecRef(cpy_r_arg);
    goto CPyL95;
CPyL104: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL27;
CPyL105: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_arglist);
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_arg);
    goto CPyL28;
CPyL106: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_arg);
    goto CPyL95;
CPyL107: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r65);
    goto CPyL95;
CPyL108: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_arglist);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r72);
    goto CPyL95;
CPyL109: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL49;
CPyL110: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL56;
CPyL111: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL63;
CPyL112: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_arglist);
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_arg);
    goto CPyL64;
CPyL113: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL74;
CPyL114: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_arglist);
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_arg);
    goto CPyL75;
CPyL115: ;
    CPy_DECREF(cpy_r_typespec);
    goto CPyL84;
CPyL116: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_arglist);
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_arg);
    goto CPyL86;
CPyL117: ;
    CPy_DecRef(cpy_r_r146);
    goto CPyL95;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor___format(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fmt", 0};
    static CPyArg_Parser parser = {"%O:format", kwlist, 0};
    PyObject *obj_fmt;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, NULL, &obj_fmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_pprint___IRPrettyPrintVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fmt;
    if (likely(PyUnicode_Check(obj_fmt)))
        arg_fmt = obj_fmt;
    else {
        CPy_TypeError("str", obj_fmt); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *retval = CPyDef_pprint___IRPrettyPrintVisitor___format(arg_self, arg_fmt, arg_args);
    CPy_DECREF(obj_args);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_AddTraceback("mypyc/ir/pprint.py", "format", 281, CPyStatic_pprint___globals);
    return NULL;
}

char CPyDef_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyStatics[7898]; /* '%r' */
    cpy_r_r1 = CPyStatics[4621]; /* 'bool' */
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = CPyStatics[7945]; /* 'is_error(%r)' */
    cpy_r_r4 = CPyStatics[163]; /* '' */
    cpy_r_r5.f0 = cpy_r_r3;
    cpy_r_r5.f1 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    cpy_r_r6 = CPyStatics[9029]; /* 100 */
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9898 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp9898);
    PyObject *__tmp9899 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp9899);
    cpy_r_r8 = CPyStatics[9053]; /* 101 */
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9900 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp9900);
    PyObject *__tmp9901 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp9901);
    cpy_r_r10 = CPyDict_Build(2, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL2;
    ((mypyc___ir___pprint___IRPrettyPrintVisitorObject *)cpy_r___mypyc_self__)->_branch_op_names = cpy_r_r10;
    return 1;
CPyL2: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pprint___IRPrettyPrintVisitor))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.ir.pprint.IRPrettyPrintVisitor", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_pprint___IRPrettyPrintVisitor_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "__mypyc_defaults_setup", -1, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___format_registers(PyObject *cpy_r_func_ir, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_regs;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_i0;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_group;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 339, CPyStatic_pprint___globals);
        goto CPyL34;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_i = 0;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func_ir)->_blocks;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_func_ir___all_values_full(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 341, CPyStatic_pprint___globals);
        goto CPyL35;
    }
    cpy_r_regs = cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_regs)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_i & 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r6);
    if (cpy_r_r9) {
        goto CPyL6;
    } else
        goto CPyL36;
CPyL5: ;
    cpy_r_r10 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r10) goto CPyL36;
CPyL6: ;
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_i0 = cpy_r_i;
    cpy_r_r11 = CPyList_GetItem(cpy_r_regs, cpy_r_i0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 344, CPyStatic_pprint___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_ops___Value)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 344, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL37;
    }
    cpy_r_r13 = CPyDict_GetItem(cpy_r_names, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 344, CPyStatic_pprint___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 344, CPyStatic_pprint___globals, "str", cpy_r_r13);
        goto CPyL37;
    }
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 344, CPyStatic_pprint___globals);
        goto CPyL38;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_group = cpy_r_r15;
CPyL12: ;
    cpy_r_r18 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_regs)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r18 & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = CPyTagged_IsLt_(cpy_r_r18, cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r18);
    if (cpy_r_r24) {
        goto CPyL15;
    } else
        goto CPyL27;
CPyL14: ;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    CPyTagged_DECREF(cpy_r_r18);
    if (!cpy_r_r25) goto CPyL27;
CPyL15: ;
    cpy_r_r26 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r27 = CPyList_GetItemBorrow(cpy_r_regs, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_ops___Value)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r27);
        goto CPyL39;
    }
    cpy_r_r29 = ((mypyc___ir___ops___ValueObject *)cpy_r_r28)->_type;
    CPy_INCREF(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r26);
    cpy_r_r30 = CPyList_GetItemBorrow(cpy_r_regs, cpy_r_i0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_ops___Value)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r30);
        goto CPyL40;
    }
    cpy_r_r32 = ((mypyc___ir___ops___ValueObject *)cpy_r_r31)->_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyObject_RichCompare(cpy_r_r29, cpy_r_r32, 2);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals);
        goto CPyL41;
    }
    if (unlikely(!PyBool_Check(cpy_r_r33))) {
        CPy_TypeError("bool", cpy_r_r33); cpy_r_r34 = 2;
    } else
        cpy_r_r34 = cpy_r_r33 == Py_True;
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 345, CPyStatic_pprint___globals);
        goto CPyL41;
    }
    if (!cpy_r_r34) goto CPyL27;
    cpy_r_r35 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r35;
    cpy_r_r36 = CPyList_GetItem(cpy_r_regs, cpy_r_i);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 347, CPyStatic_pprint___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_ops___Value)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 347, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r36);
        goto CPyL41;
    }
    cpy_r_r38 = CPyDict_GetItem(cpy_r_names, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 347, CPyStatic_pprint___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 347, CPyStatic_pprint___globals, "str", cpy_r_r38);
        goto CPyL41;
    }
    cpy_r_r40 = PyList_Append(cpy_r_group, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 347, CPyStatic_pprint___globals);
        goto CPyL41;
    } else
        goto CPyL12;
CPyL27: ;
    cpy_r_r42 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r42;
    cpy_r_r43 = CPyStatics[71]; /* ', ' */
    cpy_r_r44 = PyUnicode_Join(cpy_r_r43, cpy_r_group);
    CPy_DECREF(cpy_r_group);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals);
        goto CPyL37;
    }
    cpy_r_r45 = CPyList_GetItemBorrow(cpy_r_regs, cpy_r_i0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r45, CPyType_ops___Value)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r45);
        goto CPyL42;
    }
    cpy_r_r47 = ((mypyc___ir___ops___ValueObject *)cpy_r_r46)->_type;
    CPy_INCREF(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_i0);
    cpy_r_r48 = PyObject_Str(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals);
        goto CPyL43;
    }
    cpy_r_r49 = CPyStatics[7894]; /* ' :: ' */
    cpy_r_r50 = CPyStr_Build(3, cpy_r_r44, cpy_r_r49, cpy_r_r48);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals);
        goto CPyL44;
    }
    cpy_r_r51 = PyList_Append(cpy_r_result, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 349, CPyStatic_pprint___globals);
        goto CPyL44;
    } else
        goto CPyL3;
CPyL33: ;
    return cpy_r_result;
CPyL34: ;
    cpy_r_r53 = NULL;
    return cpy_r_r53;
CPyL35: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL34;
CPyL36: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_regs);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_group);
    CPyTagged_DecRef(cpy_r_r26);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r29);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_group);
    goto CPyL34;
CPyL42: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_r44);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    CPy_DecRef(cpy_r_r44);
    goto CPyL34;
CPyL44: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_regs);
    goto CPyL34;
}

PyObject *CPyPy_pprint___format_registers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func_ir", "names", 0};
    static CPyArg_Parser parser = {"OO:format_registers", kwlist, 0};
    PyObject *obj_func_ir;
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func_ir, &obj_names)) {
        return NULL;
    }
    PyObject *arg_func_ir;
    if (likely(Py_TYPE(obj_func_ir) == CPyType_func_ir___FuncIR))
        arg_func_ir = obj_func_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_func_ir); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyDict_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("dict", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___format_registers(arg_func_ir, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "format_registers", 338, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___format_blocks(PyObject *cpy_r_blocks, PyObject *cpy_r_names, PyObject *cpy_r_source_to_error) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_block;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_handler_map;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_lines;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_handler_msg;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_b_2;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_labels;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_error;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyPtr cpy_r_r104;
    int64_t cpy_r_r105;
    CPyTagged cpy_r_r106;
    int64_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    int64_t cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyPtr cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_line;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    CPyTagged cpy_r_r147;
    CPyPtr cpy_r_r148;
    int64_t cpy_r_r149;
    CPyTagged cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    CPyTagged cpy_r_r158;
    CPyTagged cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    CPyPtr cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyPtr cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyPtr cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    CPyPtr cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    CPyTagged cpy_r_r184;
    CPyTagged cpy_r_r185;
    PyObject *cpy_r_r186;
    cpy_r_r0 = 0;
    cpy_r_i = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL103;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_ops___BasicBlock))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 360, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r6);
        goto CPyL104;
    }
    cpy_r_block = cpy_r_r7;
    CPyTagged_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label = cpy_r_i;
    CPy_DECREF(cpy_r_block);
    cpy_r_r9 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r9;
    cpy_r_i = cpy_r_r9;
    cpy_r_r10 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r10;
    goto CPyL1;
CPyL5: ;
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 363, CPyStatic_pprint___globals);
        goto CPyL102;
    }
    cpy_r_handler_map = cpy_r_r11;
    cpy_r_r12 = 0;
CPyL7: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_ops___BasicBlock))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 364, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r17);
        goto CPyL105;
    }
    cpy_r_b = cpy_r_r18;
    cpy_r_r19 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_b)->_error_handler;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r21) goto CPyL106;
    cpy_r_r22 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_b)->_error_handler;
    CPy_INCREF(cpy_r_r22);
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 366, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r22);
        goto CPyL107;
    }
    cpy_r_r24 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_handler_map, cpy_r_r23, 1);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 366, CPyStatic_pprint___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 366, CPyStatic_pprint___globals, "list", cpy_r_r24);
        goto CPyL107;
    }
    cpy_r_r26 = PyList_Append(cpy_r_r25, cpy_r_b);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_b);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 366, CPyStatic_pprint___globals);
        goto CPyL105;
    }
CPyL14: ;
    cpy_r_r28 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r28;
    goto CPyL7;
CPyL15: ;
    cpy_r_r29 = CPyDef_pprint___IRPrettyPrintVisitor(cpy_r_names);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 368, CPyStatic_pprint___globals);
        goto CPyL105;
    }
    cpy_r_visitor = cpy_r_r29;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 370, CPyStatic_pprint___globals);
        goto CPyL108;
    }
    cpy_r_lines = cpy_r_r30;
    cpy_r_r31 = 0;
    cpy_r_i = 0;
    cpy_r_r32 = 0;
CPyL18: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL109;
    cpy_r_r37 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r32);
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_ops___BasicBlock))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 371, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r37);
        goto CPyL110;
    }
    cpy_r_block = cpy_r_r38;
    cpy_r_r39 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r39);
    cpy_r_handler_msg = cpy_r_r39;
    cpy_r_r40 = PyDict_Contains(cpy_r_handler_map, cpy_r_block);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 373, CPyStatic_pprint___globals);
        goto CPyL111;
    }
    cpy_r_r42 = cpy_r_r40;
    if (cpy_r_r42) {
        goto CPyL112;
    } else
        goto CPyL38;
CPyL22: ;
    cpy_r_r43 = CPyDict_GetItem(cpy_r_handler_map, cpy_r_block);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    if (likely(PyList_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals, "list", cpy_r_r43);
        goto CPyL113;
    }
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = PyList_New(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL114;
    }
    cpy_r_r48 = 0;
CPyL26: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL115;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_ops___BasicBlock))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r53);
        goto CPyL116;
    }
    cpy_r_b_2 = cpy_r_r54;
    cpy_r_r55 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_b_2)->_label;
    CPyTagged_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_b_2);
    cpy_r_r56 = CPyTagged_Str(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL116;
    }
    cpy_r_r57 = CPyStatics[2420]; /* 'L' */
    cpy_r_r58 = CPyStr_Build(2, cpy_r_r57, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL116;
    }
    cpy_r_r59 = CPyList_SetItemUnsafe(cpy_r_r47, cpy_r_r48, cpy_r_r58);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL116;
    }
    cpy_r_r60 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r60;
    goto CPyL26;
CPyL32: ;
    cpy_r_r61 = CPyModule_builtins;
    cpy_r_r62 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL117;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r47};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r47);
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 374, CPyStatic_pprint___globals, "list", cpy_r_r66);
        goto CPyL113;
    }
    cpy_r_labels = cpy_r_r67;
    cpy_r_r68 = CPyStatics[71]; /* ', ' */
    cpy_r_r69 = PyUnicode_Join(cpy_r_r68, cpy_r_labels);
    CPy_DECREF(cpy_r_labels);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 375, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    cpy_r_r70 = CPyStatics[7946]; /* ' (handler for ' */
    cpy_r_r71 = CPyStatics[72]; /* ')' */
    cpy_r_r72 = CPyStr_Build(3, cpy_r_r70, cpy_r_r69, cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 375, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    cpy_r_handler_msg = cpy_r_r72;
CPyL38: ;
    cpy_r_r73 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label;
    CPyTagged_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyTagged_Str(cpy_r_r73);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 377, CPyStatic_pprint___globals);
        goto CPyL111;
    }
    cpy_r_r75 = CPyStatics[2420]; /* 'L' */
    cpy_r_r76 = CPyStatics[171]; /* ':' */
    cpy_r_r77 = CPyStr_Build(4, cpy_r_r75, cpy_r_r74, cpy_r_r76, cpy_r_handler_msg);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_handler_msg);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 377, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    cpy_r_r78 = PyList_Append(cpy_r_lines, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 377, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    cpy_r_r80 = PyDict_Contains(cpy_r_source_to_error, cpy_r_block);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 378, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    cpy_r_r82 = cpy_r_r80;
    if (!cpy_r_r82) goto CPyL51;
    cpy_r_r83 = CPyDict_GetItem(cpy_r_source_to_error, cpy_r_block);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 379, CPyStatic_pprint___globals);
        goto CPyL113;
    }
    if (likely(PyList_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 379, CPyStatic_pprint___globals, "list", cpy_r_r83);
        goto CPyL113;
    }
    cpy_r_r85 = 0;
CPyL46: ;
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_r84)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = (Py_ssize_t)cpy_r_r85 < (Py_ssize_t)cpy_r_r88;
    if (!cpy_r_r89) goto CPyL118;
    cpy_r_r90 = CPyList_GetItemUnsafe(cpy_r_r84, cpy_r_r85);
    if (likely(PyUnicode_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 379, CPyStatic_pprint___globals, "str", cpy_r_r90);
        goto CPyL119;
    }
    cpy_r_error = cpy_r_r91;
    cpy_r_r92 = CPyStatics[7947]; /* '  ERR: ' */
    cpy_r_r93 = CPyStr_Build(2, cpy_r_r92, cpy_r_error);
    CPy_DECREF(cpy_r_error);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 380, CPyStatic_pprint___globals);
        goto CPyL119;
    }
    cpy_r_r94 = PyList_Append(cpy_r_lines, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 380, CPyStatic_pprint___globals);
        goto CPyL119;
    }
    cpy_r_r96 = cpy_r_r85 + 2;
    cpy_r_r85 = cpy_r_r96;
    goto CPyL46;
CPyL51: ;
    cpy_r_r97 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r97);
    cpy_r_ops = cpy_r_r97;
    cpy_r_r98 = CPyList_GetItemShortBorrow(cpy_r_ops, -2);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 383, CPyStatic_pprint___globals);
        goto CPyL120;
    }
    cpy_r_r99 = (PyObject *)CPyType_ops___Goto;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_r98)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (!cpy_r_r102) goto CPyL121;
    cpy_r_r103 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r104 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r105 = *(int64_t *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 << 1;
    cpy_r_r107 = cpy_r_r103 & 1;
    cpy_r_r108 = cpy_r_r107 != 0;
    if (!cpy_r_r108) goto CPyL55;
    cpy_r_r109 = CPyTagged_IsLt_(cpy_r_r103, cpy_r_r106);
    CPyTagged_DECREF(cpy_r_r103);
    if (cpy_r_r109) {
        goto CPyL56;
    } else
        goto CPyL121;
CPyL55: ;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r103 < (Py_ssize_t)cpy_r_r106;
    CPyTagged_DECREF(cpy_r_r103);
    if (!cpy_r_r110) goto CPyL121;
CPyL56: ;
    cpy_r_r111 = CPyList_GetItemShortBorrow(cpy_r_ops, -2);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 385, CPyStatic_pprint___globals);
        goto CPyL120;
    }
    if (likely(Py_TYPE(cpy_r_r111) == CPyType_ops___Goto))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 385, CPyStatic_pprint___globals, "mypyc.ir.ops.Goto", cpy_r_r111);
        goto CPyL120;
    }
    cpy_r_r113 = ((mypyc___ir___ops___GotoObject *)cpy_r_r112)->_label;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r115 = CPyList_GetItem(cpy_r_blocks, cpy_r_r114);
    CPyTagged_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 385, CPyStatic_pprint___globals);
        goto CPyL122;
    }
    if (likely(Py_TYPE(cpy_r_r115) == CPyType_ops___BasicBlock))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 385, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r115);
        goto CPyL122;
    }
    cpy_r_r117 = cpy_r_r113 == cpy_r_r116;
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r116);
    if (!cpy_r_r117) goto CPyL70;
    cpy_r_r118 = CPyList_GetItemShort(cpy_r_ops, -2);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 386, CPyStatic_pprint___globals);
        goto CPyL123;
    }
    if (likely(Py_TYPE(cpy_r_r118) == CPyType_ops___Goto))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 386, CPyStatic_pprint___globals, "mypyc.ir.ops.Goto", cpy_r_r118);
        goto CPyL123;
    }
    cpy_r_r120 = PyList_New(0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 386, CPyStatic_pprint___globals);
        goto CPyL124;
    }
    cpy_r_r121 = CPyDict_Get(cpy_r_source_to_error, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 386, CPyStatic_pprint___globals);
        goto CPyL123;
    }
    if (likely(PyList_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 386, CPyStatic_pprint___globals, "list", cpy_r_r121);
        goto CPyL123;
    }
    cpy_r_r123 = (CPyPtr)&((PyVarObject *)cpy_r_r122)->ob_size;
    cpy_r_r124 = *(int64_t *)cpy_r_r123;
    CPy_DECREF(cpy_r_r122);
    cpy_r_r125 = cpy_r_r124 << 1;
    cpy_r_r126 = cpy_r_r125 != 0;
    if (cpy_r_r126) goto CPyL70;
    cpy_r_r127 = CPyList_GetSlice(cpy_r_ops, 0, -2);
    CPy_DECREF(cpy_r_ops);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 390, CPyStatic_pprint___globals);
        goto CPyL125;
    }
    if (likely(PyList_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 390, CPyStatic_pprint___globals, "list", cpy_r_r127);
        goto CPyL125;
    }
    cpy_r_ops = cpy_r_r128;
CPyL70: ;
    cpy_r_r129 = 0;
CPyL71: ;
    cpy_r_r130 = (CPyPtr)&((PyVarObject *)cpy_r_ops)->ob_size;
    cpy_r_r131 = *(int64_t *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = (Py_ssize_t)cpy_r_r129 < (Py_ssize_t)cpy_r_r132;
    if (!cpy_r_r133) goto CPyL126;
    cpy_r_r134 = CPyList_GetItemUnsafe(cpy_r_ops, cpy_r_r129);
    if (likely(PyObject_TypeCheck(cpy_r_r134, CPyType_ops___Op)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 391, CPyStatic_pprint___globals, "mypyc.ir.ops.Op", cpy_r_r134);
        goto CPyL123;
    }
    cpy_r_op = cpy_r_r135;
    cpy_r_r136 = CPyStatics[309]; /* '    ' */
    cpy_r_r137 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 7, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_op, cpy_r_visitor); /* accept */
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 392, CPyStatic_pprint___globals);
        goto CPyL127;
    }
    if (likely(PyUnicode_Check(cpy_r_r137)))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 392, CPyStatic_pprint___globals, "str", cpy_r_r137);
        goto CPyL127;
    }
    cpy_r_r139 = PyUnicode_Concat(cpy_r_r136, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 392, CPyStatic_pprint___globals);
        goto CPyL127;
    }
    cpy_r_line = cpy_r_r139;
    cpy_r_r140 = PyList_Append(cpy_r_lines, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 393, CPyStatic_pprint___globals);
        goto CPyL127;
    }
    cpy_r_r142 = PyDict_Contains(cpy_r_source_to_error, cpy_r_op);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 394, CPyStatic_pprint___globals);
        goto CPyL127;
    }
    cpy_r_r144 = cpy_r_r142;
    if (!cpy_r_r144) goto CPyL128;
    cpy_r_r145 = CPyDict_GetItem(cpy_r_source_to_error, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 395, CPyStatic_pprint___globals);
        goto CPyL123;
    }
    if (likely(PyList_Check(cpy_r_r145)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 395, CPyStatic_pprint___globals, "list", cpy_r_r145);
        goto CPyL123;
    }
    cpy_r_r147 = 0;
CPyL82: ;
    cpy_r_r148 = (CPyPtr)&((PyVarObject *)cpy_r_r146)->ob_size;
    cpy_r_r149 = *(int64_t *)cpy_r_r148;
    cpy_r_r150 = cpy_r_r149 << 1;
    cpy_r_r151 = (Py_ssize_t)cpy_r_r147 < (Py_ssize_t)cpy_r_r150;
    if (!cpy_r_r151) goto CPyL129;
    cpy_r_r152 = CPyList_GetItemUnsafe(cpy_r_r146, cpy_r_r147);
    if (likely(PyUnicode_Check(cpy_r_r152)))
        cpy_r_r153 = cpy_r_r152;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_blocks", 395, CPyStatic_pprint___globals, "str", cpy_r_r152);
        goto CPyL130;
    }
    cpy_r_error = cpy_r_r153;
    cpy_r_r154 = CPyStatics[7947]; /* '  ERR: ' */
    cpy_r_r155 = CPyStr_Build(2, cpy_r_r154, cpy_r_error);
    CPy_DECREF(cpy_r_error);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 396, CPyStatic_pprint___globals);
        goto CPyL130;
    }
    cpy_r_r156 = PyList_Append(cpy_r_lines, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 396, CPyStatic_pprint___globals);
        goto CPyL130;
    }
    cpy_r_r158 = cpy_r_r147 + 2;
    cpy_r_r147 = cpy_r_r158;
    goto CPyL82;
CPyL87: ;
    cpy_r_r159 = cpy_r_r129 + 2;
    cpy_r_r129 = cpy_r_r159;
    goto CPyL71;
CPyL88: ;
    cpy_r_r160 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    cpy_r_r161 = CPyList_GetItemShortBorrow(cpy_r_r160, -2);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 398, CPyStatic_pprint___globals);
        goto CPyL125;
    }
    cpy_r_r162 = (PyObject *)CPyType_ops___Goto;
    cpy_r_r163 = (CPyPtr)&((PyObject *)cpy_r_r161)->ob_type;
    cpy_r_r164 = *(PyObject * *)cpy_r_r163;
    cpy_r_r165 = cpy_r_r164 == cpy_r_r162;
    if (!cpy_r_r165) goto CPyL91;
    cpy_r_r166 = cpy_r_r165;
    goto CPyL92;
CPyL91: ;
    cpy_r_r167 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r168 = (CPyPtr)&((PyObject *)cpy_r_r161)->ob_type;
    cpy_r_r169 = *(PyObject * *)cpy_r_r168;
    cpy_r_r170 = cpy_r_r169 == cpy_r_r167;
    cpy_r_r166 = cpy_r_r170;
CPyL92: ;
    if (!cpy_r_r166) goto CPyL94;
    cpy_r_r171 = cpy_r_r166;
    goto CPyL95;
CPyL94: ;
    cpy_r_r172 = (PyObject *)CPyType_ops___Return;
    cpy_r_r173 = (CPyPtr)&((PyObject *)cpy_r_r161)->ob_type;
    cpy_r_r174 = *(PyObject * *)cpy_r_r173;
    cpy_r_r175 = cpy_r_r174 == cpy_r_r172;
    cpy_r_r171 = cpy_r_r175;
CPyL95: ;
    if (!cpy_r_r171) goto CPyL97;
    cpy_r_r176 = cpy_r_r171;
    goto CPyL98;
CPyL97: ;
    cpy_r_r177 = (PyObject *)CPyType_ops___Unreachable;
    cpy_r_r178 = (CPyPtr)&((PyObject *)cpy_r_r161)->ob_type;
    cpy_r_r179 = *(PyObject * *)cpy_r_r178;
    cpy_r_r180 = cpy_r_r179 == cpy_r_r177;
    cpy_r_r176 = cpy_r_r180;
CPyL98: ;
    CPy_DECREF(cpy_r_block);
    if (cpy_r_r176) goto CPyL100;
    cpy_r_r181 = CPyStatics[7948]; /* '    [MISSING BLOCK EXIT OPCODE]' */
    cpy_r_r182 = PyList_Append(cpy_r_lines, cpy_r_r181);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 400, CPyStatic_pprint___globals);
        goto CPyL131;
    }
CPyL100: ;
    cpy_r_r184 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r184;
    cpy_r_i = cpy_r_r184;
    cpy_r_r185 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r185;
    goto CPyL18;
CPyL101: ;
    return cpy_r_lines;
CPyL102: ;
    cpy_r_r186 = NULL;
    return cpy_r_r186;
CPyL103: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL5;
CPyL104: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL102;
CPyL105: ;
    CPy_DecRef(cpy_r_handler_map);
    goto CPyL102;
CPyL106: ;
    CPy_DECREF(cpy_r_b);
    goto CPyL14;
CPyL107: ;
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_b);
    goto CPyL102;
CPyL108: ;
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    goto CPyL102;
CPyL109: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_handler_map);
    CPy_DECREF(cpy_r_visitor);
    goto CPyL101;
CPyL110: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    goto CPyL102;
CPyL111: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_handler_msg);
    goto CPyL102;
CPyL112: ;
    CPy_DECREF(cpy_r_handler_msg);
    goto CPyL22;
CPyL113: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    goto CPyL102;
CPyL114: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r44);
    goto CPyL102;
CPyL115: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL32;
CPyL116: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r47);
    goto CPyL102;
CPyL117: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r47);
    goto CPyL102;
CPyL118: ;
    CPy_DECREF(cpy_r_r84);
    goto CPyL51;
CPyL119: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_r84);
    goto CPyL102;
CPyL120: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    goto CPyL102;
CPyL121: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL70;
CPyL122: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r113);
    goto CPyL102;
CPyL123: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    goto CPyL102;
CPyL124: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r119);
    goto CPyL102;
CPyL125: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    goto CPyL102;
CPyL126: ;
    CPy_DECREF(cpy_r_ops);
    goto CPyL88;
CPyL127: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    goto CPyL102;
CPyL128: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL87;
CPyL129: ;
    CPy_DECREF(cpy_r_r146);
    goto CPyL87;
CPyL130: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r146);
    goto CPyL102;
CPyL131: ;
    CPy_DecRef(cpy_r_handler_map);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_lines);
    goto CPyL102;
}

PyObject *CPyPy_pprint___format_blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "names", "source_to_error", 0};
    static CPyArg_Parser parser = {"OOO:format_blocks", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_names;
    PyObject *obj_source_to_error;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_names, &obj_source_to_error)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyDict_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("dict", obj_names); 
        goto fail;
    }
    PyObject *arg_source_to_error;
    if (likely(PyDict_Check(obj_source_to_error)))
        arg_source_to_error = obj_source_to_error;
    else {
        CPy_TypeError("dict", obj_source_to_error); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___format_blocks(arg_blocks, arg_names, arg_source_to_error);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "format_blocks", 353, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___format_func(PyObject *cpy_r_fn, PyObject *cpy_r_errors) {
    tuple_T0 cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lines;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_cls_prefix;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_source_to_error;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T2OO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_error;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    if (cpy_r_errors != NULL) goto CPyL45;
    cpy_r_r0.empty_struct_error_flag = 0;
    cpy_r_r1 = PyTuple_New(0);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    cpy_r_errors = cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 405, CPyStatic_pprint___globals);
        goto CPyL46;
    }
    cpy_r_lines = cpy_r_r2;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 406, CPyStatic_pprint___globals);
        goto CPyL47;
    }
CPyL4: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL48;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r6 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 406, CPyStatic_pprint___globals, "str", cpy_r_r3);
        goto CPyL47;
    }
    cpy_r_r7 = CPyStr_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL11;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 406, CPyStatic_pprint___globals);
        goto CPyL47;
    }
CPyL8: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 406, CPyStatic_pprint___globals, "str", cpy_r_r8);
        goto CPyL47;
    }
    cpy_r_r10 = CPyStatics[224]; /* '.' */
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 406, CPyStatic_pprint___globals);
        goto CPyL47;
    }
    cpy_r_r12 = cpy_r_r11;
    goto CPyL12;
CPyL11: ;
    cpy_r_r13 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_r12 = cpy_r_r13;
CPyL12: ;
    cpy_r_cls_prefix = cpy_r_r12;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL49;
    }
CPyL13: ;
    cpy_r_r15 = CPyStatics[71]; /* ', ' */
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL50;
    }
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL51;
    }
CPyL15: ;
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL51;
    }
CPyL16: ;
    cpy_r_r19 = PyIter_Next(cpy_r_r18);
    if (cpy_r_r19 == NULL) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_func_ir___RuntimeArg))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r19);
        goto CPyL53;
    }
    cpy_r_arg = cpy_r_r20;
    cpy_r_r21 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r22 = PyList_Append(cpy_r_r16, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL53;
    } else
        goto CPyL16;
CPyL19: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL51;
    }
    cpy_r_r25 = PyUnicode_Join(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL50;
    }
    cpy_r_r26 = CPyStatics[2244]; /* 'def ' */
    cpy_r_r27 = CPyStatics[2381]; /* '(' */
    cpy_r_r28 = CPyStatics[5600]; /* '):' */
    cpy_r_r29 = CPyStr_Build(6, cpy_r_r26, cpy_r_cls_prefix, cpy_r_r14, cpy_r_r27, cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_cls_prefix);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 408, CPyStatic_pprint___globals);
        goto CPyL47;
    }
    cpy_r_r30 = PyList_Append(cpy_r_lines, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 407, CPyStatic_pprint___globals);
        goto CPyL47;
    }
    cpy_r_r32 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_arg_regs;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_pprint___generate_names_for_ir(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 410, CPyStatic_pprint___globals);
        goto CPyL47;
    }
    cpy_r_names = cpy_r_r34;
    cpy_r_r35 = CPyDef_pprint___format_registers(cpy_r_fn, cpy_r_names);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 411, CPyStatic_pprint___globals);
        goto CPyL54;
    }
    cpy_r_r36 = 0;
CPyL26: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL55;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r36);
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 411, CPyStatic_pprint___globals, "str", cpy_r_r41);
        goto CPyL56;
    }
    cpy_r_line = cpy_r_r42;
    cpy_r_r43 = CPyStatics[309]; /* '    ' */
    cpy_r_r44 = PyUnicode_Concat(cpy_r_r43, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 412, CPyStatic_pprint___globals);
        goto CPyL56;
    }
    cpy_r_r45 = PyList_Append(cpy_r_lines, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 412, CPyStatic_pprint___globals);
        goto CPyL56;
    }
    cpy_r_r47 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r47;
    goto CPyL26;
CPyL31: ;
    cpy_r_r48 = (PyObject *)&PyList_Type;
    cpy_r_r49 = CPyStatic_pprint___globals;
    cpy_r_r50 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 414, CPyStatic_pprint___globals);
        goto CPyL54;
    }
    PyObject *cpy_r_r52[1] = {cpy_r_r48};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 414, CPyStatic_pprint___globals);
        goto CPyL54;
    }
    if (likely(PyDict_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 414, CPyStatic_pprint___globals, "dict", cpy_r_r54);
        goto CPyL54;
    }
    cpy_r_source_to_error = cpy_r_r55;
    cpy_r_r56 = PyObject_GetIter(cpy_r_errors);
    CPy_DECREF(cpy_r_errors);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 415, CPyStatic_pprint___globals);
        goto CPyL57;
    }
CPyL35: ;
    cpy_r_r57 = PyIter_Next(cpy_r_r56);
    if (cpy_r_r57 == NULL) goto CPyL58;
    PyObject *__tmp9902;
    if (unlikely(!(PyTuple_Check(cpy_r_r57) && PyTuple_GET_SIZE(cpy_r_r57) == 2))) {
        __tmp9902 = NULL;
        goto __LL9903;
    }
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r57, 0)) == CPyType_ops___BasicBlock)
        __tmp9902 = PyTuple_GET_ITEM(cpy_r_r57, 0);
    else {
        __tmp9902 = NULL;
    }
    if (__tmp9902 != NULL) goto __LL9904;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r57, 0), CPyType_ops___Op))
        __tmp9902 = PyTuple_GET_ITEM(cpy_r_r57, 0);
    else {
        __tmp9902 = NULL;
    }
    if (__tmp9902 != NULL) goto __LL9904;
    __tmp9902 = NULL;
__LL9904: ;
    if (__tmp9902 == NULL) goto __LL9903;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r57, 1))))
        __tmp9902 = PyTuple_GET_ITEM(cpy_r_r57, 1);
    else {
        __tmp9902 = NULL;
    }
    if (__tmp9902 == NULL) goto __LL9903;
    __tmp9902 = cpy_r_r57;
__LL9903: ;
    if (unlikely(__tmp9902 == NULL)) {
        CPy_TypeError("tuple[union[mypyc.ir.ops.BasicBlock, mypyc.ir.ops.Op], str]", cpy_r_r57); cpy_r_r58 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9905 = PyTuple_GET_ITEM(cpy_r_r57, 0);
        CPy_INCREF(__tmp9905);
        PyObject *__tmp9906;
        if (Py_TYPE(__tmp9905) == CPyType_ops___BasicBlock)
            __tmp9906 = __tmp9905;
        else {
            __tmp9906 = NULL;
        }
        if (__tmp9906 != NULL) goto __LL9907;
        if (PyObject_TypeCheck(__tmp9905, CPyType_ops___Op))
            __tmp9906 = __tmp9905;
        else {
            __tmp9906 = NULL;
        }
        if (__tmp9906 != NULL) goto __LL9907;
        CPy_TypeError("union[mypyc.ir.ops.BasicBlock, mypyc.ir.ops.Op]", __tmp9905); 
        __tmp9906 = NULL;
__LL9907: ;
        cpy_r_r58.f0 = __tmp9906;
        PyObject *__tmp9908 = PyTuple_GET_ITEM(cpy_r_r57, 1);
        CPy_INCREF(__tmp9908);
        PyObject *__tmp9909;
        if (likely(PyUnicode_Check(__tmp9908)))
            __tmp9909 = __tmp9908;
        else {
            CPy_TypeError("str", __tmp9908); 
            __tmp9909 = NULL;
        }
        cpy_r_r58.f1 = __tmp9909;
    }
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 415, CPyStatic_pprint___globals);
        goto CPyL59;
    }
    cpy_r_r59 = cpy_r_r58.f0;
    CPy_INCREF(cpy_r_r59);
    cpy_r_source = cpy_r_r59;
    cpy_r_r60 = cpy_r_r58.f1;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    cpy_r_error = cpy_r_r60;
    cpy_r_r61 = CPyDict_GetItem(cpy_r_source_to_error, cpy_r_source);
    CPy_DECREF(cpy_r_source);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 416, CPyStatic_pprint___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_func", 416, CPyStatic_pprint___globals, "list", cpy_r_r61);
        goto CPyL60;
    }
    cpy_r_r63 = PyList_Append(cpy_r_r62, cpy_r_error);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_error);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 416, CPyStatic_pprint___globals);
        goto CPyL59;
    } else
        goto CPyL35;
CPyL40: ;
    cpy_r_r65 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 415, CPyStatic_pprint___globals);
        goto CPyL57;
    }
    cpy_r_r66 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyDef_pprint___format_blocks(cpy_r_r66, cpy_r_names, cpy_r_source_to_error);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_source_to_error);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 418, CPyStatic_pprint___globals);
        goto CPyL61;
    }
    cpy_r_code = cpy_r_r67;
    cpy_r_r68 = CPyList_Extend(cpy_r_lines, cpy_r_code);
    CPy_DECREF(cpy_r_code);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 419, CPyStatic_pprint___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL43: ;
    return cpy_r_lines;
CPyL44: ;
    cpy_r_r69 = NULL;
    return cpy_r_r69;
CPyL45: ;
    CPy_INCREF(cpy_r_errors);
    goto CPyL2;
CPyL46: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    goto CPyL44;
CPyL48: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL11;
CPyL49: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_cls_prefix);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_cls_prefix);
    CPy_DecRef(cpy_r_r14);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_cls_prefix);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL44;
CPyL52: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL19;
CPyL53: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_cls_prefix);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL44;
CPyL54: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_names);
    goto CPyL44;
CPyL55: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL31;
CPyL56: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r35);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_source_to_error);
    goto CPyL44;
CPyL58: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL40;
CPyL59: ;
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_source_to_error);
    CPy_DecRef(cpy_r_r56);
    goto CPyL44;
CPyL60: ;
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_source_to_error);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_error);
    goto CPyL44;
CPyL61: ;
    CPy_DecRef(cpy_r_lines);
    goto CPyL44;
CPyL62: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL43;
}

PyObject *CPyPy_pprint___format_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "errors", 0};
    static CPyArg_Parser parser = {"O|O:format_func", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_errors = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_errors;
    if (obj_errors == NULL) {
        arg_errors = NULL;
    } else {
        arg_errors = obj_errors; 
    }
    PyObject *retval = CPyDef_pprint___format_func(arg_fn, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "format_func", 404, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___format_modules(PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_ops;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 424, CPyStatic_pprint___globals);
        goto CPyL14;
    }
    cpy_r_ops = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_modules);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetValuesIter(cpy_r_modules);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 425, CPyStatic_pprint___globals);
        goto CPyL15;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextValue(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL16;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_module_ir___ModuleIR))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_modules", 425, CPyStatic_pprint___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r8);
        goto CPyL17;
    }
    cpy_r_module = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_module);
    cpy_r_r11 = 0;
CPyL5: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL18;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_func_ir___FuncIR))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "format_modules", 426, CPyStatic_pprint___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r16);
        goto CPyL19;
    }
    cpy_r_fn = cpy_r_r17;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_pprint___format_func(cpy_r_fn, cpy_r_r18);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 427, CPyStatic_pprint___globals);
        goto CPyL19;
    }
    cpy_r_r20 = CPyList_Extend(cpy_r_ops, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 427, CPyStatic_pprint___globals);
        goto CPyL19;
    } else
        goto CPyL20;
CPyL9: ;
    cpy_r_r21 = CPyStatics[163]; /* '' */
    cpy_r_r22 = PyList_Append(cpy_r_ops, cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 428, CPyStatic_pprint___globals);
        goto CPyL19;
    }
    cpy_r_r24 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r24;
    goto CPyL5;
CPyL11: ;
    cpy_r_r25 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r3);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 425, CPyStatic_pprint___globals);
        goto CPyL17;
    } else
        goto CPyL2;
CPyL12: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 425, CPyStatic_pprint___globals);
        goto CPyL15;
    }
    return cpy_r_ops;
CPyL14: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL15: ;
    CPy_DecRef(cpy_r_ops);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL20: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL9;
}

PyObject *CPyPy_pprint___format_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:format_modules", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___format_modules(arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "format_modules", 423, CPyStatic_pprint___globals);
    return NULL;
}

PyObject *CPyDef_pprint___generate_names_for_ir(PyObject *cpy_r_args, PyObject *cpy_r_blocks) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_used_names;
    CPyTagged cpy_r_temp_index;
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
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_source;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_value;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_candidate;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    CPyTagged cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 438, CPyStatic_pprint___globals);
        goto CPyL73;
    }
    cpy_r_names = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 439, CPyStatic_pprint___globals);
        goto CPyL74;
    }
    cpy_r_used_names = cpy_r_r1;
    cpy_r_temp_index = 0;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___Register))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 443, CPyStatic_pprint___globals, "mypyc.ir.ops.Register", cpy_r_r7);
        goto CPyL75;
    }
    cpy_r_arg = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___ops___RegisterObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDict_SetItem(cpy_r_names, cpy_r_arg, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 444, CPyStatic_pprint___globals);
        goto CPyL76;
    }
    cpy_r_r12 = ((mypyc___ir___ops___RegisterObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r13 = PySet_Add(cpy_r_used_names, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 445, CPyStatic_pprint___globals);
        goto CPyL75;
    }
    cpy_r_r15 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = 0;
CPyL9: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL77;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_ops___BasicBlock))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 447, CPyStatic_pprint___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r21);
        goto CPyL75;
    }
    cpy_r_block = cpy_r_r22;
    cpy_r_r23 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_block);
    cpy_r_r24 = 0;
CPyL12: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL78;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r23, cpy_r_r24);
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_ops___Op)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 448, CPyStatic_pprint___globals, "mypyc.ir.ops.Op", cpy_r_r29);
        goto CPyL79;
    }
    cpy_r_op = cpy_r_r30;
    cpy_r_r31 = PyList_New(0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 449, CPyStatic_pprint___globals);
        goto CPyL80;
    }
    cpy_r_values = cpy_r_r31;
    cpy_r_r32 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 4, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* sources */
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 451, CPyStatic_pprint___globals);
        goto CPyL81;
    }
    cpy_r_r33 = 0;
CPyL17: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL82;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_ops___Value)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 451, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r38);
        goto CPyL83;
    }
    cpy_r_source = cpy_r_r39;
    cpy_r_r40 = PyDict_Contains(cpy_r_names, cpy_r_source);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 452, CPyStatic_pprint___globals);
        goto CPyL84;
    }
    cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = cpy_r_r42 ^ 1;
    if (!cpy_r_r43) goto CPyL85;
    cpy_r_r44 = PyList_Append(cpy_r_values, cpy_r_source);
    CPy_DECREF(cpy_r_source);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 453, CPyStatic_pprint___globals);
        goto CPyL83;
    }
CPyL22: ;
    cpy_r_r46 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r46;
    goto CPyL17;
CPyL23: ;
    cpy_r_r47 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL25;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL26;
CPyL25: ;
    cpy_r_r52 = (PyObject *)CPyType_ops___AssignMulti;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    cpy_r_r51 = cpy_r_r55;
CPyL26: ;
    if (!cpy_r_r51) goto CPyL34;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r56 = cpy_r_op;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL9910;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r56 = cpy_r_op;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL9910;
    CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 456, CPyStatic_pprint___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL86;
__LL9910: ;
    cpy_r_r57 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_ops___Assign))
        cpy_r_r61 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 456, CPyStatic_pprint___globals, "mypyc.ir.ops.Assign", cpy_r_r56);
        goto CPyL86;
    }
    cpy_r_r62 = ((mypyc___ir___ops___AssignObject *)cpy_r_r61)->_dest;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62;
    goto CPyL33;
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_ops___AssignMulti))
        cpy_r_r64 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 456, CPyStatic_pprint___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r56);
        goto CPyL86;
    }
    cpy_r_r65 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r64)->_dest;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r63 = cpy_r_r65;
CPyL33: ;
    cpy_r_r66 = PyList_Append(cpy_r_values, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 456, CPyStatic_pprint___globals);
        goto CPyL86;
    } else
        goto CPyL40;
CPyL34: ;
    cpy_r_r68 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r69 = CPy_TypeCheck(cpy_r_op, cpy_r_r68);
    if (cpy_r_r69) goto CPyL87;
    cpy_r_r70 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___Op, 0, mypyc___ir___ops___OpObject, char); /* is_void */
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 457, CPyStatic_pprint___globals);
        goto CPyL81;
    }
CPyL36: ;
    if (cpy_r_r70) goto CPyL87;
CPyL37: ;
    cpy_r_r71 = PyDict_Contains(cpy_r_names, cpy_r_op);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 459, CPyStatic_pprint___globals);
        goto CPyL81;
    }
    cpy_r_r73 = cpy_r_r71;
    cpy_r_r74 = cpy_r_r73 ^ 1;
    if (!cpy_r_r74) goto CPyL88;
    cpy_r_r75 = PyList_Append(cpy_r_values, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 460, CPyStatic_pprint___globals);
        goto CPyL86;
    }
CPyL40: ;
    cpy_r_r77 = 0;
CPyL41: ;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = (Py_ssize_t)cpy_r_r77 < (Py_ssize_t)cpy_r_r80;
    if (!cpy_r_r81) goto CPyL89;
    cpy_r_r82 = CPyList_GetItemUnsafe(cpy_r_values, cpy_r_r77);
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_ops___Value)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 462, CPyStatic_pprint___globals, "mypyc.ir.ops.Value", cpy_r_r82);
        goto CPyL86;
    }
    cpy_r_value = cpy_r_r83;
    cpy_r_r84 = PyDict_Contains(cpy_r_names, cpy_r_value);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 463, CPyStatic_pprint___globals);
        goto CPyL90;
    }
    cpy_r_r86 = cpy_r_r84;
    if (cpy_r_r86) goto CPyL91;
    cpy_r_r87 = (PyObject *)CPyType_ops___Register;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    if (!cpy_r_r90) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_value) == CPyType_ops___Register))
        cpy_r_r91 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 465, CPyStatic_pprint___globals, "mypyc.ir.ops.Register", cpy_r_value);
        goto CPyL90;
    }
    cpy_r_r92 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r91)->_name;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyStr_IsTrue(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (!cpy_r_r93) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_value) == CPyType_ops___Register))
        cpy_r_r94 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 466, CPyStatic_pprint___globals, "mypyc.ir.ops.Register", cpy_r_value);
        goto CPyL90;
    }
    cpy_r_r95 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r94)->_name;
    CPy_INCREF(cpy_r_r95);
    cpy_r_name = cpy_r_r95;
    goto CPyL57;
CPyL50: ;
    cpy_r_r96 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (!cpy_r_r99) goto CPyL52;
    cpy_r_r100 = cpy_r_r99;
    goto CPyL53;
CPyL52: ;
    cpy_r_r101 = (PyObject *)CPyType_ops___Float;
    cpy_r_r102 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 == cpy_r_r101;
    cpy_r_r100 = cpy_r_r104;
CPyL53: ;
    if (cpy_r_r100) goto CPyL91;
    cpy_r_r105 = CPyTagged_Str(cpy_r_temp_index);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 470, CPyStatic_pprint___globals);
        goto CPyL90;
    }
    cpy_r_r106 = CPyStatics[1447]; /* 'r' */
    cpy_r_r107 = CPyStr_Build(2, cpy_r_r106, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 470, CPyStatic_pprint___globals);
        goto CPyL90;
    }
    cpy_r_name = cpy_r_r107;
    cpy_r_r108 = CPyTagged_Add(cpy_r_temp_index, 2);
    CPyTagged_DECREF(cpy_r_temp_index);
    cpy_r_temp_index = cpy_r_r108;
CPyL57: ;
    cpy_r_r109 = PySet_Contains(cpy_r_used_names, cpy_r_name);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 474, CPyStatic_pprint___globals);
        goto CPyL92;
    }
    cpy_r_r111 = cpy_r_r109;
    if (!cpy_r_r111) goto CPyL67;
    cpy_r_n = 4;
CPyL60: ;
    if (!1) goto CPyL93;
    cpy_r_r112 = CPyTagged_Str(cpy_r_n);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 477, CPyStatic_pprint___globals);
        goto CPyL94;
    }
    cpy_r_r113 = CPyStatics[755]; /* '_' */
    cpy_r_r114 = CPyStr_Build(3, cpy_r_name, cpy_r_r113, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 477, CPyStatic_pprint___globals);
        goto CPyL94;
    }
    cpy_r_candidate = cpy_r_r114;
    cpy_r_r115 = PySet_Contains(cpy_r_used_names, cpy_r_candidate);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 478, CPyStatic_pprint___globals);
        goto CPyL95;
    }
    cpy_r_r117 = cpy_r_r115;
    cpy_r_r118 = cpy_r_r117 ^ 1;
    if (cpy_r_r118) {
        goto CPyL96;
    } else
        goto CPyL97;
CPyL65: ;
    cpy_r_name = cpy_r_candidate;
    goto CPyL67;
CPyL66: ;
    cpy_r_r119 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r119;
    goto CPyL60;
CPyL67: ;
    cpy_r_r120 = CPyDict_SetItem(cpy_r_names, cpy_r_value, cpy_r_name);
    CPy_DECREF(cpy_r_value);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 483, CPyStatic_pprint___globals);
        goto CPyL98;
    }
    cpy_r_r122 = PySet_Add(cpy_r_used_names, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 484, CPyStatic_pprint___globals);
        goto CPyL86;
    }
CPyL69: ;
    cpy_r_r124 = cpy_r_r77 + 2;
    cpy_r_r77 = cpy_r_r124;
    goto CPyL41;
CPyL70: ;
    cpy_r_r125 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r125;
    goto CPyL12;
CPyL71: ;
    cpy_r_r126 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r126;
    goto CPyL9;
CPyL72: ;
    return cpy_r_names;
CPyL73: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL74: ;
    CPy_DecRef(cpy_r_names);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    goto CPyL73;
CPyL76: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_arg);
    goto CPyL73;
CPyL77: ;
    CPy_DECREF(cpy_r_used_names);
    CPyTagged_DECREF(cpy_r_temp_index);
    goto CPyL72;
CPyL78: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL71;
CPyL79: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    goto CPyL73;
CPyL80: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_op);
    goto CPyL73;
CPyL81: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_values);
    goto CPyL73;
CPyL82: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL23;
CPyL83: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r32);
    goto CPyL73;
CPyL84: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_source);
    goto CPyL73;
CPyL85: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL22;
CPyL86: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    goto CPyL73;
CPyL87: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_values);
    goto CPyL70;
CPyL88: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL40;
CPyL89: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL70;
CPyL90: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_value);
    goto CPyL73;
CPyL91: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL69;
CPyL92: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_name);
    goto CPyL73;
CPyL93: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL67;
CPyL94: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL73;
CPyL95: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_candidate);
    goto CPyL73;
CPyL96: ;
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL65;
CPyL97: ;
    CPy_DECREF(cpy_r_candidate);
    goto CPyL66;
CPyL98: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_used_names);
    CPyTagged_DecRef(cpy_r_temp_index);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_name);
    goto CPyL73;
}

PyObject *CPyPy_pprint___generate_names_for_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "blocks", 0};
    static CPyArg_Parser parser = {"OO:generate_names_for_ir", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *retval = CPyDef_pprint___generate_names_for_ir(arg_args, arg_blocks);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/pprint.py", "generate_names_for_ir", 432, CPyStatic_pprint___globals);
    return NULL;
}

char CPyDef_pprint_____top_level__(void) {
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
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
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
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    tuple_T2OO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", -1, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_pprint___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 3, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_pprint___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 5, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10022]; /* ('Any', 'Final', 'Sequence', 'Union') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_pprint___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 6, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10023]; /* ('short_name',) */
    cpy_r_r18 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r19 = CPyStatic_pprint___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 8, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___common = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10024]; /* ('FuncIR', 'all_values_full') */
    cpy_r_r22 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r23 = CPyStatic_pprint___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 9, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10025]; /* ('ModuleIRs',) */
    cpy_r_r26 = CPyStatics[7557]; /* 'mypyc.ir.module_ir' */
    cpy_r_r27 = CPyStatic_pprint___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 10, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___module_ir = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___module_ir);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10026]; /* ('ERR_NEVER', 'Assign', 'AssignMulti', 'BasicBlock',
                                      'Box', 'Branch', 'Call', 'CallC', 'Cast',
                                      'ComparisonOp', 'ControlOp', 'DecRef', 'Extend',
                                      'Float', 'FloatComparisonOp', 'FloatNeg', 'FloatOp',
                                      'GetAttr', 'GetElementPtr', 'Goto', 'IncRef',
                                      'InitStatic', 'Integer', 'IntOp', 'KeepAlive',
                                      'LoadAddress', 'LoadErrorValue', 'LoadGlobal',
                                      'LoadLiteral', 'LoadMem', 'LoadStatic', 'MethodCall',
                                      'Op', 'OpVisitor', 'RaiseStandardError', 'Register',
                                      'Return', 'SetAttr', 'SetMem', 'Truncate', 'TupleGet',
                                      'TupleSet', 'Unbox', 'Unreachable', 'Value') */
    cpy_r_r30 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r31 = CPyStatic_pprint___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 11, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10027]; /* ('RType', 'is_bool_rprimitive', 'is_int_rprimitive') */
    cpy_r_r34 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r35 = CPyStatic_pprint___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 58, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatic_pprint___globals;
    cpy_r_r38 = CPyStatics[84]; /* 'Union' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 60, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r40 = (PyObject *)CPyType_ops___BasicBlock;
    cpy_r_r41 = (PyObject *)CPyType_ops___Op;
    cpy_r_r42.f0 = cpy_r_r40;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    cpy_r_r43 = PyTuple_New(2);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9911 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp9911);
    PyObject *__tmp9912 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp9912);
    cpy_r_r44 = PyObject_GetItem(cpy_r_r39, cpy_r_r43);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 60, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r45 = CPyStatic_pprint___globals;
    cpy_r_r46 = CPyStatics[7951]; /* 'ErrorSource' */
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 60, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r49 = (PyObject *)CPyType_ops___OpVisitor;
    cpy_r_r50 = (PyObject *)&PyUnicode_Type;
    cpy_r_r51 = PyObject_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r52 = PyTuple_Pack(1, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r53 = CPyStatics[6758]; /* 'mypyc.ir.pprint' */
    cpy_r_r54 = (PyObject *)CPyType_pprint___IRPrettyPrintVisitor_template;
    cpy_r_r55 = CPyType_FromTemplate(cpy_r_r54, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r56 = CPyDef_pprint___IRPrettyPrintVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", -1, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    cpy_r_r57 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r58 = CPyStatics[7952]; /* 'branch_op_names' */
    cpy_r_r59 = CPyStatics[2403]; /* 'names' */
    cpy_r_r60 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r61 = PyTuple_Pack(3, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    cpy_r_r62 = PyObject_SetAttr(cpy_r_r55, cpy_r_r57, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL25;
    }
    CPyType_pprint___IRPrettyPrintVisitor = (PyTypeObject *)cpy_r_r55;
    CPy_INCREF(CPyType_pprint___IRPrettyPrintVisitor);
    cpy_r_r64 = CPyStatic_pprint___globals;
    cpy_r_r65 = CPyStatics[7953]; /* 'IRPrettyPrintVisitor' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 63, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r68 = (PyObject *)CPyType_pprint___IRPrettyPrintVisitor;
    cpy_r_r69 = CPyStatics[7898]; /* '%r' */
    cpy_r_r70 = CPyStatics[4621]; /* 'bool' */
    cpy_r_r71.f0 = cpy_r_r69;
    cpy_r_r71.f1 = cpy_r_r70;
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    cpy_r_r72 = CPyStatics[7945]; /* 'is_error(%r)' */
    cpy_r_r73 = CPyStatics[163]; /* '' */
    cpy_r_r74.f0 = cpy_r_r72;
    cpy_r_r74.f1 = cpy_r_r73;
    CPy_INCREF(cpy_r_r74.f0);
    CPy_INCREF(cpy_r_r74.f1);
    cpy_r_r75 = CPyStatics[9029]; /* 100 */
    cpy_r_r76 = PyTuple_New(2);
    if (unlikely(cpy_r_r76 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9913 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r76, 0, __tmp9913);
    PyObject *__tmp9914 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r76, 1, __tmp9914);
    cpy_r_r77 = CPyStatics[9053]; /* 101 */
    cpy_r_r78 = PyTuple_New(2);
    if (unlikely(cpy_r_r78 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9915 = cpy_r_r74.f0;
    PyTuple_SET_ITEM(cpy_r_r78, 0, __tmp9915);
    PyObject *__tmp9916 = cpy_r_r74.f1;
    PyTuple_SET_ITEM(cpy_r_r78, 1, __tmp9916);
    cpy_r_r79 = CPyDict_Build(2, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 75, CPyStatic_pprint___globals);
        goto CPyL24;
    }
    cpy_r_r80 = CPyStatics[7952]; /* 'branch_op_names' */
    cpy_r_r81 = PyObject_SetAttr(cpy_r_r68, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/ir/pprint.py", "<module>", 75, CPyStatic_pprint___globals);
        goto CPyL26;
    }
    CPyStatic_pprint___IRPrettyPrintVisitor___branch_op_names = cpy_r_r79;
    CPy_INCREF(CPyStatic_pprint___IRPrettyPrintVisitor___branch_op_names);
    CPy_DECREF(cpy_r_r79);
    return 1;
CPyL24: ;
    cpy_r_r83 = 2;
    return cpy_r_r83;
CPyL25: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL24;
}
