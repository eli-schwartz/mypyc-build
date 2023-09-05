#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *expression___transform_comparison_expr_env_setup(PyTypeObject *type);
PyObject *CPyDef_expression___transform_comparison_expr_env(void);

static PyObject *
expression___transform_comparison_expr_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___transform_comparison_expr_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___transform_comparison_expr_env_setup(type);
}

static int
expression___transform_comparison_expr_env_traverse(mypyc___irbuild___expression___transform_comparison_expr_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_e);
    Py_VISIT(self->_expr_type);
    Py_VISIT(self->_go);
    Py_VISIT(self->_first_op);
    Py_VISIT(self->_items);
    if (CPyTagged_CheckLong(self->_n_items)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_n_items));
    }
    Py_VISIT(self->_bin_op);
    Py_VISIT(self->_cmp_op);
    Py_VISIT(self->_lhs);
    Py_VISIT(self->_mypy_file);
    Py_VISIT(self->_info);
    Py_VISIT(self->_bool_type);
    Py_VISIT(self->_exprs);
    Py_VISIT(self->_item);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_or_expr);
    Py_VISIT(self->_set_literal);
    Py_VISIT(self->_result);
    Py_VISIT(self->_right_expr);
    Py_VISIT(self->_left_expr);
    Py_VISIT(self->_left);
    Py_VISIT(self->_right);
    return 0;
}

static int
expression___transform_comparison_expr_env_clear(mypyc___irbuild___expression___transform_comparison_expr_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->_expr_type);
    Py_CLEAR(self->_go);
    Py_CLEAR(self->_first_op);
    Py_CLEAR(self->_items);
    if (CPyTagged_CheckLong(self->_n_items)) {
        CPyTagged __tmp = self->_n_items;
        self->_n_items = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_bin_op);
    Py_CLEAR(self->_cmp_op);
    Py_CLEAR(self->_lhs);
    Py_CLEAR(self->_mypy_file);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_bool_type);
    Py_CLEAR(self->_exprs);
    Py_CLEAR(self->_item);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_or_expr);
    Py_CLEAR(self->_set_literal);
    Py_CLEAR(self->_result);
    Py_CLEAR(self->_right_expr);
    Py_CLEAR(self->_left_expr);
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_right);
    return 0;
}

static void
expression___transform_comparison_expr_env_dealloc(mypyc___irbuild___expression___transform_comparison_expr_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___transform_comparison_expr_env_dealloc)
    expression___transform_comparison_expr_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___transform_comparison_expr_env_vtable[1];
static bool
CPyDef_expression___transform_comparison_expr_env_trait_vtable_setup(void)
{
    CPyVTableItem expression___transform_comparison_expr_env_vtable_scratch[] = {
        NULL
    };
    memcpy(expression___transform_comparison_expr_env_vtable, expression___transform_comparison_expr_env_vtable_scratch, sizeof(expression___transform_comparison_expr_env_vtable));
    return 1;
}

static PyMethodDef expression___transform_comparison_expr_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___transform_comparison_expr_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_comparison_expr_env",
    .tp_new = expression___transform_comparison_expr_env_new,
    .tp_dealloc = (destructor)expression___transform_comparison_expr_env_dealloc,
    .tp_traverse = (traverseproc)expression___transform_comparison_expr_env_traverse,
    .tp_clear = (inquiry)expression___transform_comparison_expr_env_clear,
    .tp_methods = expression___transform_comparison_expr_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___transform_comparison_expr_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expression___transform_comparison_expr_env_template = &CPyType_expression___transform_comparison_expr_env_template_;

static PyObject *
expression___transform_comparison_expr_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___transform_comparison_expr_envObject *self;
    self = (mypyc___irbuild___expression___transform_comparison_expr_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___transform_comparison_expr_env_vtable;
    self->_n_items = CPY_INT_TAG;
    self->_borrow_left = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___transform_comparison_expr_env(void)
{
    PyObject *self = expression___transform_comparison_expr_env_setup(CPyType_expression___transform_comparison_expr_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *expression___go_transform_comparison_expr_env_setup(PyTypeObject *type);
PyObject *CPyDef_expression___go_transform_comparison_expr_env(void);

static PyObject *
expression___go_transform_comparison_expr_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___go_transform_comparison_expr_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___go_transform_comparison_expr_env_setup(type);
}

static int
expression___go_transform_comparison_expr_env_traverse(mypyc___irbuild___expression___go_transform_comparison_expr_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->_prev);
    Py_VISIT(self->_next);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_e);
    Py_VISIT(self->_expr_type);
    Py_VISIT(self->_go);
    Py_VISIT(self->_first_op);
    Py_VISIT(self->_items);
    if (CPyTagged_CheckLong(self->_n_items)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_n_items));
    }
    Py_VISIT(self->_bin_op);
    Py_VISIT(self->_cmp_op);
    Py_VISIT(self->_lhs);
    Py_VISIT(self->_mypy_file);
    Py_VISIT(self->_info);
    Py_VISIT(self->_bool_type);
    Py_VISIT(self->_exprs);
    Py_VISIT(self->_item);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_or_expr);
    Py_VISIT(self->_set_literal);
    Py_VISIT(self->_result);
    Py_VISIT(self->_right_expr);
    Py_VISIT(self->_left_expr);
    Py_VISIT(self->_left);
    Py_VISIT(self->_right);
    return 0;
}

static int
expression___go_transform_comparison_expr_env_clear(mypyc___irbuild___expression___go_transform_comparison_expr_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_prev);
    Py_CLEAR(self->_next);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->_expr_type);
    Py_CLEAR(self->_go);
    Py_CLEAR(self->_first_op);
    Py_CLEAR(self->_items);
    if (CPyTagged_CheckLong(self->_n_items)) {
        CPyTagged __tmp = self->_n_items;
        self->_n_items = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_bin_op);
    Py_CLEAR(self->_cmp_op);
    Py_CLEAR(self->_lhs);
    Py_CLEAR(self->_mypy_file);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_bool_type);
    Py_CLEAR(self->_exprs);
    Py_CLEAR(self->_item);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_or_expr);
    Py_CLEAR(self->_set_literal);
    Py_CLEAR(self->_result);
    Py_CLEAR(self->_right_expr);
    Py_CLEAR(self->_left_expr);
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_right);
    return 0;
}

static void
expression___go_transform_comparison_expr_env_dealloc(mypyc___irbuild___expression___go_transform_comparison_expr_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___go_transform_comparison_expr_env_dealloc)
    expression___go_transform_comparison_expr_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___go_transform_comparison_expr_env_vtable[1];
static bool
CPyDef_expression___go_transform_comparison_expr_env_trait_vtable_setup(void)
{
    CPyVTableItem expression___go_transform_comparison_expr_env_vtable_scratch[] = {
        NULL
    };
    memcpy(expression___go_transform_comparison_expr_env_vtable, expression___go_transform_comparison_expr_env_vtable_scratch, sizeof(expression___go_transform_comparison_expr_env_vtable));
    return 1;
}

static PyMethodDef expression___go_transform_comparison_expr_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___go_transform_comparison_expr_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "go_transform_comparison_expr_env",
    .tp_new = expression___go_transform_comparison_expr_env_new,
    .tp_dealloc = (destructor)expression___go_transform_comparison_expr_env_dealloc,
    .tp_traverse = (traverseproc)expression___go_transform_comparison_expr_env_traverse,
    .tp_clear = (inquiry)expression___go_transform_comparison_expr_env_clear,
    .tp_methods = expression___go_transform_comparison_expr_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expression___go_transform_comparison_expr_env_template = &CPyType_expression___go_transform_comparison_expr_env_template_;

static PyObject *
expression___go_transform_comparison_expr_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___go_transform_comparison_expr_envObject *self;
    self = (mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___go_transform_comparison_expr_env_vtable;
    self->_i = CPY_INT_TAG;
    self->_n_items = CPY_INT_TAG;
    self->_borrow_left = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___go_transform_comparison_expr_env(void)
{
    PyObject *self = expression___go_transform_comparison_expr_env_setup(CPyType_expression___go_transform_comparison_expr_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__expression___go_transform_comparison_expr_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_expression___go_transform_comparison_expr_obj_____get__(self, instance, owner);
}
PyMemberDef expression___go_transform_comparison_expr_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expression___go_transform_comparison_expr_obj_setup(PyTypeObject *type);
PyObject *CPyDef_expression___go_transform_comparison_expr_obj(void);

static PyObject *
expression___go_transform_comparison_expr_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___go_transform_comparison_expr_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___go_transform_comparison_expr_obj_setup(type);
}

static int
expression___go_transform_comparison_expr_obj_traverse(mypyc___irbuild___expression___go_transform_comparison_expr_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject))));
    return 0;
}

static int
expression___go_transform_comparison_expr_obj_clear(mypyc___irbuild___expression___go_transform_comparison_expr_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject))));
    return 0;
}

static void
expression___go_transform_comparison_expr_obj_dealloc(mypyc___irbuild___expression___go_transform_comparison_expr_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___go_transform_comparison_expr_obj_dealloc)
    expression___go_transform_comparison_expr_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___go_transform_comparison_expr_obj_vtable[2];
static bool
CPyDef_expression___go_transform_comparison_expr_obj_trait_vtable_setup(void)
{
    CPyVTableItem expression___go_transform_comparison_expr_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expression___go_transform_comparison_expr_obj_____call__,
        (CPyVTableItem)CPyDef_expression___go_transform_comparison_expr_obj_____get__,
    };
    memcpy(expression___go_transform_comparison_expr_obj_vtable, expression___go_transform_comparison_expr_obj_vtable_scratch, sizeof(expression___go_transform_comparison_expr_obj_vtable));
    return 1;
}

static PyMethodDef expression___go_transform_comparison_expr_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_expression___go_transform_comparison_expr_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_expression___go_transform_comparison_expr_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___go_transform_comparison_expr_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "go_transform_comparison_expr_obj",
    .tp_new = expression___go_transform_comparison_expr_obj_new,
    .tp_dealloc = (destructor)expression___go_transform_comparison_expr_obj_dealloc,
    .tp_traverse = (traverseproc)expression___go_transform_comparison_expr_obj_traverse,
    .tp_clear = (inquiry)expression___go_transform_comparison_expr_obj_clear,
    .tp_methods = expression___go_transform_comparison_expr_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__expression___go_transform_comparison_expr_obj,
    .tp_members = expression___go_transform_comparison_expr_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___expression___go_transform_comparison_expr_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_expression___go_transform_comparison_expr_obj_template = &CPyType_expression___go_transform_comparison_expr_obj_template_;

static PyObject *
expression___go_transform_comparison_expr_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___go_transform_comparison_expr_objObject *self;
    self = (mypyc___irbuild___expression___go_transform_comparison_expr_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___go_transform_comparison_expr_obj_vtable;
    self->vectorcall = CPyPy_expression___go_transform_comparison_expr_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___go_transform_comparison_expr_obj(void)
{
    PyObject *self = expression___go_transform_comparison_expr_obj_setup(CPyType_expression___go_transform_comparison_expr_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__expression_____mypyc_lambda__0_transform_comparison_expr_go_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__(self, instance, owner);
}
PyMemberDef expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_setup(PyTypeObject *type);
PyObject *CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj(void);

static PyObject *
expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_setup(type);
}

static int
expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_traverse(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject))));
    return 0;
}

static int
expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_clear(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject))));
    return 0;
}

static void
expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_dealloc(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_dealloc)
    expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable[2];
static bool
CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_trait_vtable_setup(void)
{
    CPyVTableItem expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__,
        (CPyVTableItem)CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__,
    };
    memcpy(expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable, expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable_scratch, sizeof(expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable));
    return 1;
}

static PyMethodDef expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_transform_comparison_expr_go_obj",
    .tp_new = expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_new,
    .tp_dealloc = (destructor)expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_dealloc,
    .tp_traverse = (traverseproc)expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_traverse,
    .tp_clear = (inquiry)expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_clear,
    .tp_methods = expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__expression_____mypyc_lambda__0_transform_comparison_expr_go_obj,
    .tp_members = expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_template = &CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_template_;

static PyObject *
expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *self;
    self = (mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_vtable;
    self->vectorcall = CPyPy_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj(void)
{
    PyObject *self = expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_setup(CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__expression_____mypyc_lambda__1_transform_comparison_expr_go_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__(self, instance, owner);
}
PyMemberDef expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_setup(PyTypeObject *type);
PyObject *CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj(void);

static PyObject *
expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_setup(type);
}

static int
expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_traverse(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject))));
    return 0;
}

static int
expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_clear(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject))));
    return 0;
}

static void
expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_dealloc(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_dealloc)
    expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable[2];
static bool
CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_trait_vtable_setup(void)
{
    CPyVTableItem expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__,
        (CPyVTableItem)CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__,
    };
    memcpy(expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable, expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable_scratch, sizeof(expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable));
    return 1;
}

static PyMethodDef expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_transform_comparison_expr_go_obj",
    .tp_new = expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_new,
    .tp_dealloc = (destructor)expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_dealloc,
    .tp_traverse = (traverseproc)expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_traverse,
    .tp_clear = (inquiry)expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_clear,
    .tp_methods = expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__expression_____mypyc_lambda__1_transform_comparison_expr_go_obj,
    .tp_members = expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_template = &CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_template_;

static PyObject *
expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *self;
    self = (mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_vtable;
    self->vectorcall = CPyPy_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj(void)
{
    PyObject *self = expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_setup(CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *expression___transform_dictionary_comprehension_env_setup(PyTypeObject *type);
PyObject *CPyDef_expression___transform_dictionary_comprehension_env(void);

static PyObject *
expression___transform_dictionary_comprehension_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___transform_dictionary_comprehension_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___transform_dictionary_comprehension_env_setup(type);
}

static int
expression___transform_dictionary_comprehension_env_traverse(mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_o);
    Py_VISIT(self->_d);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_loop_params);
    return 0;
}

static int
expression___transform_dictionary_comprehension_env_clear(mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_d);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_loop_params);
    return 0;
}

static void
expression___transform_dictionary_comprehension_env_dealloc(mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___transform_dictionary_comprehension_env_dealloc)
    expression___transform_dictionary_comprehension_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___transform_dictionary_comprehension_env_vtable[1];
static bool
CPyDef_expression___transform_dictionary_comprehension_env_trait_vtable_setup(void)
{
    CPyVTableItem expression___transform_dictionary_comprehension_env_vtable_scratch[] = {
        NULL
    };
    memcpy(expression___transform_dictionary_comprehension_env_vtable, expression___transform_dictionary_comprehension_env_vtable_scratch, sizeof(expression___transform_dictionary_comprehension_env_vtable));
    return 1;
}

static PyMethodDef expression___transform_dictionary_comprehension_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___transform_dictionary_comprehension_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_dictionary_comprehension_env",
    .tp_new = expression___transform_dictionary_comprehension_env_new,
    .tp_dealloc = (destructor)expression___transform_dictionary_comprehension_env_dealloc,
    .tp_traverse = (traverseproc)expression___transform_dictionary_comprehension_env_traverse,
    .tp_clear = (inquiry)expression___transform_dictionary_comprehension_env_clear,
    .tp_methods = expression___transform_dictionary_comprehension_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___transform_dictionary_comprehension_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expression___transform_dictionary_comprehension_env_template = &CPyType_expression___transform_dictionary_comprehension_env_template_;

static PyObject *
expression___transform_dictionary_comprehension_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *self;
    self = (mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___transform_dictionary_comprehension_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___transform_dictionary_comprehension_env(void)
{
    PyObject *self = expression___transform_dictionary_comprehension_env_setup(CPyType_expression___transform_dictionary_comprehension_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__expression___gen_inner_stmts_transform_dictionary_comprehension_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__(self, instance, owner);
}
PyMemberDef expression___gen_inner_stmts_transform_dictionary_comprehension_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expression___gen_inner_stmts_transform_dictionary_comprehension_obj_setup(PyTypeObject *type);
PyObject *CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj(void);

static PyObject *
expression___gen_inner_stmts_transform_dictionary_comprehension_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___gen_inner_stmts_transform_dictionary_comprehension_obj_setup(type);
}

static int
expression___gen_inner_stmts_transform_dictionary_comprehension_obj_traverse(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject))));
    return 0;
}

static int
expression___gen_inner_stmts_transform_dictionary_comprehension_obj_clear(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject))));
    return 0;
}

static void
expression___gen_inner_stmts_transform_dictionary_comprehension_obj_dealloc(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___gen_inner_stmts_transform_dictionary_comprehension_obj_dealloc)
    expression___gen_inner_stmts_transform_dictionary_comprehension_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable[2];
static bool
CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_trait_vtable_setup(void)
{
    CPyVTableItem expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__,
        (CPyVTableItem)CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__,
    };
    memcpy(expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable, expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable_scratch, sizeof(expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable));
    return 1;
}

static PyMethodDef expression___gen_inner_stmts_transform_dictionary_comprehension_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_transform_dictionary_comprehension_obj",
    .tp_new = expression___gen_inner_stmts_transform_dictionary_comprehension_obj_new,
    .tp_dealloc = (destructor)expression___gen_inner_stmts_transform_dictionary_comprehension_obj_dealloc,
    .tp_traverse = (traverseproc)expression___gen_inner_stmts_transform_dictionary_comprehension_obj_traverse,
    .tp_clear = (inquiry)expression___gen_inner_stmts_transform_dictionary_comprehension_obj_clear,
    .tp_methods = expression___gen_inner_stmts_transform_dictionary_comprehension_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__expression___gen_inner_stmts_transform_dictionary_comprehension_obj,
    .tp_members = expression___gen_inner_stmts_transform_dictionary_comprehension_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_template = &CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_template_;

static PyObject *
expression___gen_inner_stmts_transform_dictionary_comprehension_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *self;
    self = (mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___gen_inner_stmts_transform_dictionary_comprehension_obj_vtable;
    self->vectorcall = CPyPy_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj(void)
{
    PyObject *self = expression___gen_inner_stmts_transform_dictionary_comprehension_obj_setup(CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *expression___transform_slice_expr_env_setup(PyTypeObject *type);
PyObject *CPyDef_expression___transform_slice_expr_env(void);

static PyObject *
expression___transform_slice_expr_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___transform_slice_expr_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___transform_slice_expr_env_setup(type);
}

static int
expression___transform_slice_expr_env_traverse(mypyc___irbuild___expression___transform_slice_expr_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_get_arg);
    Py_VISIT(self->_expr);
    return 0;
}

static int
expression___transform_slice_expr_env_clear(mypyc___irbuild___expression___transform_slice_expr_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_get_arg);
    Py_CLEAR(self->_expr);
    return 0;
}

static void
expression___transform_slice_expr_env_dealloc(mypyc___irbuild___expression___transform_slice_expr_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___transform_slice_expr_env_dealloc)
    expression___transform_slice_expr_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___transform_slice_expr_env_vtable[1];
static bool
CPyDef_expression___transform_slice_expr_env_trait_vtable_setup(void)
{
    CPyVTableItem expression___transform_slice_expr_env_vtable_scratch[] = {
        NULL
    };
    memcpy(expression___transform_slice_expr_env_vtable, expression___transform_slice_expr_env_vtable_scratch, sizeof(expression___transform_slice_expr_env_vtable));
    return 1;
}

static PyMethodDef expression___transform_slice_expr_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___transform_slice_expr_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_slice_expr_env",
    .tp_new = expression___transform_slice_expr_env_new,
    .tp_dealloc = (destructor)expression___transform_slice_expr_env_dealloc,
    .tp_traverse = (traverseproc)expression___transform_slice_expr_env_traverse,
    .tp_clear = (inquiry)expression___transform_slice_expr_env_clear,
    .tp_methods = expression___transform_slice_expr_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___transform_slice_expr_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expression___transform_slice_expr_env_template = &CPyType_expression___transform_slice_expr_env_template_;

static PyObject *
expression___transform_slice_expr_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___transform_slice_expr_envObject *self;
    self = (mypyc___irbuild___expression___transform_slice_expr_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___transform_slice_expr_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___transform_slice_expr_env(void)
{
    PyObject *self = expression___transform_slice_expr_env_setup(CPyType_expression___transform_slice_expr_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__expression___get_arg_transform_slice_expr_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_expression___get_arg_transform_slice_expr_obj_____get__(self, instance, owner);
}
PyMemberDef expression___get_arg_transform_slice_expr_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expression___get_arg_transform_slice_expr_obj_setup(PyTypeObject *type);
PyObject *CPyDef_expression___get_arg_transform_slice_expr_obj(void);

static PyObject *
expression___get_arg_transform_slice_expr_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expression___get_arg_transform_slice_expr_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expression___get_arg_transform_slice_expr_obj_setup(type);
}

static int
expression___get_arg_transform_slice_expr_obj_traverse(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject))));
    return 0;
}

static int
expression___get_arg_transform_slice_expr_obj_clear(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject))));
    return 0;
}

static void
expression___get_arg_transform_slice_expr_obj_dealloc(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expression___get_arg_transform_slice_expr_obj_dealloc)
    expression___get_arg_transform_slice_expr_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expression___get_arg_transform_slice_expr_obj_vtable[2];
static bool
CPyDef_expression___get_arg_transform_slice_expr_obj_trait_vtable_setup(void)
{
    CPyVTableItem expression___get_arg_transform_slice_expr_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expression___get_arg_transform_slice_expr_obj_____call__,
        (CPyVTableItem)CPyDef_expression___get_arg_transform_slice_expr_obj_____get__,
    };
    memcpy(expression___get_arg_transform_slice_expr_obj_vtable, expression___get_arg_transform_slice_expr_obj_vtable_scratch, sizeof(expression___get_arg_transform_slice_expr_obj_vtable));
    return 1;
}

static PyMethodDef expression___get_arg_transform_slice_expr_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_expression___get_arg_transform_slice_expr_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_expression___get_arg_transform_slice_expr_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expression___get_arg_transform_slice_expr_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_arg_transform_slice_expr_obj",
    .tp_new = expression___get_arg_transform_slice_expr_obj_new,
    .tp_dealloc = (destructor)expression___get_arg_transform_slice_expr_obj_dealloc,
    .tp_traverse = (traverseproc)expression___get_arg_transform_slice_expr_obj_traverse,
    .tp_clear = (inquiry)expression___get_arg_transform_slice_expr_obj_clear,
    .tp_methods = expression___get_arg_transform_slice_expr_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__expression___get_arg_transform_slice_expr_obj,
    .tp_members = expression___get_arg_transform_slice_expr_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_expression___get_arg_transform_slice_expr_obj_template = &CPyType_expression___get_arg_transform_slice_expr_obj_template_;

static PyObject *
expression___get_arg_transform_slice_expr_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *self;
    self = (mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expression___get_arg_transform_slice_expr_obj_vtable;
    self->vectorcall = CPyPy_expression___get_arg_transform_slice_expr_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_expression___get_arg_transform_slice_expr_obj(void)
{
    PyObject *self = expression___get_arg_transform_slice_expr_obj_setup(CPyType_expression___get_arg_transform_slice_expr_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef expressionmodule_methods[] = {
    {"transform_name_expr", (PyCFunction)CPyPy_expression___transform_name_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_member_expr", (PyCFunction)CPyPy_expression___transform_member_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_instance_attribute_access_through_class", (PyCFunction)CPyPy_expression___check_instance_attribute_access_through_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_super_expr", (PyCFunction)CPyPy_expression___transform_super_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_call_expr", (PyCFunction)CPyPy_expression___transform_call_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_call", (PyCFunction)CPyPy_expression___translate_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_refexpr_call", (PyCFunction)CPyPy_expression___translate_refexpr_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_method_call", (PyCFunction)CPyPy_expression___translate_method_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"call_classmethod", (PyCFunction)CPyPy_expression___call_classmethod, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_super_method_call", (PyCFunction)CPyPy_expression___translate_super_method_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_cast_expr", (PyCFunction)CPyPy_expression___translate_cast_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_unary_expr", (PyCFunction)CPyPy_expression___transform_unary_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_op_expr", (PyCFunction)CPyPy_expression___transform_op_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_optimize_int_floor_divide", (PyCFunction)CPyPy_expression___try_optimize_int_floor_divide, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_index_expr", (PyCFunction)CPyPy_expression___transform_index_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_constant_fold", (PyCFunction)CPyPy_expression___try_constant_fold, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_gen_slice_op", (PyCFunction)CPyPy_expression___try_gen_slice_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_conditional_expr", (PyCFunction)CPyPy_expression___transform_conditional_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"set_literal_values", (PyCFunction)CPyPy_expression___set_literal_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"precompute_set_literal", (PyCFunction)CPyPy_expression___precompute_set_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_comparison_expr", (PyCFunction)CPyPy_expression___transform_comparison_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_is_none", (PyCFunction)CPyPy_expression___translate_is_none, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_basic_comparison", (PyCFunction)CPyPy_expression___transform_basic_comparison, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_printf_style_formatting", (PyCFunction)CPyPy_expression___translate_printf_style_formatting, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_int_expr", (PyCFunction)CPyPy_expression___transform_int_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_float_expr", (PyCFunction)CPyPy_expression___transform_float_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_complex_expr", (PyCFunction)CPyPy_expression___transform_complex_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_str_expr", (PyCFunction)CPyPy_expression___transform_str_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_bytes_expr", (PyCFunction)CPyPy_expression___transform_bytes_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_ellipsis", (PyCFunction)CPyPy_expression___transform_ellipsis, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_list_expr", (PyCFunction)CPyPy_expression___transform_list_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_visit_list_display", (PyCFunction)CPyPy_expression____visit_list_display, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_tuple_expr", (PyCFunction)CPyPy_expression___transform_tuple_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_visit_tuple_display", (PyCFunction)CPyPy_expression____visit_tuple_display, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_dict_expr", (PyCFunction)CPyPy_expression___transform_dict_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_set_expr", (PyCFunction)CPyPy_expression___transform_set_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_visit_display", (PyCFunction)CPyPy_expression____visit_display, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_list_comprehension", (PyCFunction)CPyPy_expression___transform_list_comprehension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_set_comprehension", (PyCFunction)CPyPy_expression___transform_set_comprehension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_dictionary_comprehension", (PyCFunction)CPyPy_expression___transform_dictionary_comprehension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_slice_expr", (PyCFunction)CPyPy_expression___transform_slice_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_generator_expr", (PyCFunction)CPyPy_expression___transform_generator_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_assignment_expr", (PyCFunction)CPyPy_expression___transform_assignment_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_math_literal", (PyCFunction)CPyPy_expression___transform_math_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef expressionmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.expression",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    expressionmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___expression(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___expression_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___expression_internal);
        return CPyModule_mypyc___irbuild___expression_internal;
    }
    CPyModule_mypyc___irbuild___expression_internal = PyModule_Create(&expressionmodule);
    if (unlikely(CPyModule_mypyc___irbuild___expression_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___expression_internal, "__name__");
    CPyStatic_expression___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___expression_internal);
    if (unlikely(CPyStatic_expression___globals == NULL))
        goto fail;
    CPyType_expression___transform_comparison_expr_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___transform_comparison_expr_env_template, NULL, modname);
    if (unlikely(!CPyType_expression___transform_comparison_expr_env))
        goto fail;
    CPyType_expression___go_transform_comparison_expr_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___go_transform_comparison_expr_env_template, NULL, modname);
    if (unlikely(!CPyType_expression___go_transform_comparison_expr_env))
        goto fail;
    CPyType_expression___go_transform_comparison_expr_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___go_transform_comparison_expr_obj_template, NULL, modname);
    if (unlikely(!CPyType_expression___go_transform_comparison_expr_obj))
        goto fail;
    CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_template, NULL, modname);
    if (unlikely(!CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj))
        goto fail;
    CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_template, NULL, modname);
    if (unlikely(!CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj))
        goto fail;
    CPyType_expression___transform_dictionary_comprehension_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___transform_dictionary_comprehension_env_template, NULL, modname);
    if (unlikely(!CPyType_expression___transform_dictionary_comprehension_env))
        goto fail;
    CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_template, NULL, modname);
    if (unlikely(!CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj))
        goto fail;
    CPyType_expression___transform_slice_expr_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___transform_slice_expr_env_template, NULL, modname);
    if (unlikely(!CPyType_expression___transform_slice_expr_env))
        goto fail;
    CPyType_expression___get_arg_transform_slice_expr_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_expression___get_arg_transform_slice_expr_obj_template, NULL, modname);
    if (unlikely(!CPyType_expression___get_arg_transform_slice_expr_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_expression_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___expression_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___expression_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_expression___transform_comparison_expr_env);
    Py_CLEAR(CPyType_expression___go_transform_comparison_expr_env);
    Py_CLEAR(CPyType_expression___go_transform_comparison_expr_obj);
    Py_CLEAR(CPyType_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj);
    Py_CLEAR(CPyType_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj);
    Py_CLEAR(CPyType_expression___transform_dictionary_comprehension_env);
    Py_CLEAR(CPyType_expression___gen_inner_stmts_transform_dictionary_comprehension_obj);
    Py_CLEAR(CPyType_expression___transform_slice_expr_env);
    Py_CLEAR(CPyType_expression___get_arg_transform_slice_expr_obj);
    return NULL;
}

PyObject *CPyDef_expression___transform_name_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_src;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
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
    PyObject *cpy_r_math_literal;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyTagged cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_mod_dict;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    CPyPtr cpy_r_r147;
    CPyPtr cpy_r_r148;
    CPyPtr cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_obj;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r4 = CPyStatics[8210]; /* 'mypyc internal error: should be unreachable' */
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_ops___RaiseStandardError(cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 111, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 110, CPyStatic_expression___globals);
        goto CPyL95;
    } else
        goto CPyL96;
CPyL3: ;
    cpy_r_r8 = CPyDef_builder___IRBuilder___none(cpy_r_builder);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 117, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 118, CPyStatic_expression___globals, "mypy.nodes.SymbolNode", cpy_r_r9);
        goto CPyL95;
    }
    cpy_r_r11 = CPY_GET_ATTR_TRAIT(cpy_r_r10, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 118, CPyStatic_expression___globals);
        goto CPyL95;
    }
CPyL7: ;
    cpy_r_fullname = cpy_r_r11;
    cpy_r_r12 = CPyStatic_expression___globals;
    cpy_r_r13 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 119, CPyStatic_expression___globals);
        goto CPyL97;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 119, CPyStatic_expression___globals, "dict", cpy_r_r14);
        goto CPyL97;
    }
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_fullname);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 119, CPyStatic_expression___globals);
        goto CPyL97;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyStatic_expression___globals;
    cpy_r_r20 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 120, CPyStatic_expression___globals);
        goto CPyL97;
    }
    if (likely(PyDict_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 120, CPyStatic_expression___globals, "dict", cpy_r_r21);
        goto CPyL97;
    }
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r22, cpy_r_fullname);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_fullname);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 120, CPyStatic_expression___globals);
        goto CPyL95;
    }
    PyObject *__tmp10101;
    if (unlikely(!(PyTuple_Check(cpy_r_r23) && PyTuple_GET_SIZE(cpy_r_r23) == 2))) {
        __tmp10101 = NULL;
        goto __LL10102;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r23, 0), CPyType_rtypes___RType)))
        __tmp10101 = PyTuple_GET_ITEM(cpy_r_r23, 0);
    else {
        __tmp10101 = NULL;
    }
    if (__tmp10101 == NULL) goto __LL10102;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r23, 1))))
        __tmp10101 = PyTuple_GET_ITEM(cpy_r_r23, 1);
    else {
        __tmp10101 = NULL;
    }
    if (__tmp10101 == NULL) goto __LL10102;
    __tmp10101 = cpy_r_r23;
__LL10102: ;
    if (unlikely(__tmp10101 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.rtypes.RType, str]", cpy_r_r23); cpy_r_r24 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10103 = PyTuple_GET_ITEM(cpy_r_r23, 0);
        CPy_INCREF(__tmp10103);
        PyObject *__tmp10104;
        if (likely(PyObject_TypeCheck(__tmp10103, CPyType_rtypes___RType)))
            __tmp10104 = __tmp10103;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp10103); 
            __tmp10104 = NULL;
        }
        cpy_r_r24.f0 = __tmp10104;
        PyObject *__tmp10105 = PyTuple_GET_ITEM(cpy_r_r23, 1);
        CPy_INCREF(__tmp10105);
        PyObject *__tmp10106;
        if (likely(PyUnicode_Check(__tmp10105)))
            __tmp10106 = __tmp10105;
        else {
            CPy_TypeError("str", __tmp10105); 
            __tmp10106 = NULL;
        }
        cpy_r_r24.f1 = __tmp10106;
    }
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 120, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    cpy_r_typ = cpy_r_r25;
    cpy_r_r26 = cpy_r_r24.f1;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r24.f0);
    CPy_DECREF(cpy_r_r24.f1);
    cpy_r_src = cpy_r_r26;
    cpy_r_r27 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_ops___LoadAddress(cpy_r_typ, cpy_r_src, cpy_r_r27);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_src);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 121, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 121, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r29;
CPyL18: ;
    cpy_r_r30 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL21;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 123, CPyStatic_expression___globals);
        goto CPyL97;
    }
CPyL21: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (cpy_r_r36) {
        goto CPyL98;
    } else
        goto CPyL24;
CPyL22: ;
    cpy_r_r37 = CPyDef_builder___IRBuilder___none(cpy_r_builder);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 124, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r37;
CPyL24: ;
    cpy_r_r38 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL27;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL27;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 125, CPyStatic_expression___globals);
        goto CPyL97;
    }
CPyL27: ;
    cpy_r_r44 = cpy_r_r39 == 0;
    if (cpy_r_r44) {
        goto CPyL99;
    } else
        goto CPyL30;
CPyL28: ;
    cpy_r_r45 = CPyDef_builder___IRBuilder___true(cpy_r_builder);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 126, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r45;
CPyL30: ;
    cpy_r_r46 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL33;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL33;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 127, CPyStatic_expression___globals);
        goto CPyL97;
    }
CPyL33: ;
    cpy_r_r52 = cpy_r_r47 == 0;
    if (cpy_r_r52) {
        goto CPyL100;
    } else
        goto CPyL36;
CPyL34: ;
    cpy_r_r53 = CPyDef_builder___IRBuilder___false(cpy_r_builder);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 128, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r53;
CPyL36: ;
    cpy_r_r54 = CPyDef_expression___transform_math_literal(cpy_r_builder, cpy_r_fullname);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 130, CPyStatic_expression___globals);
        goto CPyL97;
    }
    cpy_r_math_literal = cpy_r_r54;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_math_literal != cpy_r_r55;
    if (cpy_r_r56) {
        goto CPyL101;
    } else
        goto CPyL102;
CPyL38: ;
    if (likely(cpy_r_math_literal != Py_None))
        cpy_r_r57 = cpy_r_math_literal;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 132, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_math_literal);
        goto CPyL95;
    }
    return cpy_r_r57;
CPyL40: ;
    cpy_r_r58 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r59 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_r58)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (!cpy_r_r62) goto CPyL103;
    cpy_r_r63 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_nodes___Var))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 134, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r63);
        goto CPyL97;
    }
    cpy_r_r65 = ((mypy___nodes___VarObject *)cpy_r_r64)->_is_final;
    if (!cpy_r_r65) goto CPyL103;
CPyL43: ;
    cpy_r_r66 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r66);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_nodes___Var))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 136, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r66);
        goto CPyL97;
    }
    cpy_r_r68 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyDef_builder___IRBuilder___is_native_ref_expr(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 139, CPyStatic_expression___globals);
        goto CPyL104;
    }
    cpy_r_r70 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r70, cpy_r_expr);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 140, CPyStatic_expression___globals);
        goto CPyL104;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___Type)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 140, CPyStatic_expression___globals, "mypy.types.Type", cpy_r_r71);
        goto CPyL104;
    }
    cpy_r_r73 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_builder___IRBuilder___emit_load_final(cpy_r_builder, cpy_r_r67, cpy_r_fullname, cpy_r_r68, cpy_r_r69, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 135, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_value = cpy_r_r74;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_value != cpy_r_r75;
    if (!cpy_r_r76) goto CPyL105;
    if (likely(cpy_r_value != Py_None))
        cpy_r_r77 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 144, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_value);
        goto CPyL95;
    }
    return cpy_r_r77;
CPyL51: ;
    cpy_r_r78 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r79 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r78)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL60;
    cpy_r_r83 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r83);
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_nodes___MypyFile))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 146, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_r83);
        goto CPyL95;
    }
    cpy_r_r85 = CPY_GET_ATTR(cpy_r_r84, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 146, CPyStatic_expression___globals);
        goto CPyL95;
    }
CPyL54: ;
    cpy_r_r86 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_imports;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = PyDict_Contains(cpy_r_r86, cpy_r_r85);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 146, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r89 = cpy_r_r87;
    if (!cpy_r_r89) goto CPyL60;
    cpy_r_r90 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r90);
    if (likely(Py_TYPE(cpy_r_r90) == CPyType_nodes___MypyFile))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 147, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_r90);
        goto CPyL95;
    }
    cpy_r_r92 = CPY_GET_ATTR(cpy_r_r91, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 147, CPyStatic_expression___globals);
        goto CPyL95;
    }
CPyL58: ;
    cpy_r_r93 = CPyDef_builder___IRBuilder___load_module(cpy_r_builder, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 147, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r93;
CPyL60: ;
    cpy_r_r94 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_kind;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyStatics[9015]; /* 0 */
    cpy_r_r96 = PyObject_RichCompare(cpy_r_r94, cpy_r_r95, 2);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 153, CPyStatic_expression___globals);
        goto CPyL95;
    }
    if (unlikely(!PyBool_Check(cpy_r_r96))) {
        CPy_TypeError("bool", cpy_r_r96); cpy_r_r97 = 2;
    } else
        cpy_r_r97 = cpy_r_r96 == Py_True;
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 153, CPyStatic_expression___globals);
        goto CPyL95;
    }
    if (!cpy_r_r97) goto CPyL93;
    cpy_r_r98 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r99 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_r98)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (!cpy_r_r102) goto CPyL66;
    cpy_r_r103 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    if (likely(Py_TYPE(cpy_r_r103) == CPyType_nodes___Var))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 153, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r103);
        goto CPyL95;
    }
    cpy_r_r105 = ((mypy___nodes___VarObject *)cpy_r_r104)->_is_suppressed_import;
    if (cpy_r_r105) goto CPyL93;
CPyL66: ;
    cpy_r_r106 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r107 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r108 = (CPyPtr)&((PyObject *)cpy_r_r106)->ob_type;
    cpy_r_r109 = *(PyObject * *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 == cpy_r_r107;
    if (!cpy_r_r110) goto CPyL77;
    cpy_r_r111 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 158, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r112 = CPyDef_rtypes___is_none_rprimitive(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 158, CPyStatic_expression___globals);
        goto CPyL95;
    }
    if (!cpy_r_r112) goto CPyL77;
    cpy_r_r113 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_nodes___Var))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 159, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r113);
        goto CPyL95;
    }
    cpy_r_r115 = ((mypy___nodes___VarObject *)cpy_r_r114)->_is_inferred;
    if (!cpy_r_r115) goto CPyL77;
CPyL72: ;
    cpy_r_r116 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r116);
    if (likely(Py_TYPE(cpy_r_r116) == CPyType_nodes___Var))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 163, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r116);
        goto CPyL95;
    }
    cpy_r_r118 = CPY_GET_ATTR(cpy_r_r117, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 163, CPyStatic_expression___globals);
        goto CPyL95;
    }
CPyL74: ;
    cpy_r_r119 = CPyStatics[8212]; /* 'Local variable "' */
    cpy_r_r120 = CPyStatics[8213]; /* '" has inferred type None; add an annotation' */
    cpy_r_r121 = CPyStr_Build(3, cpy_r_r119, cpy_r_r118, cpy_r_r120);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 162, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r122 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_nodes___Var))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 165, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r122);
        goto CPyL106;
    }
    cpy_r_r124 = ((mypy___nodes___VarObject *)cpy_r_r123)->_line;
    CPyTagged_INCREF(cpy_r_r124);
    cpy_r_r125 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r121, cpy_r_r124);
    CPy_DECREF(cpy_r_r121);
    CPyTagged_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 161, CPyStatic_expression___globals);
        goto CPyL95;
    }
CPyL77: ;
    cpy_r_r126 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r127 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (!cpy_r_r130) goto CPyL90;
    cpy_r_r131 = CPyStatic_expression___globals;
    cpy_r_r132 = CPyStatics[8058]; /* 'get_module_dict_op' */
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 176, CPyStatic_expression___globals);
        goto CPyL95;
    }
    if (likely(PyTuple_Check(cpy_r_r133)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 176, CPyStatic_expression___globals, "tuple", cpy_r_r133);
        goto CPyL95;
    }
    cpy_r_r135 = PyList_New(0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 176, CPyStatic_expression___globals);
        goto CPyL107;
    }
    cpy_r_r136 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r136);
    cpy_r_r137 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r134, cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r135);
    CPyTagged_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 176, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_mod_dict = cpy_r_r137;
    cpy_r_r138 = CPyStatic_expression___globals;
    cpy_r_r139 = CPyStatics[8059]; /* 'dict_get_item_op' */
    cpy_r_r140 = CPyDict_GetItem(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals);
        goto CPyL108;
    }
    if (likely(PyTuple_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals, "tuple", cpy_r_r140);
        goto CPyL108;
    }
    cpy_r_r142 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r142);
    if (likely(Py_TYPE(cpy_r_r142) == CPyType_nodes___MypyFile))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_r142);
        goto CPyL109;
    }
    cpy_r_r144 = CPY_GET_ATTR(cpy_r_r143, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals);
        goto CPyL109;
    }
CPyL86: ;
    cpy_r_r145 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals);
        goto CPyL109;
    }
    cpy_r_r146 = PyList_New(2);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 178, CPyStatic_expression___globals);
        goto CPyL110;
    }
    cpy_r_r147 = (CPyPtr)&((PyListObject *)cpy_r_r146)->ob_item;
    cpy_r_r148 = *(CPyPtr *)cpy_r_r147;
    *(PyObject * *)cpy_r_r148 = cpy_r_mod_dict;
    cpy_r_r149 = cpy_r_r148 + 8;
    *(PyObject * *)cpy_r_r149 = cpy_r_r145;
    cpy_r_r150 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r141, cpy_r_r146, cpy_r_r150);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r146);
    CPyTagged_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 177, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_obj = cpy_r_r151;
    return cpy_r_obj;
CPyL90: ;
    cpy_r_r152 = CPY_INT_TAG;
    cpy_r_r153 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_expr, cpy_r_r152, 1);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 182, CPyStatic_expression___globals);
        goto CPyL95;
    }
    cpy_r_r154 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r154);
    cpy_r_r155 = 2;
    cpy_r_r156 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r153, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r153);
    CPyTagged_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 182, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r156;
CPyL93: ;
    cpy_r_r157 = CPyDef_builder___IRBuilder___load_global(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 184, CPyStatic_expression___globals);
        goto CPyL95;
    }
    return cpy_r_r157;
CPyL95: ;
    cpy_r_r158 = NULL;
    return cpy_r_r158;
CPyL96: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL3;
CPyL97: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL95;
CPyL98: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL22;
CPyL99: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL28;
CPyL100: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL34;
CPyL101: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL38;
CPyL102: ;
    CPy_DECREF(cpy_r_math_literal);
    goto CPyL40;
CPyL103: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL51;
CPyL104: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r68);
    goto CPyL95;
CPyL105: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL51;
CPyL106: ;
    CPy_DecRef(cpy_r_r121);
    goto CPyL95;
CPyL107: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL95;
CPyL108: ;
    CPy_DecRef(cpy_r_mod_dict);
    goto CPyL95;
CPyL109: ;
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_r141);
    goto CPyL95;
CPyL110: ;
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    goto CPyL95;
}

PyObject *CPyPy_expression___transform_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_name_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_name_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_name_expr", 108, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_member_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_final;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    tuple_T3OOC cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_final_var;
    char cpy_r_r6;
    char cpy_r_native;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_math_literal;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
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
    char cpy_r_r37;
    char cpy_r_can_borrow;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_borrow;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    cpy_r_r0 = CPyDef_builder___IRBuilder___get_final_ref(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 189, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_final = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_final != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL55;
    PyObject *__tmp10107;
    if (unlikely(!(PyTuple_Check(cpy_r_final) && PyTuple_GET_SIZE(cpy_r_final) == 3))) {
        __tmp10107 = NULL;
        goto __LL10108;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_final, 0))))
        __tmp10107 = PyTuple_GET_ITEM(cpy_r_final, 0);
    else {
        __tmp10107 = NULL;
    }
    if (__tmp10107 == NULL) goto __LL10108;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_final, 1)) == CPyType_nodes___Var))
        __tmp10107 = PyTuple_GET_ITEM(cpy_r_final, 1);
    else {
        __tmp10107 = NULL;
    }
    if (__tmp10107 == NULL) goto __LL10108;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_final, 2))))
        __tmp10107 = PyTuple_GET_ITEM(cpy_r_final, 2);
    else {
        __tmp10107 = NULL;
    }
    if (__tmp10107 == NULL) goto __LL10108;
    __tmp10107 = cpy_r_final;
__LL10108: ;
    if (unlikely(__tmp10107 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.Var, bool]", cpy_r_final); cpy_r_r3 = (tuple_T3OOC) { NULL, NULL, 2 };
    } else {
        PyObject *__tmp10109 = PyTuple_GET_ITEM(cpy_r_final, 0);
        CPy_INCREF(__tmp10109);
        PyObject *__tmp10110;
        if (likely(PyUnicode_Check(__tmp10109)))
            __tmp10110 = __tmp10109;
        else {
            CPy_TypeError("str", __tmp10109); 
            __tmp10110 = NULL;
        }
        cpy_r_r3.f0 = __tmp10110;
        PyObject *__tmp10111 = PyTuple_GET_ITEM(cpy_r_final, 1);
        CPy_INCREF(__tmp10111);
        PyObject *__tmp10112;
        if (likely(Py_TYPE(__tmp10111) == CPyType_nodes___Var))
            __tmp10112 = __tmp10111;
        else {
            CPy_TypeError("mypy.nodes.Var", __tmp10111); 
            __tmp10112 = NULL;
        }
        cpy_r_r3.f1 = __tmp10112;
        PyObject *__tmp10113 = PyTuple_GET_ITEM(cpy_r_final, 2);
        char __tmp10114;
        if (unlikely(!PyBool_Check(__tmp10113))) {
            CPy_TypeError("bool", __tmp10113); __tmp10114 = 2;
        } else
            __tmp10114 = __tmp10113 == Py_True;
        cpy_r_r3.f2 = __tmp10114;
    }
    CPy_DECREF(cpy_r_final);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 191, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_r4 = cpy_r_r3.f0;
    CPy_INCREF(cpy_r_r4);
    cpy_r_fullname = cpy_r_r4;
    cpy_r_r5 = cpy_r_r3.f1;
    CPy_INCREF(cpy_r_r5);
    cpy_r_final_var = cpy_r_r5;
    cpy_r_r6 = cpy_r_r3.f2;
    CPy_DECREF(cpy_r_r3.f0);
    CPy_DECREF(cpy_r_r3.f1);
    cpy_r_native = cpy_r_r6;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_final_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 193, CPyStatic_expression___globals);
        goto CPyL56;
    }
CPyL4: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r8, cpy_r_expr);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 193, CPyStatic_expression___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 193, CPyStatic_expression___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL57;
    }
    cpy_r_r11 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_builder___IRBuilder___emit_load_final(cpy_r_builder, cpy_r_final_var, cpy_r_fullname, cpy_r_r7, cpy_r_native, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_final_var);
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 192, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_value = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_value != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL58;
    if (likely(cpy_r_value != Py_None))
        cpy_r_r15 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 196, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_value);
        goto CPyL54;
    }
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___MemberExpr, 6, mypy___nodes___MemberExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 198, CPyStatic_expression___globals);
        goto CPyL54;
    }
CPyL11: ;
    cpy_r_r17 = CPyDef_expression___transform_math_literal(cpy_r_builder, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 198, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_math_literal = cpy_r_r17;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_math_literal != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL59;
    if (likely(cpy_r_math_literal != Py_None))
        cpy_r_r20 = cpy_r_math_literal;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 200, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_math_literal);
        goto CPyL54;
    }
    return cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    cpy_r_r22 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL24;
    cpy_r_r26 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r26);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___MypyFile))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 202, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_r26);
        goto CPyL54;
    }
    cpy_r_r28 = CPY_GET_ATTR(cpy_r_r27, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 202, CPyStatic_expression___globals);
        goto CPyL54;
    }
CPyL18: ;
    cpy_r_r29 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_imports;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = PyDict_Contains(cpy_r_r29, cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 202, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL24;
    cpy_r_r33 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r33);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___MypyFile))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 203, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_r33);
        goto CPyL54;
    }
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_r34, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 203, CPyStatic_expression___globals);
        goto CPyL54;
    }
CPyL22: ;
    cpy_r_r36 = CPyDef_builder___IRBuilder___load_module(cpy_r_builder, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 203, CPyStatic_expression___globals);
        goto CPyL54;
    }
    return cpy_r_r36;
CPyL24: ;
    cpy_r_r37 = CPyDef_builder___IRBuilder___is_native_attr_ref(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 205, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_can_borrow = cpy_r_r37;
    cpy_r_r38 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r38, cpy_r_can_borrow);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 206, CPyStatic_expression___globals);
        goto CPyL54;
    }
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 206, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r39);
        goto CPyL54;
    }
    cpy_r_obj = cpy_r_r40;
    cpy_r_r41 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 207, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_rtype = cpy_r_r41;
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyDict_GetWithNone(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 210, CPyStatic_expression___globals);
        goto CPyL61;
    }
    if (PyObject_TypeCheck(cpy_r_r44, CPyType_types___Type))
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL10115;
    if (cpy_r_r44 == Py_None)
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL10115;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 210, CPyStatic_expression___globals, "mypy.types.Type or None", cpy_r_r44);
    goto CPyL61;
__LL10115: ;
    cpy_r_r46 = CPyDef_types___get_proper_type(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 210, CPyStatic_expression___globals);
        goto CPyL61;
    }
    cpy_r_typ = cpy_r_r46;
    cpy_r_r47 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL48;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r51 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 211, CPyStatic_expression___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL62;
    }
    cpy_r_r52 = ((mypy___types___TupleTypeObject *)cpy_r_r51)->_partial_fallback;
    cpy_r_r53 = ((mypy___types___InstanceObject *)cpy_r_r52)->_type;
    cpy_r_r54 = ((mypy___nodes___TypeInfoObject *)cpy_r_r53)->_is_named_tuple;
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_member_expr", "TypeInfo", "is_named_tuple", 211, CPyStatic_expression___globals);
        goto CPyL62;
    }
CPyL34: ;
    if (!cpy_r_r54) goto CPyL48;
CPyL35: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r55 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 212, CPyStatic_expression___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL62;
    }
    cpy_r_r56 = ((mypy___types___TupleTypeObject *)cpy_r_r55)->_partial_fallback;
    cpy_r_r57 = ((mypy___types___InstanceObject *)cpy_r_r56)->_type;
    cpy_r_r58 = ((mypy___nodes___TypeInfoObject *)cpy_r_r57)->_metadata;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_member_expr", "TypeInfo", "metadata", 212, CPyStatic_expression___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r58);
CPyL37: ;
    cpy_r_r59 = CPyStatics[5204]; /* 'namedtuple' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 212, CPyStatic_expression___globals);
        goto CPyL62;
    }
    if (likely(PyDict_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 212, CPyStatic_expression___globals, "dict", cpy_r_r60);
        goto CPyL62;
    }
    cpy_r_r62 = CPyStatics[5221]; /* 'fields' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 212, CPyStatic_expression___globals);
        goto CPyL62;
    }
    cpy_r_fields = cpy_r_r63;
    cpy_r_r64 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PySequence_Contains(cpy_r_fields, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 213, CPyStatic_expression___globals);
        goto CPyL63;
    }
    cpy_r_r67 = cpy_r_r65;
    if (cpy_r_r67) {
        goto CPyL64;
    } else
        goto CPyL65;
CPyL42: ;
    cpy_r_r68 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyStatics[56]; /* 'index' */
    PyObject *cpy_r_r71[2] = {cpy_r_fields, cpy_r_r69};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r72, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 214, CPyStatic_expression___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_r69);
    if (likely(PyLong_Check(cpy_r_r73)))
        cpy_r_r74 = CPyTagged_FromObject(cpy_r_r73);
    else {
        CPy_TypeError("int", cpy_r_r73); cpy_r_r74 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 214, CPyStatic_expression___globals);
        goto CPyL67;
    }
    cpy_r_r75 = CPyDef_ll_builder___LowLevelIRBuilder___load_int(cpy_r_r68, cpy_r_r74);
    CPyTagged_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 214, CPyStatic_expression___globals);
        goto CPyL61;
    }
    cpy_r_index = cpy_r_r75;
    cpy_r_r76 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r77 = PyList_New(1);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 215, CPyStatic_expression___globals);
        goto CPyL68;
    }
    cpy_r_r78 = (CPyPtr)&((PyListObject *)cpy_r_r77)->ob_item;
    cpy_r_r79 = *(CPyPtr *)cpy_r_r78;
    *(PyObject * *)cpy_r_r79 = cpy_r_index;
    cpy_r_r80 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r80);
    cpy_r_r81 = NULL;
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_obj, cpy_r_r76, cpy_r_r77, cpy_r_rtype, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_rtype);
    CPyTagged_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 215, CPyStatic_expression___globals);
        goto CPyL54;
    }
    return cpy_r_r83;
CPyL48: ;
    cpy_r_r84 = CPyDef_expression___check_instance_attribute_access_through_class(cpy_r_builder, cpy_r_expr, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 217, CPyStatic_expression___globals);
        goto CPyL61;
    }
    if (cpy_r_can_borrow) goto CPyL51;
    cpy_r_r85 = cpy_r_can_borrow;
    goto CPyL52;
CPyL51: ;
    cpy_r_r86 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_can_borrow;
    cpy_r_r85 = cpy_r_r86;
CPyL52: ;
    cpy_r_borrow = cpy_r_r85;
    cpy_r_r87 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyDef_ll_builder___LowLevelIRBuilder___get_attr(cpy_r_r87, cpy_r_obj, cpy_r_r88, cpy_r_rtype, cpy_r_r89, cpy_r_borrow);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_rtype);
    CPyTagged_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 220, CPyStatic_expression___globals);
        goto CPyL54;
    }
    return cpy_r_r90;
CPyL54: ;
    cpy_r_r91 = NULL;
    return cpy_r_r91;
CPyL55: ;
    CPy_DECREF(cpy_r_final);
    goto CPyL10;
CPyL56: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    goto CPyL54;
CPyL57: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    CPy_DecRef(cpy_r_r7);
    goto CPyL54;
CPyL58: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL10;
CPyL59: ;
    CPy_DECREF(cpy_r_math_literal);
    goto CPyL15;
CPyL60: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL54;
CPyL61: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL54;
CPyL62: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_typ);
    goto CPyL54;
CPyL63: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_fields);
    goto CPyL54;
CPyL64: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL42;
CPyL65: ;
    CPy_DECREF(cpy_r_fields);
    goto CPyL48;
CPyL66: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    goto CPyL54;
CPyL67: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_r68);
    goto CPyL54;
CPyL68: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_index);
    goto CPyL54;
}

PyObject *CPyPy_expression___transform_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_member_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_member_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_member_expr", 187, CPyStatic_expression___globals);
    return NULL;
}

char CPyDef_expression___check_instance_attribute_access_through_class(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_typ) {
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
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r18;
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
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    cpy_r_r1 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r10 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL38;
    cpy_r_r15 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r15) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___RefExpr)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 228, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r15);
        goto CPyL39;
    }
    cpy_r_r17 = ((mypy___nodes___RefExprObject *)cpy_r_r16)->_node;
    CPy_INCREF(cpy_r_r17);
    cpy_r_node = cpy_r_r17;
    cpy_r_r18 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r22 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 229, CPyStatic_expression___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL40;
    }
    cpy_r_r23 = ((mypy___types___TypeTypeObject *)cpy_r_r22)->_item;
    cpy_r_r24 = (PyObject *)CPyType_types___Instance;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r23)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (cpy_r_r27) {
        goto CPyL41;
    } else
        goto CPyL14;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r28 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 231, CPyStatic_expression___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL39;
    }
    cpy_r_r29 = ((mypy___types___TypeTypeObject *)cpy_r_r28)->_item;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___Instance))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 231, CPyStatic_expression___globals, "mypy.types.Instance", cpy_r_r29);
        goto CPyL39;
    }
    cpy_r_r31 = ((mypy___types___InstanceObject *)cpy_r_r30)->_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_node = cpy_r_r31;
CPyL14: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL16;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL17;
CPyL16: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    cpy_r_r36 = cpy_r_r40;
CPyL17: ;
    if (!cpy_r_r36) goto CPyL42;
    cpy_r_r41 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r42 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r41)->_type_to_ir;
    CPy_INCREF(cpy_r_r42);
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r43 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 233, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL43;
    }
    cpy_r_r44 = CPyDict_GetWithNone(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 233, CPyStatic_expression___globals);
        goto CPyL40;
    }
    if (Py_TYPE(cpy_r_r44) == CPyType_class_ir___ClassIR)
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL10116;
    if (cpy_r_r44 == Py_None)
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL10116;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 233, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR or None", cpy_r_r44);
    goto CPyL40;
__LL10116: ;
    cpy_r_class_ir = cpy_r_r45;
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_class_ir != cpy_r_r46;
    if (!cpy_r_r47) goto CPyL44;
    if (likely(cpy_r_class_ir != Py_None))
        cpy_r_r48 = cpy_r_class_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 234, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_class_ir);
        goto CPyL45;
    }
    cpy_r_r49 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r48)->_is_ext_class;
    CPy_DECREF(cpy_r_class_ir);
    if (!cpy_r_r49) goto CPyL42;
CPyL24: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r50 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 235, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL39;
    }
    cpy_r_r51 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_nodes___TypeInfo___get(cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 235, CPyStatic_expression___globals);
        goto CPyL39;
    }
    cpy_r_sym = cpy_r_r52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r54 = cpy_r_sym != cpy_r_r53;
    if (!cpy_r_r54) goto CPyL46;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r55 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 238, CPyStatic_expression___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL47;
    }
    cpy_r_r56 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r55)->_node;
    cpy_r_r57 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL46;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r61 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 239, CPyStatic_expression___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL47;
    }
    cpy_r_r62 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r61)->_node;
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___Var))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 239, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r62);
        goto CPyL47;
    }
    cpy_r_r64 = ((mypy___nodes___VarObject *)cpy_r_r63)->_is_classvar;
    if (cpy_r_r64) goto CPyL46;
CPyL32: ;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r65 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 240, CPyStatic_expression___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL47;
    }
    cpy_r_r66 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r65)->_node;
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_nodes___Var))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 240, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r66);
        goto CPyL47;
    }
    cpy_r_r68 = ((mypy___nodes___VarObject *)cpy_r_r67)->_is_final;
    CPy_DECREF(cpy_r_sym);
    if (cpy_r_r68) goto CPyL38;
CPyL35: ;
    cpy_r_r69 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyStatics[8214]; /* 'Cannot access instance attribute "' */
    cpy_r_r71 = CPyStatics[8215]; /* '" through class object' */
    cpy_r_r72 = CPyStr_Build(3, cpy_r_r70, cpy_r_r69, cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 243, CPyStatic_expression___globals);
        goto CPyL39;
    }
    cpy_r_r73 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 242, CPyStatic_expression___globals);
        goto CPyL39;
    }
    cpy_r_r75 = CPyStatics[8216]; /* ('(Hint: Use "x: Final = ..." or "x: ClassVar = ..." to '
                                     'define a class attribute)') */
    cpy_r_r76 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r76);
    cpy_r_r77 = CPyDef_builder___IRBuilder___note(cpy_r_builder, cpy_r_r75, cpy_r_r76);
    CPyTagged_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 248, CPyStatic_expression___globals);
        goto CPyL39;
    }
CPyL38: ;
    return 1;
CPyL39: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL40: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL39;
CPyL41: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL11;
CPyL42: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r42);
    goto CPyL39;
CPyL44: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_class_ir);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL39;
CPyL46: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_sym);
    goto CPyL39;
}

PyObject *CPyPy_expression___check_instance_attribute_access_through_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "typ", 0};
    static CPyArg_Parser parser = {"OOO:check_instance_attribute_access_through_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_typ)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_typ;
    if (PyObject_TypeCheck(obj_typ, CPyType_types___ProperType))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10117;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10117;
    CPy_TypeError("mypy.types.ProperType or None", obj_typ); 
    goto fail;
__LL10117: ;
    char retval = CPyDef_expression___check_instance_attribute_access_through_class(arg_builder, arg_expr, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "check_instance_attribute_access_through_class", 223, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_super_expr(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_sup_val;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_arg;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_iter_env;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_vself;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_self_targ;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    CPyPtr cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    cpy_r_r0 = CPyStatics[8217]; /* 'builtins.super' */
    cpy_r_r1 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 257, CPyStatic_expression___globals);
        goto CPyL43;
    }
    cpy_r_sup_val = cpy_r_r2;
    cpy_r_r3 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_call;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_r3)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_call;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_r9)->_args;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 259, CPyStatic_expression___globals);
        goto CPyL44;
    }
    cpy_r_r14 = 0;
CPyL4: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL45;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 259, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL46;
    }
    cpy_r_arg = cpy_r_r20;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r21);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 259, CPyStatic_expression___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 259, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r22);
        goto CPyL46;
    }
    cpy_r_r24 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r23);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 259, CPyStatic_expression___globals);
        goto CPyL46;
    }
    cpy_r_r25 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r25;
    goto CPyL4;
CPyL10: ;
    cpy_r_args = cpy_r_r13;
    goto CPyL40;
CPyL11: ;
    cpy_r_r26 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_info;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL14;
    } else
        goto CPyL47;
CPyL12: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 261, CPyStatic_expression___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r30 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r30);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 262, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r30);
        goto CPyL48;
    }
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 262, CPyStatic_expression___globals);
        goto CPyL48;
    }
CPyL16: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 262, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_typ = cpy_r_r33;
    cpy_r_r34 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r35 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r34)->_type_to_ir;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r36);
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 263, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r36);
        goto CPyL49;
    }
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 263, CPyStatic_expression___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_class_ir___ClassIR))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 263, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r38);
        goto CPyL50;
    }
    cpy_r_ir = cpy_r_r39;
    cpy_r_r40 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    cpy_r_r41 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r40)->_args;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = PyObject_GetIter(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 264, CPyStatic_expression___globals);
        goto CPyL51;
    }
    cpy_r_iter_env = cpy_r_r42;
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[7988]; /* 'next' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 266, CPyStatic_expression___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_iter_env};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 266, CPyStatic_expression___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_ops___Register))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 266, CPyStatic_expression___globals, "mypyc.ir.ops.Register", cpy_r_r48);
        goto CPyL52;
    }
    cpy_r_vself = cpy_r_r49;
    cpy_r_r50 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPY_GET_ATTR(cpy_r_r50, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 267, CPyStatic_expression___globals);
        goto CPyL53;
    }
CPyL25: ;
    if (cpy_r_r51) {
        goto CPyL54;
    } else
        goto CPyL33;
CPyL26: ;
    cpy_r_r52 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r53 = CPyList_GetItemShort(cpy_r_r52, -2);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 269, CPyStatic_expression___globals);
        goto CPyL50;
    }
    if (likely(PyDict_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 269, CPyStatic_expression___globals, "dict", cpy_r_r53);
        goto CPyL50;
    }
    cpy_r_r55 = CPyDict_Values(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 269, CPyStatic_expression___globals);
        goto CPyL50;
    }
    cpy_r_r56 = CPyList_GetItemShort(cpy_r_r55, 12);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 269, CPyStatic_expression___globals);
        goto CPyL50;
    }
    if (Py_TYPE(cpy_r_r56) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL10118;
    if (Py_TYPE(cpy_r_r56) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL10118;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 269, CPyStatic_expression___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r56);
    goto CPyL50;
__LL10118: ;
    cpy_r_self_targ = cpy_r_r57;
    cpy_r_r58 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r59 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r58)->_fitem;
    cpy_r_r60 = ((mypy___nodes___FuncItemObject *)cpy_r_r59)->_line;
    CPyTagged_INCREF(cpy_r_r60);
    cpy_r_r61 = 2;
    cpy_r_r62 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_self_targ, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_self_targ);
    CPyTagged_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 270, CPyStatic_expression___globals);
        goto CPyL50;
    }
    cpy_r_vself = cpy_r_r62;
    goto CPyL38;
CPyL33: ;
    cpy_r_r63 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    CPy_DECREF(cpy_r_ir);
    if (cpy_r_r63) {
        goto CPyL55;
    } else
        goto CPyL56;
CPyL34: ;
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[7988]; /* 'next' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 272, CPyStatic_expression___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r67[1] = {cpy_r_iter_env};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 1, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 272, CPyStatic_expression___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_iter_env);
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_ops___Register))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 272, CPyStatic_expression___globals, "mypyc.ir.ops.Register", cpy_r_r69);
        goto CPyL50;
    }
    cpy_r_vself = cpy_r_r70;
CPyL38: ;
    cpy_r_r71 = PyList_New(2);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 273, CPyStatic_expression___globals);
        goto CPyL58;
    }
    cpy_r_r72 = (CPyPtr)&((PyListObject *)cpy_r_r71)->ob_item;
    cpy_r_r73 = *(CPyPtr *)cpy_r_r72;
    *(PyObject * *)cpy_r_r73 = cpy_r_typ;
    cpy_r_r74 = cpy_r_r73 + 8;
    *(PyObject * *)cpy_r_r74 = cpy_r_vself;
    cpy_r_args = cpy_r_r71;
CPyL40: ;
    cpy_r_r75 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r75);
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_sup_val, cpy_r_args, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_sup_val);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 274, CPyStatic_expression___globals);
        goto CPyL43;
    }
    cpy_r_res = cpy_r_r78;
    cpy_r_r79 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_res, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r79);
    CPyTagged_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 275, CPyStatic_expression___globals);
        goto CPyL43;
    }
    return cpy_r_r81;
CPyL43: ;
    cpy_r_r82 = NULL;
    return cpy_r_r82;
CPyL44: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_r10);
    goto CPyL43;
CPyL45: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL10;
CPyL46: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL43;
CPyL47: ;
    CPy_DECREF(cpy_r_sup_val);
    goto CPyL12;
CPyL48: ;
    CPy_DecRef(cpy_r_sup_val);
    goto CPyL43;
CPyL49: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r35);
    goto CPyL43;
CPyL50: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    goto CPyL43;
CPyL51: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_ir);
    goto CPyL43;
CPyL52: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_iter_env);
    goto CPyL43;
CPyL53: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_iter_env);
    CPy_DecRef(cpy_r_vself);
    goto CPyL43;
CPyL54: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_iter_env);
    CPy_DECREF(cpy_r_vself);
    goto CPyL26;
CPyL55: ;
    CPy_DECREF(cpy_r_iter_env);
    goto CPyL38;
CPyL56: ;
    CPy_DECREF(cpy_r_vself);
    goto CPyL34;
CPyL57: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_iter_env);
    goto CPyL43;
CPyL58: ;
    CPy_DecRef(cpy_r_sup_val);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_vself);
    goto CPyL43;
}

PyObject *CPyPy_expression___transform_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_super_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_super_expr(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_super_expr", 255, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_call_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_callee;
    CPy_INCREF(cpy_r_r0);
    cpy_r_callee = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_analyzed;
    cpy_r_r2 = (PyObject *)CPyType_nodes___CastExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL75;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r6 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_analyzed;
    CPy_INCREF(cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___CastExpr))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 284, CPyStatic_expression___globals, "mypy.nodes.CastExpr", cpy_r_r6);
        goto CPyL74;
    }
    cpy_r_r8 = CPyDef_expression___translate_cast_expr(cpy_r_builder, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 284, CPyStatic_expression___globals);
        goto CPyL74;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_analyzed;
    cpy_r_r10 = (PyObject *)CPyType_nodes___AssertTypeExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (cpy_r_r13) {
        goto CPyL76;
    } else
        goto CPyL9;
CPyL5: ;
    cpy_r_r14 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___AssertTypeExpr))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 287, CPyStatic_expression___globals, "mypy.nodes.AssertTypeExpr", cpy_r_r14);
        goto CPyL74;
    }
    cpy_r_r16 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_r15)->_expr;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 287, CPyStatic_expression___globals);
        goto CPyL74;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 287, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL74;
    }
    return cpy_r_r19;
CPyL9: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL11;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL12;
CPyL11: ;
    cpy_r_r25 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    cpy_r_r24 = cpy_r_r28;
CPyL12: ;
    if (!cpy_r_r24) goto CPyL38;
    CPy_INCREF(cpy_r_callee);
    if (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr)
        cpy_r_r29 = cpy_r_callee;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL10119;
    if (Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr)
        cpy_r_r29 = cpy_r_callee;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL10119;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 290, CPyStatic_expression___globals, "union[mypy.nodes.NameExpr, mypy.nodes.MemberExpr]", cpy_r_callee);
    goto CPyL77;
__LL10119: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_r29)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___NameExpr))
        cpy_r_r34 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 290, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_r29);
        goto CPyL77;
    }
    cpy_r_r35 = ((mypy___nodes___NameExprObject *)cpy_r_r34)->_node;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL19;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___MemberExpr))
        cpy_r_r37 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 290, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_r29);
        goto CPyL77;
    }
    cpy_r_r38 = ((mypy___nodes___MemberExprObject *)cpy_r_r37)->_node;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r36 = cpy_r_r38;
CPyL19: ;
    cpy_r_r39 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) {
        goto CPyL78;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL22;
CPyL21: ;
    cpy_r_r44 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    CPy_DECREF(cpy_r_r36);
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    cpy_r_r43 = cpy_r_r47;
CPyL22: ;
    if (!cpy_r_r43) goto CPyL38;
    CPy_INCREF(cpy_r_callee);
    if (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr)
        cpy_r_r48 = cpy_r_callee;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10120;
    if (Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr)
        cpy_r_r48 = cpy_r_callee;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10120;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals, "union[mypy.nodes.NameExpr, mypy.nodes.MemberExpr]", cpy_r_callee);
    goto CPyL77;
__LL10120: ;
    cpy_r_r49 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r48)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___NameExpr))
        cpy_r_r53 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_r48);
        goto CPyL77;
    }
    cpy_r_r54 = ((mypy___nodes___NameExprObject *)cpy_r_r53)->_node;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (likely((Py_TYPE(cpy_r_r54) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___TypeInfo)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r54);
        goto CPyL77;
    }
    cpy_r_r56 = cpy_r_r55;
    goto CPyL31;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___MemberExpr))
        cpy_r_r57 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_r48);
        goto CPyL77;
    }
    cpy_r_r58 = ((mypy___nodes___MemberExprObject *)cpy_r_r57)->_node;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (likely((Py_TYPE(cpy_r_r58) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r58) == CPyType_nodes___TypeInfo)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r58);
        goto CPyL77;
    }
    cpy_r_r56 = cpy_r_r59;
CPyL31: ;
    cpy_r_r60 = ((mypy___nodes___TypeInfoObject *)cpy_r_r56)->_is_newtype;
    if (unlikely(cpy_r_r60 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_newtype' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 291, CPyStatic_expression___globals);
        goto CPyL77;
    }
CPyL32: ;
    if (cpy_r_r60) {
        goto CPyL79;
    } else
        goto CPyL38;
CPyL33: ;
    cpy_r_r61 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r62 = CPyList_GetItemShort(cpy_r_r61, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 294, CPyStatic_expression___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r62, CPyType_nodes___Expression)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 294, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r62);
        goto CPyL74;
    }
    cpy_r_r64 = 2;
    cpy_r_r65 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 294, CPyStatic_expression___globals);
        goto CPyL74;
    }
    if (likely(cpy_r_r65 != Py_None))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 294, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r65);
        goto CPyL74;
    }
    return cpy_r_r66;
CPyL38: ;
    cpy_r_r67 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (!cpy_r_r70) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___IndexExpr))
        cpy_r_r71 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 296, CPyStatic_expression___globals, "mypy.nodes.IndexExpr", cpy_r_callee);
        goto CPyL77;
    }
    cpy_r_r72 = ((mypy___nodes___IndexExprObject *)cpy_r_r71)->_analyzed;
    cpy_r_r73 = (PyObject *)CPyType_nodes___TypeApplication;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_r72)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    if (!cpy_r_r76) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___IndexExpr))
        cpy_r_r77 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 297, CPyStatic_expression___globals, "mypy.nodes.IndexExpr", cpy_r_callee);
        goto CPyL77;
    }
    cpy_r_r78 = ((mypy___nodes___IndexExprObject *)cpy_r_r77)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_nodes___TypeApplication))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 297, CPyStatic_expression___globals, "mypy.nodes.TypeApplication", cpy_r_r78);
        goto CPyL77;
    }
    cpy_r_r80 = ((mypy___nodes___TypeApplicationObject *)cpy_r_r79)->_expr;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_callee);
    cpy_r_callee = cpy_r_r80;
CPyL44: ;
    cpy_r_r81 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (!cpy_r_r84) goto CPyL68;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r85 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 300, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL77;
    }
    cpy_r_r86 = ((mypy___nodes___MemberExprObject *)cpy_r_r85)->_expr;
    cpy_r_r87 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_r86)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    if (!cpy_r_r90) goto CPyL48;
    cpy_r_r91 = cpy_r_r90;
    goto CPyL49;
CPyL48: ;
    cpy_r_r92 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_r86)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    cpy_r_r91 = cpy_r_r95;
CPyL49: ;
    if (!cpy_r_r91) goto CPyL51;
    cpy_r_r96 = cpy_r_r91;
    goto CPyL52;
CPyL51: ;
    cpy_r_r97 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r86)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    cpy_r_r96 = cpy_r_r100;
CPyL52: ;
    if (!cpy_r_r96) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r101 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 300, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL77;
    }
    cpy_r_r102 = ((mypy___nodes___MemberExprObject *)cpy_r_r101)->_expr;
    if (likely((Py_TYPE(cpy_r_r102) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r102) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r102) == CPyType_nodes___RefExpr)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 300, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r102);
        goto CPyL77;
    }
    cpy_r_r104 = ((mypy___nodes___RefExprObject *)cpy_r_r103)->_node;
    cpy_r_r105 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r106 = (CPyPtr)&((PyObject *)cpy_r_r104)->ob_type;
    cpy_r_r107 = *(PyObject * *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 == cpy_r_r105;
    if (!cpy_r_r108) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r109 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 302, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL74;
    }
    cpy_r_r110 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 302, CPyStatic_expression___globals);
        goto CPyL74;
    }
    return cpy_r_r110;
CPyL59: ;
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r111 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 303, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL77;
    }
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyDef_specialize___apply_method_specialization(cpy_r_builder, cpy_r_expr, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 303, CPyStatic_expression___globals);
        goto CPyL77;
    }
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_r113 != cpy_r_r114;
    if (cpy_r_r115) {
        goto CPyL80;
    } else
        goto CPyL81;
CPyL62: ;
    if (likely(cpy_r_r113 != Py_None))
        cpy_r_r116 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 303, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r113);
        goto CPyL74;
    }
    cpy_r_r117 = cpy_r_r116;
    goto CPyL67;
CPyL64: ;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r118 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 304, CPyStatic_expression___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL74;
    }
    cpy_r_r119 = CPyDef_expression___translate_method_call(cpy_r_builder, cpy_r_expr, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 303, CPyStatic_expression___globals);
        goto CPyL74;
    }
    cpy_r_r117 = cpy_r_r119;
CPyL67: ;
    return cpy_r_r117;
CPyL68: ;
    cpy_r_r120 = (PyObject *)CPyType_nodes___SuperExpr;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    if (!cpy_r_r123) goto CPyL72;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___SuperExpr))
        cpy_r_r124 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 307, CPyStatic_expression___globals, "mypy.nodes.SuperExpr", cpy_r_callee);
        goto CPyL74;
    }
    cpy_r_r125 = CPyDef_expression___translate_super_method_call(cpy_r_builder, cpy_r_expr, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 307, CPyStatic_expression___globals);
        goto CPyL74;
    }
    return cpy_r_r125;
CPyL72: ;
    cpy_r_r126 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    CPy_DECREF(cpy_r_callee);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 309, CPyStatic_expression___globals);
        goto CPyL74;
    }
    return cpy_r_r126;
CPyL74: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL75: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL1;
CPyL76: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL5;
CPyL77: ;
    CPy_DecRef(cpy_r_callee);
    goto CPyL74;
CPyL78: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL20;
CPyL79: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL33;
CPyL80: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL62;
CPyL81: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL64;
}

PyObject *CPyPy_expression___transform_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_call_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    PyObject *retval = CPyDef_expression___transform_call_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_call_expr", 281, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_function;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_arg;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_args;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL16;
    CPy_INCREF(cpy_r_callee);
    if (likely((Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 315, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_callee);
        goto CPyL28;
    }
    cpy_r_r15 = CPyDef_specialize___apply_function_specialization(cpy_r_builder, cpy_r_expr, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 315, CPyStatic_expression___globals);
        goto CPyL28;
    }
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL29;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 315, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL28;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL15;
CPyL12: ;
    CPy_INCREF(cpy_r_callee);
    if (likely((Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___RefExpr)))
        cpy_r_r20 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 316, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_callee);
        goto CPyL28;
    }
    cpy_r_r21 = CPyDef_expression___translate_refexpr_call(cpy_r_builder, cpy_r_expr, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 315, CPyStatic_expression___globals);
        goto CPyL28;
    }
    cpy_r_r19 = cpy_r_r21;
CPyL15: ;
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_callee, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 319, CPyStatic_expression___globals);
        goto CPyL28;
    }
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 319, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL28;
    }
    cpy_r_function = cpy_r_r24;
    cpy_r_r25 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = PyList_New(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 320, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_r29 = 0;
CPyL20: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL31;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r25, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_nodes___Expression)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 320, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r34);
        goto CPyL32;
    }
    cpy_r_arg = cpy_r_r35;
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r36);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 320, CPyStatic_expression___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_call", 320, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r37);
        goto CPyL32;
    }
    cpy_r_r39 = CPyList_SetItemUnsafe(cpy_r_r28, cpy_r_r29, cpy_r_r38);
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 320, CPyStatic_expression___globals);
        goto CPyL32;
    }
    cpy_r_r40 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r40;
    goto CPyL20;
CPyL26: ;
    cpy_r_args = cpy_r_r28;
    cpy_r_r41 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r41);
    cpy_r_r42 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_function, cpy_r_args, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_function);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 321, CPyStatic_expression___globals);
        goto CPyL28;
    }
    return cpy_r_r44;
CPyL28: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL29: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL12;
CPyL30: ;
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r25);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    goto CPyL28;
}

PyObject *CPyPy_expression___translate_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_call", kwlist, 0};
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
    if (likely(PyObject_TypeCheck(obj_callee, CPyType_nodes___Expression)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___translate_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_call", 312, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_refexpr_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
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
    PyObject *cpy_r_arg;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_arg_values;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 329, CPyStatic_expression___globals);
        goto CPyL11;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 329, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r11);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 329, CPyStatic_expression___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 329, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r12);
        goto CPyL13;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 329, CPyStatic_expression___globals);
        goto CPyL13;
    }
    cpy_r_r15 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r15;
    goto CPyL2;
CPyL8: ;
    cpy_r_arg_values = cpy_r_r3;
    cpy_r_r16 = CPyDef_builder___IRBuilder___call_refexpr_with_args(cpy_r_builder, cpy_r_expr, cpy_r_callee, cpy_r_arg_values);
    CPy_DECREF(cpy_r_arg_values);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 331, CPyStatic_expression___globals);
        goto CPyL10;
    }
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
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

PyObject *CPyPy_expression___translate_refexpr_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_refexpr_call", kwlist, 0};
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
    PyObject *retval = CPyDef_expression___translate_refexpr_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_refexpr_call", 326, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_method_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
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
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_function;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_arg;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_args;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r121;
    CPyPtr cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_receiver_typ;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_obj;
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
    PyObject *cpy_r_r167;
    PyObject *cpy_r_arg_2;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    CPyTagged cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyTagged cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    cpy_r_r0 = CPyDef_builder___IRBuilder___is_native_ref_expr(cpy_r_builder, cpy_r_callee);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 339, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 341, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    cpy_r_r3 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL7;
CPyL6: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    cpy_r_r7 = cpy_r_r11;
CPyL7: ;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r12 = cpy_r_r7;
    goto CPyL10;
CPyL9: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL10: ;
    if (!cpy_r_r12) goto CPyL39;
    cpy_r_r17 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r17) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r17) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r17) == CPyType_nodes___RefExpr)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 344, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r17);
        goto CPyL100;
    }
    cpy_r_r19 = ((mypy___nodes___RefExprObject *)cpy_r_r18)->_node;
    cpy_r_r20 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL15;
CPyL14: ;
    cpy_r_r25 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    cpy_r_r24 = cpy_r_r28;
CPyL15: ;
    if (!cpy_r_r24) goto CPyL39;
    cpy_r_r29 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r29) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r29) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r29) == CPyType_nodes___RefExpr)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 345, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r29);
        goto CPyL100;
    }
    cpy_r_r31 = ((mypy___nodes___RefExprObject *)cpy_r_r30)->_node;
    CPy_INCREF(cpy_r_r31);
    if (likely((Py_TYPE(cpy_r_r31) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r31) == CPyType_nodes___TypeInfo)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 345, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r31);
        goto CPyL100;
    }
    cpy_r_r33 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r34 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r33)->_type_to_ir;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = PyDict_Contains(cpy_r_r34, cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 345, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL39;
    cpy_r_r38 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r39 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r38)->_type_to_ir;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r40) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r40) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r40) == CPyType_nodes___RefExpr)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 346, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r40);
        goto CPyL101;
    }
    cpy_r_r42 = ((mypy___nodes___RefExprObject *)cpy_r_r41)->_node;
    CPy_INCREF(cpy_r_r42);
    if (likely((Py_TYPE(cpy_r_r42) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r42) == CPyType_nodes___TypeInfo)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 346, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r42);
        goto CPyL101;
    }
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r39, cpy_r_r43);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 346, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_class_ir___ClassIR))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 346, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r44);
        goto CPyL100;
    }
    cpy_r_r46 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_class_ir___ClassIR___has_method(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 346, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r47) goto CPyL39;
    cpy_r_r48 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r48) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r48) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r48) == CPyType_nodes___RefExpr)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 349, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r48);
        goto CPyL100;
    }
    cpy_r_r50 = ((mypy___nodes___RefExprObject *)cpy_r_r49)->_node;
    cpy_r_r51 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL29;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL30;
CPyL29: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL30: ;
    if (cpy_r_r55) goto CPyL33;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 349, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r61 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r62 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r61)->_type_to_ir;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r63) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r63) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r63) == CPyType_nodes___RefExpr)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 350, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r63);
        goto CPyL102;
    }
    cpy_r_r65 = ((mypy___nodes___RefExprObject *)cpy_r_r64)->_node;
    CPy_INCREF(cpy_r_r65);
    if (likely((Py_TYPE(cpy_r_r65) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r65) == CPyType_nodes___TypeInfo)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 350, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r65);
        goto CPyL102;
    }
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r62, cpy_r_r66);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 350, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_class_ir___ClassIR))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 350, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r67);
        goto CPyL100;
    }
    cpy_r_ir = cpy_r_r68;
    cpy_r_r69 = CPyDef_expression___call_classmethod(cpy_r_builder, cpy_r_ir, cpy_r_expr, cpy_r_callee);
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 351, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r69;
CPyL39: ;
    cpy_r_r70 = CPyDef_builder___IRBuilder___is_module_member_expr(cpy_r_builder, cpy_r_callee);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 352, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r70) goto CPyL53;
    cpy_r_r71 = 2;
    cpy_r_r72 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_callee, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 354, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(cpy_r_r72 != Py_None))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 354, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r72);
        goto CPyL100;
    }
    cpy_r_function = cpy_r_r73;
    cpy_r_r74 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    cpy_r_r77 = PyList_New(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 355, CPyStatic_expression___globals);
        goto CPyL103;
    }
    cpy_r_r78 = 0;
CPyL45: ;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = (Py_ssize_t)cpy_r_r78 < (Py_ssize_t)cpy_r_r81;
    if (!cpy_r_r82) goto CPyL104;
    cpy_r_r83 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r78);
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_nodes___Expression)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 355, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r83);
        goto CPyL105;
    }
    cpy_r_arg = cpy_r_r84;
    cpy_r_r85 = 2;
    cpy_r_r86 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r85);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 355, CPyStatic_expression___globals);
        goto CPyL105;
    }
    if (likely(cpy_r_r86 != Py_None))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 355, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r86);
        goto CPyL105;
    }
    cpy_r_r88 = CPyList_SetItemUnsafe(cpy_r_r77, cpy_r_r78, cpy_r_r87);
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 355, CPyStatic_expression___globals);
        goto CPyL105;
    }
    cpy_r_r89 = cpy_r_r78 + 2;
    cpy_r_r78 = cpy_r_r89;
    goto CPyL45;
CPyL51: ;
    cpy_r_args = cpy_r_r77;
    cpy_r_r90 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r90);
    cpy_r_r91 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_function, cpy_r_args, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_function);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 356, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r93;
CPyL53: ;
    cpy_r_r94 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    cpy_r_r95 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_r94)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (!cpy_r_r98) goto CPyL55;
    cpy_r_r99 = cpy_r_r98;
    goto CPyL56;
CPyL55: ;
    cpy_r_r100 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_r94)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    cpy_r_r99 = cpy_r_r103;
CPyL56: ;
    if (!cpy_r_r99) goto CPyL58;
    cpy_r_r104 = cpy_r_r99;
    goto CPyL59;
CPyL58: ;
    cpy_r_r105 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r106 = (CPyPtr)&((PyObject *)cpy_r_r94)->ob_type;
    cpy_r_r107 = *(PyObject * *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 == cpy_r_r105;
    cpy_r_r104 = cpy_r_r108;
CPyL59: ;
    if (!cpy_r_r104) goto CPyL82;
    cpy_r_r109 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    if (likely((Py_TYPE(cpy_r_r109) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r109) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r109) == CPyType_nodes___RefExpr)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 361, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_r109);
        goto CPyL100;
    }
    cpy_r_r111 = ((mypy___nodes___RefExprObject *)cpy_r_r110)->_node;
    CPy_INCREF(cpy_r_r111);
    cpy_r_node = cpy_r_r111;
    cpy_r_r112 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    if (!cpy_r_r115) goto CPyL106;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r116 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 362, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL107;
    }
    cpy_r_r117 = ((mypy___nodes___VarObject *)cpy_r_r116)->_is_cls;
    if (!cpy_r_r117) goto CPyL106;
CPyL64: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r118 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 363, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL107;
    }
    cpy_r_r119 = ((mypy___nodes___VarObject *)cpy_r_r118)->_type;
    CPy_INCREF(cpy_r_r119);
    CPy_DECREF(cpy_r_node);
    cpy_r_r120 = CPyDef_types___get_proper_type(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 363, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_typ = cpy_r_r120;
    cpy_r_r121 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r122 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r123 = *(PyObject * *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 == cpy_r_r121;
    if (!cpy_r_r124) goto CPyL108;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r125 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 364, CPyStatic_expression___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL109;
    }
    cpy_r_r126 = ((mypy___types___TypeTypeObject *)cpy_r_r125)->_item;
    cpy_r_r127 = (PyObject *)CPyType_types___Instance;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (!cpy_r_r130) goto CPyL108;
    cpy_r_r131 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r132 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r131)->_type_to_ir;
    CPy_INCREF(cpy_r_r132);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r133 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 365, CPyStatic_expression___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL110;
    }
    cpy_r_r134 = ((mypy___types___TypeTypeObject *)cpy_r_r133)->_item;
    if (likely(Py_TYPE(cpy_r_r134) == CPyType_types___Instance))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 365, CPyStatic_expression___globals, "mypy.types.Instance", cpy_r_r134);
        goto CPyL110;
    }
    cpy_r_r136 = ((mypy___types___InstanceObject *)cpy_r_r135)->_type;
    CPy_INCREF(cpy_r_r136);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r137 = CPyDict_GetWithNone(cpy_r_r132, cpy_r_r136);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 365, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (Py_TYPE(cpy_r_r137) == CPyType_class_ir___ClassIR)
        cpy_r_r138 = cpy_r_r137;
    else {
        cpy_r_r138 = NULL;
    }
    if (cpy_r_r138 != NULL) goto __LL10121;
    if (cpy_r_r137 == Py_None)
        cpy_r_r138 = cpy_r_r137;
    else {
        cpy_r_r138 = NULL;
    }
    if (cpy_r_r138 != NULL) goto __LL10121;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 365, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR or None", cpy_r_r137);
    goto CPyL100;
__LL10121: ;
    cpy_r_class_ir = cpy_r_r138;
    cpy_r_r139 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r140 = cpy_r_class_ir != cpy_r_r139;
    if (!cpy_r_r140) goto CPyL111;
    if (likely(cpy_r_class_ir != Py_None))
        cpy_r_r141 = cpy_r_class_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 366, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_class_ir);
        goto CPyL112;
    }
    cpy_r_r142 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r141)->_is_ext_class;
    if (!cpy_r_r142) goto CPyL111;
CPyL76: ;
    CPy_INCREF(cpy_r_class_ir);
    if (likely(cpy_r_class_ir != Py_None))
        cpy_r_r143 = cpy_r_class_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 366, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_class_ir);
        goto CPyL112;
    }
    cpy_r_r144 = CPyDef_class_ir___ClassIR___has_no_subclasses(cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 366, CPyStatic_expression___globals);
        goto CPyL112;
    }
    if (!cpy_r_r144) goto CPyL111;
    if (likely(cpy_r_class_ir != Py_None))
        cpy_r_r145 = cpy_r_class_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 369, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_class_ir);
        goto CPyL100;
    }
    cpy_r_r146 = CPyDef_expression___call_classmethod(cpy_r_builder, cpy_r_r145, cpy_r_expr, cpy_r_callee);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 369, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r146;
CPyL82: ;
    cpy_r_r147 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 371, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_receiver_typ = cpy_r_r148;
    cpy_r_r149 = CPyDef_specialize___apply_method_specialization(cpy_r_builder, cpy_r_expr, cpy_r_callee, cpy_r_receiver_typ);
    CPy_DECREF(cpy_r_receiver_typ);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 375, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_val = cpy_r_r149;
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = cpy_r_val != cpy_r_r150;
    if (!cpy_r_r151) goto CPyL113;
    if (likely(cpy_r_val != Py_None))
        cpy_r_r152 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 377, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_val);
        goto CPyL100;
    }
    return cpy_r_r152;
CPyL87: ;
    cpy_r_r153 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    CPy_INCREF(cpy_r_r153);
    cpy_r_r154 = 2;
    cpy_r_r155 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 379, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(cpy_r_r155 != Py_None))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 379, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r155);
        goto CPyL100;
    }
    cpy_r_obj = cpy_r_r156;
    cpy_r_r157 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = (CPyPtr)&((PyVarObject *)cpy_r_r157)->ob_size;
    cpy_r_r159 = *(int64_t *)cpy_r_r158;
    cpy_r_r160 = PyList_New(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 380, CPyStatic_expression___globals);
        goto CPyL114;
    }
    cpy_r_r161 = 0;
CPyL91: ;
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_r157)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = (Py_ssize_t)cpy_r_r161 < (Py_ssize_t)cpy_r_r164;
    if (!cpy_r_r165) goto CPyL115;
    cpy_r_r166 = CPyList_GetItemUnsafe(cpy_r_r157, cpy_r_r161);
    if (likely(PyObject_TypeCheck(cpy_r_r166, CPyType_nodes___Expression)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 380, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r166);
        goto CPyL116;
    }
    cpy_r_arg_2 = cpy_r_r167;
    cpy_r_r168 = 2;
    cpy_r_r169 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg_2, cpy_r_r168);
    CPy_DECREF(cpy_r_arg_2);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 380, CPyStatic_expression___globals);
        goto CPyL116;
    }
    if (likely(cpy_r_r169 != Py_None))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_method_call", 380, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r169);
        goto CPyL116;
    }
    cpy_r_r171 = CPyList_SetItemUnsafe(cpy_r_r160, cpy_r_r161, cpy_r_r170);
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 380, CPyStatic_expression___globals);
        goto CPyL116;
    }
    cpy_r_r172 = cpy_r_r161 + 2;
    cpy_r_r161 = cpy_r_r172;
    goto CPyL91;
CPyL97: ;
    cpy_r_args = cpy_r_r160;
    cpy_r_r173 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 385, CPyStatic_expression___globals);
        goto CPyL117;
    }
    cpy_r_r175 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r175);
    cpy_r_r176 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r176);
    cpy_r_r177 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r177);
    cpy_r_r178 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_obj, cpy_r_r173, cpy_r_args, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r173);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r174);
    CPyTagged_DECREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 381, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r178;
CPyL100: ;
    cpy_r_r179 = NULL;
    return cpy_r_r179;
CPyL101: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL100;
CPyL102: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL100;
CPyL103: ;
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r74);
    goto CPyL100;
CPyL104: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL51;
CPyL105: ;
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    goto CPyL100;
CPyL106: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL82;
CPyL107: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL100;
CPyL108: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL82;
CPyL109: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL100;
CPyL110: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r132);
    goto CPyL100;
CPyL111: ;
    CPy_DECREF(cpy_r_class_ir);
    goto CPyL82;
CPyL112: ;
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL100;
CPyL113: ;
    CPy_DECREF(cpy_r_val);
    goto CPyL87;
CPyL114: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r157);
    goto CPyL100;
CPyL115: ;
    CPy_DECREF(cpy_r_r157);
    goto CPyL97;
CPyL116: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r160);
    goto CPyL100;
CPyL117: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r173);
    goto CPyL100;
}

PyObject *CPyPy_expression___translate_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_method_call", kwlist, 0};
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
    if (likely(Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___translate_method_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_method_call", 334, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___call_classmethod(PyObject *cpy_r_builder, PyObject *cpy_r_ir, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_arg_names;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_arg;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_ir, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 393, CPyStatic_expression___globals);
        goto CPyL34;
    }
    cpy_r_decl = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 394, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_args = cpy_r_r2;
    cpy_r_r3 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r5[1] = {cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 395, CPyStatic_expression___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 395, CPyStatic_expression___globals, "list", cpy_r_r7);
        goto CPyL37;
    }
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 395, CPyStatic_expression___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 395, CPyStatic_expression___globals, "list", cpy_r_r14);
        goto CPyL39;
    }
    cpy_r_r16 = cpy_r_r15;
    cpy_r_arg_kinds = cpy_r_r9;
    cpy_r_arg_names = cpy_r_r16;
    cpy_r_r17 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_kind;
    cpy_r_r18 = cpy_r_r17 == 4;
    if (!cpy_r_r18) goto CPyL16;
    cpy_r_r19 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    if (!cpy_r_r19) goto CPyL16;
CPyL8: ;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_ir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 398, CPyStatic_expression___globals);
        goto CPyL40;
    }
CPyL9: ;
    cpy_r_r21 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_builder, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 398, CPyStatic_expression___globals);
        goto CPyL40;
    }
    cpy_r_r22 = PyList_Append(cpy_r_args, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 398, CPyStatic_expression___globals);
        goto CPyL40;
    }
    cpy_r_r24 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 399, CPyStatic_expression___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r26 = CPyList_Insert(cpy_r_arg_kinds, 0, cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 399, CPyStatic_expression___globals);
        goto CPyL40;
    }
    cpy_r_r28 = Py_None;
    cpy_r_r29 = CPyList_Insert(cpy_r_arg_names, 0, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 400, CPyStatic_expression___globals);
        goto CPyL40;
    }
CPyL16: ;
    cpy_r_r31 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = PyList_New(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals);
        goto CPyL42;
    }
    cpy_r_r35 = 0;
CPyL18: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r38;
    if (!cpy_r_r39) goto CPyL43;
    cpy_r_r40 = CPyList_GetItemUnsafe(cpy_r_r31, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_nodes___Expression)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r40);
        goto CPyL44;
    }
    cpy_r_arg = cpy_r_r41;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r42);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r43);
        goto CPyL44;
    }
    cpy_r_r45 = CPyList_SetItemUnsafe(cpy_r_r34, cpy_r_r35, cpy_r_r44);
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals);
        goto CPyL44;
    }
    cpy_r_r46 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r46;
    goto CPyL18;
CPyL24: ;
    cpy_r_r47 = PyNumber_InPlaceAdd(cpy_r_args, cpy_r_r34);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals);
        goto CPyL45;
    }
    if (likely(PyList_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 401, CPyStatic_expression___globals, "list", cpy_r_r47);
        goto CPyL45;
    }
    cpy_r_args = cpy_r_r48;
    cpy_r_r49 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    if (!cpy_r_r49) goto CPyL46;
CPyL27: ;
    cpy_r_r50 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r51);
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r50, cpy_r_decl, cpy_r_args, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_decl);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPyTagged_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 404, CPyStatic_expression___globals);
        goto CPyL34;
    }
    return cpy_r_r53;
CPyL29: ;
    cpy_r_r54 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_expr;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = 2;
    cpy_r_r56 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 406, CPyStatic_expression___globals);
        goto CPyL47;
    }
    if (likely(cpy_r_r56 != Py_None))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "call_classmethod", 406, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r56);
        goto CPyL47;
    }
    cpy_r_obj = cpy_r_r57;
    cpy_r_r58 = ((mypy___nodes___MemberExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 411, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r60 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r60);
    cpy_r_r61 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_obj, cpy_r_r58, cpy_r_args, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 407, CPyStatic_expression___globals);
        goto CPyL34;
    }
    return cpy_r_r63;
CPyL34: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL35: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r3);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r9);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL12;
CPyL42: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r31);
    goto CPyL34;
CPyL43: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL24;
CPyL44: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    goto CPyL34;
CPyL45: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL34;
CPyL46: ;
    CPy_DECREF(cpy_r_decl);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    goto CPyL29;
CPyL47: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL34;
CPyL48: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r58);
    goto CPyL34;
}

PyObject *CPyPy_expression___call_classmethod(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "ir", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOOO:call_classmethod", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_ir;
    PyObject *obj_expr;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_ir, &obj_expr, &obj_callee)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
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
    PyObject *retval = CPyDef_expression___call_classmethod(arg_builder, arg_ir, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "call_classmethod", 392, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_super_method_call(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_self_arg;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_typ_arg;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    int64_t cpy_r_r105;
    CPyTagged cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyPtr cpy_r_r117;
    int64_t cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_arg;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    CPyTagged cpy_r_r127;
    PyObject *cpy_r_arg_values;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject **cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject **cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_arg_names;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_vself;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyPtr cpy_r_r152;
    CPyPtr cpy_r_r153;
    CPyTagged cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_self_targ;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyTagged cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyTagged cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    cpy_r_r0 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_info;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_call;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_r3)->_args;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_call;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_r9)->_args;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = cpy_r_r13 != 4;
    if (!cpy_r_r14) goto CPyL5;
CPyL3: ;
    cpy_r_r15 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 420, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r15;
CPyL5: ;
    cpy_r_r16 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_call;
    cpy_r_r17 = ((mypy___nodes___CallExprObject *)cpy_r_r16)->_args;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 == 4;
    if (!cpy_r_r21) goto CPyL30;
    cpy_r_r22 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_call;
    cpy_r_r23 = ((mypy___nodes___CallExprObject *)cpy_r_r22)->_args;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, 2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 425, CPyStatic_expression___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_nodes___Expression)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 425, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r24);
        goto CPyL93;
    }
    cpy_r_self_arg = cpy_r_r25;
    cpy_r_r26 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_self_arg)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL94;
    if (likely(Py_TYPE(cpy_r_self_arg) == CPyType_nodes___NameExpr))
        cpy_r_r30 = cpy_r_self_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 428, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_self_arg);
        goto CPyL95;
    }
    cpy_r_r31 = ((mypy___nodes___NameExprObject *)cpy_r_r30)->_node;
    cpy_r_r32 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r31)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL94;
    if (likely(Py_TYPE(cpy_r_self_arg) == CPyType_nodes___NameExpr))
        cpy_r_r36 = cpy_r_self_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 429, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_self_arg);
        goto CPyL95;
    }
    cpy_r_r37 = ((mypy___nodes___NameExprObject *)cpy_r_r36)->_node;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___Var))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 429, CPyStatic_expression___globals, "mypy.nodes.Var", cpy_r_r37);
        goto CPyL95;
    }
    cpy_r_r39 = ((mypy___nodes___VarObject *)cpy_r_r38)->_is_self;
    CPy_DECREF(cpy_r_self_arg);
    if (cpy_r_r39) goto CPyL16;
CPyL14: ;
    cpy_r_r40 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 431, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r40;
CPyL16: ;
    cpy_r_r41 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_call;
    cpy_r_r42 = ((mypy___nodes___CallExprObject *)cpy_r_r41)->_args;
    cpy_r_r43 = CPyList_GetItemShort(cpy_r_r42, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 433, CPyStatic_expression___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r43, CPyType_nodes___Expression)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 433, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r43);
        goto CPyL93;
    }
    cpy_r_typ_arg = cpy_r_r44;
    cpy_r_r45 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_typ_arg)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    if (!cpy_r_r48) goto CPyL96;
    if (likely(Py_TYPE(cpy_r_typ_arg) == CPyType_nodes___NameExpr))
        cpy_r_r49 = cpy_r_typ_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 436, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_typ_arg);
        goto CPyL97;
    }
    cpy_r_r50 = ((mypy___nodes___NameExprObject *)cpy_r_r49)->_node;
    cpy_r_r51 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL22;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL23;
CPyL22: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL23: ;
    if (!cpy_r_r55) goto CPyL96;
    cpy_r_r60 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_info;
    CPy_INCREF(cpy_r_r60);
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 437, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r60);
        goto CPyL97;
    }
    if (likely(Py_TYPE(cpy_r_typ_arg) == CPyType_nodes___NameExpr))
        cpy_r_r62 = cpy_r_typ_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 437, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_typ_arg);
        goto CPyL98;
    }
    cpy_r_r63 = ((mypy___nodes___NameExprObject *)cpy_r_r62)->_node;
    CPy_INCREF(cpy_r_r63);
    if (likely((Py_TYPE(cpy_r_r63) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r63) == CPyType_nodes___TypeInfo)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 437, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r63);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_typ_arg);
    cpy_r_r65 = cpy_r_r61 == cpy_r_r64;
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 ^ 1;
    if (!cpy_r_r66) goto CPyL30;
CPyL28: ;
    cpy_r_r67 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 439, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r67;
CPyL30: ;
    cpy_r_r68 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r69 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r68)->_type_to_ir;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_info;
    CPy_INCREF(cpy_r_r70);
    if (likely(cpy_r_r70 != Py_None))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 441, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_r70);
        goto CPyL99;
    }
    cpy_r_r72 = CPyDict_GetItem(cpy_r_r69, cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 441, CPyStatic_expression___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r72) == CPyType_class_ir___ClassIR))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 441, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r72);
        goto CPyL93;
    }
    cpy_r_ir = cpy_r_r73;
    cpy_r_r74 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "translate_super_method_call", "ClassIR", "mro", 444, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r74);
CPyL34: ;
    cpy_r_r75 = CPyList_GetSlice(cpy_r_r74, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 444, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyList_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 444, CPyStatic_expression___globals, "list", cpy_r_r75);
        goto CPyL100;
    }
    cpy_r_r77 = 0;
CPyL37: ;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_r76)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = (Py_ssize_t)cpy_r_r77 < (Py_ssize_t)cpy_r_r80;
    if (!cpy_r_r81) goto CPyL101;
    cpy_r_r82 = CPyList_GetItemUnsafe(cpy_r_r76, cpy_r_r77);
    if (likely(Py_TYPE(cpy_r_r82) == CPyType_class_ir___ClassIR))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 444, CPyStatic_expression___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r82);
        goto CPyL102;
    }
    cpy_r_base = cpy_r_r83;
    cpy_r_r84 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_method_decls;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "translate_super_method_call", "ClassIR", "method_decls", 445, CPyStatic_expression___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r85);
CPyL40: ;
    cpy_r_r86 = PyDict_Contains(cpy_r_r85, cpy_r_r84);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 445, CPyStatic_expression___globals);
        goto CPyL104;
    }
    cpy_r_r88 = cpy_r_r86;
    if (cpy_r_r88) {
        goto CPyL105;
    } else
        goto CPyL106;
CPyL42: ;
    cpy_r_r89 = cpy_r_r77 + 2;
    cpy_r_r77 = cpy_r_r89;
    goto CPyL37;
CPyL43: ;
    cpy_r_r90 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    if (!cpy_r_r90) goto CPyL107;
CPyL44: ;
    cpy_r_r91 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base;
    cpy_r_r92 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r93 = cpy_r_r91 == cpy_r_r92;
    if (!cpy_r_r93) goto CPyL107;
    cpy_r_r94 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python;
    CPy_DECREF(cpy_r_ir);
    if (cpy_r_r94) goto CPyL53;
CPyL46: ;
    cpy_r_r95 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = CPyStatics[288]; /* '__init__' */
    cpy_r_r97 = PyUnicode_Compare(cpy_r_r95, cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 == -1;
    if (!cpy_r_r98) goto CPyL49;
    cpy_r_r99 = PyErr_Occurred();
    cpy_r_r100 = cpy_r_r99 != NULL;
    if (!cpy_r_r100) goto CPyL49;
    cpy_r_r101 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 452, CPyStatic_expression___globals);
        goto CPyL93;
    }
CPyL49: ;
    cpy_r_r102 = cpy_r_r97 == 0;
    if (!cpy_r_r102) goto CPyL53;
    cpy_r_r103 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    cpy_r_r104 = (CPyPtr)&((PyVarObject *)cpy_r_r103)->ob_size;
    cpy_r_r105 = *(int64_t *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 << 1;
    cpy_r_r107 = cpy_r_r106 == 0;
    if (!cpy_r_r107) goto CPyL53;
    cpy_r_r108 = CPyDef_builder___IRBuilder___none(cpy_r_builder);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 457, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r108;
CPyL53: ;
    cpy_r_r109 = CPyDef_expression___translate_call(cpy_r_builder, cpy_r_expr, cpy_r_callee);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 458, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r109;
CPyL55: ;
    cpy_r_r110 = ((mypy___nodes___SuperExprObject *)cpy_r_callee)->_name;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_base, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 460, CPyStatic_expression___globals);
        goto CPyL93;
    }
    cpy_r_decl = cpy_r_r111;
    cpy_r_r112 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_args;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_r112)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    cpy_r_r115 = PyList_New(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 461, CPyStatic_expression___globals);
        goto CPyL108;
    }
    cpy_r_r116 = 0;
CPyL58: ;
    cpy_r_r117 = (CPyPtr)&((PyVarObject *)cpy_r_r112)->ob_size;
    cpy_r_r118 = *(int64_t *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 << 1;
    cpy_r_r120 = (Py_ssize_t)cpy_r_r116 < (Py_ssize_t)cpy_r_r119;
    if (!cpy_r_r120) goto CPyL109;
    cpy_r_r121 = CPyList_GetItemUnsafe(cpy_r_r112, cpy_r_r116);
    if (likely(PyObject_TypeCheck(cpy_r_r121, CPyType_nodes___Expression)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 461, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r121);
        goto CPyL110;
    }
    cpy_r_arg = cpy_r_r122;
    cpy_r_r123 = 2;
    cpy_r_r124 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_arg, cpy_r_r123);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 461, CPyStatic_expression___globals);
        goto CPyL110;
    }
    if (likely(cpy_r_r124 != Py_None))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 461, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r124);
        goto CPyL110;
    }
    cpy_r_r126 = CPyList_SetItemUnsafe(cpy_r_r115, cpy_r_r116, cpy_r_r125);
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 461, CPyStatic_expression___globals);
        goto CPyL110;
    }
    cpy_r_r127 = cpy_r_r116 + 2;
    cpy_r_r116 = cpy_r_r127;
    goto CPyL58;
CPyL64: ;
    cpy_r_arg_values = cpy_r_r115;
    cpy_r_r128 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r130[1] = {cpy_r_r128};
    cpy_r_r131 = (PyObject **)&cpy_r_r130;
    cpy_r_r132 = PyObject_VectorcallMethod(cpy_r_r129, cpy_r_r131, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 462, CPyStatic_expression___globals);
        goto CPyL111;
    }
    CPy_DECREF(cpy_r_r128);
    if (likely(PyList_Check(cpy_r_r132)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 462, CPyStatic_expression___globals, "list", cpy_r_r132);
        goto CPyL112;
    }
    cpy_r_r134 = cpy_r_r133;
    cpy_r_r135 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r137[1] = {cpy_r_r135};
    cpy_r_r138 = (PyObject **)&cpy_r_r137;
    cpy_r_r139 = PyObject_VectorcallMethod(cpy_r_r136, cpy_r_r138, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 462, CPyStatic_expression___globals);
        goto CPyL113;
    }
    CPy_DECREF(cpy_r_r135);
    if (likely(PyList_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 462, CPyStatic_expression___globals, "list", cpy_r_r139);
        goto CPyL114;
    }
    cpy_r_r141 = cpy_r_r140;
    cpy_r_arg_kinds = cpy_r_r134;
    cpy_r_arg_names = cpy_r_r141;
    cpy_r_r142 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_kind;
    cpy_r_r143 = cpy_r_r142 != 2;
    if (!cpy_r_r143) goto CPyL91;
    cpy_r_r144 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 466, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_vself = cpy_r_r144;
    cpy_r_r145 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_kind;
    cpy_r_r146 = cpy_r_r145 == 4;
    if (!cpy_r_r146) goto CPyL76;
    cpy_r_r147 = CPyStatic_expression___globals;
    cpy_r_r148 = CPyStatics[8218]; /* 'type_op' */
    cpy_r_r149 = CPyDict_GetItem(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 468, CPyStatic_expression___globals);
        goto CPyL116;
    }
    if (likely(PyTuple_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 468, CPyStatic_expression___globals, "tuple", cpy_r_r149);
        goto CPyL116;
    }
    cpy_r_r151 = PyList_New(1);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 468, CPyStatic_expression___globals);
        goto CPyL117;
    }
    cpy_r_r152 = (CPyPtr)&((PyListObject *)cpy_r_r151)->ob_item;
    cpy_r_r153 = *(CPyPtr *)cpy_r_r152;
    *(PyObject * *)cpy_r_r153 = cpy_r_vself;
    cpy_r_r154 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r154);
    cpy_r_r155 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r150, cpy_r_r151, cpy_r_r154);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r151);
    CPyTagged_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 468, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_vself = cpy_r_r155;
    goto CPyL85;
CPyL76: ;
    cpy_r_r156 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r156);
    cpy_r_r157 = CPY_GET_ATTR(cpy_r_r156, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 469, CPyStatic_expression___globals);
        goto CPyL116;
    }
CPyL77: ;
    if (cpy_r_r157) {
        goto CPyL118;
    } else
        goto CPyL85;
CPyL78: ;
    cpy_r_r158 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r159 = CPyList_GetItemShort(cpy_r_r158, -2);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 475, CPyStatic_expression___globals);
        goto CPyL115;
    }
    if (likely(PyDict_Check(cpy_r_r159)))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 475, CPyStatic_expression___globals, "dict", cpy_r_r159);
        goto CPyL115;
    }
    cpy_r_r161 = CPyDict_Values(cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 475, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_r162 = CPyList_GetItemShort(cpy_r_r161, 12);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 475, CPyStatic_expression___globals);
        goto CPyL115;
    }
    if (Py_TYPE(cpy_r_r162) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r163 = cpy_r_r162;
    else {
        cpy_r_r163 = NULL;
    }
    if (cpy_r_r163 != NULL) goto __LL10122;
    if (Py_TYPE(cpy_r_r162) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r163 = cpy_r_r162;
    else {
        cpy_r_r163 = NULL;
    }
    if (cpy_r_r163 != NULL) goto __LL10122;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 475, CPyStatic_expression___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r162);
    goto CPyL115;
__LL10122: ;
    cpy_r_self_targ = cpy_r_r163;
    cpy_r_r164 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r165 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r164)->_fitem;
    cpy_r_r166 = ((mypy___nodes___FuncItemObject *)cpy_r_r165)->_line;
    CPyTagged_INCREF(cpy_r_r166);
    cpy_r_r167 = 2;
    cpy_r_r168 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_self_targ, cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_self_targ);
    CPyTagged_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 476, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_vself = cpy_r_r168;
CPyL85: ;
    cpy_r_r169 = CPyList_Insert(cpy_r_arg_values, 0, cpy_r_vself);
    CPy_DECREF(cpy_r_vself);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 477, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_r171 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r171 == NULL)) {
        goto CPyL119;
    } else
        goto CPyL89;
CPyL87: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 478, CPyStatic_expression___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r173 = CPyList_Insert(cpy_r_arg_kinds, 0, cpy_r_r171);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 478, CPyStatic_expression___globals);
        goto CPyL115;
    }
    cpy_r_r175 = Py_None;
    cpy_r_r176 = CPyList_Insert(cpy_r_arg_names, 0, cpy_r_r175);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 479, CPyStatic_expression___globals);
        goto CPyL115;
    }
CPyL91: ;
    cpy_r_r178 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r178);
    cpy_r_r179 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r179);
    cpy_r_r180 = NULL;
    cpy_r_r181 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r178, cpy_r_decl, cpy_r_arg_values, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_decl);
    CPy_DECREF(cpy_r_arg_values);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPyTagged_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 481, CPyStatic_expression___globals);
        goto CPyL93;
    }
    return cpy_r_r181;
CPyL93: ;
    cpy_r_r182 = NULL;
    return cpy_r_r182;
CPyL94: ;
    CPy_DECREF(cpy_r_self_arg);
    goto CPyL14;
CPyL95: ;
    CPy_DecRef(cpy_r_self_arg);
    goto CPyL93;
CPyL96: ;
    CPy_DECREF(cpy_r_typ_arg);
    goto CPyL28;
CPyL97: ;
    CPy_DecRef(cpy_r_typ_arg);
    goto CPyL93;
CPyL98: ;
    CPy_DecRef(cpy_r_typ_arg);
    CPy_DecRef(cpy_r_r61);
    goto CPyL93;
CPyL99: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL93;
CPyL100: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL93;
CPyL101: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL43;
CPyL102: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    goto CPyL93;
CPyL103: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r84);
    goto CPyL93;
CPyL104: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_base);
    goto CPyL93;
CPyL105: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r76);
    goto CPyL55;
CPyL106: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL42;
CPyL107: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL53;
CPyL108: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r112);
    goto CPyL93;
CPyL109: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL64;
CPyL110: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r115);
    goto CPyL93;
CPyL111: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_r128);
    goto CPyL93;
CPyL112: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    goto CPyL93;
CPyL113: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    goto CPyL93;
CPyL114: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_r134);
    goto CPyL93;
CPyL115: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL93;
CPyL116: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_vself);
    goto CPyL93;
CPyL117: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_vself);
    CPy_DecRef(cpy_r_r150);
    goto CPyL93;
CPyL118: ;
    CPy_DECREF(cpy_r_vself);
    goto CPyL78;
CPyL119: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL87;
}

PyObject *CPyPy_expression___translate_super_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "callee", 0};
    static CPyArg_Parser parser = {"OOO:translate_super_method_call", kwlist, 0};
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
    if (likely(Py_TYPE(obj_callee) == CPyType_nodes___SuperExpr))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___translate_super_method_call(arg_builder, arg_expr, arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_super_method_call", 418, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_cast_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target_type;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___CastExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_cast_expr", 485, CPyStatic_expression___globals);
        goto CPyL5;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_cast_expr", 485, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r2);
        goto CPyL5;
    }
    cpy_r_src = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___CastExprObject *)cpy_r_expr)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_cast_expr", 486, CPyStatic_expression___globals);
        goto CPyL6;
    }
    cpy_r_target_type = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___CastExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_src, cpy_r_target_type, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_target_type);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_cast_expr", 487, CPyStatic_expression___globals);
        goto CPyL5;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_src);
    goto CPyL5;
}

PyObject *CPyPy_expression___translate_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:translate_cast_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CastExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___translate_cast_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_cast_expr", 484, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_unary_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_folded;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyDef_expression___try_constant_fold(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 494, CPyStatic_expression___globals);
        goto CPyL8;
    }
    cpy_r_folded = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_folded != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL9;
    if (likely(cpy_r_folded != Py_None))
        cpy_r_r3 = cpy_r_folded;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 496, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_folded);
        goto CPyL8;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___UnaryExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 498, CPyStatic_expression___globals);
        goto CPyL8;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 498, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_r8 = ((mypy___nodes___UnaryExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___nodes___UnaryExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_builder___IRBuilder___unary_op(cpy_r_builder, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 498, CPyStatic_expression___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL9: ;
    CPy_DECREF(cpy_r_folded);
    goto CPyL4;
}

PyObject *CPyPy_expression___transform_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_unary_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___UnaryExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_unary_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_unary_expr", 493, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_op_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
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
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_folded;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_borrow_left;
    char cpy_r_borrow_right;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_ltype;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_rtype;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_right;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    cpy_r_r0 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[838]; /* 'and' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", -1, CPyStatic_expression___globals);
        goto CPyL60;
    }
CPyL3: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL9;
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[868]; /* 'or' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", -1, CPyStatic_expression___globals);
        goto CPyL60;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    cpy_r_r8 = cpy_r_r16;
CPyL9: ;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r17 = CPyDef_builder___IRBuilder___shortcircuit_expr(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 503, CPyStatic_expression___globals);
        goto CPyL60;
    }
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[1183]; /* '%' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL15;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL15;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 506, CPyStatic_expression___globals);
        goto CPyL60;
    }
CPyL15: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    if (!cpy_r_r25) goto CPyL25;
    cpy_r_r26 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_left;
    cpy_r_r27 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL18;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL19;
CPyL18: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    cpy_r_r31 = cpy_r_r35;
CPyL19: ;
    if (!cpy_r_r31) goto CPyL25;
    cpy_r_r36 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_left;
    CPy_INCREF(cpy_r_r36);
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___StrExpr)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL10123;
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___BytesExpr)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL10123;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 507, CPyStatic_expression___globals, "union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", cpy_r_r36);
    goto CPyL60;
__LL10123: ;
    cpy_r_r38 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_expression___translate_printf_style_formatting(cpy_r_builder, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 507, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_ret = cpy_r_r39;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_ret != cpy_r_r40;
    if (!cpy_r_r41) goto CPyL61;
    if (likely(cpy_r_ret != Py_None))
        cpy_r_r42 = cpy_r_ret;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 509, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_ret);
        goto CPyL60;
    }
    return cpy_r_r42;
CPyL25: ;
    cpy_r_r43 = CPyDef_expression___try_constant_fold(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 511, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_folded = cpy_r_r43;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_folded != cpy_r_r44;
    if (!cpy_r_r45) goto CPyL62;
    if (likely(cpy_r_folded != Py_None))
        cpy_r_r46 = cpy_r_folded;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 513, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_folded);
        goto CPyL60;
    }
    return cpy_r_r46;
CPyL29: ;
    cpy_r_borrow_left = 0;
    cpy_r_borrow_right = 0;
    cpy_r_r47 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_left;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 518, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_ltype = cpy_r_r48;
    cpy_r_r49 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 519, CPyStatic_expression___globals);
        goto CPyL63;
    }
    cpy_r_rtype = cpy_r_r50;
    cpy_r_r51 = CPyDef_rtypes___is_int_rprimitive(cpy_r_ltype);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 522, CPyStatic_expression___globals);
        goto CPyL64;
    }
    if (!cpy_r_r51) goto CPyL48;
    cpy_r_r52 = CPyDef_rtypes___is_int_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 522, CPyStatic_expression___globals);
        goto CPyL64;
    }
    if (cpy_r_r52) {
        goto CPyL65;
    } else
        goto CPyL48;
CPyL35: ;
    cpy_r_r53 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[1595]; /* '//' */
    cpy_r_r55 = PyUnicode_Compare(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r56 = cpy_r_r55 == -1;
    if (!cpy_r_r56) goto CPyL38;
    cpy_r_r57 = PyErr_Occurred();
    cpy_r_r58 = cpy_r_r57 != NULL;
    if (!cpy_r_r58) goto CPyL38;
    cpy_r_r59 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 523, CPyStatic_expression___globals);
        goto CPyL60;
    }
CPyL38: ;
    cpy_r_r60 = cpy_r_r55 == 0;
    if (!cpy_r_r60) goto CPyL66;
    cpy_r_r61 = CPyDef_expression___try_optimize_int_floor_divide(cpy_r_expr);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 524, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_expr = cpy_r_r61;
CPyL41: ;
    cpy_r_r62 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyStatic_builder___int_borrow_friendly_op;
    if (unlikely(cpy_r_r63 == NULL)) {
        goto CPyL67;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_borrow_friendly_op\" was not set");
    cpy_r_r64 = 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 525, CPyStatic_expression___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r65 = PySet_Contains(cpy_r_r63, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 525, CPyStatic_expression___globals);
        goto CPyL68;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL54;
    cpy_r_r68 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_builder, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 526, CPyStatic_expression___globals);
        goto CPyL68;
    }
    cpy_r_borrow_left = cpy_r_r69;
    cpy_r_borrow_right = 1;
    goto CPyL54;
CPyL48: ;
    cpy_r_r70 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_ltype);
    CPy_DECREF(cpy_r_ltype);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 528, CPyStatic_expression___globals);
        goto CPyL69;
    }
    if (!cpy_r_r70) goto CPyL70;
    cpy_r_r71 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 528, CPyStatic_expression___globals);
        goto CPyL60;
    }
    if (!cpy_r_r71) goto CPyL71;
    cpy_r_r72 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_builder, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 529, CPyStatic_expression___globals);
        goto CPyL60;
    }
    cpy_r_borrow_left = cpy_r_r73;
    cpy_r_borrow_right = 1;
    goto CPyL71;
CPyL54: ;
    cpy_r_r74 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_left;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r74, cpy_r_borrow_left);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 532, CPyStatic_expression___globals);
        goto CPyL68;
    }
    if (likely(cpy_r_r75 != Py_None))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 532, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r75);
        goto CPyL68;
    }
    cpy_r_left = cpy_r_r76;
    cpy_r_r77 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r77, cpy_r_borrow_right);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 533, CPyStatic_expression___globals);
        goto CPyL72;
    }
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 533, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r78);
        goto CPyL72;
    }
    cpy_r_right = cpy_r_r79;
    cpy_r_r80 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_op;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r81);
    CPy_DECREF(cpy_r_expr);
    cpy_r_r82 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_left, cpy_r_right, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r80);
    CPyTagged_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 534, CPyStatic_expression___globals);
        goto CPyL60;
    }
    return cpy_r_r82;
CPyL60: ;
    cpy_r_r83 = NULL;
    return cpy_r_r83;
CPyL61: ;
    CPy_DECREF(cpy_r_ret);
    goto CPyL25;
CPyL62: ;
    CPy_DECREF(cpy_r_folded);
    goto CPyL29;
CPyL63: ;
    CPy_DecRef(cpy_r_ltype);
    goto CPyL60;
CPyL64: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL60;
CPyL65: ;
    CPy_DECREF(cpy_r_ltype);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL35;
CPyL66: ;
    CPy_INCREF(cpy_r_expr);
    goto CPyL41;
CPyL67: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r62);
    goto CPyL42;
CPyL68: ;
    CPy_DecRef(cpy_r_expr);
    goto CPyL60;
CPyL69: ;
    CPy_DecRef(cpy_r_rtype);
    goto CPyL60;
CPyL70: ;
    CPy_DECREF(cpy_r_rtype);
    CPy_INCREF(cpy_r_expr);
    goto CPyL54;
CPyL71: ;
    CPy_INCREF(cpy_r_expr);
    goto CPyL54;
CPyL72: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_left);
    goto CPyL60;
}

PyObject *CPyPy_expression___transform_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_op_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___OpExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_op_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_op_expr", 501, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___try_optimize_int_floor_divide(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_divisor;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_shift;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    cpy_r_r1 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL2;
    CPy_INCREF(cpy_r_expr);
    return cpy_r_expr;
CPyL2: ;
    cpy_r_r5 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_right;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___IntExpr))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 541, CPyStatic_expression___globals, "mypy.nodes.IntExpr", cpy_r_r5);
        goto CPyL23;
    }
    cpy_r_r7 = ((mypy___nodes___IntExprObject *)cpy_r_r6)->_value;
    CPyTagged_INCREF(cpy_r_r7);
    cpy_r_divisor = cpy_r_r7;
    cpy_r_r8 = CPyStatics[7720]; /* 'bit_length' */
    CPyTagged_INCREF(cpy_r_divisor);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_divisor);
    PyObject *cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 542, CPyStatic_expression___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 542, CPyStatic_expression___globals);
        goto CPyL25;
    }
    cpy_r_r14 = CPyTagged_Subtract(cpy_r_r13, 2);
    CPyTagged_DECREF(cpy_r_r13);
    cpy_r_shift = cpy_r_r14;
    cpy_r_r15 = 0 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    cpy_r_r17 = cpy_r_shift & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    cpy_r_r19 = cpy_r_r16 & cpy_r_r18;
    if (!cpy_r_r19) goto CPyL7;
    cpy_r_r20 = (Py_ssize_t)0 < (Py_ssize_t)cpy_r_shift;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL8;
CPyL7: ;
    cpy_r_r22 = CPyTagged_IsLt_(0, cpy_r_shift);
    cpy_r_r21 = cpy_r_r22;
CPyL8: ;
    if (cpy_r_r21) goto CPyL10;
    cpy_r_r23 = cpy_r_r21;
    goto CPyL14;
CPyL10: ;
    cpy_r_r24 = cpy_r_shift & 1;
    cpy_r_r25 = cpy_r_r24 == 0;
    cpy_r_r26 = 56 & 1;
    cpy_r_r27 = cpy_r_r26 == 0;
    cpy_r_r28 = cpy_r_r25 & cpy_r_r27;
    if (!cpy_r_r28) goto CPyL12;
    cpy_r_r29 = (Py_ssize_t)cpy_r_shift < (Py_ssize_t)56;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL13;
CPyL12: ;
    cpy_r_r31 = CPyTagged_IsLt_(cpy_r_shift, 56);
    cpy_r_r30 = cpy_r_r31;
CPyL13: ;
    cpy_r_r23 = cpy_r_r30;
CPyL14: ;
    if (!cpy_r_r23) goto CPyL26;
    cpy_r_r32 = CPyTagged_Lshift(2, cpy_r_shift);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 543, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r33 = cpy_r_divisor & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = CPyTagged_IsEq_(cpy_r_divisor, cpy_r_r32);
    CPyTagged_DECREF(cpy_r_divisor);
    CPyTagged_DECREF(cpy_r_r32);
    if (cpy_r_r35) {
        goto CPyL19;
    } else
        goto CPyL28;
CPyL18: ;
    cpy_r_r36 = cpy_r_divisor == cpy_r_r32;
    CPyTagged_DECREF(cpy_r_divisor);
    CPyTagged_DECREF(cpy_r_r32);
    if (!cpy_r_r36) goto CPyL28;
CPyL19: ;
    cpy_r_r37 = CPyStatics[1599]; /* '>>' */
    cpy_r_r38 = ((mypy___nodes___OpExprObject *)cpy_r_expr)->_left;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_nodes___IntExpr(cpy_r_shift);
    CPyTagged_DECREF(cpy_r_shift);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 544, CPyStatic_expression___globals);
        goto CPyL29;
    }
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_nodes___OpExpr(cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 544, CPyStatic_expression___globals);
        goto CPyL23;
    }
    return cpy_r_r41;
CPyL22: ;
    CPy_INCREF(cpy_r_expr);
    return cpy_r_expr;
CPyL23: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL24: ;
    CPyTagged_DecRef(cpy_r_divisor);
    CPy_DecRef(cpy_r_r9);
    goto CPyL23;
CPyL25: ;
    CPyTagged_DecRef(cpy_r_divisor);
    goto CPyL23;
CPyL26: ;
    CPyTagged_DECREF(cpy_r_divisor);
    CPyTagged_DECREF(cpy_r_shift);
    goto CPyL22;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_divisor);
    CPyTagged_DecRef(cpy_r_shift);
    goto CPyL23;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_shift);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL23;
}

PyObject *CPyPy_expression___try_optimize_int_floor_divide(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:try_optimize_int_floor_divide", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___OpExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___try_optimize_int_floor_divide(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "try_optimize_int_floor_divide", 537, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_index_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_base_type;
    char cpy_r_r3;
    char cpy_r_is_list;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_can_borrow_base;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_index_reg;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_index;
    CPy_INCREF(cpy_r_r0);
    cpy_r_index = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_base;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 550, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_base_type = cpy_r_r2;
    cpy_r_r3 = CPyDef_rtypes___is_list_rprimitive(cpy_r_base_type);
    CPy_DECREF(cpy_r_base_type);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 551, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_is_list = cpy_r_r3;
    if (cpy_r_is_list) goto CPyL4;
    cpy_r_r4 = cpy_r_is_list;
    goto CPyL6;
CPyL4: ;
    cpy_r_r5 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_builder, cpy_r_index);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 552, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r4 = cpy_r_r5;
CPyL6: ;
    cpy_r_can_borrow_base = cpy_r_r4;
    cpy_r_r6 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_base;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r6, cpy_r_can_borrow_base);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 554, CPyStatic_expression___globals);
        goto CPyL27;
    }
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 554, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r7);
        goto CPyL27;
    }
    cpy_r_base = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___ops___ValueObject *)cpy_r_base)->_type;
    cpy_r_r10 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r14 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___IntExpr))
        cpy_r_r18 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 557, CPyStatic_expression___globals, "mypy.nodes.IntExpr", cpy_r_index);
        goto CPyL28;
    }
    cpy_r_r19 = ((mypy___nodes___IntExprObject *)cpy_r_r18)->_value;
    CPyTagged_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_index);
    cpy_r_r20 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_ops___TupleGet(cpy_r_base, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_base);
    CPyTagged_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 557, CPyStatic_expression___globals);
        goto CPyL26;
    }
    cpy_r_r22 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 557, CPyStatic_expression___globals);
        goto CPyL26;
    }
    return cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___SliceExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r27 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 560, CPyStatic_expression___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL30;
    }
    cpy_r_r28 = CPyDef_expression___try_gen_slice_op(cpy_r_builder, cpy_r_base, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 560, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_value = cpy_r_r28;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_value != cpy_r_r29;
    if (cpy_r_r30) {
        goto CPyL31;
    } else
        goto CPyL32;
CPyL18: ;
    if (likely(cpy_r_value != Py_None))
        cpy_r_r31 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 562, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_value);
        goto CPyL26;
    }
    return cpy_r_r31;
CPyL20: ;
    cpy_r_r32 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_index;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r32, cpy_r_is_list);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 564, CPyStatic_expression___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 564, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL30;
    }
    cpy_r_index_reg = cpy_r_r34;
    cpy_r_r35 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 566, CPyStatic_expression___globals);
        goto CPyL33;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_index_reg;
    cpy_r_r39 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 566, CPyStatic_expression___globals);
        goto CPyL34;
    }
    cpy_r_r40 = ((mypy___nodes___IndexExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_base, cpy_r_r35, cpy_r_r36, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 565, CPyStatic_expression___globals);
        goto CPyL26;
    }
    return cpy_r_r43;
CPyL26: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL27: ;
    CPy_DecRef(cpy_r_index);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_base);
    goto CPyL26;
CPyL29: ;
    CPy_DECREF(cpy_r_index);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_base);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL18;
CPyL32: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_index_reg);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r36);
    goto CPyL26;
}

PyObject *CPyPy_expression___transform_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_index_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___IndexExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_index_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_index_expr", 548, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___try_constant_fold(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_constant_fold", 575, CPyStatic_expression___globals);
        goto CPyL5;
    }
    cpy_r_value = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_value != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyDef_builder___IRBuilder___load_literal_value(cpy_r_builder, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_constant_fold", 577, CPyStatic_expression___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL6: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL4;
}

PyObject *CPyPy_expression___try_constant_fold(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:try_constant_fold", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___try_constant_fold(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "try_constant_fold", 570, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___try_gen_slice_op(PyObject *cpy_r_builder, PyObject *cpy_r_base, PyObject *cpy_r_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_begin_type;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_end_type;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_begin;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_end;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
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
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_candidates;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_stride;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_begin_index;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_begin_index;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 593, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL53;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 593, CPyStatic_expression___globals);
        goto CPyL53;
    }
    cpy_r_begin_type = cpy_r_r9;
    goto CPyL10;
CPyL6: ;
    cpy_r_r10 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r10 != NULL)) goto CPyL9;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 595, CPyStatic_expression___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL9: ;
    CPy_INCREF(cpy_r_r10);
    cpy_r_begin_type = cpy_r_r10;
CPyL10: ;
    cpy_r_r12 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_end_index;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_end_index;
    CPy_INCREF(cpy_r_r15);
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 597, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL54;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 597, CPyStatic_expression___globals);
        goto CPyL54;
    }
    cpy_r_end_type = cpy_r_r17;
    goto CPyL18;
CPyL14: ;
    cpy_r_r18 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 599, CPyStatic_expression___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL17: ;
    CPy_INCREF(cpy_r_r18);
    cpy_r_end_type = cpy_r_r18;
CPyL18: ;
    cpy_r_r20 = CPyDef_rtypes___is_int_rprimitive(cpy_r_begin_type);
    CPy_DECREF(cpy_r_begin_type);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 602, CPyStatic_expression___globals);
        goto CPyL56;
    }
    if (!cpy_r_r20) goto CPyL57;
    cpy_r_r21 = CPyDef_rtypes___is_int_rprimitive(cpy_r_end_type);
    CPy_DECREF(cpy_r_end_type);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 602, CPyStatic_expression___globals);
        goto CPyL53;
    }
    if (!cpy_r_r21) goto CPyL52;
    cpy_r_r22 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_begin_index;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r24) goto CPyL27;
    cpy_r_r25 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_begin_index;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 604, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r25);
        goto CPyL53;
    }
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 604, CPyStatic_expression___globals);
        goto CPyL53;
    }
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 604, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r28);
        goto CPyL53;
    }
    cpy_r_begin = cpy_r_r29;
    goto CPyL29;
CPyL27: ;
    cpy_r_r30 = CPyDef_builder___IRBuilder___load_int(cpy_r_builder, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 606, CPyStatic_expression___globals);
        goto CPyL53;
    }
    cpy_r_begin = cpy_r_r30;
CPyL29: ;
    cpy_r_r31 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_end_index;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_r31 != cpy_r_r32;
    CPy_DECREF(cpy_r_r31);
    if (!cpy_r_r33) goto CPyL34;
    cpy_r_r34 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_end_index;
    CPy_INCREF(cpy_r_r34);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 608, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r34);
        goto CPyL58;
    }
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 608, CPyStatic_expression___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 608, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r37);
        goto CPyL58;
    }
    cpy_r_end = cpy_r_r38;
    goto CPyL40;
CPyL34: ;
    cpy_r_r39 = CPyStatic_mypyc___common___MAX_SHORT_INT;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL59;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAX_SHORT_INT\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 612, CPyStatic_expression___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL37: ;
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r41 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("int", cpy_r_r39); cpy_r_r41 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 612, CPyStatic_expression___globals);
        goto CPyL58;
    }
    cpy_r_r42 = CPyDef_builder___IRBuilder___load_int(cpy_r_builder, cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 612, CPyStatic_expression___globals);
        goto CPyL58;
    }
    cpy_r_end = cpy_r_r42;
CPyL40: ;
    cpy_r_r43 = CPyStatic_expression___globals;
    cpy_r_r44 = CPyStatics[8219]; /* 'list_slice_op' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals);
        goto CPyL60;
    }
    if (likely(PyTuple_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals, "tuple", cpy_r_r45);
        goto CPyL60;
    }
    cpy_r_r47 = CPyStatic_expression___globals;
    cpy_r_r48 = CPyStatics[8220]; /* 'tuple_slice_op' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals);
        goto CPyL61;
    }
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals, "tuple", cpy_r_r49);
        goto CPyL61;
    }
    cpy_r_r51 = CPyStatic_expression___globals;
    cpy_r_r52 = CPyStatics[8221]; /* 'str_slice_op' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals);
        goto CPyL62;
    }
    if (likely(PyTuple_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals, "tuple", cpy_r_r53);
        goto CPyL62;
    }
    cpy_r_r55 = CPyStatic_expression___globals;
    cpy_r_r56 = CPyStatics[8222]; /* 'bytes_slice_op' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals);
        goto CPyL63;
    }
    if (likely(PyTuple_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals, "tuple", cpy_r_r57);
        goto CPyL63;
    }
    cpy_r_r59 = PyList_New(4);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 613, CPyStatic_expression___globals);
        goto CPyL64;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    *(PyObject * *)cpy_r_r61 = cpy_r_r46;
    cpy_r_r62 = cpy_r_r61 + 8;
    *(PyObject * *)cpy_r_r62 = cpy_r_r50;
    cpy_r_r63 = cpy_r_r61 + 16;
    *(PyObject * *)cpy_r_r63 = cpy_r_r54;
    cpy_r_r64 = cpy_r_r61 + 24;
    *(PyObject * *)cpy_r_r64 = cpy_r_r58;
    cpy_r_candidates = cpy_r_r59;
    cpy_r_r65 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = PyList_New(3);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 614, CPyStatic_expression___globals);
        goto CPyL65;
    }
    cpy_r_r67 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r68 = *(CPyPtr *)cpy_r_r67;
    CPy_INCREF(cpy_r_base);
    *(PyObject * *)cpy_r_r68 = cpy_r_base;
    cpy_r_r69 = cpy_r_r68 + 8;
    *(PyObject * *)cpy_r_r69 = cpy_r_begin;
    cpy_r_r70 = cpy_r_r68 + 16;
    *(PyObject * *)cpy_r_r70 = cpy_r_end;
    cpy_r_r71 = ((mypy___nodes___SliceExprObject *)cpy_r_index)->_line;
    CPyTagged_INCREF(cpy_r_r71);
    cpy_r_r72 = NULL;
    cpy_r_r73 = 2;
    cpy_r_r74 = CPyDef_ll_builder___LowLevelIRBuilder___matching_call_c(cpy_r_r65, cpy_r_candidates, cpy_r_r66, cpy_r_r71, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_candidates);
    CPy_DECREF(cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 614, CPyStatic_expression___globals);
        goto CPyL53;
    }
    return cpy_r_r74;
CPyL52: ;
    cpy_r_r75 = Py_None;
    CPy_INCREF(cpy_r_r75);
    return cpy_r_r75;
CPyL53: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL54: ;
    CPy_DecRef(cpy_r_begin_type);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_begin_type);
    goto CPyL15;
CPyL56: ;
    CPy_DecRef(cpy_r_end_type);
    goto CPyL53;
CPyL57: ;
    CPy_DECREF(cpy_r_end_type);
    goto CPyL52;
CPyL58: ;
    CPy_DecRef(cpy_r_begin);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_begin);
    goto CPyL35;
CPyL60: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    goto CPyL53;
CPyL64: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r58);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_candidates);
    CPy_DecRef(cpy_r_r65);
    goto CPyL53;
}

PyObject *CPyPy_expression___try_gen_slice_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base", "index", 0};
    static CPyArg_Parser parser = {"OOO:try_gen_slice_op", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base;
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_base, &obj_index)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
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
    if (likely(Py_TYPE(obj_index) == CPyType_nodes___SliceExpr))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_index); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___try_gen_slice_op(arg_builder, arg_base, arg_index);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "try_gen_slice_op", 581, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_conditional_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_if_body;
    PyObject *cpy_r_else_body;
    PyObject *cpy_r_next_block;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_expr_type;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_target;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_true_value;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_false_value;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 620, CPyStatic_expression___globals);
        goto CPyL22;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 620, CPyStatic_expression___globals);
        goto CPyL23;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 620, CPyStatic_expression___globals);
        goto CPyL24;
    }
    cpy_r_r8 = cpy_r_r7;
    cpy_r_if_body = cpy_r_r2;
    cpy_r_else_body = cpy_r_r5;
    cpy_r_next_block = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___ConditionalExprObject *)cpy_r_expr)->_cond;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_ast_helpers___process_conditional(cpy_r_builder, cpy_r_r9, cpy_r_if_body, cpy_r_else_body);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 622, CPyStatic_expression___globals);
        goto CPyL25;
    }
    cpy_r_r11 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 623, CPyStatic_expression___globals);
        goto CPyL25;
    }
    cpy_r_expr_type = cpy_r_r11;
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___Register(cpy_r_expr_type, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 625, CPyStatic_expression___globals);
        goto CPyL26;
    }
    cpy_r_target = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_if_body);
    CPy_DECREF(cpy_r_if_body);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 627, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r17 = ((mypy___nodes___ConditionalExprObject *)cpy_r_expr)->_if_expr;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 628, CPyStatic_expression___globals);
        goto CPyL27;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 628, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r19);
        goto CPyL27;
    }
    cpy_r_true_value = cpy_r_r20;
    cpy_r_r21 = ((mypy___nodes___ConditionalExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r21);
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_true_value, cpy_r_expr_type, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_true_value);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 629, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_true_value = cpy_r_r23;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPyDef_ops___Assign(cpy_r_target, cpy_r_true_value, cpy_r_r24);
    CPy_DECREF(cpy_r_true_value);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 630, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 630, CPyStatic_expression___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL12: ;
    cpy_r_r27 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next_block);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 631, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_body);
    CPy_DECREF(cpy_r_else_body);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 633, CPyStatic_expression___globals);
        goto CPyL29;
    }
    cpy_r_r29 = ((mypy___nodes___ConditionalExprObject *)cpy_r_expr)->_else_expr;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 634, CPyStatic_expression___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 634, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r31);
        goto CPyL29;
    }
    cpy_r_false_value = cpy_r_r32;
    cpy_r_r33 = ((mypy___nodes___ConditionalExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_false_value, cpy_r_expr_type, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_false_value);
    CPy_DECREF(cpy_r_expr_type);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 635, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_false_value = cpy_r_r35;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_ops___Assign(cpy_r_target, cpy_r_false_value, cpy_r_r36);
    CPy_DECREF(cpy_r_false_value);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 636, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 636, CPyStatic_expression___globals);
        goto CPyL30;
    } else
        goto CPyL31;
CPyL19: ;
    cpy_r_r39 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next_block);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 637, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_r40 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_next_block);
    CPy_DECREF(cpy_r_next_block);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 639, CPyStatic_expression___globals);
        goto CPyL32;
    }
    return cpy_r_target;
CPyL22: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_if_body);
    CPy_DecRef(cpy_r_else_body);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_if_body);
    CPy_DecRef(cpy_r_else_body);
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_expr_type);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_else_body);
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_target);
    goto CPyL22;
CPyL28: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL12;
CPyL29: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_target);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_target);
    goto CPyL22;
CPyL31: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL19;
CPyL32: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL22;
}

PyObject *CPyPy_expression___transform_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_conditional_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ConditionalExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_conditional_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_conditional_expr", 619, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___set_literal_values(PyObject *cpy_r_builder, PyObject *cpy_r_items) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_const_value;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
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
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_tuple_values;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 645, CPyStatic_expression___globals);
        goto CPyL47;
    }
    cpy_r_values = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_items);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 646, CPyStatic_expression___globals);
        goto CPyL48;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL49;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_nodes___Expression)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 646, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r2);
        goto CPyL50;
    }
    cpy_r_item = cpy_r_r3;
    cpy_r_r4 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_builder, cpy_r_item);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 647, CPyStatic_expression___globals);
        goto CPyL51;
    }
    cpy_r_const_value = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_const_value != cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL52;
    } else
        goto CPyL53;
CPyL6: ;
    cpy_r_r7 = PyList_Append(cpy_r_values, cpy_r_const_value);
    CPy_DECREF(cpy_r_const_value);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 649, CPyStatic_expression___globals);
        goto CPyL50;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r9 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL10;
CPyL9: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL10: ;
    if (!cpy_r_r13) goto CPyL12;
    cpy_r_r18 = cpy_r_r13;
    goto CPyL13;
CPyL12: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r18 = cpy_r_r22;
CPyL13: ;
    if (!cpy_r_r18) goto CPyL35;
    CPy_INCREF(cpy_r_item);
    if (likely((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr)))
        cpy_r_r23 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 653, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_r23, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 653, CPyStatic_expression___globals);
        goto CPyL51;
    }
CPyL16: ;
    cpy_r_r25 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL19;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 653, CPyStatic_expression___globals);
        goto CPyL51;
    }
CPyL19: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (cpy_r_r31) {
        goto CPyL54;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r32 = Py_None;
    cpy_r_r33 = PyList_Append(cpy_r_values, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 654, CPyStatic_expression___globals);
        goto CPyL50;
    } else
        goto CPyL2;
CPyL21: ;
    CPy_INCREF(cpy_r_item);
    if (likely((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr)))
        cpy_r_r35 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 655, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 655, CPyStatic_expression___globals);
        goto CPyL51;
    }
CPyL23: ;
    cpy_r_r37 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL26;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL26;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 655, CPyStatic_expression___globals);
        goto CPyL51;
    }
CPyL26: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (cpy_r_r43) {
        goto CPyL55;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r44 = 1 ? Py_True : Py_False;
    cpy_r_r45 = PyList_Append(cpy_r_values, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 656, CPyStatic_expression___globals);
        goto CPyL50;
    } else
        goto CPyL2;
CPyL28: ;
    if (likely((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr)))
        cpy_r_r47 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 657, CPyStatic_expression___globals, "mypy.nodes.RefExpr", cpy_r_item);
        goto CPyL50;
    }
    cpy_r_r48 = CPY_GET_ATTR(cpy_r_r47, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 657, CPyStatic_expression___globals);
        goto CPyL50;
    }
CPyL30: ;
    cpy_r_r49 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r50 = PyUnicode_Compare(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r51 = cpy_r_r50 == -1;
    if (!cpy_r_r51) goto CPyL33;
    cpy_r_r52 = PyErr_Occurred();
    cpy_r_r53 = cpy_r_r52 != NULL;
    if (!cpy_r_r53) goto CPyL33;
    cpy_r_r54 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 657, CPyStatic_expression___globals);
        goto CPyL50;
    }
CPyL33: ;
    cpy_r_r55 = cpy_r_r50 == 0;
    if (!cpy_r_r55) goto CPyL2;
    cpy_r_r56 = 0 ? Py_True : Py_False;
    cpy_r_r57 = PyList_Append(cpy_r_values, cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 658, CPyStatic_expression___globals);
        goto CPyL50;
    } else
        goto CPyL2;
CPyL35: ;
    cpy_r_r59 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (!cpy_r_r62) goto CPyL56;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr))
        cpy_r_r63 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 660, CPyStatic_expression___globals, "mypy.nodes.TupleExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r64 = ((mypy___nodes___TupleExprObject *)cpy_r_r63)->_items;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_item);
    cpy_r_r65 = CPyDef_expression___set_literal_values(cpy_r_builder, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 660, CPyStatic_expression___globals);
        goto CPyL50;
    }
    cpy_r_tuple_values = cpy_r_r65;
    cpy_r_r66 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r67 = cpy_r_tuple_values != cpy_r_r66;
    if (!cpy_r_r67) goto CPyL57;
    if (likely(cpy_r_tuple_values != Py_None))
        cpy_r_r68 = cpy_r_tuple_values;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "set_literal_values", 662, CPyStatic_expression___globals, "list", cpy_r_tuple_values);
        goto CPyL50;
    }
    cpy_r_r69 = PyList_AsTuple(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 662, CPyStatic_expression___globals);
        goto CPyL50;
    }
    cpy_r_r70 = PyList_Append(cpy_r_values, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 662, CPyStatic_expression___globals);
        goto CPyL50;
    } else
        goto CPyL2;
CPyL42: ;
    cpy_r_r72 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 646, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = CPyObject_Size(cpy_r_items);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 664, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r77 = cpy_r_r75 != cpy_r_r76;
    CPyTagged_DECREF(cpy_r_r76);
    if (cpy_r_r77) {
        goto CPyL58;
    } else
        goto CPyL46;
CPyL45: ;
    cpy_r_r78 = Py_None;
    CPy_INCREF(cpy_r_r78);
    return cpy_r_r78;
CPyL46: ;
    return cpy_r_values;
CPyL47: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL48: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL47;
CPyL49: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r1);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_item);
    goto CPyL47;
CPyL52: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL6;
CPyL53: ;
    CPy_DECREF(cpy_r_const_value);
    goto CPyL7;
CPyL54: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL20;
CPyL55: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL27;
CPyL56: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL2;
CPyL57: ;
    CPy_DECREF(cpy_r_tuple_values);
    goto CPyL2;
CPyL58: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL45;
}

PyObject *CPyPy_expression___set_literal_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "items", 0};
    static CPyArg_Parser parser = {"OO:set_literal_values", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_items;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_items)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_items = obj_items;
    PyObject *retval = CPyDef_expression___set_literal_values(arg_builder, arg_items);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "set_literal_values", 644, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___precompute_set_literal(PyObject *cpy_r_builder, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_values;
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
    cpy_r_r0 = ((mypy___nodes___SetExprObject *)cpy_r_s)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_expression___set_literal_values(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 680, CPyStatic_expression___globals);
        goto CPyL11;
    }
    cpy_r_values = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_values != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL12;
    if (likely(cpy_r_values != Py_None))
        cpy_r_r4 = cpy_r_values;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 682, CPyStatic_expression___globals, "list", cpy_r_values);
        goto CPyL11;
    }
    cpy_r_r5 = PyFrozenSet_New(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 682, CPyStatic_expression___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyStatic_rtypes___set_rprimitive;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL13;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 682, CPyStatic_expression___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r8 = CPyDef_ops___LoadLiteral(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 682, CPyStatic_expression___globals);
        goto CPyL11;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 682, CPyStatic_expression___globals);
        goto CPyL11;
    }
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL12: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_expression___precompute_set_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "s", 0};
    static CPyArg_Parser parser = {"OO:precompute_set_literal", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_s)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___SetExpr))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___precompute_set_literal(arg_builder, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "precompute_set_literal", 670, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "__get__", -1, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "__mypyc_lambda__0_transform_comparison_expr_go_obj", "__mypyc_env__", 794, CPyStatic_expression___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "go_transform_comparison_expr_env", "__mypyc_env__", 794, CPyStatic_expression___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r1)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "transform_comparison_expr_env", "builder", 794, CPyStatic_expression___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r1)->_e;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "transform_comparison_expr_env", "e", 794, CPyStatic_expression___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r3)->_operators;
    cpy_r_r5 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->_i;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "go_transform_comparison_expr_env", "i", 794, CPyStatic_expression___globals);
        goto CPyL16;
    }
    CPyTagged_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyList_GetItem(cpy_r_r4, cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals, "str", cpy_r_r6);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->_prev;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "go_transform_comparison_expr_env", "prev", 794, CPyStatic_expression___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    cpy_r_r9 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->_next;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'next' of 'go_transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r10 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r1)->_e;
    if (unlikely(cpy_r_r10 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r10);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r11 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r10)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = CPyDef_expression___transform_basic_comparison(cpy_r_r2, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals);
        goto CPyL12;
    }
    return cpy_r_r12;
CPyL12: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
}

PyObject *CPyPy_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 794, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "__get__", -1, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "__mypyc_lambda__1_transform_comparison_expr_go_obj", "__mypyc_env__", 795, CPyStatic_expression___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "go_transform_comparison_expr_env", "__mypyc_env__", 795, CPyStatic_expression___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->_i;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "<lambda>", "go_transform_comparison_expr_env", "i", 795, CPyStatic_expression___globals);
        goto CPyL10;
    }
    CPyTagged_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyTagged_Add(cpy_r_r2, 2);
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r4 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r0)->_next;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'next' of 'go_transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 795, CPyStatic_expression___globals);
        goto CPyL11;
    }
CPyL4: ;
    cpy_r_r5 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r1)->_go;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'go' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 795, CPyStatic_expression___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r3);
    PyObject *cpy_r_r7[2] = {cpy_r_r6, cpy_r_r4};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 795, CPyStatic_expression___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_ops___Value)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "<lambda>", 795, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r9);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL8;
}

PyObject *CPyPy_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "<lambda>", 795, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___go_transform_comparison_expr_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_expression___go_transform_comparison_expr_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_expression___go_transform_comparison_expr_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "__get__", -1, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___go_transform_comparison_expr_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_i, PyObject *cpy_r_prev) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_go;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
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
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = ((mypyc___irbuild___expression___go_transform_comparison_expr_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "go_transform_comparison_expr_obj", "__mypyc_env__", 784, CPyStatic_expression___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_go;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "go", -1, CPyStatic_expression___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_go = cpy_r_r1;
    CPy_DECREF(cpy_r_go);
    cpy_r_r2 = CPyDef_expression___go_transform_comparison_expr_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 784, CPyStatic_expression___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 784, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_i);
    if (((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i);
    }
    ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i = cpy_r_i;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 784, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_prev);
    if (((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_prev != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_prev);
    }
    ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_prev = cpy_r_prev;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 784, CPyStatic_expression___globals);
        goto CPyL46;
    }
    cpy_r_r6 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "go_transform_comparison_expr_env", "i", 785, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "e", 785, CPyStatic_expression___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r7)->_operators;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = CPyTagged_Subtract(cpy_r_r11, 2);
    cpy_r_r13 = cpy_r_r6 & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPyTagged_IsEq_(cpy_r_r6, cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r12);
    if (cpy_r_r15) {
        goto CPyL11;
    } else
        goto CPyL27;
CPyL10: ;
    cpy_r_r16 = cpy_r_r6 == cpy_r_r12;
    CPyTagged_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r12);
    if (!cpy_r_r16) goto CPyL27;
CPyL11: ;
    cpy_r_r17 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "builder", 787, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r17);
CPyL12: ;
    cpy_r_r18 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "e", 787, CPyStatic_expression___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r18)->_operators;
    cpy_r_r20 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "go_transform_comparison_expr_env", "i", 787, CPyStatic_expression___globals);
        goto CPyL49;
    }
    CPyTagged_INCREF(cpy_r_r20);
CPyL14: ;
    cpy_r_r21 = CPyList_GetItem(cpy_r_r19, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals);
        goto CPyL49;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals, "str", cpy_r_r21);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r18);
    cpy_r_r23 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_prev;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "go_transform_comparison_expr_env", "prev", 787, CPyStatic_expression___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r23);
CPyL17: ;
    cpy_r_r24 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "builder", 787, CPyStatic_expression___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "e", 787, CPyStatic_expression___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r25);
CPyL19: ;
    cpy_r_r26 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r25)->_operands;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'i' of 'go_transform_comparison_expr_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r27);
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals);
        goto CPyL53;
    }
CPyL20: ;
    cpy_r_r28 = CPyTagged_Add(cpy_r_r27, 2);
    CPyTagged_DECREF(cpy_r_r27);
    cpy_r_r29 = CPyList_GetItem(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals);
        goto CPyL54;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_nodes___Expression)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r29);
        goto CPyL54;
    }
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_builder___IRBuilder___accept(cpy_r_r24, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals);
        goto CPyL55;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r32);
        goto CPyL55;
    }
    cpy_r_r34 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r34 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r34);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 787, CPyStatic_expression___globals);
        goto CPyL56;
    }
CPyL25: ;
    cpy_r_r35 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r34)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = CPyDef_expression___transform_basic_comparison(cpy_r_r17, cpy_r_r22, cpy_r_r23, cpy_r_r33, cpy_r_r35);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 786, CPyStatic_expression___globals);
        goto CPyL44;
    }
    return cpy_r_r36;
CPyL27: ;
    cpy_r_r37 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "builder", 790, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r37);
CPyL28: ;
    cpy_r_r38 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "e", 790, CPyStatic_expression___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r38);
CPyL29: ;
    cpy_r_r39 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r38)->_operands;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "go_transform_comparison_expr_env", "i", 790, CPyStatic_expression___globals);
        goto CPyL58;
    }
    CPyTagged_INCREF(cpy_r_r40);
CPyL30: ;
    cpy_r_r41 = CPyTagged_Add(cpy_r_r40, 2);
    CPyTagged_DECREF(cpy_r_r40);
    cpy_r_r42 = CPyList_GetItem(cpy_r_r39, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 790, CPyStatic_expression___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_nodes___Expression)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "go", 790, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r42);
        goto CPyL57;
    }
    cpy_r_r44 = 2;
    cpy_r_r45 = CPyDef_builder___IRBuilder___accept(cpy_r_r37, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 790, CPyStatic_expression___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "go", 790, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r45);
        goto CPyL46;
    }
    if (((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_next != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_next);
    }
    ((mypyc___irbuild___expression___go_transform_comparison_expr_envObject *)cpy_r_r2)->_next = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 790, CPyStatic_expression___globals);
        goto CPyL46;
    }
    cpy_r_r48 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "builder", 791, CPyStatic_expression___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r48);
CPyL36: ;
    cpy_r_r49 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r48)->_builder;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = CPyStatics[838]; /* 'and' */
    cpy_r_r51 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_expr_type;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "go", "transform_comparison_expr_env", "expr_type", 793, CPyStatic_expression___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r51);
CPyL37: ;
    cpy_r_r52 = CPyDef_expression_____mypyc_lambda__0_transform_comparison_expr_go_obj();
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 794, CPyStatic_expression___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r2);
    if (((mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *)cpy_r_r52)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *)cpy_r_r52)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression_____mypyc_lambda__0_transform_comparison_expr_go_objObject *)cpy_r_r52)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 794, CPyStatic_expression___globals);
        goto CPyL61;
    }
    cpy_r_r54 = CPyDef_expression_____mypyc_lambda__1_transform_comparison_expr_go_obj();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 795, CPyStatic_expression___globals);
        goto CPyL61;
    }
    if (((mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *)cpy_r_r54)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *)cpy_r_r54)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression_____mypyc_lambda__1_transform_comparison_expr_go_objObject *)cpy_r_r54)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 795, CPyStatic_expression___globals);
        goto CPyL62;
    }
    cpy_r_r56 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 796, CPyStatic_expression___globals);
        goto CPyL63;
    }
CPyL42: ;
    cpy_r_r57 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r56)->_line;
    CPyTagged_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = CPyDef_ll_builder___LowLevelIRBuilder___shortcircuit_helper(cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r54, cpy_r_r57);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 791, CPyStatic_expression___globals);
        goto CPyL44;
    }
    return cpy_r_r58;
CPyL44: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r6);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL44;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL44;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL44;
CPyL56: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r33);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r37);
    goto CPyL44;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r39);
    goto CPyL44;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r49);
    goto CPyL44;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    goto CPyL44;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL44;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL44;
CPyL63: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL44;
}

PyObject *CPyPy_expression___go_transform_comparison_expr_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"i", "prev", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_i;
    PyObject *obj_prev;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_i, &obj_prev)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_i;
    if (likely(PyLong_Check(obj_i)))
        arg_i = CPyTagged_BorrowFromObject(obj_i);
    else {
        CPy_TypeError("int", obj_i); goto fail;
    }
    PyObject *arg_prev;
    if (likely(PyObject_TypeCheck(obj_prev, CPyType_ops___Value)))
        arg_prev = obj_prev;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_prev); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___go_transform_comparison_expr_obj_____call__(arg___mypyc_self__, arg_i, arg_prev);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "go", 784, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_comparison_expr(PyObject *cpy_r_builder, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_first_op;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyTagged cpy_r_n_items;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    int64_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    int64_t cpy_r_r65;
    char cpy_r_r66;
    int64_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_bin_op;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_cmp_op;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_mypy_file;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_bool_type;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_exprs;
    CPyTagged cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    CPyPtr cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyPtr cpy_r_r136;
    CPyPtr cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    CPyTagged cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_or_expr;
    CPyTagged cpy_r_r149;
    CPyPtr cpy_r_r150;
    int64_t cpy_r_r151;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    CPyPtr cpy_r_r183;
    CPyPtr cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    char cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    CPyPtr cpy_r_r225;
    int64_t cpy_r_r226;
    CPyTagged cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    CPyPtr cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_set_literal;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    CPyPtr cpy_r_r260;
    CPyPtr cpy_r_r261;
    CPyPtr cpy_r_r262;
    PyObject *cpy_r_r263;
    CPyTagged cpy_r_r264;
    PyObject *cpy_r_r265;
    char cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    char cpy_r_r272;
    char cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    CPyTagged cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    CPyPtr cpy_r_r282;
    int64_t cpy_r_r283;
    CPyTagged cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    int32_t cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    char cpy_r_r290;
    char cpy_r_r291;
    char cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    char cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_right_expr;
    PyObject *cpy_r_r305;
    CPyPtr cpy_r_r306;
    PyObject *cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    int32_t cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    char cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    int32_t cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    char cpy_r_r327;
    char cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_left_expr;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    char cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    char cpy_r_r351;
    char cpy_r_borrow_left;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_right;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    CPyTagged cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    char cpy_r_r365;
    PyObject *cpy_r_r366;
    char cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject **cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    cpy_r_r0 = CPyDef_expression___transform_comparison_expr_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 687, CPyStatic_expression___globals);
        goto CPyL253;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 687, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_e);
    if (((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e);
    }
    ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e = cpy_r_e;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 687, CPyStatic_expression___globals);
        goto CPyL254;
    }
    cpy_r_r3 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 690, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r3)->_operators;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 690, CPyStatic_expression___globals);
        goto CPyL255;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 690, CPyStatic_expression___globals, "str", cpy_r_r5);
        goto CPyL255;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_first_op = cpy_r_r6;
    cpy_r_r7 = CPyStatics[867]; /* 'in' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL9;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL9: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL11;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL15;
CPyL11: ;
    cpy_r_r15 = CPyStatics[866]; /* 'not in' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL14;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL14;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL14: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    cpy_r_r14 = cpy_r_r21;
CPyL15: ;
    if (!cpy_r_r14) goto CPyL128;
    cpy_r_r22 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 693, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r22);
CPyL17: ;
    cpy_r_r23 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r22)->_operators;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_r26 == 2;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r27) goto CPyL128;
    cpy_r_r28 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 694, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r28);
CPyL19: ;
    cpy_r_r29 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r28)->_operands;
    cpy_r_r30 = CPyList_GetItemShortBorrow(cpy_r_r29, 2);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 694, CPyStatic_expression___globals);
        goto CPyL257;
    }
    cpy_r_r31 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL22;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL23;
CPyL22: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL23: ;
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r35) goto CPyL128;
    cpy_r_r40 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 696, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r40);
CPyL25: ;
    cpy_r_r41 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r40)->_operands;
    cpy_r_r42 = CPyList_GetItemShort(cpy_r_r41, 2);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 696, CPyStatic_expression___globals);
        goto CPyL258;
    }
    if (Py_TYPE(cpy_r_r42) == CPyType_nodes___TupleExpr)
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL10124;
    if (Py_TYPE(cpy_r_r42) == CPyType_nodes___ListExpr)
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL10124;
    CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 696, CPyStatic_expression___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_r42);
    goto CPyL258;
__LL10124: ;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_r43)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_nodes___TupleExpr))
        cpy_r_r48 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 696, CPyStatic_expression___globals, "mypy.nodes.TupleExpr", cpy_r_r43);
        goto CPyL256;
    }
    cpy_r_r49 = ((mypy___nodes___TupleExprObject *)cpy_r_r48)->_items;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49;
    goto CPyL32;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_nodes___ListExpr))
        cpy_r_r51 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 696, CPyStatic_expression___globals, "mypy.nodes.ListExpr", cpy_r_r43);
        goto CPyL256;
    }
    cpy_r_r52 = ((mypy___nodes___ListExprObject *)cpy_r_r51)->_items;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r50 = cpy_r_r52;
CPyL32: ;
    cpy_r_items = cpy_r_r50;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_n_items = cpy_r_r55;
    cpy_r_r56 = 2 & 1;
    cpy_r_r57 = cpy_r_r56 == 0;
    cpy_r_r58 = cpy_r_n_items & 1;
    cpy_r_r59 = cpy_r_r58 == 0;
    cpy_r_r60 = cpy_r_r57 & cpy_r_r59;
    if (!cpy_r_r60) goto CPyL34;
    cpy_r_r61 = (Py_ssize_t)2 < (Py_ssize_t)cpy_r_n_items;
    cpy_r_r62 = cpy_r_r61;
    goto CPyL35;
CPyL34: ;
    cpy_r_r63 = CPyTagged_IsLt_(2, cpy_r_n_items);
    cpy_r_r62 = cpy_r_r63;
CPyL35: ;
    if (cpy_r_r62) goto CPyL37;
    cpy_r_r64 = cpy_r_r62;
    goto CPyL41;
CPyL37: ;
    cpy_r_r65 = cpy_r_n_items & 1;
    cpy_r_r66 = cpy_r_r65 == 0;
    cpy_r_r67 = 32 & 1;
    cpy_r_r68 = cpy_r_r67 == 0;
    cpy_r_r69 = cpy_r_r66 & cpy_r_r68;
    if (!cpy_r_r69) goto CPyL39;
    cpy_r_r70 = (Py_ssize_t)cpy_r_n_items < (Py_ssize_t)32;
    cpy_r_r71 = cpy_r_r70;
    goto CPyL40;
CPyL39: ;
    cpy_r_r72 = CPyTagged_IsLt_(cpy_r_n_items, 32);
    cpy_r_r71 = cpy_r_r72;
CPyL40: ;
    cpy_r_r64 = cpy_r_r71;
CPyL41: ;
    if (cpy_r_r64) {
        goto CPyL259;
    } else
        goto CPyL98;
CPyL42: ;
    cpy_r_r73 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 702, CPyStatic_expression___globals);
        goto CPyL260;
    }
    CPy_INCREF(cpy_r_r73);
CPyL43: ;
    cpy_r_r74 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r73)->_operators;
    cpy_r_r75 = CPyList_GetItemShort(cpy_r_r74, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 702, CPyStatic_expression___globals);
        goto CPyL261;
    }
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 702, CPyStatic_expression___globals, "str", cpy_r_r75);
        goto CPyL261;
    }
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = CPyStatics[867]; /* 'in' */
    cpy_r_r78 = PyUnicode_Compare(cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r79 = cpy_r_r78 == -1;
    if (!cpy_r_r79) goto CPyL48;
    cpy_r_r80 = PyErr_Occurred();
    cpy_r_r81 = cpy_r_r80 != NULL;
    if (!cpy_r_r81) goto CPyL48;
    cpy_r_r82 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 702, CPyStatic_expression___globals);
        goto CPyL260;
    }
CPyL48: ;
    cpy_r_r83 = cpy_r_r78 == 0;
    if (!cpy_r_r83) goto CPyL50;
    cpy_r_r84 = CPyStatics[868]; /* 'or' */
    CPy_INCREF(cpy_r_r84);
    cpy_r_bin_op = cpy_r_r84;
    cpy_r_r85 = CPyStatics[860]; /* '==' */
    CPy_INCREF(cpy_r_r85);
    cpy_r_cmp_op = cpy_r_r85;
    goto CPyL51;
CPyL50: ;
    cpy_r_r86 = CPyStatics[838]; /* 'and' */
    CPy_INCREF(cpy_r_r86);
    cpy_r_bin_op = cpy_r_r86;
    cpy_r_r87 = CPyStatics[863]; /* '!=' */
    CPy_INCREF(cpy_r_r87);
    cpy_r_cmp_op = cpy_r_r87;
CPyL51: ;
    cpy_r_r88 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 708, CPyStatic_expression___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r88);
CPyL52: ;
    cpy_r_r89 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r88)->_operands;
    cpy_r_r90 = CPyList_GetItemShort(cpy_r_r89, 0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 708, CPyStatic_expression___globals);
        goto CPyL263;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r90, CPyType_nodes___Expression)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 708, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r90);
        goto CPyL263;
    }
    CPy_DECREF(cpy_r_r88);
    cpy_r_lhs = cpy_r_r91;
    cpy_r_r92 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 709, CPyStatic_expression___globals);
        goto CPyL264;
    }
    CPy_INCREF(cpy_r_r92);
CPyL55: ;
    cpy_r_r93 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r92)->_graph;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 709, CPyStatic_expression___globals);
        goto CPyL264;
    }
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_mypy___build___State))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 709, CPyStatic_expression___globals, "mypy.build.State", cpy_r_r95);
        goto CPyL264;
    }
    cpy_r_r97 = ((mypy___build___StateObject *)cpy_r_r96)->_tree;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    cpy_r_mypy_file = cpy_r_r97;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_mypy_file != cpy_r_r98;
    if (cpy_r_r99) {
        goto CPyL60;
    } else
        goto CPyL265;
CPyL58: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 710, CPyStatic_expression___globals);
        goto CPyL253;
    }
    CPy_Unreachable();
CPyL60: ;
    if (likely(cpy_r_mypy_file != Py_None))
        cpy_r_r101 = cpy_r_mypy_file;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 711, CPyStatic_expression___globals, "mypy.nodes.MypyFile", cpy_r_mypy_file);
        goto CPyL266;
    }
    cpy_r_r102 = ((mypy___nodes___MypyFileObject *)cpy_r_r101)->_names;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "MypyFile", "names", 711, CPyStatic_expression___globals);
        goto CPyL266;
    }
    CPy_INCREF(cpy_r_r102);
CPyL62: ;
    CPy_DECREF(cpy_r_mypy_file);
    cpy_r_r103 = CPyStatics[4621]; /* 'bool' */
    cpy_r_r104 = CPyDict_GetItem(cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 711, CPyStatic_expression___globals);
        goto CPyL264;
    }
    if (likely(Py_TYPE(cpy_r_r104) == CPyType_nodes___SymbolTableNode))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 711, CPyStatic_expression___globals, "mypy.nodes.SymbolTableNode", cpy_r_r104);
        goto CPyL264;
    }
    cpy_r_r106 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r105)->_node;
    CPy_INCREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    cpy_r_info = cpy_r_r106;
    cpy_r_r107 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r108 = (CPyPtr)&((PyObject *)cpy_r_info)->ob_type;
    cpy_r_r109 = *(PyObject * *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 == cpy_r_r107;
    if (!cpy_r_r110) goto CPyL66;
    cpy_r_r111 = cpy_r_r110;
    goto CPyL67;
CPyL66: ;
    cpy_r_r112 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_info)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    cpy_r_r111 = cpy_r_r115;
CPyL67: ;
    if (cpy_r_r111) {
        goto CPyL70;
    } else
        goto CPyL267;
CPyL68: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 712, CPyStatic_expression___globals);
        goto CPyL253;
    }
    CPy_Unreachable();
CPyL70: ;
    if (likely((Py_TYPE(cpy_r_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_info) == CPyType_nodes___TypeInfo)))
        cpy_r_r117 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 713, CPyStatic_expression___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL264;
    }
    cpy_r_r118 = PyList_New(0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 713, CPyStatic_expression___globals);
        goto CPyL268;
    }
    cpy_r_r119 = CPY_INT_TAG;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = CPyDef_types___Instance(cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 713, CPyStatic_expression___globals);
        goto CPyL264;
    }
    cpy_r_bool_type = cpy_r_r123;
    cpy_r_r124 = PyList_New(0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 714, CPyStatic_expression___globals);
        goto CPyL269;
    }
    cpy_r_exprs = cpy_r_r124;
    cpy_r_r125 = 0;
CPyL75: ;
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = (Py_ssize_t)cpy_r_r125 < (Py_ssize_t)cpy_r_r128;
    if (!cpy_r_r129) goto CPyL270;
    cpy_r_r130 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r125);
    if (likely(PyObject_TypeCheck(cpy_r_r130, CPyType_nodes___Expression)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 715, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r130);
        goto CPyL271;
    }
    cpy_r_item = cpy_r_r131;
    cpy_r_r132 = PyList_New(1);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 716, CPyStatic_expression___globals);
        goto CPyL272;
    }
    cpy_r_r133 = (CPyPtr)&((PyListObject *)cpy_r_r132)->ob_item;
    cpy_r_r134 = *(CPyPtr *)cpy_r_r133;
    CPy_INCREF(cpy_r_cmp_op);
    *(PyObject * *)cpy_r_r134 = cpy_r_cmp_op;
    cpy_r_r135 = PyList_New(2);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 716, CPyStatic_expression___globals);
        goto CPyL273;
    }
    cpy_r_r136 = (CPyPtr)&((PyListObject *)cpy_r_r135)->ob_item;
    cpy_r_r137 = *(CPyPtr *)cpy_r_r136;
    CPy_INCREF(cpy_r_lhs);
    *(PyObject * *)cpy_r_r137 = cpy_r_lhs;
    cpy_r_r138 = cpy_r_r137 + 8;
    *(PyObject * *)cpy_r_r138 = cpy_r_item;
    cpy_r_r139 = CPyDef_nodes___ComparisonExpr(cpy_r_r132, cpy_r_r135);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 716, CPyStatic_expression___globals);
        goto CPyL271;
    }
    cpy_r_expr = cpy_r_r139;
    cpy_r_r140 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 717, CPyStatic_expression___globals);
        goto CPyL274;
    }
    CPy_INCREF(cpy_r_r140);
CPyL81: ;
    cpy_r_r141 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r140)->_types;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r141, cpy_r_expr, cpy_r_bool_type);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 717, CPyStatic_expression___globals);
        goto CPyL274;
    }
    cpy_r_r144 = PyList_Append(cpy_r_exprs, cpy_r_expr);
    CPy_DECREF(cpy_r_expr);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 718, CPyStatic_expression___globals);
        goto CPyL271;
    }
    cpy_r_r146 = cpy_r_r125 + 2;
    cpy_r_r125 = cpy_r_r146;
    goto CPyL75;
CPyL84: ;
    cpy_r_r147 = CPyList_Pop(cpy_r_exprs, 0);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 720, CPyStatic_expression___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r147) == CPyType_nodes___ComparisonExpr))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 720, CPyStatic_expression___globals, "mypy.nodes.ComparisonExpr", cpy_r_r147);
        goto CPyL275;
    }
    cpy_r_or_expr = cpy_r_r148;
    cpy_r_r149 = 0;
CPyL87: ;
    cpy_r_r150 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r151 = *(int64_t *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 << 1;
    cpy_r_r153 = (Py_ssize_t)cpy_r_r149 < (Py_ssize_t)cpy_r_r152;
    if (!cpy_r_r153) goto CPyL276;
    cpy_r_r154 = CPyList_GetItemUnsafe(cpy_r_exprs, cpy_r_r149);
    if (likely(Py_TYPE(cpy_r_r154) == CPyType_nodes___ComparisonExpr))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 721, CPyStatic_expression___globals, "mypy.nodes.ComparisonExpr", cpy_r_r154);
        goto CPyL277;
    }
    cpy_r_expr = cpy_r_r155;
    cpy_r_r156 = NULL;
    cpy_r_r157 = CPyDef_nodes___OpExpr(cpy_r_bin_op, cpy_r_or_expr, cpy_r_expr, cpy_r_r156);
    CPy_DECREF(cpy_r_or_expr);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 722, CPyStatic_expression___globals);
        goto CPyL275;
    }
    cpy_r_or_expr = cpy_r_r157;
    cpy_r_r158 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 723, CPyStatic_expression___globals);
        goto CPyL277;
    }
    CPy_INCREF(cpy_r_r158);
CPyL91: ;
    cpy_r_r159 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r158)->_types;
    CPy_INCREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r158);
    CPy_INCREF(cpy_r_or_expr);
    if (likely(Py_TYPE(cpy_r_or_expr) == CPyType_nodes___OpExpr))
        cpy_r_r160 = cpy_r_or_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 723, CPyStatic_expression___globals, "mypy.nodes.OpExpr", cpy_r_or_expr);
        goto CPyL278;
    }
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r159, cpy_r_r160, cpy_r_bool_type);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 723, CPyStatic_expression___globals);
        goto CPyL277;
    }
    cpy_r_r163 = cpy_r_r149 + 2;
    cpy_r_r149 = cpy_r_r163;
    goto CPyL87;
CPyL94: ;
    cpy_r_r164 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r164 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r164);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 724, CPyStatic_expression___globals);
        goto CPyL279;
    }
CPyL95: ;
    cpy_r_r165 = 2;
    cpy_r_r166 = CPyDef_builder___IRBuilder___accept(cpy_r_r164, cpy_r_or_expr, cpy_r_r165);
    CPy_DECREF(cpy_r_or_expr);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 724, CPyStatic_expression___globals);
        goto CPyL253;
    }
    if (likely(cpy_r_r166 != Py_None))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 724, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r166);
        goto CPyL253;
    }
    return cpy_r_r167;
CPyL98: ;
    cpy_r_r168 = cpy_r_n_items == 2;
    if (cpy_r_r168) {
        goto CPyL280;
    } else
        goto CPyL281;
CPyL99: ;
    cpy_r_r169 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 728, CPyStatic_expression___globals);
        goto CPyL282;
    }
    CPy_INCREF(cpy_r_r169);
CPyL100: ;
    cpy_r_r170 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r169)->_operators;
    cpy_r_r171 = CPyList_GetItemShort(cpy_r_r170, 0);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 728, CPyStatic_expression___globals);
        goto CPyL283;
    }
    if (likely(PyUnicode_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 728, CPyStatic_expression___globals, "str", cpy_r_r171);
        goto CPyL283;
    }
    CPy_DECREF(cpy_r_r169);
    cpy_r_r173 = CPyStatics[867]; /* 'in' */
    cpy_r_r174 = PyUnicode_Compare(cpy_r_r172, cpy_r_r173);
    CPy_DECREF(cpy_r_r172);
    cpy_r_r175 = cpy_r_r174 == -1;
    if (!cpy_r_r175) goto CPyL105;
    cpy_r_r176 = PyErr_Occurred();
    cpy_r_r177 = cpy_r_r176 != NULL;
    if (!cpy_r_r177) goto CPyL105;
    cpy_r_r178 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 728, CPyStatic_expression___globals);
        goto CPyL282;
    }
CPyL105: ;
    cpy_r_r179 = cpy_r_r174 == 0;
    if (!cpy_r_r179) goto CPyL107;
    cpy_r_r180 = CPyStatics[860]; /* '==' */
    CPy_INCREF(cpy_r_r180);
    cpy_r_cmp_op = cpy_r_r180;
    goto CPyL108;
CPyL107: ;
    cpy_r_r181 = CPyStatics[863]; /* '!=' */
    CPy_INCREF(cpy_r_r181);
    cpy_r_cmp_op = cpy_r_r181;
CPyL108: ;
    cpy_r_r182 = PyList_New(1);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 732, CPyStatic_expression___globals);
        goto CPyL284;
    }
    cpy_r_r183 = (CPyPtr)&((PyListObject *)cpy_r_r182)->ob_item;
    cpy_r_r184 = *(CPyPtr *)cpy_r_r183;
    *(PyObject * *)cpy_r_r184 = cpy_r_cmp_op;
    cpy_r_r185 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 732, CPyStatic_expression___globals);
        goto CPyL285;
    }
    CPy_INCREF(cpy_r_r185);
CPyL110: ;
    CPy_DECREF(((mypy___nodes___ComparisonExprObject *)cpy_r_r185)->_operators);
    ((mypy___nodes___ComparisonExprObject *)cpy_r_r185)->_operators = cpy_r_r182;
    CPy_DECREF(cpy_r_r185);
    cpy_r_r187 = CPyList_GetItemShort(cpy_r_items, 0);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 733, CPyStatic_expression___globals);
        goto CPyL256;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r187, CPyType_nodes___Expression)))
        cpy_r_r188 = cpy_r_r187;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 733, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r187);
        goto CPyL256;
    }
    cpy_r_r189 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 733, CPyStatic_expression___globals);
        goto CPyL286;
    }
    CPy_INCREF(cpy_r_r189);
CPyL113: ;
    cpy_r_r190 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r189)->_operands;
    CPy_INCREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r189);
    cpy_r_r191 = CPyList_SetItem(cpy_r_r190, 2, cpy_r_r188);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 733, CPyStatic_expression___globals);
        goto CPyL256;
    } else
        goto CPyL128;
CPyL114: ;
    cpy_r_r192 = cpy_r_n_items == 0;
    CPyTagged_DECREF(cpy_r_n_items);
    if (cpy_r_r192) {
        goto CPyL287;
    } else
        goto CPyL128;
CPyL115: ;
    cpy_r_r193 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 737, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r193);
CPyL116: ;
    cpy_r_r194 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r193)->_operators;
    cpy_r_r195 = CPyList_GetItemShort(cpy_r_r194, 0);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 737, CPyStatic_expression___globals);
        goto CPyL288;
    }
    if (likely(PyUnicode_Check(cpy_r_r195)))
        cpy_r_r196 = cpy_r_r195;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 737, CPyStatic_expression___globals, "str", cpy_r_r195);
        goto CPyL288;
    }
    CPy_DECREF(cpy_r_r193);
    cpy_r_r197 = CPyStatics[867]; /* 'in' */
    cpy_r_r198 = PyUnicode_Compare(cpy_r_r196, cpy_r_r197);
    CPy_DECREF(cpy_r_r196);
    cpy_r_r199 = cpy_r_r198 == -1;
    if (!cpy_r_r199) goto CPyL121;
    cpy_r_r200 = PyErr_Occurred();
    cpy_r_r201 = cpy_r_r200 != NULL;
    if (!cpy_r_r201) goto CPyL121;
    cpy_r_r202 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 737, CPyStatic_expression___globals);
        goto CPyL254;
    }
CPyL121: ;
    cpy_r_r203 = cpy_r_r198 == 0;
    if (!cpy_r_r203) goto CPyL125;
    cpy_r_r204 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r204 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r204);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 738, CPyStatic_expression___globals);
        goto CPyL253;
    }
CPyL123: ;
    cpy_r_r205 = CPyDef_builder___IRBuilder___false(cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 738, CPyStatic_expression___globals);
        goto CPyL253;
    }
    return cpy_r_r205;
CPyL125: ;
    cpy_r_r206 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r206 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r206);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 740, CPyStatic_expression___globals);
        goto CPyL253;
    }
CPyL126: ;
    cpy_r_r207 = CPyDef_builder___IRBuilder___true(cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 740, CPyStatic_expression___globals);
        goto CPyL253;
    }
    return cpy_r_r207;
CPyL128: ;
    cpy_r_r208 = CPyStatics[867]; /* 'in' */
    cpy_r_r209 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r208);
    cpy_r_r210 = cpy_r_r209 == -1;
    if (!cpy_r_r210) goto CPyL131;
    cpy_r_r211 = PyErr_Occurred();
    cpy_r_r212 = cpy_r_r211 != NULL;
    if (!cpy_r_r212) goto CPyL131;
    cpy_r_r213 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL131: ;
    cpy_r_r214 = cpy_r_r209 == 0;
    if (!cpy_r_r214) goto CPyL133;
    cpy_r_r215 = cpy_r_r214;
    goto CPyL137;
CPyL133: ;
    cpy_r_r216 = CPyStatics[866]; /* 'not in' */
    cpy_r_r217 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r216);
    cpy_r_r218 = cpy_r_r217 == -1;
    if (!cpy_r_r218) goto CPyL136;
    cpy_r_r219 = PyErr_Occurred();
    cpy_r_r220 = cpy_r_r219 != NULL;
    if (!cpy_r_r220) goto CPyL136;
    cpy_r_r221 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL136: ;
    cpy_r_r222 = cpy_r_r217 == 0;
    cpy_r_r215 = cpy_r_r222;
CPyL137: ;
    if (!cpy_r_r215) goto CPyL174;
    cpy_r_r223 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 746, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r223);
CPyL139: ;
    cpy_r_r224 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r223)->_operators;
    cpy_r_r225 = (CPyPtr)&((PyVarObject *)cpy_r_r224)->ob_size;
    cpy_r_r226 = *(int64_t *)cpy_r_r225;
    cpy_r_r227 = cpy_r_r226 << 1;
    cpy_r_r228 = cpy_r_r227 == 2;
    CPy_DECREF(cpy_r_r223);
    if (!cpy_r_r228) goto CPyL174;
    cpy_r_r229 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 747, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r229);
CPyL141: ;
    cpy_r_r230 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r229)->_operands;
    cpy_r_r231 = CPyList_GetItemShortBorrow(cpy_r_r230, 2);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 747, CPyStatic_expression___globals);
        goto CPyL289;
    }
    cpy_r_r232 = (PyObject *)CPyType_nodes___SetExpr;
    cpy_r_r233 = (CPyPtr)&((PyObject *)cpy_r_r231)->ob_type;
    cpy_r_r234 = *(PyObject * *)cpy_r_r233;
    cpy_r_r235 = cpy_r_r234 == cpy_r_r232;
    CPy_DECREF(cpy_r_r229);
    if (!cpy_r_r235) goto CPyL174;
    cpy_r_r236 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 749, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r236);
CPyL144: ;
    cpy_r_r237 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 749, CPyStatic_expression___globals);
        goto CPyL290;
    }
    CPy_INCREF(cpy_r_r237);
CPyL145: ;
    cpy_r_r238 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r237)->_operands;
    cpy_r_r239 = CPyList_GetItemShort(cpy_r_r238, 2);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 749, CPyStatic_expression___globals);
        goto CPyL291;
    }
    if (likely(Py_TYPE(cpy_r_r239) == CPyType_nodes___SetExpr))
        cpy_r_r240 = cpy_r_r239;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 749, CPyStatic_expression___globals, "mypy.nodes.SetExpr", cpy_r_r239);
        goto CPyL291;
    }
    CPy_DECREF(cpy_r_r237);
    cpy_r_r241 = CPyDef_expression___precompute_set_literal(cpy_r_r236, cpy_r_r240);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 749, CPyStatic_expression___globals);
        goto CPyL256;
    }
    cpy_r_set_literal = cpy_r_r241;
    cpy_r_r242 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r243 = cpy_r_set_literal != cpy_r_r242;
    if (!cpy_r_r243) goto CPyL292;
    cpy_r_r244 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 751, CPyStatic_expression___globals);
        goto CPyL293;
    }
    CPy_INCREF(cpy_r_r244);
CPyL150: ;
    cpy_r_r245 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r244)->_operands;
    cpy_r_r246 = CPyList_GetItemShort(cpy_r_r245, 0);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 751, CPyStatic_expression___globals);
        goto CPyL294;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r246, CPyType_nodes___Expression)))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 751, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r246);
        goto CPyL294;
    }
    CPy_DECREF(cpy_r_r244);
    cpy_r_lhs = cpy_r_r247;
    cpy_r_r248 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 752, CPyStatic_expression___globals);
        goto CPyL295;
    }
    CPy_INCREF(cpy_r_r248);
CPyL153: ;
    cpy_r_r249 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r248)->_builder;
    CPy_INCREF(cpy_r_r249);
    CPy_DECREF(cpy_r_r248);
    cpy_r_r250 = CPyStatic_expression___globals;
    cpy_r_r251 = CPyStatics[8223]; /* 'set_in_op' */
    cpy_r_r252 = CPyDict_GetItem(cpy_r_r250, cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals);
        goto CPyL296;
    }
    if (likely(PyTuple_Check(cpy_r_r252)))
        cpy_r_r253 = cpy_r_r252;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals, "tuple", cpy_r_r252);
        goto CPyL296;
    }
    cpy_r_r254 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 753, CPyStatic_expression___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r254);
CPyL156: ;
    cpy_r_r255 = 2;
    cpy_r_r256 = CPyDef_builder___IRBuilder___accept(cpy_r_r254, cpy_r_lhs, cpy_r_r255);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_r254);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals);
        goto CPyL298;
    }
    if (likely(cpy_r_r256 != Py_None))
        cpy_r_r257 = cpy_r_r256;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r256);
        goto CPyL298;
    }
    if (likely(cpy_r_set_literal != Py_None))
        cpy_r_r258 = cpy_r_set_literal;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_set_literal);
        goto CPyL299;
    }
    cpy_r_r259 = PyList_New(2);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals);
        goto CPyL300;
    }
    cpy_r_r260 = (CPyPtr)&((PyListObject *)cpy_r_r259)->ob_item;
    cpy_r_r261 = *(CPyPtr *)cpy_r_r260;
    *(PyObject * *)cpy_r_r261 = cpy_r_r257;
    cpy_r_r262 = cpy_r_r261 + 8;
    *(PyObject * *)cpy_r_r262 = cpy_r_r258;
    cpy_r_r263 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 753, CPyStatic_expression___globals);
        goto CPyL301;
    }
    CPy_INCREF(cpy_r_r263);
CPyL161: ;
    cpy_r_r264 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r263)->_line;
    CPyTagged_INCREF(cpy_r_r264);
    CPy_DECREF(cpy_r_r263);
    cpy_r_r265 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r265 == NULL)) {
        goto CPyL302;
    } else
        goto CPyL164;
CPyL162: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r266 = 0;
    if (unlikely(!cpy_r_r266)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 753, CPyStatic_expression___globals);
        goto CPyL253;
    }
    CPy_Unreachable();
CPyL164: ;
    cpy_r_r267 = CPyDef_ll_builder___LowLevelIRBuilder___call_c(cpy_r_r249, cpy_r_r253, cpy_r_r259, cpy_r_r264, cpy_r_r265);
    CPy_DECREF(cpy_r_r253);
    CPy_DECREF(cpy_r_r259);
    CPyTagged_DECREF(cpy_r_r264);
    CPy_DECREF(cpy_r_r249);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 752, CPyStatic_expression___globals);
        goto CPyL256;
    }
    cpy_r_result = cpy_r_r267;
    cpy_r_r268 = CPyStatics[866]; /* 'not in' */
    cpy_r_r269 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r268);
    CPy_DECREF(cpy_r_first_op);
    cpy_r_r270 = cpy_r_r269 == -1;
    if (!cpy_r_r270) goto CPyL168;
    cpy_r_r271 = PyErr_Occurred();
    cpy_r_r272 = cpy_r_r271 != NULL;
    if (!cpy_r_r272) goto CPyL168;
    cpy_r_r273 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 755, CPyStatic_expression___globals);
        goto CPyL303;
    }
CPyL168: ;
    cpy_r_r274 = cpy_r_r269 == 0;
    if (!cpy_r_r274) goto CPyL304;
    cpy_r_r275 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 756, CPyStatic_expression___globals);
        goto CPyL303;
    }
    CPy_INCREF(cpy_r_r275);
CPyL170: ;
    cpy_r_r276 = CPyStatics[869]; /* 'not' */
    cpy_r_r277 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r277 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r277);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 756, CPyStatic_expression___globals);
        goto CPyL305;
    }
CPyL171: ;
    cpy_r_r278 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r277)->_line;
    CPyTagged_INCREF(cpy_r_r278);
    CPy_DECREF(cpy_r_r277);
    cpy_r_r279 = CPyDef_builder___IRBuilder___unary_op(cpy_r_r275, cpy_r_result, cpy_r_r276, cpy_r_r278);
    CPy_DECREF(cpy_r_result);
    CPyTagged_DECREF(cpy_r_r278);
    CPy_DECREF(cpy_r_r275);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 756, CPyStatic_expression___globals);
        goto CPyL253;
    }
    return cpy_r_r279;
CPyL173: ;
    return cpy_r_result;
CPyL174: ;
    cpy_r_r280 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 759, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r280);
CPyL175: ;
    cpy_r_r281 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r280)->_operators;
    cpy_r_r282 = (CPyPtr)&((PyVarObject *)cpy_r_r281)->ob_size;
    cpy_r_r283 = *(int64_t *)cpy_r_r282;
    cpy_r_r284 = cpy_r_r283 << 1;
    cpy_r_r285 = cpy_r_r284 == 2;
    CPy_DECREF(cpy_r_r280);
    if (!cpy_r_r285) goto CPyL306;
    cpy_r_r286 = CPyStatics[861]; /* 'is' */
    cpy_r_r287 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r286);
    cpy_r_r288 = cpy_r_r287 == -1;
    if (!cpy_r_r288) goto CPyL179;
    cpy_r_r289 = PyErr_Occurred();
    cpy_r_r290 = cpy_r_r289 != NULL;
    if (!cpy_r_r290) goto CPyL179;
    cpy_r_r291 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL179: ;
    cpy_r_r292 = cpy_r_r287 == 0;
    if (!cpy_r_r292) goto CPyL181;
    cpy_r_r293 = cpy_r_r292;
    goto CPyL185;
CPyL181: ;
    cpy_r_r294 = CPyStatics[862]; /* 'is not' */
    cpy_r_r295 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r294);
    cpy_r_r296 = cpy_r_r295 == -1;
    if (!cpy_r_r296) goto CPyL184;
    cpy_r_r297 = PyErr_Occurred();
    cpy_r_r298 = cpy_r_r297 != NULL;
    if (!cpy_r_r298) goto CPyL184;
    cpy_r_r299 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", -1, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL184: ;
    cpy_r_r300 = cpy_r_r295 == 0;
    cpy_r_r293 = cpy_r_r300;
CPyL185: ;
    if (!cpy_r_r293) goto CPyL205;
    cpy_r_r301 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 762, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r301);
CPyL187: ;
    cpy_r_r302 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r301)->_operands;
    cpy_r_r303 = CPyList_GetItemShort(cpy_r_r302, 2);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 762, CPyStatic_expression___globals);
        goto CPyL307;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r303, CPyType_nodes___Expression)))
        cpy_r_r304 = cpy_r_r303;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 762, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r303);
        goto CPyL307;
    }
    CPy_DECREF(cpy_r_r301);
    cpy_r_right_expr = cpy_r_r304;
    cpy_r_r305 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r306 = (CPyPtr)&((PyObject *)cpy_r_right_expr)->ob_type;
    cpy_r_r307 = *(PyObject * *)cpy_r_r306;
    cpy_r_r308 = cpy_r_r307 == cpy_r_r305;
    if (!cpy_r_r308) goto CPyL308;
    if (likely(Py_TYPE(cpy_r_right_expr) == CPyType_nodes___NameExpr))
        cpy_r_r309 = cpy_r_right_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 763, CPyStatic_expression___globals, "mypy.nodes.NameExpr", cpy_r_right_expr);
        goto CPyL256;
    }
    cpy_r_r310 = CPY_GET_ATTR(cpy_r_r309, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r309);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 763, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL192: ;
    cpy_r_r311 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r312 = PyUnicode_Compare(cpy_r_r310, cpy_r_r311);
    CPy_DECREF(cpy_r_r310);
    cpy_r_r313 = cpy_r_r312 == -1;
    if (!cpy_r_r313) goto CPyL195;
    cpy_r_r314 = PyErr_Occurred();
    cpy_r_r315 = cpy_r_r314 != NULL;
    if (!cpy_r_r315) goto CPyL195;
    cpy_r_r316 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 763, CPyStatic_expression___globals);
        goto CPyL256;
    }
CPyL195: ;
    cpy_r_r317 = cpy_r_r312 == 0;
    if (!cpy_r_r317) goto CPyL205;
    cpy_r_r318 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 765, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r318);
CPyL197: ;
    cpy_r_r319 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r319 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r319);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 765, CPyStatic_expression___globals);
        goto CPyL309;
    }
CPyL198: ;
    cpy_r_r320 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r319)->_operands;
    cpy_r_r321 = CPyList_GetItemShort(cpy_r_r320, 0);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 765, CPyStatic_expression___globals);
        goto CPyL310;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r321, CPyType_nodes___Expression)))
        cpy_r_r322 = cpy_r_r321;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 765, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r321);
        goto CPyL310;
    }
    CPy_DECREF(cpy_r_r319);
    cpy_r_r323 = CPyStatics[861]; /* 'is' */
    cpy_r_r324 = PyUnicode_Compare(cpy_r_first_op, cpy_r_r323);
    CPy_DECREF(cpy_r_first_op);
    cpy_r_r325 = cpy_r_r324 == -1;
    if (!cpy_r_r325) goto CPyL203;
    cpy_r_r326 = PyErr_Occurred();
    cpy_r_r327 = cpy_r_r326 != NULL;
    if (!cpy_r_r327) goto CPyL203;
    cpy_r_r328 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 765, CPyStatic_expression___globals);
        goto CPyL311;
    }
CPyL203: ;
    cpy_r_r329 = cpy_r_r324 != 0;
    cpy_r_r330 = CPyDef_expression___translate_is_none(cpy_r_r318, cpy_r_r322, cpy_r_r329);
    CPy_DECREF(cpy_r_r318);
    CPy_DECREF(cpy_r_r322);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 765, CPyStatic_expression___globals);
        goto CPyL253;
    }
    return cpy_r_r330;
CPyL205: ;
    cpy_r_r331 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 766, CPyStatic_expression___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r331);
CPyL206: ;
    cpy_r_r332 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r331)->_operands;
    cpy_r_r333 = CPyList_GetItemShort(cpy_r_r332, 0);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 766, CPyStatic_expression___globals);
        goto CPyL312;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r333, CPyType_nodes___Expression)))
        cpy_r_r334 = cpy_r_r333;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 766, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r333);
        goto CPyL312;
    }
    CPy_DECREF(cpy_r_r331);
    cpy_r_left_expr = cpy_r_r334;
    cpy_r_r335 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 767, CPyStatic_expression___globals);
        goto CPyL313;
    }
    CPy_INCREF(cpy_r_r335);
CPyL209: ;
    cpy_r_r336 = CPyDef_builder___IRBuilder___node_type(cpy_r_r335, cpy_r_left_expr);
    CPy_DECREF(cpy_r_r335);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 767, CPyStatic_expression___globals);
        goto CPyL313;
    }
    cpy_r_r337 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r336);
    CPy_DECREF(cpy_r_r336);
    if (unlikely(cpy_r_r337 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 767, CPyStatic_expression___globals);
        goto CPyL313;
    }
    if (!cpy_r_r337) goto CPyL314;
    cpy_r_r338 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 768, CPyStatic_expression___globals);
        goto CPyL313;
    }
    CPy_INCREF(cpy_r_r338);
CPyL213: ;
    cpy_r_r339 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r338)->_operands;
    cpy_r_r340 = CPyList_GetItemShort(cpy_r_r339, 2);
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 768, CPyStatic_expression___globals);
        goto CPyL315;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r340, CPyType_nodes___Expression)))
        cpy_r_r341 = cpy_r_r340;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 768, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r340);
        goto CPyL315;
    }
    CPy_DECREF(cpy_r_r338);
    cpy_r_right_expr = cpy_r_r341;
    cpy_r_r342 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 769, CPyStatic_expression___globals);
        goto CPyL316;
    }
    CPy_INCREF(cpy_r_r342);
CPyL216: ;
    cpy_r_r343 = CPyDef_builder___IRBuilder___node_type(cpy_r_r342, cpy_r_right_expr);
    CPy_DECREF(cpy_r_r342);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 769, CPyStatic_expression___globals);
        goto CPyL316;
    }
    cpy_r_r344 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r343);
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r344 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 769, CPyStatic_expression___globals);
        goto CPyL316;
    }
    if (!cpy_r_r344) goto CPyL317;
    cpy_r_r345 = CPyStatic_builder___int_borrow_friendly_op;
    if (unlikely(cpy_r_r345 == NULL)) {
        goto CPyL318;
    } else
        goto CPyL222;
CPyL220: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_borrow_friendly_op\" was not set");
    cpy_r_r346 = 0;
    if (unlikely(!cpy_r_r346)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 770, CPyStatic_expression___globals);
        goto CPyL253;
    }
    CPy_Unreachable();
CPyL222: ;
    cpy_r_r347 = PySet_Contains(cpy_r_r345, cpy_r_first_op);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 770, CPyStatic_expression___globals);
        goto CPyL316;
    }
    cpy_r_r349 = cpy_r_r347;
    if (!cpy_r_r349) goto CPyL317;
    cpy_r_r350 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 771, CPyStatic_expression___globals);
        goto CPyL316;
    }
    CPy_INCREF(cpy_r_r350);
CPyL225: ;
    cpy_r_r351 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_r350, cpy_r_right_expr);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r351 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 771, CPyStatic_expression___globals);
        goto CPyL316;
    }
    cpy_r_borrow_left = cpy_r_r351;
    cpy_r_r352 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r352 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 772, CPyStatic_expression___globals);
        goto CPyL316;
    }
    CPy_INCREF(cpy_r_r352);
CPyL227: ;
    cpy_r_r353 = CPyDef_builder___IRBuilder___accept(cpy_r_r352, cpy_r_left_expr, cpy_r_borrow_left);
    CPy_DECREF(cpy_r_left_expr);
    CPy_DECREF(cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 772, CPyStatic_expression___globals);
        goto CPyL319;
    }
    if (likely(cpy_r_r353 != Py_None))
        cpy_r_r354 = cpy_r_r353;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 772, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r353);
        goto CPyL319;
    }
    cpy_r_left = cpy_r_r354;
    cpy_r_r355 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 773, CPyStatic_expression___globals);
        goto CPyL320;
    }
    CPy_INCREF(cpy_r_r355);
CPyL230: ;
    cpy_r_r356 = CPyDef_builder___IRBuilder___accept(cpy_r_r355, cpy_r_right_expr, 1);
    CPy_DECREF(cpy_r_right_expr);
    CPy_DECREF(cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 773, CPyStatic_expression___globals);
        goto CPyL321;
    }
    if (likely(cpy_r_r356 != Py_None))
        cpy_r_r357 = cpy_r_r356;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 773, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r356);
        goto CPyL321;
    }
    cpy_r_right = cpy_r_r357;
    cpy_r_r358 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 774, CPyStatic_expression___globals);
        goto CPyL322;
    }
    CPy_INCREF(cpy_r_r358);
CPyL233: ;
    cpy_r_r359 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r359 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'e' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r359);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 774, CPyStatic_expression___globals);
        goto CPyL323;
    }
CPyL234: ;
    cpy_r_r360 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r359)->_line;
    CPyTagged_INCREF(cpy_r_r360);
    CPy_DECREF(cpy_r_r359);
    cpy_r_r361 = CPyDef_builder___IRBuilder___compare_tagged(cpy_r_r358, cpy_r_left, cpy_r_right, cpy_r_first_op, cpy_r_r360);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_first_op);
    CPyTagged_DECREF(cpy_r_r360);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 774, CPyStatic_expression___globals);
        goto CPyL253;
    }
    return cpy_r_r361;
CPyL236: ;
    cpy_r_r362 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 780, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r362);
CPyL237: ;
    cpy_r_r363 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 780, CPyStatic_expression___globals);
        goto CPyL324;
    }
    CPy_INCREF(cpy_r_r363);
CPyL238: ;
    cpy_r_r364 = CPyDef_builder___IRBuilder___node_type(cpy_r_r362, cpy_r_r363);
    CPy_DECREF(cpy_r_r363);
    CPy_DECREF(cpy_r_r362);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 780, CPyStatic_expression___globals);
        goto CPyL254;
    }
    if (((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_expr_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_expr_type);
    }
    ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_expr_type = cpy_r_r364;
    cpy_r_r365 = 1;
    if (unlikely(!cpy_r_r365)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 780, CPyStatic_expression___globals);
        goto CPyL254;
    }
    cpy_r_r366 = CPyDef_expression___go_transform_comparison_expr_obj();
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 784, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___expression___go_transform_comparison_expr_objObject *)cpy_r_r366)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___go_transform_comparison_expr_objObject *)cpy_r_r366)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression___go_transform_comparison_expr_objObject *)cpy_r_r366)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r367 = 1;
    if (unlikely(!cpy_r_r367)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 784, CPyStatic_expression___globals);
        goto CPyL325;
    }
    if (((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_go != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_go);
    }
    ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_go = cpy_r_r366;
    cpy_r_r368 = 1;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 784, CPyStatic_expression___globals);
        goto CPyL254;
    }
    cpy_r_r369 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "builder", 799, CPyStatic_expression___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r369);
CPyL244: ;
    cpy_r_r370 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_comparison_expr", "transform_comparison_expr_env", "e", 799, CPyStatic_expression___globals);
        goto CPyL326;
    }
    CPy_INCREF(cpy_r_r370);
CPyL245: ;
    cpy_r_r371 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r370)->_operands;
    cpy_r_r372 = CPyList_GetItemShort(cpy_r_r371, 0);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals);
        goto CPyL327;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r372, CPyType_nodes___Expression)))
        cpy_r_r373 = cpy_r_r372;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r372);
        goto CPyL327;
    }
    CPy_DECREF(cpy_r_r370);
    cpy_r_r374 = 2;
    cpy_r_r375 = CPyDef_builder___IRBuilder___accept(cpy_r_r369, cpy_r_r373, cpy_r_r374);
    CPy_DECREF(cpy_r_r373);
    CPy_DECREF(cpy_r_r369);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals);
        goto CPyL254;
    }
    if (likely(cpy_r_r375 != Py_None))
        cpy_r_r376 = cpy_r_r375;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r375);
        goto CPyL254;
    }
    cpy_r_r377 = ((mypyc___irbuild___expression___transform_comparison_expr_envObject *)cpy_r_r0)->_go;
    if (unlikely(cpy_r_r377 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'go' of 'transform_comparison_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r377);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals);
        goto CPyL328;
    }
CPyL250: ;
    cpy_r_r378 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r379[2] = {cpy_r_r378, cpy_r_r376};
    cpy_r_r380 = (PyObject **)&cpy_r_r379;
    cpy_r_r381 = _PyObject_Vectorcall(cpy_r_r377, cpy_r_r380, 2, 0);
    CPy_DECREF(cpy_r_r377);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals);
        goto CPyL328;
    }
    CPy_DECREF(cpy_r_r376);
    if (likely(PyObject_TypeCheck(cpy_r_r381, CPyType_ops___Value)))
        cpy_r_r382 = cpy_r_r381;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 799, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r381);
        goto CPyL253;
    }
    return cpy_r_r382;
CPyL253: ;
    cpy_r_r383 = NULL;
    return cpy_r_r383;
CPyL254: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL253;
CPyL255: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL253;
CPyL256: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    goto CPyL253;
CPyL257: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r28);
    goto CPyL253;
CPyL258: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r40);
    goto CPyL253;
CPyL259: ;
    CPy_DECREF(cpy_r_first_op);
    CPyTagged_DECREF(cpy_r_n_items);
    goto CPyL42;
CPyL260: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    goto CPyL253;
CPyL261: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r73);
    goto CPyL253;
CPyL262: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    goto CPyL253;
CPyL263: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_r88);
    goto CPyL253;
CPyL264: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL253;
CPyL265: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_bin_op);
    CPy_DECREF(cpy_r_cmp_op);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_mypy_file);
    goto CPyL58;
CPyL266: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_mypy_file);
    goto CPyL253;
CPyL267: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_bin_op);
    CPy_DECREF(cpy_r_cmp_op);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_info);
    goto CPyL68;
CPyL268: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_r117);
    goto CPyL253;
CPyL269: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_bool_type);
    goto CPyL253;
CPyL270: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_cmp_op);
    CPy_DECREF(cpy_r_lhs);
    goto CPyL84;
CPyL271: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    goto CPyL253;
CPyL272: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_item);
    goto CPyL253;
CPyL273: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r132);
    goto CPyL253;
CPyL274: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_cmp_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_expr);
    goto CPyL253;
CPyL275: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    goto CPyL253;
CPyL276: ;
    CPy_DECREF(cpy_r_bin_op);
    CPy_DECREF(cpy_r_bool_type);
    CPy_DECREF(cpy_r_exprs);
    goto CPyL94;
CPyL277: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_or_expr);
    goto CPyL253;
CPyL278: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_bin_op);
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_exprs);
    CPy_DecRef(cpy_r_or_expr);
    CPy_DecRef(cpy_r_r159);
    goto CPyL253;
CPyL279: ;
    CPy_DecRef(cpy_r_or_expr);
    goto CPyL253;
CPyL280: ;
    CPyTagged_DECREF(cpy_r_n_items);
    goto CPyL99;
CPyL281: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL114;
CPyL282: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_items);
    goto CPyL253;
CPyL283: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r169);
    goto CPyL253;
CPyL284: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_cmp_op);
    goto CPyL253;
CPyL285: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r182);
    goto CPyL253;
CPyL286: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r188);
    goto CPyL253;
CPyL287: ;
    CPy_DECREF(cpy_r_first_op);
    goto CPyL115;
CPyL288: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r193);
    goto CPyL253;
CPyL289: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r229);
    goto CPyL253;
CPyL290: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r236);
    goto CPyL253;
CPyL291: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r236);
    CPy_DecRef(cpy_r_r237);
    goto CPyL253;
CPyL292: ;
    CPy_DECREF(cpy_r_set_literal);
    goto CPyL174;
CPyL293: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_set_literal);
    goto CPyL253;
CPyL294: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_set_literal);
    CPy_DecRef(cpy_r_r244);
    goto CPyL253;
CPyL295: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_set_literal);
    goto CPyL253;
CPyL296: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_set_literal);
    CPy_DecRef(cpy_r_r249);
    goto CPyL253;
CPyL297: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_set_literal);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    goto CPyL253;
CPyL298: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_set_literal);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    goto CPyL253;
CPyL299: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r257);
    goto CPyL253;
CPyL300: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r258);
    goto CPyL253;
CPyL301: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r259);
    goto CPyL253;
CPyL302: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r259);
    CPyTagged_DecRef(cpy_r_r264);
    goto CPyL162;
CPyL303: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    goto CPyL253;
CPyL304: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL173;
CPyL305: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r275);
    goto CPyL253;
CPyL306: ;
    CPy_DECREF(cpy_r_first_op);
    goto CPyL236;
CPyL307: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r301);
    goto CPyL253;
CPyL308: ;
    CPy_DECREF(cpy_r_right_expr);
    goto CPyL205;
CPyL309: ;
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r318);
    goto CPyL253;
CPyL310: ;
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r318);
    CPy_DecRef(cpy_r_r319);
    goto CPyL253;
CPyL311: ;
    CPy_DecRef(cpy_r_r318);
    CPy_DecRef(cpy_r_r322);
    goto CPyL253;
CPyL312: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_r331);
    goto CPyL253;
CPyL313: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_left_expr);
    goto CPyL253;
CPyL314: ;
    CPy_DECREF(cpy_r_first_op);
    CPy_DECREF(cpy_r_left_expr);
    goto CPyL236;
CPyL315: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_left_expr);
    CPy_DecRef(cpy_r_r338);
    goto CPyL253;
CPyL316: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_right_expr);
    CPy_DecRef(cpy_r_left_expr);
    goto CPyL253;
CPyL317: ;
    CPy_DECREF(cpy_r_first_op);
    CPy_DECREF(cpy_r_right_expr);
    CPy_DECREF(cpy_r_left_expr);
    goto CPyL236;
CPyL318: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_right_expr);
    CPy_DecRef(cpy_r_left_expr);
    goto CPyL220;
CPyL319: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_right_expr);
    goto CPyL253;
CPyL320: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_right_expr);
    CPy_DecRef(cpy_r_left);
    goto CPyL253;
CPyL321: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_left);
    goto CPyL253;
CPyL322: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL253;
CPyL323: ;
    CPy_DecRef(cpy_r_first_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r358);
    goto CPyL253;
CPyL324: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r362);
    goto CPyL253;
CPyL325: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r366);
    goto CPyL253;
CPyL326: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r369);
    goto CPyL253;
CPyL327: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r369);
    CPy_DecRef(cpy_r_r370);
    goto CPyL253;
CPyL328: ;
    CPy_DecRef(cpy_r_r376);
    goto CPyL253;
}

PyObject *CPyPy_expression___transform_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "e", 0};
    static CPyArg_Parser parser = {"OO:transform_comparison_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_e)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ComparisonExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_comparison_expr(arg_builder, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_comparison_expr", 687, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_is_none(PyObject *cpy_r_builder, PyObject *cpy_r_expr, char cpy_r_negated) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_expr, 1);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_is_none", 803, CPyStatic_expression___globals);
        goto CPyL9;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_is_none", 803, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_v = cpy_r_r1;
    cpy_r_r2 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_is_none", 804, CPyStatic_expression___globals);
        goto CPyL10;
    }
    if (!cpy_r_negated) goto CPyL5;
    cpy_r_r3 = CPyStatics[862]; /* 'is not' */
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = cpy_r_r3;
    goto CPyL6;
CPyL5: ;
    cpy_r_r5 = CPyStatics[861]; /* 'is' */
    CPy_INCREF(cpy_r_r5);
    cpy_r_r4 = cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_line;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "translate_is_none", "Expression", "line", 804, CPyStatic_expression___globals);
        goto CPyL11;
    }
    CPyTagged_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_v, cpy_r_r2, cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_v);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_is_none", 804, CPyStatic_expression___globals);
        goto CPyL9;
    }
    return cpy_r_r7;
CPyL9: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_v);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_expression___translate_is_none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "negated", 0};
    static CPyArg_Parser parser = {"OOO:translate_is_none", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_negated;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_negated)) {
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
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char arg_negated;
    if (unlikely(!PyBool_Check(obj_negated))) {
        CPy_TypeError("bool", obj_negated); goto fail;
    } else
        arg_negated = obj_negated == Py_True;
    PyObject *retval = CPyDef_expression___translate_is_none(arg_builder, arg_expr, arg_negated);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_is_none", 802, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_basic_comparison(PyObject *cpy_r_builder, PyObject *cpy_r_op, PyObject *cpy_r_left, PyObject *cpy_r_right, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_op_id;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_negate;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 811, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r1) goto CPyL10;
    cpy_r_r2 = ((mypyc___ir___ops___ValueObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 812, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r3) goto CPyL10;
    cpy_r_r4 = CPyStatic_expression___globals;
    cpy_r_r5 = CPyStatics[8224]; /* 'int_comparison_op_mapping' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 813, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyDict_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 813, CPyStatic_expression___globals, "dict", cpy_r_r6);
        goto CPyL100;
    }
    cpy_r_r8 = PyDict_Contains(cpy_r_r7, cpy_r_op);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 813, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = CPyDef_builder___IRBuilder___compare_tagged(cpy_r_builder, cpy_r_left, cpy_r_right, cpy_r_op, cpy_r_line);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 815, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 816, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r13) goto CPyL58;
    cpy_r_r14 = CPyStatic_expression___globals;
    cpy_r_r15 = CPyStatics[8224]; /* 'int_comparison_op_mapping' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 816, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyDict_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 816, CPyStatic_expression___globals, "dict", cpy_r_r16);
        goto CPyL100;
    }
    cpy_r_r18 = PyDict_Contains(cpy_r_r17, cpy_r_op);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 816, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL58;
    cpy_r_r21 = ((mypyc___ir___ops___ValueObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    CPy_INCREF(cpy_r_r22);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_rtypes___RPrimitive))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 817, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r22);
        goto CPyL101;
    }
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r21, cpy_r_r23, 2);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 817, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 817, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r25) goto CPyL37;
    cpy_r_r26 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_rtypes___RPrimitive))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 818, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r26);
        goto CPyL100;
    }
    cpy_r_r28 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r27)->_is_signed;
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_basic_comparison", "RPrimitive", "is_signed", 818, CPyStatic_expression___globals);
        goto CPyL100;
    }
CPyL22: ;
    if (!cpy_r_r28) goto CPyL29;
CPyL23: ;
    cpy_r_r29 = CPyStatic_ops___ComparisonOp___signed_ops;
    if (likely(cpy_r_r29 != NULL)) goto CPyL26;
    PyErr_SetString(PyExc_NameError, "value for final name \"signed_ops\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 819, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_op);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 819, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 819, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r32;
    goto CPyL35;
CPyL29: ;
    cpy_r_r33 = CPyStatic_ops___ComparisonOp___unsigned_ops;
    if (likely(cpy_r_r33 != NULL)) goto CPyL32;
    PyErr_SetString(PyExc_NameError, "value for final name \"unsigned_ops\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 821, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_op);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 821, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r35)))
        cpy_r_r36 = CPyTagged_FromObject(cpy_r_r35);
    else {
        CPy_TypeError("int", cpy_r_r35); cpy_r_r36 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 821, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r36;
CPyL35: ;
    cpy_r_r37 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_ll_builder___LowLevelIRBuilder___comparison_op(cpy_r_r37, cpy_r_left, cpy_r_right, cpy_r_op_id, cpy_r_line);
    CPyTagged_DECREF(cpy_r_op_id);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 822, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r38;
CPyL37: ;
    cpy_r_r39 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL85;
    cpy_r_r43 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_rtypes___RPrimitive))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 824, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r43);
        goto CPyL100;
    }
    cpy_r_r45 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r44)->_is_signed;
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_basic_comparison", "RPrimitive", "is_signed", 824, CPyStatic_expression___globals);
        goto CPyL100;
    }
CPyL40: ;
    if (!cpy_r_r45) goto CPyL47;
CPyL41: ;
    cpy_r_r46 = CPyStatic_ops___ComparisonOp___signed_ops;
    if (likely(cpy_r_r46 != NULL)) goto CPyL44;
    PyErr_SetString(PyExc_NameError, "value for final name \"signed_ops\" was not set");
    cpy_r_r47 = 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 825, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_op);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 825, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r48)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r48);
    else {
        CPy_TypeError("int", cpy_r_r48); cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 825, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r49;
    goto CPyL53;
CPyL47: ;
    cpy_r_r50 = CPyStatic_ops___ComparisonOp___unsigned_ops;
    if (likely(cpy_r_r50 != NULL)) goto CPyL50;
    PyErr_SetString(PyExc_NameError, "value for final name \"unsigned_ops\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 827, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_op);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 827, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r52)))
        cpy_r_r53 = CPyTagged_FromObject(cpy_r_r52);
    else {
        CPy_TypeError("int", cpy_r_r52); cpy_r_r53 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 827, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r53;
CPyL53: ;
    cpy_r_r54 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r54);
    CPy_INCREF(cpy_r_right);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_ops___Integer))
        cpy_r_r55 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 829, CPyStatic_expression___globals, "mypyc.ir.ops.Integer", cpy_r_right);
        goto CPyL102;
    }
    cpy_r_r56 = ((mypyc___ir___ops___ValueObject *)cpy_r_left)->_type;
    CPy_INCREF(cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_rtypes___RPrimitive))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 829, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r56);
        goto CPyL103;
    }
    cpy_r_r58 = 2;
    cpy_r_r59 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r55, cpy_r_r57, cpy_r_line, cpy_r_r58);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 829, CPyStatic_expression___globals);
        goto CPyL102;
    }
    cpy_r_r60 = CPyDef_ll_builder___LowLevelIRBuilder___comparison_op(cpy_r_r54, cpy_r_left, cpy_r_r59, cpy_r_op_id, cpy_r_line);
    CPy_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_op_id);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 828, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r60;
CPyL58: ;
    cpy_r_r61 = ((mypyc___ir___ops___ValueObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 832, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (!cpy_r_r62) goto CPyL85;
    cpy_r_r63 = CPyStatic_expression___globals;
    cpy_r_r64 = CPyStatics[8224]; /* 'int_comparison_op_mapping' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 833, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyDict_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 833, CPyStatic_expression___globals, "dict", cpy_r_r65);
        goto CPyL100;
    }
    cpy_r_r67 = PyDict_Contains(cpy_r_r66, cpy_r_op);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 833, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_r69 = cpy_r_r67;
    if (!cpy_r_r69) goto CPyL85;
    cpy_r_r70 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL85;
    cpy_r_r74 = ((mypyc___ir___ops___ValueObject *)cpy_r_right)->_type;
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_rtypes___RPrimitive))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 836, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r74);
        goto CPyL100;
    }
    cpy_r_r76 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r75)->_is_signed;
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_basic_comparison", "RPrimitive", "is_signed", 836, CPyStatic_expression___globals);
        goto CPyL100;
    }
CPyL67: ;
    if (!cpy_r_r76) goto CPyL74;
CPyL68: ;
    cpy_r_r77 = CPyStatic_ops___ComparisonOp___signed_ops;
    if (likely(cpy_r_r77 != NULL)) goto CPyL71;
    PyErr_SetString(PyExc_NameError, "value for final name \"signed_ops\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 837, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_op);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 837, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r79)))
        cpy_r_r80 = CPyTagged_FromObject(cpy_r_r79);
    else {
        CPy_TypeError("int", cpy_r_r79); cpy_r_r80 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 837, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r80;
    goto CPyL80;
CPyL74: ;
    cpy_r_r81 = CPyStatic_ops___ComparisonOp___unsigned_ops;
    if (likely(cpy_r_r81 != NULL)) goto CPyL77;
    PyErr_SetString(PyExc_NameError, "value for final name \"unsigned_ops\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 839, CPyStatic_expression___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_op);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 839, CPyStatic_expression___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_r83)))
        cpy_r_r84 = CPyTagged_FromObject(cpy_r_r83);
    else {
        CPy_TypeError("int", cpy_r_r83); cpy_r_r84 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 839, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_op_id = cpy_r_r84;
CPyL80: ;
    cpy_r_r85 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r85);
    CPy_INCREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_left) == CPyType_ops___Integer))
        cpy_r_r86 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 841, CPyStatic_expression___globals, "mypyc.ir.ops.Integer", cpy_r_left);
        goto CPyL104;
    }
    cpy_r_r87 = ((mypyc___ir___ops___ValueObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r87);
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_rtypes___RPrimitive))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 841, CPyStatic_expression___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r87);
        goto CPyL105;
    }
    cpy_r_r89 = 2;
    cpy_r_r90 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r86, cpy_r_r88, cpy_r_line, cpy_r_r89);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 841, CPyStatic_expression___globals);
        goto CPyL104;
    }
    cpy_r_r91 = CPyDef_ll_builder___LowLevelIRBuilder___comparison_op(cpy_r_r85, cpy_r_r90, cpy_r_right, cpy_r_op_id, cpy_r_line);
    CPy_DECREF(cpy_r_r90);
    CPyTagged_DECREF(cpy_r_op_id);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 840, CPyStatic_expression___globals);
        goto CPyL100;
    }
    return cpy_r_r91;
CPyL85: ;
    cpy_r_negate = 0;
    cpy_r_r92 = CPyStatics[862]; /* 'is not' */
    cpy_r_r93 = PyUnicode_Compare(cpy_r_op, cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 == -1;
    if (!cpy_r_r94) goto CPyL88;
    cpy_r_r95 = PyErr_Occurred();
    cpy_r_r96 = cpy_r_r95 != NULL;
    if (!cpy_r_r96) goto CPyL88;
    cpy_r_r97 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 845, CPyStatic_expression___globals);
        goto CPyL100;
    }
CPyL88: ;
    cpy_r_r98 = cpy_r_r93 == 0;
    if (!cpy_r_r98) goto CPyL90;
    cpy_r_r99 = CPyStatics[861]; /* 'is' */
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = cpy_r_r99;
    cpy_r_r101 = 1;
    cpy_r_op = cpy_r_r100;
    cpy_r_negate = cpy_r_r101;
    goto CPyL95;
CPyL90: ;
    cpy_r_r102 = CPyStatics[866]; /* 'not in' */
    cpy_r_r103 = PyUnicode_Compare(cpy_r_op, cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 == -1;
    if (!cpy_r_r104) goto CPyL93;
    cpy_r_r105 = PyErr_Occurred();
    cpy_r_r106 = cpy_r_r105 != NULL;
    if (!cpy_r_r106) goto CPyL93;
    cpy_r_r107 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 847, CPyStatic_expression___globals);
        goto CPyL100;
    }
CPyL93: ;
    cpy_r_r108 = cpy_r_r103 == 0;
    if (!cpy_r_r108) goto CPyL106;
    cpy_r_r109 = CPyStatics[867]; /* 'in' */
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = cpy_r_r109;
    cpy_r_r111 = 1;
    cpy_r_op = cpy_r_r110;
    cpy_r_negate = cpy_r_r111;
CPyL95: ;
    cpy_r_r112 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_left, cpy_r_right, cpy_r_op, cpy_r_line);
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 850, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_target = cpy_r_r112;
    if (!cpy_r_negate) goto CPyL99;
    cpy_r_r113 = CPyStatics[869]; /* 'not' */
    cpy_r_r114 = CPyDef_builder___IRBuilder___unary_op(cpy_r_builder, cpy_r_target, cpy_r_r113, cpy_r_line);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 853, CPyStatic_expression___globals);
        goto CPyL100;
    }
    cpy_r_target = cpy_r_r114;
CPyL99: ;
    return cpy_r_target;
CPyL100: ;
    cpy_r_r115 = NULL;
    return cpy_r_r115;
CPyL101: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL100;
CPyL102: ;
    CPyTagged_DecRef(cpy_r_op_id);
    CPy_DecRef(cpy_r_r54);
    goto CPyL100;
CPyL103: ;
    CPyTagged_DecRef(cpy_r_op_id);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL100;
CPyL104: ;
    CPyTagged_DecRef(cpy_r_op_id);
    CPy_DecRef(cpy_r_r85);
    goto CPyL100;
CPyL105: ;
    CPyTagged_DecRef(cpy_r_op_id);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL100;
CPyL106: ;
    CPy_INCREF(cpy_r_op);
    goto CPyL95;
}

PyObject *CPyPy_expression___transform_basic_comparison(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "op", "left", "right", "line", 0};
    static CPyArg_Parser parser = {"OOOOO:transform_basic_comparison", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_op;
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_op, &obj_left, &obj_right, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_ops___Value)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_ops___Value)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_right); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_basic_comparison(arg_builder, arg_op, arg_left, arg_right, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_basic_comparison", 807, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___translate_printf_style_formatting(PyObject *cpy_r_builder, PyObject *cpy_r_format_expr, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_tokens;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_format_ops;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_exprs;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
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
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_format_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    CPy_INCREF(cpy_r_format_expr);
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___StrExpr))
        cpy_r_r4 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 860, CPyStatic_expression___globals, "mypy.nodes.StrExpr", cpy_r_format_expr);
        goto CPyL30;
    }
    cpy_r_r5 = ((mypy___nodes___StrExprObject *)cpy_r_r4)->_value;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL3: ;
    CPy_INCREF(cpy_r_format_expr);
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r7 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 860, CPyStatic_expression___globals, "mypy.nodes.BytesExpr", cpy_r_format_expr);
        goto CPyL30;
    }
    cpy_r_r8 = ((mypy___nodes___BytesExprObject *)cpy_r_r7)->_value;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyDef_format_str_tokenizer___tokenizer_printf_style(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 860, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_tokens = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_tokens != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL31;
    PyObject *__tmp10125;
    if (unlikely(!(PyTuple_Check(cpy_r_tokens) && PyTuple_GET_SIZE(cpy_r_tokens) == 2))) {
        __tmp10125 = NULL;
        goto __LL10126;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_tokens, 0))))
        __tmp10125 = PyTuple_GET_ITEM(cpy_r_tokens, 0);
    else {
        __tmp10125 = NULL;
    }
    if (__tmp10125 == NULL) goto __LL10126;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_tokens, 1))))
        __tmp10125 = PyTuple_GET_ITEM(cpy_r_tokens, 1);
    else {
        __tmp10125 = NULL;
    }
    if (__tmp10125 == NULL) goto __LL10126;
    __tmp10125 = cpy_r_tokens;
__LL10126: ;
    if (unlikely(__tmp10125 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_tokens); cpy_r_r12 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10127 = PyTuple_GET_ITEM(cpy_r_tokens, 0);
        CPy_INCREF(__tmp10127);
        PyObject *__tmp10128;
        if (likely(PyList_Check(__tmp10127)))
            __tmp10128 = __tmp10127;
        else {
            CPy_TypeError("list", __tmp10127); 
            __tmp10128 = NULL;
        }
        cpy_r_r12.f0 = __tmp10128;
        PyObject *__tmp10129 = PyTuple_GET_ITEM(cpy_r_tokens, 1);
        CPy_INCREF(__tmp10129);
        PyObject *__tmp10130;
        if (likely(PyList_Check(__tmp10129)))
            __tmp10130 = __tmp10129;
        else {
            CPy_TypeError("list", __tmp10129); 
            __tmp10130 = NULL;
        }
        cpy_r_r12.f1 = __tmp10130;
    }
    CPy_DECREF(cpy_r_tokens);
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 862, CPyStatic_expression___globals);
        goto CPyL30;
    }
    cpy_r_r13 = cpy_r_r12.f0;
    CPy_INCREF(cpy_r_r13);
    cpy_r_literals = cpy_r_r13;
    cpy_r_r14 = cpy_r_r12.f1;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12.f0);
    CPy_DECREF(cpy_r_r12.f1);
    cpy_r_format_ops = cpy_r_r14;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 864, CPyStatic_expression___globals);
        goto CPyL32;
    }
    cpy_r_exprs = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_rhs)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (cpy_r_r19) {
        goto CPyL33;
    } else
        goto CPyL12;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_rhs) == CPyType_nodes___TupleExpr))
        cpy_r_r20 = cpy_r_rhs;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 866, CPyStatic_expression___globals, "mypy.nodes.TupleExpr", cpy_r_rhs);
        goto CPyL32;
    }
    cpy_r_r21 = ((mypy___nodes___TupleExprObject *)cpy_r_r20)->_items;
    CPy_INCREF(cpy_r_r21);
    cpy_r_exprs = cpy_r_r21;
    goto CPyL14;
CPyL12: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r23 = CPy_TypeCheck(cpy_r_rhs, cpy_r_r22);
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = PyList_Append(cpy_r_exprs, cpy_r_rhs);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 868, CPyStatic_expression___globals);
        goto CPyL34;
    }
CPyL14: ;
    cpy_r_r26 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_format_expr)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r30 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 872, CPyStatic_expression___globals, "mypy.nodes.BytesExpr", cpy_r_format_expr);
        goto CPyL34;
    }
    cpy_r_r31 = ((mypy___nodes___BytesExprObject *)cpy_r_r30)->_line;
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_format_str_tokenizer___convert_format_expr_to_bytes(cpy_r_builder, cpy_r_format_ops, cpy_r_exprs, cpy_r_r31);
    CPy_DECREF(cpy_r_format_ops);
    CPy_DECREF(cpy_r_exprs);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 871, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_substitutions = cpy_r_r32;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_substitutions != cpy_r_r33;
    if (!cpy_r_r34) goto CPyL36;
    if (likely(cpy_r_substitutions != Py_None))
        cpy_r_r35 = cpy_r_substitutions;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 875, CPyStatic_expression___globals, "list", cpy_r_substitutions);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r36 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 875, CPyStatic_expression___globals, "mypy.nodes.BytesExpr", cpy_r_format_expr);
        goto CPyL37;
    }
    cpy_r_r37 = ((mypy___nodes___BytesExprObject *)cpy_r_r36)->_line;
    CPyTagged_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_format_str_tokenizer___join_formatted_bytes(cpy_r_builder, cpy_r_literals, cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 875, CPyStatic_expression___globals);
        goto CPyL30;
    }
    return cpy_r_r38;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___StrExpr))
        cpy_r_r39 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 878, CPyStatic_expression___globals, "mypy.nodes.StrExpr", cpy_r_format_expr);
        goto CPyL34;
    }
    cpy_r_r40 = ((mypy___nodes___StrExprObject *)cpy_r_r39)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_format_str_tokenizer___convert_format_expr_to_str(cpy_r_builder, cpy_r_format_ops, cpy_r_exprs, cpy_r_r40);
    CPy_DECREF(cpy_r_format_ops);
    CPy_DECREF(cpy_r_exprs);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 877, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_substitutions = cpy_r_r41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_substitutions != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL36;
    if (likely(cpy_r_substitutions != Py_None))
        cpy_r_r44 = cpy_r_substitutions;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 881, CPyStatic_expression___globals, "list", cpy_r_substitutions);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_format_expr) == CPyType_nodes___StrExpr))
        cpy_r_r45 = cpy_r_format_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 881, CPyStatic_expression___globals, "mypy.nodes.StrExpr", cpy_r_format_expr);
        goto CPyL38;
    }
    cpy_r_r46 = ((mypy___nodes___StrExprObject *)cpy_r_r45)->_line;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_format_str_tokenizer___join_formatted_strings(cpy_r_builder, cpy_r_literals, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 881, CPyStatic_expression___globals);
        goto CPyL30;
    }
    return cpy_r_r47;
CPyL29: ;
    cpy_r_r48 = Py_None;
    CPy_INCREF(cpy_r_r48);
    return cpy_r_r48;
CPyL30: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL31: ;
    CPy_DECREF(cpy_r_tokens);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_exprs);
    goto CPyL10;
CPyL34: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_exprs);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_substitutions);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r35);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r44);
    goto CPyL30;
}

PyObject *CPyPy_expression___translate_printf_style_formatting(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "format_expr", "rhs", 0};
    static CPyArg_Parser parser = {"OOO:translate_printf_style_formatting", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_format_expr;
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_format_expr, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_format_expr;
    if (Py_TYPE(obj_format_expr) == CPyType_nodes___StrExpr)
        arg_format_expr = obj_format_expr;
    else {
        arg_format_expr = NULL;
    }
    if (arg_format_expr != NULL) goto __LL10131;
    if (Py_TYPE(obj_format_expr) == CPyType_nodes___BytesExpr)
        arg_format_expr = obj_format_expr;
    else {
        arg_format_expr = NULL;
    }
    if (arg_format_expr != NULL) goto __LL10131;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_format_expr); 
    goto fail;
__LL10131: ;
    PyObject *arg_rhs;
    if (likely(PyObject_TypeCheck(obj_rhs, CPyType_nodes___Expression)))
        arg_rhs = obj_rhs;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_rhs); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___translate_printf_style_formatting(arg_builder, arg_format_expr, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "translate_printf_style_formatting", 857, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_int_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___IntExprObject *)cpy_r_expr)->_value;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___load_int(cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_int_expr", 890, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expression___transform_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_int_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___IntExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_int_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_int_expr", 889, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_float_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    double cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___FloatExprObject *)cpy_r_expr)->_value;
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___load_float(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_float_expr", 894, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expression___transform_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_float_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___FloatExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_float_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_float_expr", 893, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_complex_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ComplexExprObject *)cpy_r_expr)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___load_complex(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_complex_expr", 898, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expression___transform_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_complex_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ComplexExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_complex_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_complex_expr", 897, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_str_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___StrExprObject *)cpy_r_expr)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_str_expr", 902, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expression___transform_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_str_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___StrExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_str_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_str_expr", 901, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_bytes_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BytesExprObject *)cpy_r_expr)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_builder___IRBuilder___load_bytes_from_str_literal(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_bytes_expr", 906, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expression___transform_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_bytes_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_bytes_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_bytes_expr", 905, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_ellipsis(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
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
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatic_expression___globals;
    cpy_r_r1 = CPyStatics[8225]; /* 'ellipsis_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL11;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals, "tuple", cpy_r_r2);
        goto CPyL11;
    }
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_rtypes___RType)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals, "mypyc.ir.rtypes.RType", cpy_r_r4);
        goto CPyL11;
    }
    cpy_r_r6 = CPyStatic_expression___globals;
    cpy_r_r7 = CPyStatics[8225]; /* 'ellipsis_op' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL12;
    }
    if (likely(PyTuple_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals, "tuple", cpy_r_r8);
        goto CPyL12;
    }
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_r9, 4);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals, "str", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_r12 = ((mypy___nodes___EllipsisExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_ops___LoadAddress(cpy_r_r5, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL11;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 910, CPyStatic_expression___globals);
        goto CPyL11;
    }
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
}

PyObject *CPyPy_expression___transform_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_ellipsis", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_ellipsis(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_ellipsis", 909, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_list_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___ListExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ListExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_expression____visit_list_display(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_list_expr", 917, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expression___transform_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_list_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ListExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_list_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_list_expr", 916, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression____visit_list_display(PyObject *cpy_r_builder, PyObject *cpy_r_items, CPyTagged cpy_r_line) {
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
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[8226]; /* 'new_list_op' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_builder, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 922, CPyStatic_expression___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyStatic_expression___globals;
    cpy_r_r3 = CPyStatics[8227]; /* 'list_append_op' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 922, CPyStatic_expression___globals);
        goto CPyL8;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 922, CPyStatic_expression___globals, "tuple", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatic_expression___globals;
    cpy_r_r7 = CPyStatics[8228]; /* 'list_extend_op' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 922, CPyStatic_expression___globals);
        goto CPyL9;
    }
    if (likely(PyTuple_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 922, CPyStatic_expression___globals, "tuple", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_r10 = CPyDef_expression____visit_display(cpy_r_builder, cpy_r_items, cpy_r_r1, cpy_r_r5, cpy_r_r9, cpy_r_line, 1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 921, CPyStatic_expression___globals);
        goto CPyL7;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_expression____visit_list_display(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "items", "line", 0};
    static CPyArg_Parser parser = {"OOO:_visit_list_display", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_items;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_items, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_expression____visit_list_display(arg_builder, arg_items, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_list_display", 920, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_tuple_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_tuple_type;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_item_expr;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_item_type;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_reg;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL36;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 927, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL37;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_DECREF(cpy_r_item);
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) {
        goto CPyL38;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r0 = 1;
    goto CPyL6;
CPyL5: ;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL1;
CPyL6: ;
    if (!cpy_r_r0) goto CPyL9;
    cpy_r_r14 = CPyDef_expression____visit_tuple_display(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 929, CPyStatic_expression___globals);
        goto CPyL35;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 932, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_tuple_type = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_tuple_type)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_tuple_type) == CPyType_rtypes___RTuple))
        cpy_r_r20 = cpy_r_tuple_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 936, CPyStatic_expression___globals, "mypyc.ir.rtypes.RTuple", cpy_r_tuple_type);
        goto CPyL40;
    }
    cpy_r_r21 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r20)->_types;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_tuple_type);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL19;
CPyL13: ;
    cpy_r_r23 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r23 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 938, CPyStatic_expression___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 938, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    CPy_INCREF(cpy_r_r23);
    *(PyObject * *)cpy_r_r27 = cpy_r_r23;
    cpy_r_r28 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_items;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = CPySequence_Multiply(cpy_r_r25, cpy_r_r31);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 938, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_r22 = cpy_r_r32;
CPyL19: ;
    cpy_r_types = cpy_r_r22;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 941, CPyStatic_expression___globals);
        goto CPyL41;
    }
    cpy_r_items = cpy_r_r33;
    cpy_r_r34 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = 0;
    cpy_r_r36 = PyObject_GetIter(cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 942, CPyStatic_expression___globals);
        goto CPyL42;
    }
CPyL21: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL43;
    cpy_r_r41 = PyIter_Next(cpy_r_r36);
    if (cpy_r_r41 == NULL) goto CPyL43;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_nodes___Expression)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 942, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r42);
        goto CPyL44;
    }
    cpy_r_item_expr = cpy_r_r43;
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_rtypes___RType)))
        cpy_r_r44 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 942, CPyStatic_expression___globals, "mypyc.ir.rtypes.RType", cpy_r_r41);
        goto CPyL45;
    }
    cpy_r_item_type = cpy_r_r44;
    cpy_r_r45 = 2;
    cpy_r_r46 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_item_expr, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 943, CPyStatic_expression___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r46 != Py_None))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 943, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r46);
        goto CPyL46;
    }
    cpy_r_reg = cpy_r_r47;
    cpy_r_r48 = ((mypy___nodes___ContextObject *)cpy_r_item_expr)->_line;
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Expression' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r48);
    }
    CPy_DECREF(cpy_r_item_expr);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 944, CPyStatic_expression___globals);
        goto CPyL47;
    }
CPyL28: ;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_reg, cpy_r_item_type, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_reg);
    CPy_DECREF(cpy_r_item_type);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 944, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r51 = PyList_Append(cpy_r_items, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 944, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r53 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r53;
    goto CPyL21;
CPyL31: ;
    cpy_r_r54 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 942, CPyStatic_expression___globals);
        goto CPyL49;
    }
    cpy_r_r55 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_ops___TupleSet(cpy_r_items, cpy_r_r55);
    CPy_DECREF(cpy_r_items);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 945, CPyStatic_expression___globals);
        goto CPyL35;
    }
    cpy_r_r57 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 945, CPyStatic_expression___globals);
        goto CPyL35;
    }
    return cpy_r_r57;
CPyL35: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL36: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL37: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL35;
CPyL38: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL4;
CPyL39: ;
    CPy_DECREF(cpy_r_tuple_type);
    goto CPyL13;
CPyL40: ;
    CPy_DecRef(cpy_r_tuple_type);
    goto CPyL35;
CPyL41: ;
    CPy_DecRef(cpy_r_types);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    goto CPyL35;
CPyL43: ;
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r41);
    goto CPyL35;
CPyL45: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_item_expr);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_item_expr);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL35;
CPyL47: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_reg);
    goto CPyL35;
CPyL48: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL35;
CPyL49: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL35;
}

PyObject *CPyPy_expression___transform_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_tuple_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___TupleExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_tuple_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_tuple_expr", 926, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression____visit_tuple_display(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_val_as_list;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_expression____visit_list_display(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 950, CPyStatic_expression___globals);
        goto CPyL6;
    }
    cpy_r_val_as_list = cpy_r_r2;
    cpy_r_r3 = CPyStatic_expression___globals;
    cpy_r_r4 = CPyStatics[8229]; /* 'list_tuple_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 951, CPyStatic_expression___globals);
        goto CPyL7;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 951, CPyStatic_expression___globals, "tuple", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 951, CPyStatic_expression___globals);
        goto CPyL8;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_val_as_list;
    cpy_r_r10 = ((mypy___nodes___TupleExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r6, cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 951, CPyStatic_expression___globals);
        goto CPyL6;
    }
    return cpy_r_r11;
CPyL6: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL7: ;
    CPy_DecRef(cpy_r_val_as_list);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_val_as_list);
    CPy_DecRef(cpy_r_r6);
    goto CPyL6;
}

PyObject *CPyPy_expression____visit_tuple_display(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:_visit_tuple_display", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___TupleExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression____visit_tuple_display(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_tuple_display", 948, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_dict_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key_value_pairs;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_key_expr;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_value_expr;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_key;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_value;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 956, CPyStatic_expression___globals);
        goto CPyL16;
    }
    cpy_r_key_value_pairs = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___DictExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL17;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    PyObject *__tmp10132;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp10132 = NULL;
        goto __LL10133;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r7, 0), CPyType_nodes___Expression))
        __tmp10132 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp10132 = NULL;
    }
    if (__tmp10132 != NULL) goto __LL10134;
    if (PyTuple_GET_ITEM(cpy_r_r7, 0) == Py_None)
        __tmp10132 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp10132 = NULL;
    }
    if (__tmp10132 != NULL) goto __LL10134;
    __tmp10132 = NULL;
__LL10134: ;
    if (__tmp10132 == NULL) goto __LL10133;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r7, 1), CPyType_nodes___Expression)))
        __tmp10132 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp10132 = NULL;
    }
    if (__tmp10132 == NULL) goto __LL10133;
    __tmp10132 = cpy_r_r7;
__LL10133: ;
    if (unlikely(__tmp10132 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10135 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp10135);
        PyObject *__tmp10136;
        if (PyObject_TypeCheck(__tmp10135, CPyType_nodes___Expression))
            __tmp10136 = __tmp10135;
        else {
            __tmp10136 = NULL;
        }
        if (__tmp10136 != NULL) goto __LL10137;
        if (__tmp10135 == Py_None)
            __tmp10136 = __tmp10135;
        else {
            __tmp10136 = NULL;
        }
        if (__tmp10136 != NULL) goto __LL10137;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp10135); 
        __tmp10136 = NULL;
__LL10137: ;
        cpy_r_r8.f0 = __tmp10136;
        PyObject *__tmp10138 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp10138);
        PyObject *__tmp10139;
        if (likely(PyObject_TypeCheck(__tmp10138, CPyType_nodes___Expression)))
            __tmp10139 = __tmp10138;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp10138); 
            __tmp10139 = NULL;
        }
        cpy_r_r8.f1 = __tmp10139;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 957, CPyStatic_expression___globals);
        goto CPyL18;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_key_expr = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_value_expr = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_key_expr != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL19;
    if (likely(cpy_r_key_expr != Py_None))
        cpy_r_r13 = cpy_r_key_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 958, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_key_expr);
        goto CPyL20;
    }
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 958, CPyStatic_expression___globals);
        goto CPyL20;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 958, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r16;
    goto CPyL10;
CPyL9: ;
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r17 = cpy_r_r18;
CPyL10: ;
    cpy_r_key = cpy_r_r17;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_value_expr, cpy_r_r19);
    CPy_DECREF(cpy_r_value_expr);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 959, CPyStatic_expression___globals);
        goto CPyL21;
    }
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 959, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r20);
        goto CPyL21;
    }
    cpy_r_value = cpy_r_r21;
    cpy_r_r22.f0 = cpy_r_key;
    cpy_r_r22.f1 = cpy_r_value;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10140 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp10140);
    PyObject *__tmp10141 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp10141);
    cpy_r_r24 = PyList_Append(cpy_r_key_value_pairs, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 960, CPyStatic_expression___globals);
        goto CPyL18;
    }
    cpy_r_r26 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r26;
    goto CPyL2;
CPyL14: ;
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = ((mypy___nodes___DictExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_ll_builder___LowLevelIRBuilder___make_dict(cpy_r_r27, cpy_r_key_value_pairs, cpy_r_r28);
    CPy_DECREF(cpy_r_key_value_pairs);
    CPyTagged_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 962, CPyStatic_expression___globals);
        goto CPyL16;
    }
    return cpy_r_r29;
CPyL16: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_key_value_pairs);
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_key_expr);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_key_value_pairs);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_value_expr);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_key_value_pairs);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_key);
    goto CPyL16;
}

PyObject *CPyPy_expression___transform_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_dict_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___DictExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_dict_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dict_expr", 954, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_set_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
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
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___SetExprObject *)cpy_r_expr)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[8230]; /* 'new_set_op' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_builder, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 967, CPyStatic_expression___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyStatic_expression___globals;
    cpy_r_r4 = CPyStatics[8231]; /* 'set_add_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 967, CPyStatic_expression___globals);
        goto CPyL9;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 967, CPyStatic_expression___globals, "tuple", cpy_r_r5);
        goto CPyL9;
    }
    cpy_r_r7 = CPyStatic_expression___globals;
    cpy_r_r8 = CPyStatics[8232]; /* 'set_update_op' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 967, CPyStatic_expression___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 967, CPyStatic_expression___globals, "tuple", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_r11 = ((mypy___nodes___SetExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_expression____visit_display(cpy_r_builder, cpy_r_r0, cpy_r_r2, cpy_r_r6, cpy_r_r10, cpy_r_r11, 0);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 966, CPyStatic_expression___globals);
        goto CPyL7;
    }
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
}

PyObject *CPyPy_expression___transform_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_set_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SetExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_set_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_expr", 965, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression____visit_display(PyObject *cpy_r_builder, PyObject *cpy_r_items, PyObject *cpy_r_constructor_op, PyObject *cpy_r_append_op, PyObject *cpy_r_extend_op, CPyTagged cpy_r_line, char cpy_r_is_list) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_accepted_items;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2CO cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2CO cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_initial_items;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T2CO cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_starred;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 980, CPyStatic_expression___globals);
        goto CPyL38;
    }
    cpy_r_accepted_items = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 981, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL39;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___StarExpr))
        cpy_r_r12 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 983, CPyStatic_expression___globals, "mypy.nodes.StarExpr", cpy_r_item);
        goto CPyL40;
    }
    cpy_r_r13 = ((mypy___nodes___StarExprObject *)cpy_r_r12)->_expr;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_item);
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 983, CPyStatic_expression___globals);
        goto CPyL39;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 983, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL39;
    }
    cpy_r_r17.f0 = 1;
    cpy_r_r17.f1 = cpy_r_r16;
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10142 = cpy_r_r17.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp10142);
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp10142);
    PyObject *__tmp10143 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp10143);
    cpy_r_r19 = PyList_Append(cpy_r_accepted_items, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 983, CPyStatic_expression___globals);
        goto CPyL39;
    } else
        goto CPyL12;
CPyL9: ;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_item, cpy_r_r21);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 985, CPyStatic_expression___globals);
        goto CPyL39;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 985, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r22);
        goto CPyL39;
    }
    cpy_r_r24.f0 = 0;
    cpy_r_r24.f1 = cpy_r_r23;
    CPy_INCREF(cpy_r_r24.f1);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10144 = cpy_r_r24.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp10144);
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp10144);
    PyObject *__tmp10145 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp10145);
    cpy_r_r26 = PyList_Append(cpy_r_accepted_items, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 985, CPyStatic_expression___globals);
        goto CPyL39;
    }
CPyL12: ;
    cpy_r_r28 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r28;
    goto CPyL2;
CPyL13: ;
    cpy_r_r29 = Py_None;
    CPy_INCREF(cpy_r_r29);
    cpy_r_result = cpy_r_r29;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 988, CPyStatic_expression___globals);
        goto CPyL41;
    }
    cpy_r_initial_items = cpy_r_r30;
    cpy_r_r31 = 0;
CPyL15: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_accepted_items)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL42;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_accepted_items, cpy_r_r31);
    PyObject *__tmp10146;
    if (unlikely(!(PyTuple_Check(cpy_r_r36) && PyTuple_GET_SIZE(cpy_r_r36) == 2))) {
        __tmp10146 = NULL;
        goto __LL10147;
    }
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r36, 0))))
        __tmp10146 = PyTuple_GET_ITEM(cpy_r_r36, 0);
    else {
        __tmp10146 = NULL;
    }
    if (__tmp10146 == NULL) goto __LL10147;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r36, 1), CPyType_ops___Value)))
        __tmp10146 = PyTuple_GET_ITEM(cpy_r_r36, 1);
    else {
        __tmp10146 = NULL;
    }
    if (__tmp10146 == NULL) goto __LL10147;
    __tmp10146 = cpy_r_r36;
__LL10147: ;
    if (unlikely(__tmp10146 == NULL)) {
        CPy_TypeError("tuple[bool, mypyc.ir.ops.Value]", cpy_r_r36); cpy_r_r37 = (tuple_T2CO) { 2, NULL };
    } else {
        PyObject *__tmp10148 = PyTuple_GET_ITEM(cpy_r_r36, 0);
        char __tmp10149;
        if (unlikely(!PyBool_Check(__tmp10148))) {
            CPy_TypeError("bool", __tmp10148); __tmp10149 = 2;
        } else
            __tmp10149 = __tmp10148 == Py_True;
        cpy_r_r37.f0 = __tmp10149;
        PyObject *__tmp10150 = PyTuple_GET_ITEM(cpy_r_r36, 1);
        CPy_INCREF(__tmp10150);
        PyObject *__tmp10151;
        if (likely(PyObject_TypeCheck(__tmp10150, CPyType_ops___Value)))
            __tmp10151 = __tmp10150;
        else {
            CPy_TypeError("mypyc.ir.ops.Value", __tmp10150); 
            __tmp10151 = NULL;
        }
        cpy_r_r37.f1 = __tmp10151;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37.f0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 989, CPyStatic_expression___globals);
        goto CPyL43;
    }
    cpy_r_r38 = cpy_r_r37.f0;
    cpy_r_starred = cpy_r_r38;
    cpy_r_r39 = cpy_r_r37.f1;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r37.f1);
    cpy_r_value = cpy_r_r39;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_result == cpy_r_r40;
    if (!cpy_r_r41) goto CPyL21;
    if (cpy_r_starred) goto CPyL21;
    if (!cpy_r_is_list) goto CPyL21;
    cpy_r_r42 = PyList_Append(cpy_r_initial_items, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 991, CPyStatic_expression___globals);
        goto CPyL43;
    } else
        goto CPyL31;
CPyL21: ;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_result == cpy_r_r44;
    if (cpy_r_r45) {
        goto CPyL44;
    } else
        goto CPyL25;
CPyL22: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r46 = CPyTagged_StealAsObject(cpy_r_line);
    PyObject *cpy_r_r47[2] = {cpy_r_initial_items, cpy_r_r46};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_constructor_op, cpy_r_r48, 2, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 995, CPyStatic_expression___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r46);
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_ops___Value)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 995, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r49);
        goto CPyL46;
    }
    cpy_r_result = cpy_r_r50;
CPyL25: ;
    if (!cpy_r_starred) goto CPyL27;
    CPy_INCREF(cpy_r_extend_op);
    cpy_r_r51 = cpy_r_extend_op;
    goto CPyL28;
CPyL27: ;
    CPy_INCREF(cpy_r_append_op);
    cpy_r_r51 = cpy_r_append_op;
CPyL28: ;
    CPy_INCREF(cpy_r_result);
    if (likely(cpy_r_result != Py_None))
        cpy_r_r52 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 997, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_result);
        goto CPyL47;
    }
    cpy_r_r53 = PyList_New(2);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 997, CPyStatic_expression___globals);
        goto CPyL48;
    }
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    *(PyObject * *)cpy_r_r55 = cpy_r_r52;
    cpy_r_r56 = cpy_r_r55 + 8;
    *(PyObject * *)cpy_r_r56 = cpy_r_value;
    cpy_r_r57 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r51, cpy_r_r53, cpy_r_line);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 997, CPyStatic_expression___globals);
        goto CPyL43;
    } else
        goto CPyL49;
CPyL31: ;
    cpy_r_r58 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r58;
    goto CPyL15;
CPyL32: ;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_result == cpy_r_r59;
    if (cpy_r_r60) {
        goto CPyL50;
    } else
        goto CPyL51;
CPyL33: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r61 = CPyTagged_StealAsObject(cpy_r_line);
    PyObject *cpy_r_r62[2] = {cpy_r_initial_items, cpy_r_r61};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_constructor_op, cpy_r_r63, 2, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 1000, CPyStatic_expression___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_initial_items);
    CPy_DECREF(cpy_r_r61);
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_ops___Value)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 1000, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r64);
        goto CPyL38;
    }
    cpy_r_result = cpy_r_r65;
CPyL36: ;
    if (likely(cpy_r_result != Py_None))
        cpy_r_r66 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "_visit_display", 1002, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_result);
        goto CPyL38;
    }
    return cpy_r_r66;
CPyL38: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL39: ;
    CPy_DecRef(cpy_r_accepted_items);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_item);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_result);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_accepted_items);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_initial_items);
    goto CPyL38;
CPyL44: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL22;
CPyL45: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_initial_items);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r46);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_initial_items);
    CPy_DecRef(cpy_r_value);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_initial_items);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r51);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_accepted_items);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_initial_items);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL38;
CPyL49: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL31;
CPyL50: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL33;
CPyL51: ;
    CPy_DECREF(cpy_r_initial_items);
    goto CPyL36;
CPyL52: ;
    CPy_DecRef(cpy_r_initial_items);
    CPy_DecRef(cpy_r_r61);
    goto CPyL38;
}

PyObject *CPyPy_expression____visit_display(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "items", "constructor_op", "append_op", "extend_op", "line", "is_list", 0};
    static CPyArg_Parser parser = {"OOOOOOO:_visit_display", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_items;
    PyObject *obj_constructor_op;
    PyObject *obj_append_op;
    PyObject *obj_extend_op;
    PyObject *obj_line;
    PyObject *obj_is_list;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_items, &obj_constructor_op, &obj_append_op, &obj_extend_op, &obj_line, &obj_is_list)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *arg_constructor_op = obj_constructor_op;
    PyObject * arg_append_op;
    if (likely(PyTuple_Check(obj_append_op)))
        arg_append_op = obj_append_op;
    else {
        CPy_TypeError("tuple", obj_append_op); 
        goto fail;
    }
    PyObject * arg_extend_op;
    if (likely(PyTuple_Check(obj_extend_op)))
        arg_extend_op = obj_extend_op;
    else {
        CPy_TypeError("tuple", obj_extend_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_is_list;
    if (unlikely(!PyBool_Check(obj_is_list))) {
        CPy_TypeError("bool", obj_is_list); goto fail;
    } else
        arg_is_list = obj_is_list == Py_True;
    PyObject *retval = CPyDef_expression____visit_display(arg_builder, arg_items, arg_constructor_op, arg_append_op, arg_extend_op, arg_line, arg_is_list);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "_visit_display", 971, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_list_comprehension(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___ListComprehensionObject *)cpy_r_o)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_for_helpers___translate_list_comprehension(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_list_comprehension", 1009, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expression___transform_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_list_comprehension", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_list_comprehension(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_list_comprehension", 1008, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_set_comprehension(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___SetComprehensionObject *)cpy_r_o)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_for_helpers___translate_set_comprehension(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_comprehension", 1013, CPyStatic_expression___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expression___transform_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_set_comprehension", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_set_comprehension(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_set_comprehension", 1012, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "__get__", -1, CPyStatic_expression___globals);
    return NULL;
}

char CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "gen_inner_stmts_transform_dictionary_comprehension_obj", "__mypyc_env__", 1020, CPyStatic_expression___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "gen_inner_stmts", -1, CPyStatic_expression___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "builder", 1021, CPyStatic_expression___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "o", 1021, CPyStatic_expression___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r3)->_key;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1021, CPyStatic_expression___globals);
        goto CPyL21;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1021, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL21;
    }
    cpy_r_k = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "builder", 1022, CPyStatic_expression___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "o", 1022, CPyStatic_expression___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r9)->_value;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___accept(cpy_r_r8, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1022, CPyStatic_expression___globals);
        goto CPyL23;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1022, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r12);
        goto CPyL23;
    }
    cpy_r_v = cpy_r_r13;
    cpy_r_r14 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "builder", 1023, CPyStatic_expression___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = CPyStatic_expression___globals;
    cpy_r_r16 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals);
        goto CPyL26;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals, "tuple", cpy_r_r17);
        goto CPyL26;
    }
    cpy_r_r19 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "builder", 1023, CPyStatic_expression___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r19);
CPyL14: ;
    cpy_r_r20 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_d;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "gen_inner_stmts", "transform_dictionary_comprehension_env", "d", 1023, CPyStatic_expression___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r20);
CPyL15: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___read(cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals);
        goto CPyL27;
    }
    cpy_r_r24 = PyList_New(3);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals);
        goto CPyL29;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = cpy_r_r26 + 8;
    *(PyObject * *)cpy_r_r27 = cpy_r_k;
    cpy_r_r28 = cpy_r_r26 + 16;
    *(PyObject * *)cpy_r_r28 = cpy_r_v;
    cpy_r_r29 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r29 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'o' of 'transform_dictionary_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r29);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals);
        goto CPyL30;
    }
CPyL18: ;
    cpy_r_r30 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r29)->_line;
    CPyTagged_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = CPyDef_builder___IRBuilder___call_c(cpy_r_r14, cpy_r_r18, cpy_r_r24, cpy_r_r30);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1023, CPyStatic_expression___globals);
        goto CPyL20;
    } else
        goto CPyL31;
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_r8);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    goto CPyL20;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL20;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r24);
    goto CPyL20;
CPyL31: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL19;
}

PyObject *CPyPy_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "gen_inner_stmts", 1020, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_dictionary_comprehension(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_loop_params;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = CPyDef_expression___transform_dictionary_comprehension_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1016, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1016, CPyStatic_expression___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o);
    }
    ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1016, CPyStatic_expression___globals);
        goto CPyL31;
    }
    cpy_r_r3 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "builder", 1017, CPyStatic_expression___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "builder", 1017, CPyStatic_expression___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = CPyStatic_expression___globals;
    cpy_r_r6 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals);
        goto CPyL33;
    }
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals, "tuple", cpy_r_r7);
        goto CPyL33;
    }
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals);
        goto CPyL34;
    }
    cpy_r_r10 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1017, CPyStatic_expression___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r10)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = CPyDef_builder___IRBuilder___call_c(cpy_r_r4, cpy_r_r8, cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals);
        goto CPyL32;
    }
    cpy_r_r13 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_r3, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals);
        goto CPyL31;
    }
    if (((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_d != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_d);
    }
    ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_d = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1017, CPyStatic_expression___globals);
        goto CPyL31;
    }
    cpy_r_r15 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1018, CPyStatic_expression___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    cpy_r_r16 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r15)->_indices;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1018, CPyStatic_expression___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r17)->_sequences;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1018, CPyStatic_expression___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r19);
CPyL15: ;
    cpy_r_r20 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r19)->_condlists;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1018, CPyStatic_expression___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r21);
CPyL16: ;
    cpy_r_r22 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r21)->_is_async;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[794]; /* 'zip' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1018, CPyStatic_expression___globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r26[4] = {cpy_r_r16, cpy_r_r18, cpy_r_r20, cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 4, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1018, CPyStatic_expression___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r29 = PySequence_List(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1018, CPyStatic_expression___globals);
        goto CPyL31;
    }
    cpy_r_loop_params = cpy_r_r29;
    cpy_r_r30 = CPyDef_expression___gen_inner_stmts_transform_dictionary_comprehension_obj();
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1020, CPyStatic_expression___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *)cpy_r_r30)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *)cpy_r_r30)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression___gen_inner_stmts_transform_dictionary_comprehension_objObject *)cpy_r_r30)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1020, CPyStatic_expression___globals);
        goto CPyL41;
    }
    if (((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r30;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1020, CPyStatic_expression___globals);
        goto CPyL40;
    }
    cpy_r_r33 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "builder", 1025, CPyStatic_expression___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r33);
CPyL23: ;
    cpy_r_r34 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "gen_inner_stmts", 1025, CPyStatic_expression___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r34);
CPyL24: ;
    cpy_r_r35 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "o", 1025, CPyStatic_expression___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r35);
CPyL25: ;
    cpy_r_r36 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_r35)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = CPyDef_for_helpers___comprehension_helper(cpy_r_r33, cpy_r_loop_params, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1025, CPyStatic_expression___globals);
        goto CPyL31;
    }
    cpy_r_r38 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", "transform_dictionary_comprehension_env", "builder", 1026, CPyStatic_expression___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r38);
CPyL27: ;
    cpy_r_r39 = ((mypyc___irbuild___expression___transform_dictionary_comprehension_envObject *)cpy_r_r0)->_d;
    if (unlikely(cpy_r_r39 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'd' of 'transform_dictionary_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r39);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1026, CPyStatic_expression___globals);
        goto CPyL44;
    }
CPyL28: ;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = 2;
    cpy_r_r42 = CPyDef_builder___IRBuilder___read(cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1026, CPyStatic_expression___globals);
        goto CPyL30;
    }
    return cpy_r_r42;
CPyL30: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL30;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r33);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL30;
CPyL44: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL30;
}

PyObject *CPyPy_expression___transform_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_dictionary_comprehension", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_dictionary_comprehension(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_dictionary_comprehension", 1016, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___get_arg_transform_slice_expr_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_expression___get_arg_transform_slice_expr_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_expression___get_arg_transform_slice_expr_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "__get__", -1, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___get_arg_transform_slice_expr_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_get_arg;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "get_arg", "get_arg_transform_slice_expr_obj", "__mypyc_env__", 1033, CPyStatic_expression___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "get_arg", "transform_slice_expr_env", "get_arg", -1, CPyStatic_expression___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_get_arg = cpy_r_r1;
    CPy_DECREF(cpy_r_get_arg);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_arg == cpy_r_r2;
    if (!cpy_r_r3) goto CPyL6;
    cpy_r_r4 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_slice_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "get_arg", 1035, CPyStatic_expression___globals);
        goto CPyL11;
    }
CPyL4: ;
    cpy_r_r5 = CPyDef_builder___IRBuilder___none_object(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "get_arg", 1035, CPyStatic_expression___globals);
        goto CPyL11;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_slice_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "get_arg", 1037, CPyStatic_expression___globals);
        goto CPyL11;
    }
CPyL7: ;
    CPy_INCREF(cpy_r_arg);
    if (likely(cpy_r_arg != Py_None))
        cpy_r_r7 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "get_arg", 1037, CPyStatic_expression___globals, "mypy.nodes.Expression", cpy_r_arg);
        goto CPyL13;
    }
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___accept(cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "get_arg", 1037, CPyStatic_expression___globals);
        goto CPyL11;
    }
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "get_arg", 1037, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r9);
        goto CPyL11;
    }
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL11;
}

PyObject *CPyPy_expression___get_arg_transform_slice_expr_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_arg;
    if (PyObject_TypeCheck(obj_arg, CPyType_nodes___Expression))
        arg_arg = obj_arg;
    else {
        arg_arg = NULL;
    }
    if (arg_arg != NULL) goto __LL10152;
    if (obj_arg == Py_None)
        arg_arg = obj_arg;
    else {
        arg_arg = NULL;
    }
    if (arg_arg != NULL) goto __LL10152;
    CPy_TypeError("mypy.nodes.Expression or None", obj_arg); 
    goto fail;
__LL10152: ;
    PyObject *retval = CPyDef_expression___get_arg_transform_slice_expr_obj_____call__(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "get_arg", 1033, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_slice_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = CPyDef_expression___transform_slice_expr_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1032, CPyStatic_expression___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1032, CPyStatic_expression___globals);
        goto CPyL21;
    }
    cpy_r_r2 = CPyDef_expression___get_arg_transform_slice_expr_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1033, CPyStatic_expression___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___expression___get_arg_transform_slice_expr_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1033, CPyStatic_expression___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg != NULL) {
        CPy_DECREF(((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg);
    }
    ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg = cpy_r_r2;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1033, CPyStatic_expression___globals);
        goto CPyL21;
    }
    cpy_r_r5 = ((mypy___nodes___SliceExprObject *)cpy_r_expr)->_begin_index;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_slice_expr", "transform_slice_expr_env", "get_arg", 1039, CPyStatic_expression___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_ops___Value)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_r11 = ((mypy___nodes___SliceExprObject *)cpy_r_expr)->_end_index;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_slice_expr", "transform_slice_expr_env", "get_arg", 1039, CPyStatic_expression___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    PyObject *cpy_r_r13[1] = {cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_ops___Value)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL25;
    }
    cpy_r_r17 = ((mypy___nodes___SliceExprObject *)cpy_r_expr)->_stride;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_get_arg;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/expression.py", "transform_slice_expr", "transform_slice_expr_env", "get_arg", 1039, CPyStatic_expression___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r18);
CPyL12: ;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_ops___Value)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r21);
        goto CPyL27;
    }
    cpy_r_r23 = PyList_New(3);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1039, CPyStatic_expression___globals);
        goto CPyL28;
    }
    cpy_r_r24 = (CPyPtr)&((PyListObject *)cpy_r_r23)->ob_item;
    cpy_r_r25 = *(CPyPtr *)cpy_r_r24;
    *(PyObject * *)cpy_r_r25 = cpy_r_r10;
    cpy_r_r26 = cpy_r_r25 + 8;
    *(PyObject * *)cpy_r_r26 = cpy_r_r16;
    cpy_r_r27 = cpy_r_r25 + 16;
    *(PyObject * *)cpy_r_r27 = cpy_r_r22;
    cpy_r_args = cpy_r_r23;
    cpy_r_r28 = ((mypyc___irbuild___expression___transform_slice_expr_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_slice_expr_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1040, CPyStatic_expression___globals);
        goto CPyL29;
    }
CPyL16: ;
    cpy_r_r29 = CPyStatic_expression___globals;
    cpy_r_r30 = CPyStatics[8233]; /* 'new_slice_op' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1040, CPyStatic_expression___globals);
        goto CPyL30;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1040, CPyStatic_expression___globals, "tuple", cpy_r_r31);
        goto CPyL30;
    }
    cpy_r_r33 = ((mypy___nodes___SliceExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_builder___IRBuilder___call_c(cpy_r_r28, cpy_r_r32, cpy_r_args, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1040, CPyStatic_expression___globals);
        goto CPyL20;
    }
    return cpy_r_r34;
CPyL20: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    goto CPyL20;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r22);
    goto CPyL20;
CPyL29: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r28);
    goto CPyL20;
}

PyObject *CPyPy_expression___transform_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_slice_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
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
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SliceExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_slice_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_slice_expr", 1032, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_generator_expr(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[8234]; /* 'Treating generator comprehension as list' */
    cpy_r_r1 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_builder___IRBuilder___warning(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1044, CPyStatic_expression___globals);
        goto CPyL7;
    }
    cpy_r_r3 = CPyStatic_expression___globals;
    cpy_r_r4 = CPyStatics[8072]; /* 'iter_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1045, CPyStatic_expression___globals);
        goto CPyL7;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1045, CPyStatic_expression___globals, "tuple", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_r7 = CPyDef_for_helpers___translate_list_comprehension(cpy_r_builder, cpy_r_o);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1045, CPyStatic_expression___globals);
        goto CPyL8;
    }
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1045, CPyStatic_expression___globals);
        goto CPyL9;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r7;
    cpy_r_r11 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r6, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1045, CPyStatic_expression___globals);
        goto CPyL7;
    }
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_expression___transform_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_generator_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_generator_expr(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_generator_expr", 1043, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_assignment_expr(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_target;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_assignment_expr", 1049, CPyStatic_expression___globals);
        goto CPyL5;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/expression.py", "transform_assignment_expr", 1049, CPyStatic_expression___globals, "mypyc.ir.ops.Value", cpy_r_r2);
        goto CPyL5;
    }
    cpy_r_value = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_target;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_assignment_expr", 1050, CPyStatic_expression___globals);
        goto CPyL6;
    }
    cpy_r_target = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_value, cpy_r_r8);
    CPy_DECREF(cpy_r_target);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_assignment_expr", 1051, CPyStatic_expression___globals);
        goto CPyL6;
    }
    return cpy_r_value;
CPyL5: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL6: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL5;
}

PyObject *CPyPy_expression___transform_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_assignment_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_assignment_expr(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_assignment_expr", 1048, CPyStatic_expression___globals);
    return NULL;
}

PyObject *CPyDef_expression___transform_math_literal(PyObject *cpy_r_builder, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
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
    cpy_r_r0 = CPyStatics[8235]; /* 'math.e' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1056, CPyStatic_expression___globals);
        goto CPyL31;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = CPyDef_builder___IRBuilder___load_float(cpy_r_builder, 2.718281828459045);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1057, CPyStatic_expression___globals);
        goto CPyL31;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = CPyStatics[8236]; /* 'math.pi' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1058, CPyStatic_expression___globals);
        goto CPyL31;
    }
CPyL9: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = CPyDef_builder___IRBuilder___load_float(cpy_r_builder, 3.141592653589793);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1059, CPyStatic_expression___globals);
        goto CPyL31;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = CPyStatics[8237]; /* 'math.inf' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL15;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1060, CPyStatic_expression___globals);
        goto CPyL31;
    }
CPyL15: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = CPyDef_builder___IRBuilder___load_float(cpy_r_builder, INFINITY);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1061, CPyStatic_expression___globals);
        goto CPyL31;
    }
    return cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = CPyStatics[8238]; /* 'math.nan' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL21;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1062, CPyStatic_expression___globals);
        goto CPyL31;
    }
CPyL21: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL24;
    cpy_r_r31 = CPyDef_builder___IRBuilder___load_float(cpy_r_builder, NAN);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1063, CPyStatic_expression___globals);
        goto CPyL31;
    }
    return cpy_r_r31;
CPyL24: ;
    cpy_r_r32 = CPyStatics[8239]; /* 'math.tau' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL27;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL27;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1064, CPyStatic_expression___globals);
        goto CPyL31;
    }
CPyL27: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL30;
    cpy_r_r39 = CPyDef_builder___IRBuilder___load_float(cpy_r_builder, 6.283185307179586);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1065, CPyStatic_expression___globals);
        goto CPyL31;
    }
    return cpy_r_r39;
CPyL30: ;
    cpy_r_r40 = Py_None;
    CPy_INCREF(cpy_r_r40);
    return cpy_r_r40;
CPyL31: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
}

PyObject *CPyPy_expression___transform_math_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fullname", 0};
    static CPyArg_Parser parser = {"OO:transform_math_literal", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_expression___transform_math_literal(arg_builder, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/expression.py", "transform_math_literal", 1055, CPyStatic_expression___globals);
    return NULL;
}

char CPyDef_expression_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
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
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
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
    char cpy_r_r115;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", -1, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_expression___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 7, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_math;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {9};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[10091]; /* (('math', 'math', 'math'),) */
    cpy_r_r15 = CPyStatic_expression___globals;
    cpy_r_r16 = CPyStatics[8241]; /* 'mypyc/irbuild/expression.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL30;
    cpy_r_r19 = CPyStatics[9070]; /* ('Callable', 'Sequence') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_expression___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 10, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[10092]; /* ('ARG_POS', 'LDEF', 'AssertTypeExpr', 'AssignmentExpr',
                                      'BytesExpr', 'CallExpr', 'CastExpr', 'ComparisonExpr',
                                      'ComplexExpr', 'ConditionalExpr', 'DictExpr',
                                      'DictionaryComprehension', 'EllipsisExpr',
                                      'Expression', 'FloatExpr', 'GeneratorExpr',
                                      'IndexExpr', 'IntExpr', 'ListComprehension',
                                      'ListExpr', 'MemberExpr', 'MypyFile', 'NameExpr',
                                      'OpExpr', 'RefExpr', 'SetComprehension', 'SetExpr',
                                      'SliceExpr', 'StarExpr', 'StrExpr', 'SuperExpr',
                                      'TupleExpr', 'TypeApplication', 'TypeInfo',
                                      'UnaryExpr', 'Var') */
    cpy_r_r24 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r25 = CPyStatic_expression___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 12, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypy___nodes = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[10093]; /* ('Instance', 'ProperType', 'TupleType', 'TypeType',
                                      'get_proper_type') */
    cpy_r_r28 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r29 = CPyStatic_expression___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 50, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypy___types = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[10094]; /* ('MAX_SHORT_INT',) */
    cpy_r_r32 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r33 = CPyStatic_expression___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 51, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___common = cpy_r_r34;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r36 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r37 = CPyStatic_expression___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 52, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r38;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[10095]; /* ('FUNC_CLASSMETHOD', 'FUNC_STATICMETHOD') */
    cpy_r_r40 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r41 = CPyStatic_expression___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 53, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r42;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[10096]; /* ('Assign', 'BasicBlock', 'ComparisonOp', 'Integer',
                                      'LoadAddress', 'LoadLiteral', 'RaiseStandardError',
                                      'Register', 'TupleGet', 'TupleSet', 'Value') */
    cpy_r_r44 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r45 = CPyStatic_expression___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 54, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r46;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[10097]; /* ('RTuple', 'bool_rprimitive', 'int_rprimitive',
                                      'is_fixed_width_rtype', 'is_int_rprimitive',
                                      'is_list_rprimitive', 'is_none_rprimitive',
                                      'object_rprimitive', 'set_rprimitive') */
    cpy_r_r48 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r49 = CPyStatic_expression___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 67, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r50;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[10098]; /* ('is_borrow_friendly_expr', 'process_conditional') */
    cpy_r_r52 = CPyStatics[8244]; /* 'mypyc.irbuild.ast_helpers' */
    cpy_r_r53 = CPyStatic_expression___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 78, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___ast_helpers = cpy_r_r54;
    CPy_INCREF(CPyModule_mypyc___irbuild___ast_helpers);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[10099]; /* ('IRBuilder', 'int_borrow_friendly_op') */
    cpy_r_r56 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r57 = CPyStatic_expression___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 79, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r58;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9670]; /* ('constant_fold_expr',) */
    cpy_r_r60 = CPyStatics[8055]; /* 'mypyc.irbuild.constant_fold' */
    cpy_r_r61 = CPyStatic_expression___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 80, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___constant_fold = cpy_r_r62;
    CPy_INCREF(CPyModule_mypyc___irbuild___constant_fold);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[10100]; /* ('comprehension_helper', 'translate_list_comprehension',
                                      'translate_set_comprehension') */
    cpy_r_r64 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r65 = CPyStatic_expression___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 81, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___for_helpers = cpy_r_r66;
    CPy_INCREF(CPyModule_mypyc___irbuild___for_helpers);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[10101]; /* ('convert_format_expr_to_bytes',
                                      'convert_format_expr_to_str', 'join_formatted_bytes',
                                      'join_formatted_strings', 'tokenizer_printf_style') */
    cpy_r_r68 = CPyStatics[8254]; /* 'mypyc.irbuild.format_str_tokenizer' */
    cpy_r_r69 = CPyStatic_expression___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 86, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___format_str_tokenizer = cpy_r_r70;
    CPy_INCREF(CPyModule_mypyc___irbuild___format_str_tokenizer);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[10102]; /* ('apply_function_specialization',
                                      'apply_method_specialization') */
    cpy_r_r72 = CPyStatics[8257]; /* 'mypyc.irbuild.specialize' */
    cpy_r_r73 = CPyStatic_expression___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 93, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___irbuild___specialize = cpy_r_r74;
    CPy_INCREF(CPyModule_mypyc___irbuild___specialize);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatics[10103]; /* ('bytes_slice_op',) */
    cpy_r_r76 = CPyStatics[8258]; /* 'mypyc.primitives.bytes_ops' */
    cpy_r_r77 = CPyStatic_expression___globals;
    cpy_r_r78 = CPyImport_ImportFromMany(cpy_r_r76, cpy_r_r75, cpy_r_r75, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 94, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___bytes_ops = cpy_r_r78;
    CPy_INCREF(CPyModule_mypyc___primitives___bytes_ops);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[10104]; /* ('dict_get_item_op', 'dict_new_op', 'dict_set_item_op') */
    cpy_r_r80 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r81 = CPyStatic_expression___globals;
    cpy_r_r82 = CPyImport_ImportFromMany(cpy_r_r80, cpy_r_r79, cpy_r_r79, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 95, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r82;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[10105]; /* ('iter_op',) */
    cpy_r_r84 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r85 = CPyStatic_expression___globals;
    cpy_r_r86 = CPyImport_ImportFromMany(cpy_r_r84, cpy_r_r83, cpy_r_r83, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 96, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r86;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r87 = CPyStatics[10106]; /* ('int_comparison_op_mapping',) */
    cpy_r_r88 = CPyStatics[8259]; /* 'mypyc.primitives.int_ops' */
    cpy_r_r89 = CPyStatic_expression___globals;
    cpy_r_r90 = CPyImport_ImportFromMany(cpy_r_r88, cpy_r_r87, cpy_r_r87, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 97, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___int_ops = cpy_r_r90;
    CPy_INCREF(CPyModule_mypyc___primitives___int_ops);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r91 = CPyStatics[10107]; /* ('list_append_op', 'list_extend_op', 'list_slice_op') */
    cpy_r_r92 = CPyStatics[8104]; /* 'mypyc.primitives.list_ops' */
    cpy_r_r93 = CPyStatic_expression___globals;
    cpy_r_r94 = CPyImport_ImportFromMany(cpy_r_r92, cpy_r_r91, cpy_r_r91, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 98, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___list_ops = cpy_r_r94;
    CPy_INCREF(CPyModule_mypyc___primitives___list_ops);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r95 = CPyStatics[10108]; /* ('ellipsis_op', 'get_module_dict_op', 'new_slice_op',
                                      'type_op') */
    cpy_r_r96 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r97 = CPyStatic_expression___globals;
    cpy_r_r98 = CPyImport_ImportFromMany(cpy_r_r96, cpy_r_r95, cpy_r_r95, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 99, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r98;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r99 = CPyStatics[10109]; /* ('CFunctionDescription', 'builtin_names') */
    cpy_r_r100 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r101 = CPyStatic_expression___globals;
    cpy_r_r102 = CPyImport_ImportFromMany(cpy_r_r100, cpy_r_r99, cpy_r_r99, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 100, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r102;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r103 = CPyStatics[10110]; /* ('set_add_op', 'set_in_op', 'set_update_op') */
    cpy_r_r104 = CPyStatics[8260]; /* 'mypyc.primitives.set_ops' */
    cpy_r_r105 = CPyStatic_expression___globals;
    cpy_r_r106 = CPyImport_ImportFromMany(cpy_r_r104, cpy_r_r103, cpy_r_r103, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 101, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___set_ops = cpy_r_r106;
    CPy_INCREF(CPyModule_mypyc___primitives___set_ops);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r107 = CPyStatics[10111]; /* ('str_slice_op',) */
    cpy_r_r108 = CPyStatics[8261]; /* 'mypyc.primitives.str_ops' */
    cpy_r_r109 = CPyStatic_expression___globals;
    cpy_r_r110 = CPyImport_ImportFromMany(cpy_r_r108, cpy_r_r107, cpy_r_r107, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 102, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___str_ops = cpy_r_r110;
    CPy_INCREF(CPyModule_mypyc___primitives___str_ops);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r111 = CPyStatics[10112]; /* ('list_tuple_op', 'tuple_slice_op') */
    cpy_r_r112 = CPyStatics[8262]; /* 'mypyc.primitives.tuple_ops' */
    cpy_r_r113 = CPyStatic_expression___globals;
    cpy_r_r114 = CPyImport_ImportFromMany(cpy_r_r112, cpy_r_r111, cpy_r_r111, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/expression.py", "<module>", 103, CPyStatic_expression___globals);
        goto CPyL30;
    }
    CPyModule_mypyc___primitives___tuple_ops = cpy_r_r114;
    CPy_INCREF(CPyModule_mypyc___primitives___tuple_ops);
    CPy_DECREF(cpy_r_r114);
    return 1;
CPyL30: ;
    cpy_r_r115 = 2;
    return cpy_r_r115;
}
