#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
selfleaks___SelfLeakedVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef selfleaks___SelfLeakedVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *selfleaks___SelfLeakedVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_selfleaks___SelfLeakedVisitor(PyObject *cpy_r_self_reg);

static PyObject *
selfleaks___SelfLeakedVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_selfleaks___SelfLeakedVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = selfleaks___SelfLeakedVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_selfleaks___SelfLeakedVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
selfleaks___SelfLeakedVisitor_traverse(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self_reg);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject))));
    return 0;
}

static int
selfleaks___SelfLeakedVisitor_clear(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self)
{
    Py_CLEAR(self->_self_reg);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject))));
    return 0;
}

static void
selfleaks___SelfLeakedVisitor_dealloc(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, selfleaks___SelfLeakedVisitor_dealloc)
    selfleaks___SelfLeakedVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem selfleaks___SelfLeakedVisitor_vtable[41];
static CPyVTableItem selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable[36];
static size_t selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_selfleaks___SelfLeakedVisitor_trait_vtable_setup(void)
{
    CPyVTableItem selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable, selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable));
    size_t selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table, selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table_scratch, sizeof(selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem selfleaks___SelfLeakedVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)selfleaks___SelfLeakedVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)selfleaks___SelfLeakedVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor_____init__,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_goto,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_branch,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_return,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_assign,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_call,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_box,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_cast,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_extend,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_selfleaks___SelfLeakedVisitor___check_register_op,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_ops___OpVisitor___visit_dec_ref,
    };
    memcpy(selfleaks___SelfLeakedVisitor_vtable, selfleaks___SelfLeakedVisitor_vtable_scratch, sizeof(selfleaks___SelfLeakedVisitor_vtable));
    return 1;
}

static PyObject *
selfleaks___SelfLeakedVisitor_get_self_reg(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self, void *closure);
static int
selfleaks___SelfLeakedVisitor_set_self_reg(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef selfleaks___SelfLeakedVisitor_getseters[] = {
    {"self_reg",
     (getter)selfleaks___SelfLeakedVisitor_get_self_reg, (setter)selfleaks___SelfLeakedVisitor_set_self_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef selfleaks___SelfLeakedVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_goto",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_method_call",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_error_value",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_literal",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_attr",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_attr",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_set_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_static",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_init_static",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_init_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_get",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_set",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_box",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbox",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_standard_error",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_raise_standard_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_c",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_truncate",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_truncate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_extend",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_extend,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_global",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_op",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_op",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_op",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_float_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_neg",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_float_neg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_comparison_op",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_float_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_mem",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_element_ptr",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_get_element_ptr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_address",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_load_address,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_keep_alive",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___visit_keep_alive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_register_op",
     (PyCFunction)CPyPy_selfleaks___SelfLeakedVisitor___check_register_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_selfleaks___SelfLeakedVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SelfLeakedVisitor",
    .tp_new = selfleaks___SelfLeakedVisitor_new,
    .tp_dealloc = (destructor)selfleaks___SelfLeakedVisitor_dealloc,
    .tp_traverse = (traverseproc)selfleaks___SelfLeakedVisitor_traverse,
    .tp_clear = (inquiry)selfleaks___SelfLeakedVisitor_clear,
    .tp_getset = selfleaks___SelfLeakedVisitor_getseters,
    .tp_methods = selfleaks___SelfLeakedVisitor_methods,
    .tp_init = selfleaks___SelfLeakedVisitor_init,
    .tp_members = selfleaks___SelfLeakedVisitor_members,
    .tp_basicsize = sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___analysis___selfleaks___SelfLeakedVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_selfleaks___SelfLeakedVisitor_template = &CPyType_selfleaks___SelfLeakedVisitor_template_;

static PyObject *
selfleaks___SelfLeakedVisitor_setup(PyTypeObject *type)
{
    mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self;
    self = (mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = selfleaks___SelfLeakedVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor(PyObject *cpy_r_self_reg)
{
    PyObject *self = selfleaks___SelfLeakedVisitor_setup(CPyType_selfleaks___SelfLeakedVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_selfleaks___SelfLeakedVisitor_____init__(self, cpy_r_self_reg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
selfleaks___SelfLeakedVisitor_get_self_reg(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self, void *closure)
{
    if (unlikely(self->_self_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_reg' of 'SelfLeakedVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_reg);
    PyObject *retval = self->_self_reg;
    return retval;
}

static int
selfleaks___SelfLeakedVisitor_set_self_reg(mypyc___analysis___selfleaks___SelfLeakedVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SelfLeakedVisitor' object attribute 'self_reg' cannot be deleted");
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
static PyMethodDef selfleaksmodule_methods[] = {
    {"analyze_self_leaks", (PyCFunction)CPyPy_selfleaks___analyze_self_leaks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef selfleaksmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.analysis.selfleaks",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    selfleaksmodule_methods
};

PyObject *CPyInit_mypyc___analysis___selfleaks(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___analysis___selfleaks_internal) {
        Py_INCREF(CPyModule_mypyc___analysis___selfleaks_internal);
        return CPyModule_mypyc___analysis___selfleaks_internal;
    }
    CPyModule_mypyc___analysis___selfleaks_internal = PyModule_Create(&selfleaksmodule);
    if (unlikely(CPyModule_mypyc___analysis___selfleaks_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___analysis___selfleaks_internal, "__name__");
    CPyStatic_selfleaks___globals = PyModule_GetDict(CPyModule_mypyc___analysis___selfleaks_internal);
    if (unlikely(CPyStatic_selfleaks___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_selfleaks_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___analysis___selfleaks_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___analysis___selfleaks_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_selfleaks___SelfLeakedVisitor);
    return NULL;
}

char CPyDef_selfleaks___SelfLeakedVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_self_reg) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_self_reg);
    if (((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg != NULL) {
        CPy_DECREF(((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg);
    }
    ((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg = cpy_r_self_reg;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "__init__", 64, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"self_reg", 0};
    PyObject *obj_self_reg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_self_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_self_reg;
    if (likely(Py_TYPE(obj_self_reg) == CPyType_ops___Register))
        arg_self_reg = obj_self_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_self_reg); 
        goto fail;
    }
    char retval = CPyDef_selfleaks___SelfLeakedVisitor_____init__(arg_self, arg_self_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "__init__", 63, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_goto(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_goto", 67, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8665;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8665 = NULL;
        goto __LL8666;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8665 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8665 = NULL;
    }
    if (__tmp8665 == NULL) goto __LL8666;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8665 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8665 = NULL;
    }
    if (__tmp8665 == NULL) goto __LL8666;
    __tmp8665 = cpy_r_r2;
__LL8666: ;
    if (unlikely(__tmp8665 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8667 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8667);
        PyObject *__tmp8668;
        if (likely(PySet_Check(__tmp8667)))
            __tmp8668 = __tmp8667;
        else {
            CPy_TypeError("set", __tmp8667); 
            __tmp8668 = NULL;
        }
        cpy_r_r3.f0 = __tmp8668;
        PyObject *__tmp8669 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8669);
        PyObject *__tmp8670;
        if (likely(PySet_Check(__tmp8669)))
            __tmp8670 = __tmp8669;
        else {
            CPy_TypeError("set", __tmp8669); 
            __tmp8670 = NULL;
        }
        cpy_r_r3.f1 = __tmp8670;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_goto", 67, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8671 = { NULL, NULL };
    cpy_r_r4 = __tmp8671;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_goto(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8672 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8672);
    PyObject *__tmp8673 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8673);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_goto", 66, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_goto__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_goto(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8674 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8674);
    PyObject *__tmp8675 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8675);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_goto__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_goto__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_goto__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_branch", 70, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8676;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8676 = NULL;
        goto __LL8677;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8676 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8676 = NULL;
    }
    if (__tmp8676 == NULL) goto __LL8677;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8676 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8676 = NULL;
    }
    if (__tmp8676 == NULL) goto __LL8677;
    __tmp8676 = cpy_r_r2;
__LL8677: ;
    if (unlikely(__tmp8676 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8678 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8678);
        PyObject *__tmp8679;
        if (likely(PySet_Check(__tmp8678)))
            __tmp8679 = __tmp8678;
        else {
            CPy_TypeError("set", __tmp8678); 
            __tmp8679 = NULL;
        }
        cpy_r_r3.f0 = __tmp8679;
        PyObject *__tmp8680 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8680);
        PyObject *__tmp8681;
        if (likely(PySet_Check(__tmp8680)))
            __tmp8681 = __tmp8680;
        else {
            CPy_TypeError("set", __tmp8680); 
            __tmp8681 = NULL;
        }
        cpy_r_r3.f1 = __tmp8681;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_branch", 70, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8682 = { NULL, NULL };
    cpy_r_r4 = __tmp8682;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_branch(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8683 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8683);
    PyObject *__tmp8684 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8684);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_branch", 69, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8685 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8685);
    PyObject *__tmp8686 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8686);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6780]; /* 'DIRTY' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_return", 75, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8687;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8687 = NULL;
        goto __LL8688;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8687 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8687 = NULL;
    }
    if (__tmp8687 == NULL) goto __LL8688;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8687 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8687 = NULL;
    }
    if (__tmp8687 == NULL) goto __LL8688;
    __tmp8687 = cpy_r_r2;
__LL8688: ;
    if (unlikely(__tmp8687 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8689 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8689);
        PyObject *__tmp8690;
        if (likely(PySet_Check(__tmp8689)))
            __tmp8690 = __tmp8689;
        else {
            CPy_TypeError("set", __tmp8689); 
            __tmp8690 = NULL;
        }
        cpy_r_r3.f0 = __tmp8690;
        PyObject *__tmp8691 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8691);
        PyObject *__tmp8692;
        if (likely(PySet_Check(__tmp8691)))
            __tmp8692 = __tmp8691;
        else {
            CPy_TypeError("set", __tmp8691); 
            __tmp8692 = NULL;
        }
        cpy_r_r3.f1 = __tmp8692;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_return", 75, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8693 = { NULL, NULL };
    cpy_r_r4 = __tmp8693;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_return(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8694 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8694);
    PyObject *__tmp8695 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8695);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_return", 72, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8696 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8696);
    PyObject *__tmp8697 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8697);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_return__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unreachable", 78, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8698;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8698 = NULL;
        goto __LL8699;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8698 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8698 = NULL;
    }
    if (__tmp8698 == NULL) goto __LL8699;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8698 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8698 = NULL;
    }
    if (__tmp8698 == NULL) goto __LL8699;
    __tmp8698 = cpy_r_r2;
__LL8699: ;
    if (unlikely(__tmp8698 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8700 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8700);
        PyObject *__tmp8701;
        if (likely(PySet_Check(__tmp8700)))
            __tmp8701 = __tmp8700;
        else {
            CPy_TypeError("set", __tmp8700); 
            __tmp8701 = NULL;
        }
        cpy_r_r3.f0 = __tmp8701;
        PyObject *__tmp8702 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8702);
        PyObject *__tmp8703;
        if (likely(PySet_Check(__tmp8702)))
            __tmp8703 = __tmp8702;
        else {
            CPy_TypeError("set", __tmp8702); 
            __tmp8703 = NULL;
        }
        cpy_r_r3.f1 = __tmp8703;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unreachable", 78, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8704 = { NULL, NULL };
    cpy_r_r4 = __tmp8704;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8705 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8705);
    PyObject *__tmp8706 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8706);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unreachable", 77, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8707 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8707);
    PyObject *__tmp8708 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8708);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    cpy_r_r0 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/analysis/selfleaks.py", "visit_assign", "SelfLeakedVisitor", "self_reg", 81, CPyStatic_selfleaks___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/analysis/selfleaks.py", "visit_assign", "SelfLeakedVisitor", "self_reg", 81, CPyStatic_selfleaks___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = cpy_r_r3 == cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL7;
CPyL4: ;
    cpy_r_r6 = CPyStatic_selfleaks___globals;
    cpy_r_r7 = CPyStatics[6780]; /* 'DIRTY' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign", 82, CPyStatic_selfleaks___globals);
        goto CPyL10;
    }
    PyObject *__tmp8709;
    if (unlikely(!(PyTuple_Check(cpy_r_r8) && PyTuple_GET_SIZE(cpy_r_r8) == 2))) {
        __tmp8709 = NULL;
        goto __LL8710;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r8, 0))))
        __tmp8709 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp8709 = NULL;
    }
    if (__tmp8709 == NULL) goto __LL8710;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r8, 1))))
        __tmp8709 = PyTuple_GET_ITEM(cpy_r_r8, 1);
    else {
        __tmp8709 = NULL;
    }
    if (__tmp8709 == NULL) goto __LL8710;
    __tmp8709 = cpy_r_r8;
__LL8710: ;
    if (unlikely(__tmp8709 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r8); cpy_r_r9 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8711 = PyTuple_GET_ITEM(cpy_r_r8, 0);
        CPy_INCREF(__tmp8711);
        PyObject *__tmp8712;
        if (likely(PySet_Check(__tmp8711)))
            __tmp8712 = __tmp8711;
        else {
            CPy_TypeError("set", __tmp8711); 
            __tmp8712 = NULL;
        }
        cpy_r_r9.f0 = __tmp8712;
        PyObject *__tmp8713 = PyTuple_GET_ITEM(cpy_r_r8, 1);
        CPy_INCREF(__tmp8713);
        PyObject *__tmp8714;
        if (likely(PySet_Check(__tmp8713)))
            __tmp8714 = __tmp8713;
        else {
            CPy_TypeError("set", __tmp8713); 
            __tmp8714 = NULL;
        }
        cpy_r_r9.f1 = __tmp8714;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign", 82, CPyStatic_selfleaks___globals);
        goto CPyL10;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = CPyStatic_selfleaks___globals;
    cpy_r_r11 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign", 83, CPyStatic_selfleaks___globals);
        goto CPyL10;
    }
    PyObject *__tmp8715;
    if (unlikely(!(PyTuple_Check(cpy_r_r12) && PyTuple_GET_SIZE(cpy_r_r12) == 2))) {
        __tmp8715 = NULL;
        goto __LL8716;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r12, 0))))
        __tmp8715 = PyTuple_GET_ITEM(cpy_r_r12, 0);
    else {
        __tmp8715 = NULL;
    }
    if (__tmp8715 == NULL) goto __LL8716;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r12, 1))))
        __tmp8715 = PyTuple_GET_ITEM(cpy_r_r12, 1);
    else {
        __tmp8715 = NULL;
    }
    if (__tmp8715 == NULL) goto __LL8716;
    __tmp8715 = cpy_r_r12;
__LL8716: ;
    if (unlikely(__tmp8715 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r12); cpy_r_r13 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8717 = PyTuple_GET_ITEM(cpy_r_r12, 0);
        CPy_INCREF(__tmp8717);
        PyObject *__tmp8718;
        if (likely(PySet_Check(__tmp8717)))
            __tmp8718 = __tmp8717;
        else {
            CPy_TypeError("set", __tmp8717); 
            __tmp8718 = NULL;
        }
        cpy_r_r13.f0 = __tmp8718;
        PyObject *__tmp8719 = PyTuple_GET_ITEM(cpy_r_r12, 1);
        CPy_INCREF(__tmp8719);
        PyObject *__tmp8720;
        if (likely(PySet_Check(__tmp8719)))
            __tmp8720 = __tmp8719;
        else {
            CPy_TypeError("set", __tmp8719); 
            __tmp8720 = NULL;
        }
        cpy_r_r13.f1 = __tmp8720;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign", 83, CPyStatic_selfleaks___globals);
        goto CPyL10;
    }
    return cpy_r_r13;
CPyL10: ;
    tuple_T2OO __tmp8721 = { NULL, NULL };
    cpy_r_r14 = __tmp8721;
    return cpy_r_r14;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8722 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8722);
    PyObject *__tmp8723 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8723);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign", 80, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8724 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8724);
    PyObject *__tmp8725 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8725);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign_multi", 86, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8726;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8726 = NULL;
        goto __LL8727;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8726 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8726 = NULL;
    }
    if (__tmp8726 == NULL) goto __LL8727;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8726 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8726 = NULL;
    }
    if (__tmp8726 == NULL) goto __LL8727;
    __tmp8726 = cpy_r_r2;
__LL8727: ;
    if (unlikely(__tmp8726 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8728 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8728);
        PyObject *__tmp8729;
        if (likely(PySet_Check(__tmp8728)))
            __tmp8729 = __tmp8728;
        else {
            CPy_TypeError("set", __tmp8728); 
            __tmp8729 = NULL;
        }
        cpy_r_r3.f0 = __tmp8729;
        PyObject *__tmp8730 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8730);
        PyObject *__tmp8731;
        if (likely(PySet_Check(__tmp8730)))
            __tmp8731 = __tmp8730;
        else {
            CPy_TypeError("set", __tmp8730); 
            __tmp8731 = NULL;
        }
        cpy_r_r3.f1 = __tmp8731;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign_multi", 86, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8732 = { NULL, NULL };
    cpy_r_r4 = __tmp8732;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8733 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8733);
    PyObject *__tmp8734 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8734);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign_multi", 85, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8735 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8735);
    PyObject *__tmp8736 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8736);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_mem", 89, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8737;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8737 = NULL;
        goto __LL8738;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8737 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8737 = NULL;
    }
    if (__tmp8737 == NULL) goto __LL8738;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8737 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8737 = NULL;
    }
    if (__tmp8737 == NULL) goto __LL8738;
    __tmp8737 = cpy_r_r2;
__LL8738: ;
    if (unlikely(__tmp8737 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8739 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8739);
        PyObject *__tmp8740;
        if (likely(PySet_Check(__tmp8739)))
            __tmp8740 = __tmp8739;
        else {
            CPy_TypeError("set", __tmp8739); 
            __tmp8740 = NULL;
        }
        cpy_r_r3.f0 = __tmp8740;
        PyObject *__tmp8741 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8741);
        PyObject *__tmp8742;
        if (likely(PySet_Check(__tmp8741)))
            __tmp8742 = __tmp8741;
        else {
            CPy_TypeError("set", __tmp8741); 
            __tmp8742 = NULL;
        }
        cpy_r_r3.f1 = __tmp8742;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_mem", 89, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8743 = { NULL, NULL };
    cpy_r_r4 = __tmp8743;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8744 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8744);
    PyObject *__tmp8745 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8745);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_mem", 88, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8746 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8746);
    PyObject *__tmp8747 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8747);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
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
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_self_type;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_cl;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    cpy_r_r0 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fn = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_class_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL21;
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/selfleaks.py", "visit_call", 93, CPyStatic_selfleaks___globals, "str", cpy_r_r1);
        goto CPyL22;
    }
    cpy_r_r5 = CPyStr_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL23;
    cpy_r_r6 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_name;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_fn);
    cpy_r_r7 = CPyStatics[288]; /* '__init__' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 93, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
CPyL6: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL18;
    cpy_r_r14 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r14)->_sig;
    cpy_r_r16 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r15)->_args;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_r16, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 94, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_func_ir___RuntimeArg))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/selfleaks.py", "visit_call", 94, CPyStatic_selfleaks___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_r19 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r18)->_type;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_self_type = cpy_r_r19;
    cpy_r_r20 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_self_type)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (cpy_r_r23) {
        goto CPyL12;
    } else
        goto CPyL24;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 95, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_self_type) == CPyType_rtypes___RInstance))
        cpy_r_r25 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/selfleaks.py", "visit_call", 96, CPyStatic_selfleaks___globals, "mypyc.ir.rtypes.RInstance", cpy_r_self_type);
        goto CPyL25;
    }
    cpy_r_r26 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r25)->_class_ir;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_self_type);
    cpy_r_cl = cpy_r_r26;
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_init_self_leak;
    if (unlikely(cpy_r_r27 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'init_self_leak' of 'ClassIR' undefined");
    }
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 97, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
CPyL14: ;
    if (cpy_r_r27) goto CPyL18;
CPyL15: ;
    cpy_r_r28 = CPyStatic_selfleaks___globals;
    cpy_r_r29 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 98, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
    PyObject *__tmp8748;
    if (unlikely(!(PyTuple_Check(cpy_r_r30) && PyTuple_GET_SIZE(cpy_r_r30) == 2))) {
        __tmp8748 = NULL;
        goto __LL8749;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r30, 0))))
        __tmp8748 = PyTuple_GET_ITEM(cpy_r_r30, 0);
    else {
        __tmp8748 = NULL;
    }
    if (__tmp8748 == NULL) goto __LL8749;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r30, 1))))
        __tmp8748 = PyTuple_GET_ITEM(cpy_r_r30, 1);
    else {
        __tmp8748 = NULL;
    }
    if (__tmp8748 == NULL) goto __LL8749;
    __tmp8748 = cpy_r_r30;
__LL8749: ;
    if (unlikely(__tmp8748 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r30); cpy_r_r31 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8750 = PyTuple_GET_ITEM(cpy_r_r30, 0);
        CPy_INCREF(__tmp8750);
        PyObject *__tmp8751;
        if (likely(PySet_Check(__tmp8750)))
            __tmp8751 = __tmp8750;
        else {
            CPy_TypeError("set", __tmp8750); 
            __tmp8751 = NULL;
        }
        cpy_r_r31.f0 = __tmp8751;
        PyObject *__tmp8752 = PyTuple_GET_ITEM(cpy_r_r30, 1);
        CPy_INCREF(__tmp8752);
        PyObject *__tmp8753;
        if (likely(PySet_Check(__tmp8752)))
            __tmp8753 = __tmp8752;
        else {
            CPy_TypeError("set", __tmp8752); 
            __tmp8753 = NULL;
        }
        cpy_r_r31.f1 = __tmp8753;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 98, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 99, CPyStatic_selfleaks___globals);
        goto CPyL20;
    }
    return cpy_r_r32;
CPyL20: ;
    tuple_T2OO __tmp8754 = { NULL, NULL };
    cpy_r_r33 = __tmp8754;
    return cpy_r_r33;
CPyL21: ;
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_r1);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_fn);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL18;
CPyL24: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL10;
CPyL25: ;
    CPy_DecRef(cpy_r_self_type);
    goto CPyL20;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_call(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8755 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8755);
    PyObject *__tmp8756 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8756);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call", 91, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8757 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8757);
    PyObject *__tmp8758 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8758);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_method_call", 102, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8759 = { NULL, NULL };
    cpy_r_r1 = __tmp8759;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8760 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8760);
    PyObject *__tmp8761 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8761);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_method_call", 101, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8762 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8762);
    PyObject *__tmp8763 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8763);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_method_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_method_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_method_call__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_error_value", 105, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8764;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8764 = NULL;
        goto __LL8765;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8764 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8764 = NULL;
    }
    if (__tmp8764 == NULL) goto __LL8765;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8764 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8764 = NULL;
    }
    if (__tmp8764 == NULL) goto __LL8765;
    __tmp8764 = cpy_r_r2;
__LL8765: ;
    if (unlikely(__tmp8764 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8766 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8766);
        PyObject *__tmp8767;
        if (likely(PySet_Check(__tmp8766)))
            __tmp8767 = __tmp8766;
        else {
            CPy_TypeError("set", __tmp8766); 
            __tmp8767 = NULL;
        }
        cpy_r_r3.f0 = __tmp8767;
        PyObject *__tmp8768 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8768);
        PyObject *__tmp8769;
        if (likely(PySet_Check(__tmp8768)))
            __tmp8769 = __tmp8768;
        else {
            CPy_TypeError("set", __tmp8768); 
            __tmp8769 = NULL;
        }
        cpy_r_r3.f1 = __tmp8769;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_error_value", 105, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8770 = { NULL, NULL };
    cpy_r_r4 = __tmp8770;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8771 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8771);
    PyObject *__tmp8772 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8772);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_error_value", 104, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8773 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8773);
    PyObject *__tmp8774 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8774);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_error_value__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_error_value__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_error_value__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_literal", 108, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8775;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8775 = NULL;
        goto __LL8776;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8775 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8775 = NULL;
    }
    if (__tmp8775 == NULL) goto __LL8776;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8775 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8775 = NULL;
    }
    if (__tmp8775 == NULL) goto __LL8776;
    __tmp8775 = cpy_r_r2;
__LL8776: ;
    if (unlikely(__tmp8775 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8777 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8777);
        PyObject *__tmp8778;
        if (likely(PySet_Check(__tmp8777)))
            __tmp8778 = __tmp8777;
        else {
            CPy_TypeError("set", __tmp8777); 
            __tmp8778 = NULL;
        }
        cpy_r_r3.f0 = __tmp8778;
        PyObject *__tmp8779 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8779);
        PyObject *__tmp8780;
        if (likely(PySet_Check(__tmp8779)))
            __tmp8780 = __tmp8779;
        else {
            CPy_TypeError("set", __tmp8779); 
            __tmp8780 = NULL;
        }
        cpy_r_r3.f1 = __tmp8780;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_literal", 108, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8781 = { NULL, NULL };
    cpy_r_r4 = __tmp8781;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8782 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8782);
    PyObject *__tmp8783 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8783);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_literal", 107, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8784 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8784);
    PyObject *__tmp8785 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8785);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_literal__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_literal__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_literal__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    cpy_r_r0 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_class_type;
    cpy_r_r1 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r0)->_class_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_cl = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr", 112, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr", 114, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyStatic_selfleaks___globals;
    cpy_r_r9 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr", 115, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    PyObject *__tmp8786;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        __tmp8786 = NULL;
        goto __LL8787;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r10, 0))))
        __tmp8786 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        __tmp8786 = NULL;
    }
    if (__tmp8786 == NULL) goto __LL8787;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r10, 1))))
        __tmp8786 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    else {
        __tmp8786 = NULL;
    }
    if (__tmp8786 == NULL) goto __LL8787;
    __tmp8786 = cpy_r_r10;
__LL8787: ;
    if (unlikely(__tmp8786 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r10); cpy_r_r11 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8788 = PyTuple_GET_ITEM(cpy_r_r10, 0);
        CPy_INCREF(__tmp8788);
        PyObject *__tmp8789;
        if (likely(PySet_Check(__tmp8788)))
            __tmp8789 = __tmp8788;
        else {
            CPy_TypeError("set", __tmp8788); 
            __tmp8789 = NULL;
        }
        cpy_r_r11.f0 = __tmp8789;
        PyObject *__tmp8790 = PyTuple_GET_ITEM(cpy_r_r10, 1);
        CPy_INCREF(__tmp8790);
        PyObject *__tmp8791;
        if (likely(PySet_Check(__tmp8790)))
            __tmp8791 = __tmp8790;
        else {
            CPy_TypeError("set", __tmp8790); 
            __tmp8791 = NULL;
        }
        cpy_r_r11.f1 = __tmp8791;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr", 115, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    return cpy_r_r11;
CPyL7: ;
    tuple_T2OO __tmp8792 = { NULL, NULL };
    cpy_r_r12 = __tmp8792;
    return cpy_r_r12;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8793 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8793);
    PyObject *__tmp8794 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8794);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr", 110, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8795 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8795);
    PyObject *__tmp8796 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8796);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_get_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_attr__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    cpy_r_r0 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_class_type;
    cpy_r_r1 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r0)->_class_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_cl = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr", 119, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr", 121, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyStatic_selfleaks___globals;
    cpy_r_r9 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr", 122, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    PyObject *__tmp8797;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        __tmp8797 = NULL;
        goto __LL8798;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r10, 0))))
        __tmp8797 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        __tmp8797 = NULL;
    }
    if (__tmp8797 == NULL) goto __LL8798;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r10, 1))))
        __tmp8797 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    else {
        __tmp8797 = NULL;
    }
    if (__tmp8797 == NULL) goto __LL8798;
    __tmp8797 = cpy_r_r10;
__LL8798: ;
    if (unlikely(__tmp8797 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r10); cpy_r_r11 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8799 = PyTuple_GET_ITEM(cpy_r_r10, 0);
        CPy_INCREF(__tmp8799);
        PyObject *__tmp8800;
        if (likely(PySet_Check(__tmp8799)))
            __tmp8800 = __tmp8799;
        else {
            CPy_TypeError("set", __tmp8799); 
            __tmp8800 = NULL;
        }
        cpy_r_r11.f0 = __tmp8800;
        PyObject *__tmp8801 = PyTuple_GET_ITEM(cpy_r_r10, 1);
        CPy_INCREF(__tmp8801);
        PyObject *__tmp8802;
        if (likely(PySet_Check(__tmp8801)))
            __tmp8802 = __tmp8801;
        else {
            CPy_TypeError("set", __tmp8801); 
            __tmp8802 = NULL;
        }
        cpy_r_r11.f1 = __tmp8802;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr", 122, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    return cpy_r_r11;
CPyL7: ;
    tuple_T2OO __tmp8803 = { NULL, NULL };
    cpy_r_r12 = __tmp8803;
    return cpy_r_r12;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_set_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8804 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8804);
    PyObject *__tmp8805 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8805);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr", 117, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8806 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8806);
    PyObject *__tmp8807 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8807);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_set_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_set_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_set_attr__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_static", 125, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8808;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8808 = NULL;
        goto __LL8809;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8808 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8808 = NULL;
    }
    if (__tmp8808 == NULL) goto __LL8809;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8808 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8808 = NULL;
    }
    if (__tmp8808 == NULL) goto __LL8809;
    __tmp8808 = cpy_r_r2;
__LL8809: ;
    if (unlikely(__tmp8808 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8810 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8810);
        PyObject *__tmp8811;
        if (likely(PySet_Check(__tmp8810)))
            __tmp8811 = __tmp8810;
        else {
            CPy_TypeError("set", __tmp8810); 
            __tmp8811 = NULL;
        }
        cpy_r_r3.f0 = __tmp8811;
        PyObject *__tmp8812 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8812);
        PyObject *__tmp8813;
        if (likely(PySet_Check(__tmp8812)))
            __tmp8813 = __tmp8812;
        else {
            CPy_TypeError("set", __tmp8812); 
            __tmp8813 = NULL;
        }
        cpy_r_r3.f1 = __tmp8813;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_static", 125, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8814 = { NULL, NULL };
    cpy_r_r4 = __tmp8814;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8815 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8815);
    PyObject *__tmp8816 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8816);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_static", 124, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8817 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8817);
    PyObject *__tmp8818 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8818);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_static__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_init_static", 128, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8819 = { NULL, NULL };
    cpy_r_r1 = __tmp8819;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_init_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8820 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8820);
    PyObject *__tmp8821 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8821);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_init_static", 127, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8822 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8822);
    PyObject *__tmp8823 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8823);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_init_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_init_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_init_static__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_get", 131, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8824;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8824 = NULL;
        goto __LL8825;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8824 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8824 = NULL;
    }
    if (__tmp8824 == NULL) goto __LL8825;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8824 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8824 = NULL;
    }
    if (__tmp8824 == NULL) goto __LL8825;
    __tmp8824 = cpy_r_r2;
__LL8825: ;
    if (unlikely(__tmp8824 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8826 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8826);
        PyObject *__tmp8827;
        if (likely(PySet_Check(__tmp8826)))
            __tmp8827 = __tmp8826;
        else {
            CPy_TypeError("set", __tmp8826); 
            __tmp8827 = NULL;
        }
        cpy_r_r3.f0 = __tmp8827;
        PyObject *__tmp8828 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8828);
        PyObject *__tmp8829;
        if (likely(PySet_Check(__tmp8828)))
            __tmp8829 = __tmp8828;
        else {
            CPy_TypeError("set", __tmp8828); 
            __tmp8829 = NULL;
        }
        cpy_r_r3.f1 = __tmp8829;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_get", 131, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8830 = { NULL, NULL };
    cpy_r_r4 = __tmp8830;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8831 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8831);
    PyObject *__tmp8832 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8832);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_get", 130, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8833 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8833);
    PyObject *__tmp8834 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8834);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_get__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_get__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_get__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_set", 134, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8835 = { NULL, NULL };
    cpy_r_r1 = __tmp8835;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8836 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8836);
    PyObject *__tmp8837 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8837);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_set", 133, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8838 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8838);
    PyObject *__tmp8839 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8839);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_tuple_set__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_tuple_set__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_tuple_set__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_box(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_box", 137, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8840 = { NULL, NULL };
    cpy_r_r1 = __tmp8840;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_box(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8841 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8841);
    PyObject *__tmp8842 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8842);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_box", 136, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_box__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_box(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8843 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8843);
    PyObject *__tmp8844 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8844);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_box__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_box__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_box__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unbox", 140, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8845 = { NULL, NULL };
    cpy_r_r1 = __tmp8845;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8846 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8846);
    PyObject *__tmp8847 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8847);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unbox", 139, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8848 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8848);
    PyObject *__tmp8849 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8849);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_unbox__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_unbox__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_unbox__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_cast(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_cast", 143, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8850 = { NULL, NULL };
    cpy_r_r1 = __tmp8850;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_cast(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8851 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8851);
    PyObject *__tmp8852 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8852);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_cast", 142, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_cast__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_cast(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8853 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8853);
    PyObject *__tmp8854 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8854);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_cast__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_cast__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_cast__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_raise_standard_error", 146, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8855;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8855 = NULL;
        goto __LL8856;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8855 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8855 = NULL;
    }
    if (__tmp8855 == NULL) goto __LL8856;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8855 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8855 = NULL;
    }
    if (__tmp8855 == NULL) goto __LL8856;
    __tmp8855 = cpy_r_r2;
__LL8856: ;
    if (unlikely(__tmp8855 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8857 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8857);
        PyObject *__tmp8858;
        if (likely(PySet_Check(__tmp8857)))
            __tmp8858 = __tmp8857;
        else {
            CPy_TypeError("set", __tmp8857); 
            __tmp8858 = NULL;
        }
        cpy_r_r3.f0 = __tmp8858;
        PyObject *__tmp8859 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8859);
        PyObject *__tmp8860;
        if (likely(PySet_Check(__tmp8859)))
            __tmp8860 = __tmp8859;
        else {
            CPy_TypeError("set", __tmp8859); 
            __tmp8860 = NULL;
        }
        cpy_r_r3.f1 = __tmp8860;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_raise_standard_error", 146, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8861 = { NULL, NULL };
    cpy_r_r4 = __tmp8861;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_raise_standard_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8862 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8862);
    PyObject *__tmp8863 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8863);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_raise_standard_error", 145, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8864 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8864);
    PyObject *__tmp8865 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8865);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_raise_standard_error__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_raise_standard_error__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    tuple_T2OO cpy_r_r1;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call_c", 149, CPyStatic_selfleaks___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    tuple_T2OO __tmp8866 = { NULL, NULL };
    cpy_r_r1 = __tmp8866;
    return cpy_r_r1;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8867 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8867);
    PyObject *__tmp8868 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8868);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call_c", 148, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8869 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8869);
    PyObject *__tmp8870 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8870);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_call_c__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_call_c__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_call_c__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_truncate", 152, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8871;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8871 = NULL;
        goto __LL8872;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8871 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8871 = NULL;
    }
    if (__tmp8871 == NULL) goto __LL8872;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8871 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8871 = NULL;
    }
    if (__tmp8871 == NULL) goto __LL8872;
    __tmp8871 = cpy_r_r2;
__LL8872: ;
    if (unlikely(__tmp8871 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8873 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8873);
        PyObject *__tmp8874;
        if (likely(PySet_Check(__tmp8873)))
            __tmp8874 = __tmp8873;
        else {
            CPy_TypeError("set", __tmp8873); 
            __tmp8874 = NULL;
        }
        cpy_r_r3.f0 = __tmp8874;
        PyObject *__tmp8875 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8875);
        PyObject *__tmp8876;
        if (likely(PySet_Check(__tmp8875)))
            __tmp8876 = __tmp8875;
        else {
            CPy_TypeError("set", __tmp8875); 
            __tmp8876 = NULL;
        }
        cpy_r_r3.f1 = __tmp8876;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_truncate", 152, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8877 = { NULL, NULL };
    cpy_r_r4 = __tmp8877;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_truncate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8878 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8878);
    PyObject *__tmp8879 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8879);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_truncate", 151, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8880 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8880);
    PyObject *__tmp8881 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8881);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_truncate__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_truncate__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_truncate__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_extend(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_extend", 155, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8882;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8882 = NULL;
        goto __LL8883;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8882 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8882 = NULL;
    }
    if (__tmp8882 == NULL) goto __LL8883;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8882 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8882 = NULL;
    }
    if (__tmp8882 == NULL) goto __LL8883;
    __tmp8882 = cpy_r_r2;
__LL8883: ;
    if (unlikely(__tmp8882 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8884 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8884);
        PyObject *__tmp8885;
        if (likely(PySet_Check(__tmp8884)))
            __tmp8885 = __tmp8884;
        else {
            CPy_TypeError("set", __tmp8884); 
            __tmp8885 = NULL;
        }
        cpy_r_r3.f0 = __tmp8885;
        PyObject *__tmp8886 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8886);
        PyObject *__tmp8887;
        if (likely(PySet_Check(__tmp8886)))
            __tmp8887 = __tmp8886;
        else {
            CPy_TypeError("set", __tmp8886); 
            __tmp8887 = NULL;
        }
        cpy_r_r3.f1 = __tmp8887;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_extend", 155, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8888 = { NULL, NULL };
    cpy_r_r4 = __tmp8888;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_extend(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_extend(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8889 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8889);
    PyObject *__tmp8890 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8890);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_extend", 154, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_extend__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_extend(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8891 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8891);
    PyObject *__tmp8892 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8892);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_extend__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_extend__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_extend__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_global", 158, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8893;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8893 = NULL;
        goto __LL8894;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8893 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8893 = NULL;
    }
    if (__tmp8893 == NULL) goto __LL8894;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8893 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8893 = NULL;
    }
    if (__tmp8893 == NULL) goto __LL8894;
    __tmp8893 = cpy_r_r2;
__LL8894: ;
    if (unlikely(__tmp8893 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8895 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8895);
        PyObject *__tmp8896;
        if (likely(PySet_Check(__tmp8895)))
            __tmp8896 = __tmp8895;
        else {
            CPy_TypeError("set", __tmp8895); 
            __tmp8896 = NULL;
        }
        cpy_r_r3.f0 = __tmp8896;
        PyObject *__tmp8897 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8897);
        PyObject *__tmp8898;
        if (likely(PySet_Check(__tmp8897)))
            __tmp8898 = __tmp8897;
        else {
            CPy_TypeError("set", __tmp8897); 
            __tmp8898 = NULL;
        }
        cpy_r_r3.f1 = __tmp8898;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_global", 158, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8899 = { NULL, NULL };
    cpy_r_r4 = __tmp8899;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8900 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8900);
    PyObject *__tmp8901 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8901);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_global", 157, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8902 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8902);
    PyObject *__tmp8903 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8903);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_global__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_global__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_global__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_int_op", 161, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8904;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8904 = NULL;
        goto __LL8905;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8904 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8904 = NULL;
    }
    if (__tmp8904 == NULL) goto __LL8905;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8904 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8904 = NULL;
    }
    if (__tmp8904 == NULL) goto __LL8905;
    __tmp8904 = cpy_r_r2;
__LL8905: ;
    if (unlikely(__tmp8904 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8906 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8906);
        PyObject *__tmp8907;
        if (likely(PySet_Check(__tmp8906)))
            __tmp8907 = __tmp8906;
        else {
            CPy_TypeError("set", __tmp8906); 
            __tmp8907 = NULL;
        }
        cpy_r_r3.f0 = __tmp8907;
        PyObject *__tmp8908 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8908);
        PyObject *__tmp8909;
        if (likely(PySet_Check(__tmp8908)))
            __tmp8909 = __tmp8908;
        else {
            CPy_TypeError("set", __tmp8908); 
            __tmp8909 = NULL;
        }
        cpy_r_r3.f1 = __tmp8909;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_int_op", 161, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8910 = { NULL, NULL };
    cpy_r_r4 = __tmp8910;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8911 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8911);
    PyObject *__tmp8912 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8912);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_int_op", 160, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8913 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8913);
    PyObject *__tmp8914 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8914);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_int_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_int_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_int_op__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_comparison_op", 164, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8915;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8915 = NULL;
        goto __LL8916;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8915 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8915 = NULL;
    }
    if (__tmp8915 == NULL) goto __LL8916;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8915 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8915 = NULL;
    }
    if (__tmp8915 == NULL) goto __LL8916;
    __tmp8915 = cpy_r_r2;
__LL8916: ;
    if (unlikely(__tmp8915 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8917 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8917);
        PyObject *__tmp8918;
        if (likely(PySet_Check(__tmp8917)))
            __tmp8918 = __tmp8917;
        else {
            CPy_TypeError("set", __tmp8917); 
            __tmp8918 = NULL;
        }
        cpy_r_r3.f0 = __tmp8918;
        PyObject *__tmp8919 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8919);
        PyObject *__tmp8920;
        if (likely(PySet_Check(__tmp8919)))
            __tmp8920 = __tmp8919;
        else {
            CPy_TypeError("set", __tmp8919); 
            __tmp8920 = NULL;
        }
        cpy_r_r3.f1 = __tmp8920;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_comparison_op", 164, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8921 = { NULL, NULL };
    cpy_r_r4 = __tmp8921;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8922 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8922);
    PyObject *__tmp8923 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8923);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_comparison_op", 163, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8924 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8924);
    PyObject *__tmp8925 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8925);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_comparison_op__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_op", 167, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8926;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8926 = NULL;
        goto __LL8927;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8926 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8926 = NULL;
    }
    if (__tmp8926 == NULL) goto __LL8927;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8926 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8926 = NULL;
    }
    if (__tmp8926 == NULL) goto __LL8927;
    __tmp8926 = cpy_r_r2;
__LL8927: ;
    if (unlikely(__tmp8926 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8928 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8928);
        PyObject *__tmp8929;
        if (likely(PySet_Check(__tmp8928)))
            __tmp8929 = __tmp8928;
        else {
            CPy_TypeError("set", __tmp8928); 
            __tmp8929 = NULL;
        }
        cpy_r_r3.f0 = __tmp8929;
        PyObject *__tmp8930 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8930);
        PyObject *__tmp8931;
        if (likely(PySet_Check(__tmp8930)))
            __tmp8931 = __tmp8930;
        else {
            CPy_TypeError("set", __tmp8930); 
            __tmp8931 = NULL;
        }
        cpy_r_r3.f1 = __tmp8931;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_op", 167, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8932 = { NULL, NULL };
    cpy_r_r4 = __tmp8932;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8933 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8933);
    PyObject *__tmp8934 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8934);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_op", 166, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8935 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8935);
    PyObject *__tmp8936 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8936);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_op__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_neg", 170, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8937;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8937 = NULL;
        goto __LL8938;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8937 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8937 = NULL;
    }
    if (__tmp8937 == NULL) goto __LL8938;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8937 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8937 = NULL;
    }
    if (__tmp8937 == NULL) goto __LL8938;
    __tmp8937 = cpy_r_r2;
__LL8938: ;
    if (unlikely(__tmp8937 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8939 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8939);
        PyObject *__tmp8940;
        if (likely(PySet_Check(__tmp8939)))
            __tmp8940 = __tmp8939;
        else {
            CPy_TypeError("set", __tmp8939); 
            __tmp8940 = NULL;
        }
        cpy_r_r3.f0 = __tmp8940;
        PyObject *__tmp8941 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8941);
        PyObject *__tmp8942;
        if (likely(PySet_Check(__tmp8941)))
            __tmp8942 = __tmp8941;
        else {
            CPy_TypeError("set", __tmp8941); 
            __tmp8942 = NULL;
        }
        cpy_r_r3.f1 = __tmp8942;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_neg", 170, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8943 = { NULL, NULL };
    cpy_r_r4 = __tmp8943;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_neg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8944 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8944);
    PyObject *__tmp8945 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8945);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_neg", 169, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8946 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8946);
    PyObject *__tmp8947 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8947);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_neg__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_neg__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_neg__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_comparison_op", 173, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8948;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8948 = NULL;
        goto __LL8949;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8948 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8948 = NULL;
    }
    if (__tmp8948 == NULL) goto __LL8949;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8948 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8948 = NULL;
    }
    if (__tmp8948 == NULL) goto __LL8949;
    __tmp8948 = cpy_r_r2;
__LL8949: ;
    if (unlikely(__tmp8948 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8950 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8950);
        PyObject *__tmp8951;
        if (likely(PySet_Check(__tmp8950)))
            __tmp8951 = __tmp8950;
        else {
            CPy_TypeError("set", __tmp8950); 
            __tmp8951 = NULL;
        }
        cpy_r_r3.f0 = __tmp8951;
        PyObject *__tmp8952 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8952);
        PyObject *__tmp8953;
        if (likely(PySet_Check(__tmp8952)))
            __tmp8953 = __tmp8952;
        else {
            CPy_TypeError("set", __tmp8952); 
            __tmp8953 = NULL;
        }
        cpy_r_r3.f1 = __tmp8953;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_comparison_op", 173, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8954 = { NULL, NULL };
    cpy_r_r4 = __tmp8954;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8955 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8955);
    PyObject *__tmp8956 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8956);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_comparison_op", 172, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8957 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8957);
    PyObject *__tmp8958 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8958);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_float_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_float_comparison_op__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_mem", 176, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8959;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8959 = NULL;
        goto __LL8960;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8959 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8959 = NULL;
    }
    if (__tmp8959 == NULL) goto __LL8960;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8959 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8959 = NULL;
    }
    if (__tmp8959 == NULL) goto __LL8960;
    __tmp8959 = cpy_r_r2;
__LL8960: ;
    if (unlikely(__tmp8959 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8961 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8961);
        PyObject *__tmp8962;
        if (likely(PySet_Check(__tmp8961)))
            __tmp8962 = __tmp8961;
        else {
            CPy_TypeError("set", __tmp8961); 
            __tmp8962 = NULL;
        }
        cpy_r_r3.f0 = __tmp8962;
        PyObject *__tmp8963 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8963);
        PyObject *__tmp8964;
        if (likely(PySet_Check(__tmp8963)))
            __tmp8964 = __tmp8963;
        else {
            CPy_TypeError("set", __tmp8963); 
            __tmp8964 = NULL;
        }
        cpy_r_r3.f1 = __tmp8964;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_mem", 176, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8965 = { NULL, NULL };
    cpy_r_r4 = __tmp8965;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8966 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8966);
    PyObject *__tmp8967 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8967);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_mem", 175, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8968 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8968);
    PyObject *__tmp8969 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8969);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_mem__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_element_ptr", 179, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8970;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8970 = NULL;
        goto __LL8971;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8970 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8970 = NULL;
    }
    if (__tmp8970 == NULL) goto __LL8971;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8970 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8970 = NULL;
    }
    if (__tmp8970 == NULL) goto __LL8971;
    __tmp8970 = cpy_r_r2;
__LL8971: ;
    if (unlikely(__tmp8970 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8972 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8972);
        PyObject *__tmp8973;
        if (likely(PySet_Check(__tmp8972)))
            __tmp8973 = __tmp8972;
        else {
            CPy_TypeError("set", __tmp8972); 
            __tmp8973 = NULL;
        }
        cpy_r_r3.f0 = __tmp8973;
        PyObject *__tmp8974 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8974);
        PyObject *__tmp8975;
        if (likely(PySet_Check(__tmp8974)))
            __tmp8975 = __tmp8974;
        else {
            CPy_TypeError("set", __tmp8974); 
            __tmp8975 = NULL;
        }
        cpy_r_r3.f1 = __tmp8975;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_element_ptr", 179, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8976 = { NULL, NULL };
    cpy_r_r4 = __tmp8976;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_get_element_ptr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8977 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8977);
    PyObject *__tmp8978 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8978);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_element_ptr", 178, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8979 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8979);
    PyObject *__tmp8980 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8980);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_get_element_ptr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_get_element_ptr__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_address", 182, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8981;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8981 = NULL;
        goto __LL8982;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8981 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8981 = NULL;
    }
    if (__tmp8981 == NULL) goto __LL8982;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8981 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8981 = NULL;
    }
    if (__tmp8981 == NULL) goto __LL8982;
    __tmp8981 = cpy_r_r2;
__LL8982: ;
    if (unlikely(__tmp8981 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8983 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8983);
        PyObject *__tmp8984;
        if (likely(PySet_Check(__tmp8983)))
            __tmp8984 = __tmp8983;
        else {
            CPy_TypeError("set", __tmp8983); 
            __tmp8984 = NULL;
        }
        cpy_r_r3.f0 = __tmp8984;
        PyObject *__tmp8985 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8985);
        PyObject *__tmp8986;
        if (likely(PySet_Check(__tmp8985)))
            __tmp8986 = __tmp8985;
        else {
            CPy_TypeError("set", __tmp8985); 
            __tmp8986 = NULL;
        }
        cpy_r_r3.f1 = __tmp8986;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_address", 182, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8987 = { NULL, NULL };
    cpy_r_r4 = __tmp8987;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8988 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8988);
    PyObject *__tmp8989 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8989);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_address", 181, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8990 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp8990);
    PyObject *__tmp8991 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp8991);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_load_address__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_load_address__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_load_address__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    cpy_r_r0 = CPyStatic_selfleaks___globals;
    cpy_r_r1 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_keep_alive", 185, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    PyObject *__tmp8992;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp8992 = NULL;
        goto __LL8993;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 0))))
        __tmp8992 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    else {
        __tmp8992 = NULL;
    }
    if (__tmp8992 == NULL) goto __LL8993;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r2, 1))))
        __tmp8992 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    else {
        __tmp8992 = NULL;
    }
    if (__tmp8992 == NULL) goto __LL8993;
    __tmp8992 = cpy_r_r2;
__LL8993: ;
    if (unlikely(__tmp8992 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8994 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp8994);
        PyObject *__tmp8995;
        if (likely(PySet_Check(__tmp8994)))
            __tmp8995 = __tmp8994;
        else {
            CPy_TypeError("set", __tmp8994); 
            __tmp8995 = NULL;
        }
        cpy_r_r3.f0 = __tmp8995;
        PyObject *__tmp8996 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp8996);
        PyObject *__tmp8997;
        if (likely(PySet_Check(__tmp8996)))
            __tmp8997 = __tmp8996;
        else {
            CPy_TypeError("set", __tmp8996); 
            __tmp8997 = NULL;
        }
        cpy_r_r3.f1 = __tmp8997;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_keep_alive", 185, CPyStatic_selfleaks___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    tuple_T2OO __tmp8998 = { NULL, NULL };
    cpy_r_r4 = __tmp8998;
    return cpy_r_r4;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_keep_alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8999 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8999);
    PyObject *__tmp9000 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9000);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_keep_alive", 184, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive(cpy_r_self, cpy_r_op);
    if (cpy_r_r0.f0 == NULL) goto CPyL2;
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9001 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp9001);
    PyObject *__tmp9002 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp9002);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___visit_keep_alive__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___SelfLeakedVisitor___visit_keep_alive__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "visit_keep_alive__OpVisitor_glue", -1, CPyStatic_selfleaks___globals);
    return NULL;
}

tuple_T2OO CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    cpy_r_r0 = 0;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___RegisterOp, 4, mypyc___ir___ops___RegisterOpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* sources */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 188, CPyStatic_selfleaks___globals);
        goto CPyL15;
    }
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL16;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_ops___Value)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 188, CPyStatic_selfleaks___globals, "mypyc.ir.ops.Value", cpy_r_r7);
        goto CPyL17;
    }
    cpy_r_src = cpy_r_r8;
    cpy_r_r9 = ((mypyc___analysis___selfleaks___SelfLeakedVisitorObject *)cpy_r_self)->_self_reg;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/analysis/selfleaks.py", "check_register_op", "SelfLeakedVisitor", "self_reg", 188, CPyStatic_selfleaks___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = cpy_r_src == cpy_r_r9;
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10) {
        goto CPyL19;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r0 = 1;
    goto CPyL8;
CPyL7: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL8: ;
    if (!cpy_r_r0) goto CPyL12;
    cpy_r_r12 = CPyStatic_selfleaks___globals;
    cpy_r_r13 = CPyStatics[6780]; /* 'DIRTY' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 189, CPyStatic_selfleaks___globals);
        goto CPyL15;
    }
    PyObject *__tmp9003;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp9003 = NULL;
        goto __LL9004;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r14, 0))))
        __tmp9003 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    else {
        __tmp9003 = NULL;
    }
    if (__tmp9003 == NULL) goto __LL9004;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r14, 1))))
        __tmp9003 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    else {
        __tmp9003 = NULL;
    }
    if (__tmp9003 == NULL) goto __LL9004;
    __tmp9003 = cpy_r_r14;
__LL9004: ;
    if (unlikely(__tmp9003 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r14); cpy_r_r15 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9005 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp9005);
        PyObject *__tmp9006;
        if (likely(PySet_Check(__tmp9005)))
            __tmp9006 = __tmp9005;
        else {
            CPy_TypeError("set", __tmp9005); 
            __tmp9006 = NULL;
        }
        cpy_r_r15.f0 = __tmp9006;
        PyObject *__tmp9007 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPy_INCREF(__tmp9007);
        PyObject *__tmp9008;
        if (likely(PySet_Check(__tmp9007)))
            __tmp9008 = __tmp9007;
        else {
            CPy_TypeError("set", __tmp9007); 
            __tmp9008 = NULL;
        }
        cpy_r_r15.f1 = __tmp9008;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 189, CPyStatic_selfleaks___globals);
        goto CPyL15;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = CPyStatic_selfleaks___globals;
    cpy_r_r17 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 190, CPyStatic_selfleaks___globals);
        goto CPyL15;
    }
    PyObject *__tmp9009;
    if (unlikely(!(PyTuple_Check(cpy_r_r18) && PyTuple_GET_SIZE(cpy_r_r18) == 2))) {
        __tmp9009 = NULL;
        goto __LL9010;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r18, 0))))
        __tmp9009 = PyTuple_GET_ITEM(cpy_r_r18, 0);
    else {
        __tmp9009 = NULL;
    }
    if (__tmp9009 == NULL) goto __LL9010;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r18, 1))))
        __tmp9009 = PyTuple_GET_ITEM(cpy_r_r18, 1);
    else {
        __tmp9009 = NULL;
    }
    if (__tmp9009 == NULL) goto __LL9010;
    __tmp9009 = cpy_r_r18;
__LL9010: ;
    if (unlikely(__tmp9009 == NULL)) {
        CPy_TypeError("tuple[set, set]", cpy_r_r18); cpy_r_r19 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9011 = PyTuple_GET_ITEM(cpy_r_r18, 0);
        CPy_INCREF(__tmp9011);
        PyObject *__tmp9012;
        if (likely(PySet_Check(__tmp9011)))
            __tmp9012 = __tmp9011;
        else {
            CPy_TypeError("set", __tmp9011); 
            __tmp9012 = NULL;
        }
        cpy_r_r19.f0 = __tmp9012;
        PyObject *__tmp9013 = PyTuple_GET_ITEM(cpy_r_r18, 1);
        CPy_INCREF(__tmp9013);
        PyObject *__tmp9014;
        if (likely(PySet_Check(__tmp9013)))
            __tmp9014 = __tmp9013;
        else {
            CPy_TypeError("set", __tmp9013); 
            __tmp9014 = NULL;
        }
        cpy_r_r19.f1 = __tmp9014;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19.f0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 190, CPyStatic_selfleaks___globals);
        goto CPyL15;
    }
    return cpy_r_r19;
CPyL15: ;
    tuple_T2OO __tmp9015 = { NULL, NULL };
    cpy_r_r20 = __tmp9015;
    return cpy_r_r20;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_src);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_selfleaks___SelfLeakedVisitor___check_register_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:check_register_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_selfleaks___SelfLeakedVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.analysis.selfleaks.SelfLeakedVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___RegisterOp)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RegisterOp", obj_op); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_selfleaks___SelfLeakedVisitor___check_register_op(arg_self, arg_op);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9016 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9016);
    PyObject *__tmp9017 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9017);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "check_register_op", 187, CPyStatic_selfleaks___globals);
    return NULL;
}

PyObject *CPyDef_selfleaks___analyze_self_leaks(PyObject *cpy_r_blocks, PyObject *cpy_r_self_reg, PyObject *cpy_r_cfg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_selfleaks___SelfLeakedVisitor(cpy_r_self_reg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 199, CPyStatic_selfleaks___globals);
        goto CPyL6;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 200, CPyStatic_selfleaks___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyStatic_selfleaks___globals;
    cpy_r_r3 = CPyStatics[6652]; /* 'MAYBE_ANALYSIS' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 202, CPyStatic_selfleaks___globals);
        goto CPyL8;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 202, CPyStatic_selfleaks___globals);
        goto CPyL8;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_dataflow___run_analysis(cpy_r_blocks, cpy_r_cfg, cpy_r_r0, cpy_r_r1, cpy_r_r5, 0, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 196, CPyStatic_selfleaks___globals);
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

PyObject *CPyPy_selfleaks___analyze_self_leaks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "self_reg", "cfg", 0};
    static CPyArg_Parser parser = {"OOO:analyze_self_leaks", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_self_reg;
    PyObject *obj_cfg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_self_reg, &obj_cfg)) {
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
    PyObject *arg_cfg;
    if (likely(Py_TYPE(obj_cfg) == CPyType_dataflow___CFG))
        arg_cfg = obj_cfg;
    else {
        CPy_TypeError("mypyc.analysis.dataflow.CFG", obj_cfg); 
        goto fail;
    }
    PyObject *retval = CPyDef_selfleaks___analyze_self_leaks(arg_blocks, arg_self_reg, arg_cfg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/selfleaks.py", "analyze_self_leaks", 193, CPyStatic_selfleaks___globals);
    return NULL;
}

char CPyDef_selfleaks_____top_level__(void) {
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
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", -1, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_selfleaks___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 1, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9915]; /* ('Set', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_selfleaks___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 3, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9916]; /* ('CFG', 'MAYBE_ANALYSIS', 'AnalysisResult',
                                     'run_analysis') */
    cpy_r_r14 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r15 = CPyStatic_selfleaks___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 5, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule_mypyc___analysis___dataflow = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___analysis___dataflow);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9917]; /* ('Assign', 'AssignMulti', 'BasicBlock', 'Box', 'Branch',
                                     'Call', 'CallC', 'Cast', 'ComparisonOp', 'Extend',
                                     'FloatComparisonOp', 'FloatNeg', 'FloatOp', 'GetAttr',
                                     'GetElementPtr', 'Goto', 'InitStatic', 'IntOp',
                                     'KeepAlive', 'LoadAddress', 'LoadErrorValue',
                                     'LoadGlobal', 'LoadLiteral', 'LoadMem', 'LoadStatic',
                                     'MethodCall', 'OpVisitor', 'RaiseStandardError',
                                     'Register', 'RegisterOp', 'Return', 'SetAttr', 'SetMem',
                                     'Truncate', 'TupleGet', 'TupleSet', 'Unbox',
                                     'Unreachable') */
    cpy_r_r18 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r19 = CPyStatic_selfleaks___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 6, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9906]; /* ('RInstance',) */
    cpy_r_r22 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r23 = CPyStatic_selfleaks___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 46, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatic_selfleaks___globals;
    cpy_r_r26 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r28 = CPyStatic_selfleaks___globals;
    cpy_r_r29 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL33;
    }
    cpy_r_r31 = Py_None;
    cpy_r_r32 = PyObject_GetItem(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL33;
    }
    cpy_r_r33 = CPyStatic_selfleaks___globals;
    cpy_r_r34 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL34;
    }
    cpy_r_r36 = Py_None;
    cpy_r_r37 = PyObject_GetItem(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL34;
    }
    cpy_r_r38.f0 = cpy_r_r32;
    cpy_r_r38.f1 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = PyTuple_New(2);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9018 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp9018);
    PyObject *__tmp9019 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp9019);
    cpy_r_r40 = PyObject_GetItem(cpy_r_r27, cpy_r_r39);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r41 = CPyStatic_selfleaks___globals;
    cpy_r_r42 = CPyStatics[6678]; /* 'GenAndKill' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 48, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r45 = PySet_New(NULL);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 50, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r46 = PySet_New(NULL);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 50, CPyStatic_selfleaks___globals);
        goto CPyL35;
    }
    cpy_r_r47.f0 = cpy_r_r45;
    cpy_r_r47.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = CPyStatic_selfleaks___globals;
    cpy_r_r49 = CPyStatics[6779]; /* 'CLEAN' */
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9020 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp9020);
    PyObject *__tmp9021 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp9021);
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 50, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r53 = PySet_New(NULL);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 51, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r54 = Py_None;
    cpy_r_r55 = PySet_Add(cpy_r_r53, cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 51, CPyStatic_selfleaks___globals);
        goto CPyL36;
    }
    cpy_r_r57 = PySet_New(NULL);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 51, CPyStatic_selfleaks___globals);
        goto CPyL36;
    }
    cpy_r_r58 = Py_None;
    cpy_r_r59 = PySet_Add(cpy_r_r57, cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 51, CPyStatic_selfleaks___globals);
        goto CPyL37;
    }
    cpy_r_r61.f0 = cpy_r_r53;
    cpy_r_r61.f1 = cpy_r_r57;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r62 = CPyStatic_selfleaks___globals;
    cpy_r_r63 = CPyStatics[6780]; /* 'DIRTY' */
    cpy_r_r64 = PyTuple_New(2);
    if (unlikely(cpy_r_r64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9022 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r64, 0, __tmp9022);
    PyObject *__tmp9023 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r64, 1, __tmp9023);
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 51, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r67 = (PyObject *)CPyType_ops___OpVisitor;
    cpy_r_r68 = CPyStatic_selfleaks___globals;
    cpy_r_r69 = CPyStatics[6678]; /* 'GenAndKill' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r71 = PyObject_GetItem(cpy_r_r67, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r72 = PyTuple_Pack(1, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r73 = CPyStatics[6660]; /* 'mypyc.analysis.selfleaks' */
    cpy_r_r74 = (PyObject *)CPyType_selfleaks___SelfLeakedVisitor_template;
    cpy_r_r75 = CPyType_FromTemplate(cpy_r_r74, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    cpy_r_r76 = CPyDef_selfleaks___SelfLeakedVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", -1, CPyStatic_selfleaks___globals);
        goto CPyL38;
    }
    cpy_r_r77 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r78 = CPyStatics[6680]; /* 'self_reg' */
    cpy_r_r79 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r80 = PyTuple_Pack(2, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL38;
    }
    cpy_r_r81 = PyObject_SetAttr(cpy_r_r75, cpy_r_r77, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL38;
    }
    CPyType_selfleaks___SelfLeakedVisitor = (PyTypeObject *)cpy_r_r75;
    CPy_INCREF(CPyType_selfleaks___SelfLeakedVisitor);
    cpy_r_r83 = CPyStatic_selfleaks___globals;
    cpy_r_r84 = CPyStatics[6781]; /* 'SelfLeakedVisitor' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/analysis/selfleaks.py", "<module>", 54, CPyStatic_selfleaks___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL33: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r32);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r57);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL32;
}
